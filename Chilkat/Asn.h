// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkAsnW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class BinData;


public ref class Asn sealed
{
#include "friendDecls.h"
		
	private:
    CkAsnW *m_impl;

	public:
	virtual ~Asn(void);
	Asn(void);
	//Asn(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean BoolValue
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Constructed
	{
		Boolean get();
	}
	property Platform::String ^ContentStr
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 IntValue
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumSubItems
	{
		int32 get();
	}
	property Platform::String ^Tag
	{
		Platform::String ^get();
	}
	property int32 TagValue
	{
		int32 get();
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AppendBigInt(Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean AppendBits(Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean AppendBool(Boolean value);

	Boolean AppendContextConstructed(int tag);

	Boolean AppendContextPrimitive(int tag, Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean AppendInt(int value);

	Boolean AppendNull(void);

	Boolean AppendOctets(Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean AppendOid(Platform::String ^oid);

	Boolean AppendSequence(void);

	Boolean AppendSequence2(void);

	Asn ^AppendSequenceR(void);

	Boolean AppendSet(void);

	Boolean AppendSet2(void);

	Asn ^AppendSetR(void);

	Boolean AppendString(Platform::String ^strType, Platform::String ^value);

	Boolean AppendTime(Platform::String ^timeFormat, Platform::String ^dateTimeStr);

	Platform::String ^AsnToXml(void);

	Boolean DeleteSubItem(int index);

	Windows::Foundation::Collections::IVector<uint8>^GetBinaryDer(void);

	Platform::String ^GetEncodedContent(Platform::String ^encoding);

	Platform::String ^GetEncodedDer(Platform::String ^encoding);

	Asn ^GetLastSubItem(void);

	Asn ^GetSubItem(int index);

	Boolean LoadAsnXml(Platform::String ^xmlStr);

	Boolean LoadBd(Chilkat::BinData ^bd);

	Boolean LoadBinary(Windows::Foundation::Collections::IVector<uint8>^derBytes);

	Boolean LoadBinaryFile(Platform::String ^path);

	Boolean LoadEncoded(Platform::String ^asnContent, Platform::String ^encoding);

	Boolean SetEncodedContent(Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean WriteBd(Chilkat::BinData ^bd);

	Boolean WriteBinaryDer(Platform::String ^path);



};





}


