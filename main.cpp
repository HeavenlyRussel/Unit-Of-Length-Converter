// Unit converter console application

#include <iostream>

int chosenUnitOfLength;
double lengthAmount;

int main() {
	std::cout << "UNITS OF LENGTH CONVERTER APP" << std::endl << std::endl;

	std::cout << "1. Meter" << std::endl;
	std::cout << "2. Inch" << std::endl;
	std::cout << "3. Foot" << std::endl;
	std::cout << "4. Yard" << std::endl;
	std::cout << "5. Mile" << std::endl;
	std::cout << "6. Nautical Mile" << std::endl << std::endl;

	std::cout << "Select a unit of length to convert: ";
	std::cin >> chosenUnitOfLength;
	std::cout << "Enter the amount of length: ";
	std::cin >> lengthAmount;
	std::cout << std::endl;

	switch (chosenUnitOfLength) {
	case 1: { // Meter
		double toInch = lengthAmount * 39.3701;
		double toFoot = lengthAmount * 3.28084;
		double toYard = lengthAmount * 1.09361;
		double toMile = lengthAmount * 0.000621371;
		double toNauticalMile = lengthAmount * 0.000539957;

		std::cout << lengthAmount << " meters is equal to: " << toInch << " inches" << std::endl;
		std::cout << lengthAmount << " meters is equal to: " << toFoot << " feet" << std::endl;
		std::cout << lengthAmount << " meters is equal to: " << toYard << " yards" << std::endl;
		std::cout << lengthAmount << " meters is equal to: " << toMile << " miles" << std::endl;
		std::cout << lengthAmount << " meters is equal to: " << toNauticalMile << " nautical miles" << std::endl;

		break;
	}

	case 2: { // Inch
		double toMeter = lengthAmount * 0.0254;
		double toFoot = lengthAmount * 0.0833333;
		double toYard = lengthAmount * 0.0277778;
		double toMile = lengthAmount * 1.57828e-5;
		double toNauticalMile = lengthAmount * 1.37174e-5;

		std::cout << lengthAmount << " inches is equal to: " << toMeter << " meters" << std::endl;
		std::cout << lengthAmount << " inches is equal to: " << toFoot << " feet" << std::endl;
		std::cout << lengthAmount << " inches is equal to: " << toYard << " yards" << std::endl;
		std::cout << lengthAmount << " inches is equal to: " << toMile << " miles" << std::endl;
		std::cout << lengthAmount << " inches is equal to: " << toNauticalMile << " nautical miles" << std::endl;

		break;
	}

	case 3: { // Foot
		double toMeter = lengthAmount * 0.3048;
		double toInch = lengthAmount * 12;
		double toYard = lengthAmount * 0.333333;
		double toMile = lengthAmount * 0.000189394;
		double toNauticalMile = lengthAmount * 0.000164579;

		std::cout << lengthAmount << " feet is equal to: " << toMeter << " meters" << std::endl;
		std::cout << lengthAmount << " feet is equal to: " << toInch << " inches" << std::endl;
		std::cout << lengthAmount << " feet is equal to: " << toYard << " yards" << std::endl;
		std::cout << lengthAmount << " feet is equal to: " << toMile << " miles" << std::endl;
		std::cout << lengthAmount << " feet is equal to: " << toNauticalMile << " nautical miles" << std::endl;

		break;
	}

	case 4: { // Yard
		double toMeter = lengthAmount * 0.9144;
		double toInch = lengthAmount * 36;
		double toFoot = lengthAmount * 3;
		double toMile = lengthAmount * 0.000568182;
		double toNauticalMile = lengthAmount * 0.000493737;

		std::cout << lengthAmount << " yards is equal to: " << toMeter << " meters" << std::endl;
		std::cout << lengthAmount << " yards is equal to: " << toInch << " inches" << std::endl;
		std::cout << lengthAmount << " yards is equal to: " << toFoot << " feet" << std::endl;
		std::cout << lengthAmount << " yards is equal to: " << toMile << " miles" << std::endl;
		std::cout << lengthAmount << " yards is equal to: " << toNauticalMile << " nautical miles" << std::endl;

		break;
	}

	case 5: { // Mile
		double toMeter = lengthAmount * 1609.34;
		double toInch = lengthAmount * 63360;
		double toFoot = lengthAmount * 5280;
		double toYard = lengthAmount * 1760;
		double toNauticalMile = lengthAmount * 0.868976;
		std::cout << lengthAmount << " miles is equal to: " << toMeter << " meters" << std::endl;
		std::cout << lengthAmount << " miles is equal to: " << toInch << " inches" << std::endl;
		std::cout << lengthAmount << " miles is equal to: " << toFoot << " feet" << std::endl;
		std::cout << lengthAmount << " miles is equal to: " << toYard << " yards" << std::endl;
		std::cout << lengthAmount << " miles is equal to: " << toNauticalMile << " nautical miles" << std::endl;

		break;
	}

	case 6: { // Nautical Mile
		double toMeter = lengthAmount * 1852;
		double toInch = lengthAmount * 72913.4;
		double toFoot = lengthAmount * 6076.12;
		double toYard = lengthAmount * 2025.37;
		double toMile = lengthAmount * 1.15078;

		std::cout << lengthAmount << " nautical miles is equal to: " << toMeter << " meters" << std::endl;
		std::cout << lengthAmount << " nautical miles is equal to: " << toInch << " inches" << std::endl;
		std::cout << lengthAmount << " nautical miles is equal to: " << toFoot << " feet" << std::endl;
		std::cout << lengthAmount << " nautical miles is equal to: " << toYard << " yards" << std::endl;
		std::cout << lengthAmount << " nautical miles is equal to: " << toMile << " miles" << std::endl;

		break;
	}

	}
	return 0;
}