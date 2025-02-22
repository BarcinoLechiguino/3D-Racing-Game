#pragma once

#include "p2List.h"
#include "Globals.h"
#include "Timer.h"
#include "Module.h"
#include "ModuleWindow.h"
#include "ModuleInput.h"
#include "ModuleAudio.h"
#include "ModuleSceneIntro.h"
#include "ModuleRenderer3D.h"
#include "ModuleCamera3D.h"
#include "ModulePhysics3D.h"
#include "ModulePlayer.h"
#include "ModulePlayer2.h"

#include <vector>
#include <memory>

class Application
{
public:
	ModuleWindow*		window;
	ModuleInput*		input;
	ModuleAudio*		audio;
	ModuleSceneIntro*	scene_intro;
	ModuleRenderer3D*	renderer3D;
	ModuleCamera3D*		camera;
	ModulePhysics3D*	physics;
	ModulePlayer*		player;
	ModulePlayer2*		player2;

	bool				debug;
	bool				renderPrimitives;
private:

	Timer				ms_timer;
	Timer				startup_timer;
	float				dt;
	int					frame_count;
	p2List<Module*>		list_modules;

public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

private:

	void AddModule(Module* mod);
	void PrepareUpdate();
	void FinishUpdate();

	// -----------------------------------------------------
	// -----------------------------------------------------
};