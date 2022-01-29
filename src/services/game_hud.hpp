#pragma once

#include <mm/services/service.hpp>

// fwd
struct ImVec2;

namespace mini_td::Services {

class GameHUD : public MM::Services::Service {
	private: // service interface
		const char* name(void) override { return "mini_td::GameHUD"; }

		bool enable(MM::Engine& engine, std::vector<MM::UpdateStrategies::TaskInfo>& task_array) override;
		void disable(MM::Engine& engine) override;

	private: // tasks
		void render(MM::Engine& engine);

		// true = rect
		void drawTower(bool outer, bool inner, const ImVec2& size);

		bool _toolbar {true};
};

} // mini_td::Services

