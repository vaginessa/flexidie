/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SKPALEMappedObject.h"

@class NSArray, NSDate, NSDictionary, NSError, NSString, SKPContact, UIImage;

@interface SKPAccount : NSObject //SKPALEMappedObject
{
    BOOL _isLinkedToLiveID;
    NSString *_skypeName;
    int _status;
    SKPContact *_contact;
    int _skypeCallPolicy;
    int _avatarPolicy;
    int _cblSyncStatus;
    NSDictionary *_loginStatusInfo;
    NSString *_creditCurrency;
    unsigned int _creditBalance;
    unsigned int _creditPrecision;
    int _logoutReason;
    NSDate *_registrationTimestamp;
    int _loginMode;
    NSString *_accountSignInName;
    NSArray *_accountSubscriptions;
    UIImage *_avatarImageToSetWhenLoggedIn;
}

+ (id)keyPathsForValuesAffectingSubscriptions;
+ (id)keyPathsForValuesAffectingLocalizedSkypeCreditString;
+ (id)keyPathsForValuesAffectingHasSkypeCredit;
+ (id)keyPathsForValuesAffectingNumberOfFreeCalls;
+ (id)keyPathsForValuesAffectingLoginError;
+ (BOOL)userDidLogoutForOldStatus:(int)arg1 newStatus:(int)arg2;
+ (BOOL)userDidLoginForOldStatus:(int)arg1 newStatus:(int)arg2;
+ (id)keyPathsForValuesAffectingLoggedIn;
+ (id)lazyLoadedPropertiesKeypaths;
+ (id)propertyMapping;
+ (Class)associatedALEClass;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(char *)arg3;
@property(retain, nonatomic) UIImage *avatarImageToSetWhenLoggedIn; // @synthesize avatarImageToSetWhenLoggedIn=_avatarImageToSetWhenLoggedIn;
@property(retain, nonatomic) NSArray *accountSubscriptions; // @synthesize accountSubscriptions=_accountSubscriptions;
@property(copy, nonatomic) NSString *accountSignInName; // @synthesize accountSignInName=_accountSignInName;
@property(nonatomic) int loginMode; // @synthesize loginMode=_loginMode;
@property(retain, nonatomic) NSDate *registrationTimestamp; // @synthesize registrationTimestamp=_registrationTimestamp;
@property(nonatomic) int logoutReason; // @synthesize logoutReason=_logoutReason;
@property(nonatomic) BOOL isLinkedToLiveID; // @synthesize isLinkedToLiveID=_isLinkedToLiveID;
@property(nonatomic) unsigned int creditPrecision; // @synthesize creditPrecision=_creditPrecision;
@property(nonatomic) unsigned int creditBalance; // @synthesize creditBalance=_creditBalance;
@property(retain, nonatomic) NSString *creditCurrency; // @synthesize creditCurrency=_creditCurrency;
@property(retain, nonatomic) NSDictionary *loginStatusInfo; // @synthesize loginStatusInfo=_loginStatusInfo;
@property(readonly, nonatomic) int cblSyncStatus; // @synthesize cblSyncStatus=_cblSyncStatus;
@property(nonatomic) int avatarPolicy; // @synthesize avatarPolicy=_avatarPolicy;
@property(readonly, nonatomic) int skypeCallPolicy; // @synthesize skypeCallPolicy=_skypeCallPolicy;
@property(retain, nonatomic) SKPContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *skypeName; // @synthesize skypeName=_skypeName;
//- (void).cxx_destruct;
- (void)setAvatarImagePrivacyPolicyContactsOnly;
- (void)setAvatarImagePrivacyPolicyEveryone;
- (void)updateSubscriptions;
- (void)enableShortCircuitSync;
- (void)setAvatarImageAfterLogin;
- (void)setAvatarImage:(id)arg1;
- (void)setPresenceStatus:(int)arg1;
- (void)setAvailable:(BOOL)arg1;
- (void)changeISOCountryCode:(id)arg1;
- (void)changeMobilePhoneNumber:(id)arg1;
- (void)changeFullName:(id)arg1;
- (void)changeMoodMessage:(id)arg1;
- (id)otherPropertyKeysToIncludeInDebugDescription;
- (id)subscriptions;
- (id)onlineNumberExpirationDate;
@property(readonly, nonatomic) NSString *localizedSkypeCreditStringForAccessibility;
@property(readonly, nonatomic) NSString *localizedSkypeCreditStringWithoutSymbol;
@property(readonly, nonatomic) NSString *localizedSkypeCreditString;
@property(readonly, nonatomic) BOOL hasSkypeCredit;
- (unsigned int)numberOfFreeCalls;
@property(readonly, copy, nonatomic) NSString *skylibDatabasePath;
@property(readonly, nonatomic) NSString *skypeNameHash;
@property(readonly, nonatomic) NSString *defaultInternationalPrefix;
@property(readonly, nonatomic) NSString *defaultISOCountryCode;
@property(readonly, nonatomic) unsigned int progress;
- (BOOL)isIntendedToUserInfo:(id)arg1;
@property(readonly, nonatomic) NSError *loginError;
- (void)resetLogoutReason;
- (void)logout;
- (id)initWithAleObject:(id)arg1 loginMode:(int)arg2;
- (void)refreshPropertiesAfterLogin;
- (void)loadSkypeNameIfNeeded;
- (void)setStatus:(int)arg1;
@property(readonly, nonatomic, getter=isLoggedIn) BOOL loggedIn;
- (BOOL)flushLazyProperty:(id)arg1;
- (id)fetchContactOperation;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(BOOL)arg3;

@end
