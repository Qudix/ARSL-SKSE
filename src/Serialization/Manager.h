#pragma once

namespace Serialization
{
	enum : uint32_t
	{
		kSerializationVersion = 1,
		kARSL = 'ARSL',
		kArousal = 'ARSL'
	};

	void Save(SKSE::SerializationInterface* a_intfc);
	void Load(SKSE::SerializationInterface* a_intfc);
	void Revert(SKSE::SerializationInterface* a_intfc);
}
