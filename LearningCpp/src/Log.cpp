#include "../header/Log.h"

void InitLog() 
{
	Log("Initialized Log!");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}

enum class Level : unsigned char
{
	LevelError, LevelWarning, LevelInfo
};


class Logger
{
private:
	Level m_Loglevel = Level::LevelInfo;

public:
	void SetLevel(Level level)
	{
		m_Loglevel = level;
	}

	void Error(const char* message) 
	{
		if (m_Loglevel >= Level::LevelError)
			std::cout << "[Error] " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_Loglevel >= Level::LevelWarning)
			std::cout << "[Warning] " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_Loglevel >= Level::LevelInfo)
			std::cout << "[Info] " << message << std::endl;
	}

};

void RunLogExample()
{
	Log("=========================================");
	Logger log;
	log.SetLevel(Level::LevelWarning);
	log.Error("Hello World!!!!");
	log.Warn("Hello World!!!");
	log.Info("Hello World!");
}