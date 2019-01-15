set(
	CONCH_SOURCES
	main.cpp
)

add_executable(conch ${CONCH_SOURCES})

target_link_libraries(conch fmt)
