#include <Camera.h>
#include <GameObject.h>

int main() {

	GameObject* Camera = new GameObject("Camera");
	Camera->AddComponent<Camera>();


	// Dummy loop.
	while (true)
	{

	}


	return 0;
}