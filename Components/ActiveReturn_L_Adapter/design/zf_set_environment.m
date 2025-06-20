% zf_set_environment sets the TargetLink development environment
%
%
% DESCRIPTION:
%   Function detect all needed include paths for the TargetLink
%   environment, define global variables and create and copy needed files.
%   The variables will be stored in the global variable
%   zf_environment_variables.
%
% SYNTAX:
%   zf_environment_variables = zf_set_environment(mode)
%
%   INPUT ARGUMENTS
%
%   PROPERTY                    TYPE        VALUE                   DESCRIPTION
%   ------------------------------------------------------------------------------------------------------------
%   mode                        string      'Init'                  Create all files and set paths to environment
%                                                                   and return cell array with all variables.
%                                                                   Usually called by user. [default]
%                                           'PathsAndVars'          set all paths and
%                                                                   return cell array with all variables
%                                                                   Usually called by scripts.
%                                           'PreLoad'               Return cell array with all variables.
%                                                                   Usually called by callback function of model.
%                                           'Silent'                Return only paths and variables. Supress
%                                                                   command line messages.
%                                                                   Usually called by callback function of model.
%
%   OUTPUT ARGUMENTS
%
%   PROPERTY                    TYPE        VALUE                   DESCRIPTION
%   ------------------------------------------------------------------------------------------------------------
%   zf_environment_variables    cell array  -                       all needed variables
%
function varargout = zf_set_environment(mode)

global zf_environment_variables

% environment version
zf_environment_variables.verEnvironment = 'R2301';

% relative path to train repo
zf_environment_variables.TrainRepo = getRelPath();

% path to MBSD environment
zf_environment_variables.TlEnvDir   = [zf_environment_variables.TrainRepo '\..\mbsd\DevEnv\Targetlink'];

% path to the SDK configuration
zf_environment_variables.TlSdkConfDir = [zf_environment_variables.TrainRepo '\sgdcc_eps_sdk\EpsDriveSW\EnvironmentSet\MBSD'];

% path to the CPR/variant specific configuration
zf_environment_variables.TlCprConfDir = [zf_environment_variables.TrainRepo '\sgdcc_eps_sdk_dev\EpsDriveSW\EnvironmentSet\MBSD'];

% component path to sources
% usually detected automatically - for new folder structure
%zf_environment_variables.destination = strrep(pwd, 'DesignSet', 'ImplementationSet');

% component path to include header
% usually detected automatically - for new folder structure
%zf_environment_variables.include = [zf_environment_variables.destination '\Include'];

% Set location of functionality repository if differs from Mainpath's
% folder structure
%zf_environment_variables.CompsRepos = {
%   [zf_environment_variables.TrainRepo '\comps_repo']
%   [zf_environment_variables.TrainRepo '\comps_repo\ISW']
%};

% conversion formulas file
zf_environment_variables.conversion_formulas = {[zf_environment_variables.TrainRepo '\sgdcc_eps_sdk_dev\EpsDriveSW\EnvironmentSet\DAMOS\osp\umrechnungsformeln.osp']};

% 'Konserven' to load with update DD
zf_environment_variables.data_files = {};

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%  Only change the bottom part if you know what you are doing  %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% add tlEnv directory to Matlab search path
addpath(zf_environment_variables.TlEnvDir);

% set init mode if no parameter is given; only by user
if (~exist('mode', 'var'))
   mode = 'Init';
end

% execute environment main
if (exist('zf_set_environment_main.m', 'file'))
   zf_environment_variables = zf_set_environment_main(zf_environment_variables, mode);
else
   error('FATAL ERROR: file ''zf_set_environment_main.m'' not found');
end

% return
varargout = {zf_environment_variables};

end

% detect the relative path to the repository root
function pathRel = getRelPath()

% get absolute path to repo's root
[cmdStatus,cmdOut] = system('git rev-parse --show-toplevel');
if (cmdStatus == 0)
   pathAbs = strrep(strtrim(cmdOut), '/', '\');
   pathDelta = strrep(pwd, pathAbs, '');
   pathRel = repmat('..\', 1, count(pathDelta, '\'));
   % We have to cut the ending back slash
   pathRel = pathRel(1:end-1);
else
   pathRel = '..\..\..\..\..';
end

end