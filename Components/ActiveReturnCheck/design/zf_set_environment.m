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


% Desired environment version of your component
zf_environment_variables.verEnvironment = 'R2402';

% relative path to productive repository root
zf_environment_variables.relTrainRepoRoot = getRelPath();

%% All the following variables are relative to the productive repository root
% Path to the MBSD repository
zf_environment_variables.TlEnvDir = '\..\mbsd\DevEnv\Targetlink';

% Path to the asFunctionLib
zf_environment_variables.functionLibDir = '\sgdcc_eps_sdk\EpsDriveSW\EnvironmentSet\MBSD';

% List of location of functionality repository
zf_environment_variables.CompsRepos = {
   '\comps_repo'
   '\comps_repo\ISW'
   };
% Path to the variants of target architectures which contains the ARXML's
% (e.g. <variant>\Autosar\AUTOSAR_Platform.arxml)
zf_environment_variables.TargetArchDesignSet = ...
   '\sgdcc_eps_sdk_dev\EpsDriveSW\DesignSet\TargetArchitectures';

% List of the conversion formula files (OSP's)
zf_environment_variables.conversion_formulas = {
   '\sgdcc_eps_sdk_dev\EpsDriveSW\EnvironmentSet\DAMOS\osp\umrechnungsformeln.osp'
   };

%% All variables below are relative to the current working direactory 'pwd'

% Path to the generated source files
zf_environment_variables.srcDir = [pwd '\..\src'];

% Path to the generated include files
zf_environment_variables.incDir = [pwd '\..\include'];

% 'Konserven' to load be loaded while update DD (for legacy DAMOS)
zf_environment_variables.data_files = {};

%%  Do not change the lower part

   % add tlEnv directory to Matlab search path
addpath([zf_environment_variables.relTrainRepoRoot zf_environment_variables.TlEnvDir]);

   % set init mode if no parameter is given; only by user
   if (~exist('mode', 'var'))
      mode = 'Init';
   end

   % execute environment main
if (exist('as_set_environment_main.m', 'file'))
   zf_environment_variables = as_set_environment_main(zf_environment_variables, mode);
   else
   error('FATAL ERROR: file ''as_set_environment_main.m'' not found');
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