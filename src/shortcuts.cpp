#include "shortcuts.h"

void Shortcuts::PollEvent(SDL_Event* event)
{
	if (((event->key.keysym.sym == SDLK_INSERT && event->type == SDL_KEYDOWN)) || ((event->key.keysym.mod & KMOD_LALT) && event->key.keysym.sym == SDLK_i && event->type == SDL_KEYDOWN))
		UI::SetVisible(!UI::isVisible);
	if (event->key.keysym.sym == SDLK_LALT && event->type == SDL_KEYDOWN)
		UI::QuickToggle(true);
	else if (event->key.keysym.sym == SDLK_LALT && event->type == SDL_KEYUP)
		UI::QuickToggle(false);
	
}

void Shortcuts::SetKeyCodeState(ButtonCode_t code, bool bPressed)
{
#ifdef EXPERIMENTAL_SETTINGS
	if (inputSystem->IsButtonDown(ButtonCode_t::KEY_LALT) && code == ButtonCode_t::KEY_F && bPressed)
		Settings::ThirdPerson::enabled = !Settings::ThirdPerson::enabled;
#endif
}
