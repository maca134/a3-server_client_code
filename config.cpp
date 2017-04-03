class CfgPatches {
	class server_client_code {
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgFunctions {
	class SCC { // This needs to match preInit.sqf line 5
		class Core {
			file = "\server_client_code\bootstrap";
			class preInit {
				preInit = 1;
			};
		};

		// add func to public var below
		class Client {
			file = "\server_client_code\code";
			class someFuncA {}; // SCC_fnc_someFuncA
			class someFuncB {}; // SCC_fnc_someFuncB
		};
	};
};