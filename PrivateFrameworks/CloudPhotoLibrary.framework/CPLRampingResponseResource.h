/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRampingResponseResource : PBCodable <NSCopying> {
    BOOL  _allowed;
    struct { 
        unsigned int retryAfterMillis : 1; 
        unsigned int allowed : 1; 
    }  _has;
    NSString * _resource;
    long long  _retryAfterMillis;
}

@property (nonatomic) BOOL allowed;
@property (nonatomic) BOOL hasAllowed;
@property (nonatomic, readonly) BOOL hasResource;
@property (nonatomic) BOOL hasRetryAfterMillis;
@property (nonatomic, retain) NSString *resource;
@property (nonatomic) long long retryAfterMillis;

- (void).cxx_destruct;
- (BOOL)allowed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAllowed;
- (BOOL)hasResource;
- (BOOL)hasRetryAfterMillis;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resource;
- (long long)retryAfterMillis;
- (void)setAllowed:(BOOL)arg1;
- (void)setHasAllowed:(BOOL)arg1;
- (void)setHasRetryAfterMillis:(BOOL)arg1;
- (void)setResource:(id)arg1;
- (void)setRetryAfterMillis:(long long)arg1;
- (void)writeTo:(id)arg1;

@end