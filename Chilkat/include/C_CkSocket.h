// This is a generated source file for Chilkat version 9.5.0.58
#ifndef _C_CkSocket_H
#define _C_CkSocket_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkSocket_setAbortCheck(HCkSocket cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkSocket_setPercentDone(HCkSocket cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkSocket_setProgressInfo(HCkSocket cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_VISIBLE_PUBLIC void CkSocket_setTaskCompleted(HCkSocket cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_VISIBLE_PUBLIC HCkSocket CkSocket_Create(void);
CK_VISIBLE_PUBLIC void CkSocket_Dispose(HCkSocket handle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAbortCurrent(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putAbortCurrent(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocket_getAcceptFailReason(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncAcceptFinished(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncAcceptLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncAcceptLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncAcceptSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncConnectFinished(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncConnectLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncConnectLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncConnectSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncDnsFinished(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncDnsLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncDnsLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncDnsResult(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncDnsResult(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncDnsSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncReceiveFinished(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncReceiveLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncReceiveLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncReceiveSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncReceivedBytes(HCkSocket cHandle, HCkByteData retval);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncReceivedString(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncReceivedString(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncSendFinished(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getAsyncSendLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_asyncSendLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getAsyncSendSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getBandwidthThrottleDown(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putBandwidthThrottleDown(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getBandwidthThrottleUp(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putBandwidthThrottleUp(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getBigEndian(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putBigEndian(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getClientIpAddress(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putClientIpAddress(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_clientIpAddress(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getClientPort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putClientPort(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getConnectFailReason(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getDebugConnectDelayMs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putDebugConnectDelayMs(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getDebugDnsDelayMs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putDebugDnsDelayMs(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getDebugLogFilePath(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putDebugLogFilePath(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_debugLogFilePath(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getElapsedSeconds(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getHeartbeatMs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putHeartbeatMs(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getHttpProxyAuthMethod(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyAuthMethod(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_httpProxyAuthMethod(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getHttpProxyDomain(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyDomain(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_httpProxyDomain(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getHttpProxyHostname(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyHostname(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_httpProxyHostname(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getHttpProxyPassword(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyPassword(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_httpProxyPassword(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getHttpProxyPort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyPort(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getHttpProxyUsername(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putHttpProxyUsername(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_httpProxyUsername(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getIsConnected(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getKeepAlive(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putKeepAlive(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getKeepSessionLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putKeepSessionLog(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getLastErrorHtml(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_lastErrorHtml(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getLastErrorText(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_lastErrorText(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getLastErrorXml(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_lastErrorXml(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getLastMethodFailed(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getLastMethodSuccess(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putLastMethodSuccess(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getListenIpv6(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putListenIpv6(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getLocalIpAddress(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_localIpAddress(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getLocalPort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getMaxReadIdleMs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putMaxReadIdleMs(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getMaxSendIdleMs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putMaxSendIdleMs(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getMyIpAddress(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_myIpAddress(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getNumReceivedClientCerts(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getNumSocketsInSet(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getNumSslAcceptableClientCAs(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getObjectId(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getPercentDoneScale(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putPercentDoneScale(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getPreferIpv6(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putPreferIpv6(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocket_getReceiveFailReason(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getReceivePacketSize(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putReceivePacketSize(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getReceivedCount(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putReceivedCount(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getReceivedInt(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putReceivedInt(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getRemoteIpAddress(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_remoteIpAddress(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getRemotePort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getRequireSslCertVerify(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putRequireSslCertVerify(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocket_getSelectorIndex(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSelectorIndex(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getSelectorReadIndex(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSelectorReadIndex(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getSelectorWriteIndex(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSelectorWriteIndex(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocket_getSendFailReason(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getSendPacketSize(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSendPacketSize(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getSessionLog(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_sessionLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getSessionLogEncoding(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSessionLogEncoding(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_sessionLogEncoding(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getSoRcvBuf(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSoRcvBuf(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getSoReuseAddr(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSoReuseAddr(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocket_getSoSndBuf(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSoSndBuf(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getSocksHostname(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSocksHostname(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_socksHostname(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getSocksPassword(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSocksPassword(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_socksPassword(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getSocksPort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSocksPort(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocket_getSocksUsername(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSocksUsername(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_socksUsername(HCkSocket cHandle);
CK_VISIBLE_PUBLIC int CkSocket_getSocksVersion(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSocksVersion(HCkSocket cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getSsl(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putSsl(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getSslAllowedCiphers(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSslAllowedCiphers(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_sslAllowedCiphers(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getSslProtocol(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putSslProtocol(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_sslProtocol(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getStringCharset(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putStringCharset(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_stringCharset(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getTcpNoDelay(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putTcpNoDelay(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getTlsCipherSuite(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_tlsCipherSuite(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getTlsPinSet(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putTlsPinSet(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_tlsPinSet(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getTlsVersion(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_tlsVersion(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_getUserData(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSocket_putUserData(HCkSocket cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSocket_userData(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_getUtf8(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putUtf8(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSocket_getVerboseLogging(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_putVerboseLogging(HCkSocket cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocket_getVersion(HCkSocket cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSocket_version(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkSocket CkSocket_AcceptNextConnection(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_AcceptNextConnectionAsync(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocket_AddSslAcceptableClientCaDn(HCkSocket cHandle, const char *certAuthDN);
CK_VISIBLE_PUBLIC void CkSocket_AsyncAcceptAbort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkSocket CkSocket_AsyncAcceptSocket(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncAcceptStart(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocket_AsyncConnectAbort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncConnectStart(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocket_AsyncDnsAbort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncDnsStart(HCkSocket cHandle, const char *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocket_AsyncReceiveAbort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncReceiveBytes(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncReceiveBytesN(HCkSocket cHandle, unsigned long numBytes);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncReceiveString(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncReceiveToCRLF(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncReceiveUntilMatch(HCkSocket cHandle, const char *matchStr);
CK_VISIBLE_PUBLIC void CkSocket_AsyncSendAbort(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncSendByteData(HCkSocket cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncSendBytes(HCkSocket cHandle, HCkByteData byteData);
CK_VISIBLE_PUBLIC BOOL CkSocket_AsyncSendString(HCkSocket cHandle, const char *stringToSend);
CK_VISIBLE_PUBLIC BOOL CkSocket_BindAndListen(HCkSocket cHandle, int port, int backLog);
CK_VISIBLE_PUBLIC HCkTask CkSocket_BindAndListenAsync(HCkSocket cHandle, int port, int backLog);
CK_VISIBLE_PUBLIC BOOL CkSocket_BuildHttpGetRequest(HCkSocket cHandle, const char *url, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_buildHttpGetRequest(HCkSocket cHandle, const char *url);
CK_VISIBLE_PUBLIC int CkSocket_CheckWriteable(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_CheckWriteableAsync(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocket_ClearSessionLog(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkSocket CkSocket_CloneSocket(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_Close(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_CloseAsync(HCkSocket cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocket_Connect(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ConnectAsync(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocket_ConvertFromSsl(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ConvertFromSslAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ConvertToSsl(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ConvertToSslAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC void CkSocket_DnsCacheClear(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_DnsLookup(HCkSocket cHandle, const char *hostname, int maxWaitMs, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_dnsLookup(HCkSocket cHandle, const char *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_DnsLookupAsync(HCkSocket cHandle, const char *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkCert CkSocket_GetMyCert(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkCert CkSocket_GetReceivedClientCert(HCkSocket cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkSocket_GetSslAcceptableClientCaDn(HCkSocket cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_getSslAcceptableClientCaDn(HCkSocket cHandle, int index);
CK_VISIBLE_PUBLIC HCkCert CkSocket_GetSslServerCert(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_InitSslServer(HCkSocket cHandle, HCkCert cert);
CK_VISIBLE_PUBLIC BOOL CkSocket_IsUnlocked(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_LoadTaskResult(HCkSocket cHandle, HCkTask task);
CK_VISIBLE_PUBLIC BOOL CkSocket_PollDataAvailable(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveByte(HCkSocket cHandle, BOOL bUnsigned);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveByteAsync(HCkSocket cHandle, BOOL bUnsigned);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveBytes(HCkSocket cHandle, HCkByteData outData);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveBytesAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveBytesENC(HCkSocket cHandle, const char *encodingAlg, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveBytesENC(HCkSocket cHandle, const char *encodingAlg);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveBytesENCAsync(HCkSocket cHandle, const char *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveBytesN(HCkSocket cHandle, unsigned long numBytes, HCkByteData outData);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveBytesNAsync(HCkSocket cHandle, unsigned long numBytes);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveBytesToFile(HCkSocket cHandle, const char *appendFilename);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveBytesToFileAsync(HCkSocket cHandle, const char *appendFilename);
CK_VISIBLE_PUBLIC int CkSocket_ReceiveCount(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveCountAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveInt16(HCkSocket cHandle, BOOL bigEndian, BOOL bUnsigned);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveInt16Async(HCkSocket cHandle, BOOL bigEndian, BOOL bUnsigned);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveInt32(HCkSocket cHandle, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveInt32Async(HCkSocket cHandle, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveNBytesENC(HCkSocket cHandle, unsigned long numBytes, const char *encodingAlg, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveNBytesENC(HCkSocket cHandle, unsigned long numBytes, const char *encodingAlg);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveNBytesENCAsync(HCkSocket cHandle, unsigned long numBytes, const char *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveString(HCkSocket cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveString(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveStringAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveStringMaxN(HCkSocket cHandle, int maxByteCount, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveStringMaxN(HCkSocket cHandle, int maxByteCount);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveStringMaxNAsync(HCkSocket cHandle, int maxByteCount);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveStringUntilByte(HCkSocket cHandle, int lookForByte, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveStringUntilByte(HCkSocket cHandle, int lookForByte);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveStringUntilByteAsync(HCkSocket cHandle, int lookForByte);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveToCRLF(HCkSocket cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveToCRLF(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveToCRLFAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveUntilByte(HCkSocket cHandle, int lookForByte, HCkByteData outBytes);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveUntilByteAsync(HCkSocket cHandle, int lookForByte);
CK_VISIBLE_PUBLIC BOOL CkSocket_ReceiveUntilMatch(HCkSocket cHandle, const char *matchStr, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSocket_receiveUntilMatch(HCkSocket cHandle, const char *matchStr);
CK_VISIBLE_PUBLIC HCkTask CkSocket_ReceiveUntilMatchAsync(HCkSocket cHandle, const char *matchStr);
CK_VISIBLE_PUBLIC BOOL CkSocket_SaveLastError(HCkSocket cHandle, const char *path);
CK_VISIBLE_PUBLIC int CkSocket_SelectForReading(HCkSocket cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SelectForReadingAsync(HCkSocket cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC int CkSocket_SelectForWriting(HCkSocket cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SelectForWritingAsync(HCkSocket cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendByte(HCkSocket cHandle, int value);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendByteAsync(HCkSocket cHandle, int value);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendBytes(HCkSocket cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendBytesAsync(HCkSocket cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendBytesENC(HCkSocket cHandle, const char *encodedBytes, const char *encodingAlg);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendBytesENCAsync(HCkSocket cHandle, const char *encodedBytes, const char *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendCount(HCkSocket cHandle, int byteCount);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendCountAsync(HCkSocket cHandle, int byteCount);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendInt16(HCkSocket cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendInt16Async(HCkSocket cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendInt32(HCkSocket cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendInt32Async(HCkSocket cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocket_SendString(HCkSocket cHandle, const char *stringToSend);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SendStringAsync(HCkSocket cHandle, const char *stringToSend);
CK_VISIBLE_PUBLIC BOOL CkSocket_SetSslClientCert(HCkSocket cHandle, HCkCert cert);
CK_VISIBLE_PUBLIC BOOL CkSocket_SetSslClientCertPem(HCkSocket cHandle, const char *pemDataOrFilename, const char *pemPassword);
CK_VISIBLE_PUBLIC BOOL CkSocket_SetSslClientCertPfx(HCkSocket cHandle, const char *pfxFilename, const char *pfxPassword);
CK_VISIBLE_PUBLIC void CkSocket_SleepMs(HCkSocket cHandle, int millisec);
CK_VISIBLE_PUBLIC BOOL CkSocket_SshAuthenticatePk(HCkSocket cHandle, const char *sshLogin, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SshAuthenticatePkAsync(HCkSocket cHandle, const char *sshLogin, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSocket_SshAuthenticatePw(HCkSocket cHandle, const char *sshLogin, const char *sshPassword);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SshAuthenticatePwAsync(HCkSocket cHandle, const char *sshLogin, const char *sshPassword);
CK_VISIBLE_PUBLIC BOOL CkSocket_SshCloseTunnel(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SshCloseTunnelAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkSocket CkSocket_SshOpenChannel(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SshOpenChannelAsync(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocket_SshOpenTunnel(HCkSocket cHandle, const char *sshHostname, int sshPort);
CK_VISIBLE_PUBLIC HCkTask CkSocket_SshOpenTunnelAsync(HCkSocket cHandle, const char *sshHostname, int sshPort);
CK_VISIBLE_PUBLIC void CkSocket_StartTiming(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_TakeSocket(HCkSocket cHandle, HCkSocket sock);
CK_VISIBLE_PUBLIC BOOL CkSocket_TlsRenegotiate(HCkSocket cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSocket_TlsRenegotiateAsync(HCkSocket cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocket_UnlockComponent(HCkSocket cHandle, const char *unlockCode);
CK_VISIBLE_PUBLIC BOOL CkSocket_UseSsh(HCkSocket cHandle, HCkSsh ssh);
#endif
