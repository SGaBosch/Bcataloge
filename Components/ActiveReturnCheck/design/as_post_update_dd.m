%% ------------------------------------------------------------------------
% Change Typedef-Path to use autosar types
%--------------------------------------------------------------------------
function as_post_update_dd()

    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/UInt8','/Pool/Typedefs/PlatformTypes/uint8');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/UInt16','/Pool/Typedefs/PlatformTypes/uint16');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/UInt32','/Pool/Typedefs/PlatformTypes/uint32');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Bool','/Pool/Typedefs/PlatformTypes/boolean');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Int8','/Pool/Typedefs/PlatformTypes/sint8');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Int16','/Pool/Typedefs/PlatformTypes/sint16');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Int32','/Pool/Typedefs/PlatformTypes/sint32');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Float32','/Pool/Typedefs/PlatformTypes/float32');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Float64','/Pool/Typedefs/PlatformTypes/float64');
    errorCode = dsdd('SetBaseTypeRename','/Pool/Typedefs/Void','/Pool/Typedefs/PlatformTypes/void');
end
