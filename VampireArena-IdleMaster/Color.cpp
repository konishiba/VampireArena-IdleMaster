#include "Color.h"

// === Gradient === 
string Gradient::GradientString(const string _text, const bool _textOnly) const
{
    const int _size = static_cast<int>(_text.size());
    string _newWord = "";

    for (int _index = 0; _index < _size; _index++)
    {
        const ColorData& _color = ClampGradient(_index, _size);
        _newWord += _color.ToString(_textOnly) + _text[_index];
    }
    return _newWord + RESET;
}

ColorData Gradient::ClampGradient(const int _index, const int _maxDisplayChar) const
{
    float _normalizer;
    float _valueRed = 0;
    float _valueGreen = 0;
    float _valueBlue = 0;

    float _rangeRed = static_cast<float>(gradB.r - gradA.r);
    _normalizer = _index * (_rangeRed / _maxDisplayChar);
    _valueRed += (gradA.r + _normalizer);

    float _rangeGreen = static_cast<float>(gradB.g - gradA.g);
    _normalizer = _index * (_rangeGreen / _maxDisplayChar);
    _valueGreen += (gradA.g + _normalizer);

    float _rangeBlue = static_cast<float>(gradB.b - gradA.b);
    _normalizer = _index * (_rangeBlue / _maxDisplayChar);
    _valueBlue += (gradA.b + _normalizer);

    return { (int)_valueRed, (int)_valueGreen, (int)_valueBlue };
}