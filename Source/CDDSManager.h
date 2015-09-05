#pragma once

// OpenDDS includes

// Define domain default for participation
#define DEFAULT_DDS_DOMIN 0

class CDDSManager
{
public:
	// Methods
	CDDSManager( int domainNumIn );
	virtual ~CDDSManager();

	void Initialize();

	// Attributes

private:
	// Methods
	void CleanUp();
	// Attributes

};
