#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("hazel engine");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error hazel only supports windows
#endif