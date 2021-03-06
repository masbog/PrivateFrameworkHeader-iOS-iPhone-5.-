/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUCryptoUtils : NSObject  {
}

+ (id)generatePassphraseVerifierForKey:(id)arg1;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (id)retainedBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (BOOL)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long)arg2;
+ (unsigned int)ivLengthForKey:(id)arg1;


@end
