#pragma once

#include "Crossfire/Events/Event.h"
#include "Crossfire/Core/Base.h"
#include "Crossfire/Core/Timestep.h"

namespace Crossfire 
{

	class Layer
	{
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate(Timestep ts) {}
		virtual void OnRender() {}
		virtual void OnEvent(Event& event) {}

		const std::string& GetName() const { return m_DebugName; }
	protected:
		std::string m_DebugName;
	};

}