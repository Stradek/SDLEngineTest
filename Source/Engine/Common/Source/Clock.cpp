#include <Common/Clock.h>

namespace Engine
{
	namespace Common
	{
		namespace Time
		{
			Clock::Clock()
			{

			}

			Clock::~Clock()
			{

			}

			const nanoseconds Clock::GetDuration()
			{
				if (m_startTime == time_point::min())
				{
					__debugbreak();
					// TODO: assert
					return nanoseconds::min();
				}

				time_point startTimePoint = m_startTime;
				time_point endTimePoint;
				if (m_isRunning)
				{
					endTimePoint = high_res_clock::now();
				}
				else
				{
					endTimePoint = m_endTime;
				}

				auto clockDuration = std::chrono::duration_cast<nanoseconds>(endTimePoint - startTimePoint);

				return clockDuration;
			}

			const double Clock::GetDurationAsDouble()
			{
				nanoseconds duration = GetDuration();
				const double durationAsDouble = std::chrono::duration<double, std::milli>(duration).count();

				return durationAsDouble;
			}

			void Clock::Start()
			{
				// TODO: assert(!m_isRunning);
				m_startTime = high_res_clock::now();

				m_isRunning = true;
			}
			void Clock::Stop()
			{
				m_endTime = high_res_clock::now();

				m_isRunning = false;
			}

			void Clock::Reset()
			{
				// TODO: assert(m_isRunning);
				m_startTime = high_res_clock::now();
			}
		}
	}
}