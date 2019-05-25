find_package(Boost 1.66.0 REQUIRED COMPONENTS asio)

set(
	CONCH_SOURCES
	main.cpp
)

add_executable(conch ${CONCH_SOURCES})

target_link_libraries(conch fmt Boost::asio)
