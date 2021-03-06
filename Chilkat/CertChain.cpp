// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "CertChain.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCertChainW.h"
		
#include "include/CkCertW.h"
#include "include/CkTrustedRootsW.h"
#include "include/CkJsonObjectW.h"
#include "Cert.h"
#include "TrustedRoots.h"
#include "JsonObject.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::CertChain::~CertChain(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::CertChain::CertChain(void) 
{
    m_impl = new CkCertChainW();
}

//Chilkat::CertChain::CertChain(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCertChainW *)x;
//    if (!m_impl) m_impl = new CkCertChainW();
//    }
//    
//Platform::IntPtr Chilkat::CertChain::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::CertChain::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::CertChain::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::CertChain::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::CertChain::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::CertChain::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::CertChain::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::CertChain::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::CertChain::NumCerts::get()
    {
    return m_impl ? m_impl->get_NumCerts() : 0;
    }
int Chilkat::CertChain::NumExpiredCerts::get()
    {
    return m_impl ? m_impl->get_NumExpiredCerts() : 0;
    }
Boolean Chilkat::CertChain::ReachesRoot::get()
    {
    return m_impl ? m_impl->get_ReachesRoot() : false;
    }
Boolean Chilkat::CertChain::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::CertChain::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::CertChain::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Cert ^CertChain::GetCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkCertW *pRetObj = m_impl->GetCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Boolean CertChain::IsRootTrusted(Chilkat::TrustedRoots ^trustedRoots)
    {
	if (m_impl == nullptr) { return false; }
	if (trustedRoots == nullptr) { return false; }
	CkTrustedRootsW* pObj0 = trustedRoots->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->IsRootTrusted(*pObj0);
    }
Boolean CertChain::LoadX5C(Chilkat::JsonObject ^jwk)
    {
	if (m_impl == nullptr) { return false; }
	if (jwk == nullptr) { return false; }
	CkJsonObjectW* pObj0 = jwk->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadX5C(*pObj0);
    }
Boolean CertChain::VerifyCertSignatures(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->VerifyCertSignatures();
    }




