#include "CoreMinimal.h"

int main()
{
	RenderWindow _window(VideoMode({ 200, 200 }), "SFML");
	CircleShape _shape(100.0f);
	_shape.setFillColor(Color::Green);

	while (_window.isOpen())
	{
		while (const optional _event = _window.pollEvent())
		{
			if (_event->is<Event::Closed>())
			{
				_window.close();
			}
		}

		_window.clear();
		_window.draw(_shape);
		_window.display();
	}

	return EXIT_SUCCESS;
}