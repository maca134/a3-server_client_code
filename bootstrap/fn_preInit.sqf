diag_log 'SCC_CLIENT_INIT';
if (!isNil 'SCC_CLIENT_INIT') exitWith {};
SCC_CLIENT_INIT = compileFinal "true";

private _tag = 'SCC';
private _cfg = configFile >> 'CfgFunctions' >> _tag >> 'Client';

for "_i" from 0 to count _cfg -1 do {
	private _entry = _cfg select _i;
	private _name = configName _entry;
	private _fnc = format['%1_fnc_%2', _tag, _name];
	if (!isNil _fnc) then {
		publicVariable _fnc;
	};
};