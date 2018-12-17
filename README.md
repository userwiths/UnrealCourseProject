A simple overview of this university project written in UE4.

All things that I have made can be found under the Content/Custom file tree.

To note some things before the project:
	On Windows using Git, many of the files were corrupted after download, the solution was to use the command "git lfs clone" instead of "git clone".
	Advisable to right-click the .uproject file and select "Generate Visual Studio files".
	For a reason the C++ file for the blood-lock was not detected from the Editor on the first run, after opening the .sln file and Building the project the problem was resolved.
	

The player character is a generic copy of the default third person project with a few variables and components added.

1. Map, of a relatively reasonable size, lights here and there, stairs, many Hostile NPCs (There are a lot near the back wall, cause I tested them there)
2.1 Blood-lock very little C++, and no event dispatcher here.
2.2 The event dispatcher was used to implement a a function showing progress in clearing the area (of enemies).
3. NPC that chase the player after seeing him and run to a random location after being brought to low HP, behavior-tree was used.
4. The HUD displays the player health, the blood-lock progress (fire progress), and area clearance, its toggled with H. 
5. The spawner can be triggered with J, it is found in the level as an Actor and receives signals from the Level-Blueprint
	the item array is found within the Actor, all spawnable Items are a child class of Item.
6. If you have enabled the VaREST plug-in after pressing K in the top-left corner you will see a value taken from a public JSON-API service.

Other info
*The Torch (Fire Emitter, from spawner) is required in order to damage NPC's.
*In order to open the door you must have taken a given amount of items from those spawned by the spawner
	*The Fuel (Red Barrel) "burns" the door the fastest.
	*The Wood (A Log) is the second in place
	*The Match gives the lowest percentage of them all.
*The player is for now immortal despite showing decreasing health.
*The player has a wider hit box than the NPCs for easier testing.
*The NPC's with Torches (Fire Emitter) inflict double damage on the player than those who don't.
	
Needless references
*Windows Git Error:	https://github.com/git-lfs/git-lfs/issues/2434
*Reason why I could not present the project on the given date:	https://answers.unrealengine.com/questions/799037/unreal-editor-fatal-error-d3d11querycpp-gpu-has-cr.html
*The open JSON Service for testing purposes: https://jsonplaceholder.typicode.com/
*URL From which the game can take information:	https://jsonplaceholder.typicode.com/todos/1
	