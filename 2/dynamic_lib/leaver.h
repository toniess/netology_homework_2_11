#pragma once
#ifdef DYNAMIC_LIB_EXPORTS
#define DYNAMIC_LIB_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_API __declspec(dllimport)
#endif // DYNAMIC_LIB_EXPORTS


namespace friendship {

	class Leaver {
	public:
		DYNAMIC_LIB_API std::string leave(std::string name) const noexcept;
	};

}