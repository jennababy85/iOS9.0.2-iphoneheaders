/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, NSMutableSet, NSNumber, NSDictionary, NSSet;

@interface ACAccount : NSObject <NSSecureCoding, NSCopying> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	char _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	char _accountAccessAvailable;
	char _authenticated;
	char _active;
	char _supportsAuthentication;
	char _visible;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	ACAccount* _parentAccount;
	char _haveCheckedForParentAccount;
	NSString* _parentAccountIdentifier;
	char _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	NSMutableSet* _enabledDataclasses;
	NSMutableSet* _provisionedDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	char _creatingFromManagedObject;

}

@property (retain) NSString * calHostname; 
@property (readonly) char calIsAutoRefreshed; 
@property (readonly) char calIsCalDAVAccount; 
@property (readonly) char calIsEnabled; 
@property (assign) char calIsEnabledForCalendar; 
@property (assign) char calIsEnabledForReminders; 
@property (readonly) char calIsExchangeAccount; 
@property (readonly) char calIsMissingParentAccount; 
@property (copy) NSString * calMainPrincipalUID; 
@property (copy) NSNumber * calPort; 
@property (copy,readonly) NSDictionary * calPrincipals; 
@property (assign) char calPushDisabled; 
@property (assign) int calRefreshInterval; 
@property (copy) NSURL * calServerURL; 
@property (assign) char calUseSSL; 
@property (retain) NSString * calCollectionSetName; 
@property (assign) char calLocalDataMigrationHasTakenPlace; 
@property (assign) char calSkipCredentialVerification; 
@property (assign) char calUseKerberos; 
@property (copy) NSString * calWebServicesRecordGUID; 
@property (readonly) NSURL * calExchangeWebServicesURL; 
@property (readonly) NSURL * calExternalExchangeWebServicesURL; 
@property (copy) NSURL * calExternalURL; 
@property (copy) NSString * calIdentityEmailAddress; 
@property (readonly) char calIsDirty; 
@property (copy) NSString * calRootFolderID; 
@property (assign) char calUseExternalURL; 
@property (setter=_aa_setRawPassword:,nonatomic,copy) NSString * _aa_rawPassword; 
@property (nonatomic,readonly) NSString * aa_altDSID; 
@property (nonatomic,readonly) NSString * aa_personID; 
@property (setter=aa_setFirstName:,nonatomic,copy) NSString * aa_firstName; 
@property (setter=aa_setLastName:,nonatomic,copy) NSString * aa_lastName; 
@property (nonatomic,readonly) NSString * aa_primaryEmail; 
@property (nonatomic,readonly) NSString * aa_appleId; 
@property (nonatomic,readonly) NSArray * aa_appleIDAliases; 
@property (nonatomic,readonly) char aa_needsRegistration; 
@property (nonatomic,readonly) char aa_needsEmailConfiguration; 
@property (nonatomic,readonly) char aa_serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * aa_serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * aa_protocolVersion; 
@property (nonatomic,readonly) NSString * aa_displayName; 
@property (nonatomic,readonly) NSString * aa_syncStoreIdentifier; 
@property (nonatomic,readonly) NSString * aa_accountTypeString; 
@property (nonatomic,readonly) char aa_isUsingiCloud; 
@property (nonatomic,readonly) ACAccount * aa_fmfAccount; 
@property (nonatomic,readonly) ACAccount * aa_fmipAccount; 
@property (nonatomic,readonly) NSString * aa_fmipToken; 
@property (nonatomic,readonly) NSString * aa_mapsToken; 
@property (nonatomic,readonly) NSString * aa_hsaToken; 
@property (nonatomic,readonly) NSString * aa_accountFooterText; 
@property (nonatomic,readonly) NSDictionary * aa_accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * aa_accountFirstDisplayAlert; 
@property (nonatomic,readonly) ACAccount * aa_cloudKitAccount; 
@property (nonatomic,readonly) ACAccount * aa_childMailAccount; 
@property (assign,setter=aa_setPrimaryAccount:,nonatomic) char aa_isPrimaryAccount; 
@property (assign,setter=aa_setPrimaryEmailVerified:,nonatomic) char aa_isPrimaryEmailVerified; 
@property (assign,setter=aa_setSyncedAccount:,nonatomic) char aa_isSyncedAccount; 
@property (assign,setter=aa_setNeedsToVerifyTerms:,nonatomic) char aa_needsToVerifyTerms; 
@property (nonatomic,readonly) char aa_needsPCSRepair; 
@property (assign,setter=aa_setUsesCloudDocs:,nonatomic) char aa_isUsingCloudDocs; 
@property (assign,setter=aa_setCloudDocsMigrationComplete:,nonatomic) char aa_isCloudDocsMigrationComplete; 
@property (setter=aa_setPassword:,nonatomic,copy) NSString * aa_password; 
@property (setter=aa_setAuthToken:,nonatomic,copy) NSString * aa_authToken; 
@property (assign,setter=aa_setUndergoingRepair:,nonatomic) char aa_isUndergoingRepair; 
@property (nonatomic,readonly) int aa_repairerPID; 
@property (nonatomic,retain) NSString * mcProfileUUID; 
@property (nonatomic,retain) NSString * mcPayloadUUID; 
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) char authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,nonatomic) char supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) char dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                                                                  //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyAccountProperties;                                                           //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties;                                                         //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) char supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) char visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                                                        //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
+(id)aa_dataclassesBoundToPrimaryAppleAccount;
+(id)aa_dataclassesBoundToSingleAppleAccount;
+(id)_createNewAccountUID;
+(char)supportsSecureCoding;
-(id)displayUsername;
-(char)calIsCalDAVAccount;
-(id)valueForAccountPropertyKey:(id)arg1 ;
-(char)calIsExchangeAccount;
-(NSURL *)calServerURL;
-(int)calRefreshInterval;
-(char)calIsEnabledForCalendar;
-(char)calIsEnabledForReminders;
-(char)_dataclassIsEnabled:(id)arg1 ;
-(NSString *)calHostname;
-(char)calUseSSL;
-(id)_schemeStringForUseSSL:(char)arg1 ;
-(NSNumber *)calPort;
-(char)_useSSLForSchemeString:(id)arg1 ;
-(void)_setValue:(id)arg1 forAccountPropertyKey:(id)arg2 ;
-(id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4 ;
-(void)setCalServerURL:(NSURL *)arg1 ;
-(void)_setIsEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(void)setCalHostname:(NSString *)arg1 ;
-(void)setCalPort:(NSNumber *)arg1 ;
-(void)setCalUseSSL:(char)arg1 ;
-(id)_createExchangeWebServicesURLFromURL:(id)arg1 ;
-(NSURL *)calExternalURL;
-(NSDictionary *)calPrincipals;
-(void)setCalPrincipals:(NSDictionary *)arg1 ;
-(id)calPrincipalURLForPrincipalWithUID:(id)arg1 serverURL:(id)arg2 ;
-(id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2 ;
-(void)addPrincipal:(id)arg1 withUID:(id)arg2 ;
-(id)_diffWithAccount:(id)arg1 firstPropertyOnly:(char)arg2 ;
-(void)createDictionaryForPrincipalWithUID:(id)arg1 ;
-(id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(char)arg2 ;
-(id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(char)arg2 ;
-(id)_accountPropertiesKeys;
-(char)calIsAutoRefreshed;
-(char)calIsEnabled;
-(char)calIsMissingParentAccount;
-(NSString *)calMainPrincipalUID;
-(char)calPushDisabled;
-(void)setCalIsEnabledForCalendar:(char)arg1 ;
-(void)setCalIsEnabledForReminders:(char)arg1 ;
-(void)setCalMainPrincipalUID:(NSString *)arg1 ;
-(void)setCalPushDisabled:(char)arg1 ;
-(void)setCalRefreshInterval:(int)arg1 ;
-(NSString *)calCollectionSetName;
-(char)calLocalDataMigrationHasTakenPlace;
-(char)calSkipCredentialVerification;
-(char)calUseKerberos;
-(NSString *)calWebServicesRecordGUID;
-(void)setCalCollectionSetName:(NSString *)arg1 ;
-(void)setCalLocalDataMigrationHasTakenPlace:(char)arg1 ;
-(void)setCalSkipCredentialVerification:(char)arg1 ;
-(void)setCalUseKerberos:(char)arg1 ;
-(void)setCalWebServicesRecordGUID:(NSString *)arg1 ;
-(NSURL *)calExchangeWebServicesURL;
-(NSURL *)calExternalExchangeWebServicesURL;
-(NSString *)calIdentityEmailAddress;
-(char)calIsDirty;
-(NSString *)calRootFolderID;
-(char)calUseExternalURL;
-(void)setCalExternalURL:(NSURL *)arg1 ;
-(void)setCalIdentityEmailAddress:(NSString *)arg1 ;
-(void)setCalRootFolderID:(NSString *)arg1 ;
-(void)setCalUseExternalURL:(char)arg1 ;
-(id)calPrincipalURLForPrincipalWithUID:(id)arg1 ;
-(id)diffWithAccount:(id)arg1 ;
-(id)firstDifferentPropertyWithAccount:(id)arg1 ;
-(char)removePrincipalWithUID:(id)arg1 ;
-(char)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(void)_aa_setAltDSID:(id)arg1 ;
-(void)_aa_setAppleID:(id)arg1 ;
-(void)aa_configureCerts;
-(void)aa_removeCerts;
-(void)_aa_clearRawPassword;
-(void)_aa_setRawPassword:(id)arg1 ;
-(NSString *)_aa_rawPassword;
-(NSString *)aa_altDSID;
-(char)aa_isUsingiCloud;
-(void)aa_updateWithProvisioningResponse:(id)arg1 ;
-(int)mobileMeAccountStatus;
-(void)aa_setAuthToken:(id)arg1 ;
-(ACAccount *)aa_fmipAccount;
-(ACAccount *)aa_fmfAccount;
-(ACAccount *)aa_cloudKitAccount;
-(void)aa_setMapsToken:(id)arg1 ;
-(void)aa_setHSAToken:(id)arg1 ;
-(ACAccount *)aa_childMailAccount;
-(void)aa_setFirstName:(id)arg1 ;
-(void)aa_setLastName:(id)arg1 ;
-(NSString *)aa_accountTypeString;
-(void)aa_setPrimaryEmailVerified:(char)arg1 ;
-(NSString *)aa_protocolVersion;
-(NSString *)aa_fmipToken;
-(NSString *)aa_mapsToken;
-(NSString *)aa_hsaToken;
-(id)aa_hsaTokenWithError:(id*)arg1 ;
-(NSString *)aa_accountFooterText;
-(NSDictionary *)aa_accountFooterButton;
-(NSDictionary *)aa_accountFirstDisplayAlert;
-(char)aa_serviceUnavailable;
-(NSDictionary *)aa_serviceUnavailableInfo;
-(void)aa_setSyncedAccount:(char)arg1 ;
-(char)aa_isSyncedAccount;
-(char)aa_needsRegistration;
-(void)aa_setUseCellular:(char)arg1 forDataclass:(id)arg2 ;
-(NSString *)aa_syncStoreIdentifier;
-(char)aa_isUndergoingRepair;
-(void)aa_setUndergoingRepair:(char)arg1 ;
-(int)aa_repairerPID;
-(char)aa_needsPCSRepair;
-(void)aa_setPrimaryAccount:(char)arg1 ;
-(NSString *)aa_displayName;
-(char)aa_isUsingCloudDocs;
-(char)aa_isPrimaryAccount;
-(void)aa_setUsesCloudDocs:(char)arg1 ;
-(void)aa_setCloudDocsMigrationComplete:(char)arg1 ;
-(char)aa_isCloudDocsMigrationComplete;
-(char)aa_useCellularForDataclass:(id)arg1 ;
-(void)aa_setPassword:(id)arg1 ;
-(NSString *)aa_personID;
-(id)aa_authTokenWithError:(id*)arg1 ;
-(char)aa_needsEmailConfiguration;
-(char)aa_isPrimaryEmailVerified;
-(NSString *)aa_firstName;
-(NSString *)aa_lastName;
-(NSString *)aa_authToken;
-(void)aa_setNeedsToVerifyTerms:(char)arg1 ;
-(char)aa_needsToVerifyTerms;
-(NSString *)aa_primaryEmail;
-(NSArray *)aa_appleIDAliases;
-(NSString *)aa_password;
-(NSString *)aa_appleId;
-(void)storeOriginalUsername;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(id)_registeredBundles;
-(void)setDSID:(id)arg1 ;
-(char)canRemoveAccount;
-(id)dsid;
-(id)appleID;
-(id)aida_dsid;
-(id)aida_tokenWithExpiryCheckForService:(id)arg1 ;
-(id)aida_tokenWithExpirationCheck;
-(id)aida_deviceProvisioningInfo;
-(id)aida_alternateDSID;
-(id)aida_tokenForService:(id)arg1 ;
-(char)MCIsManaged;
-(NSString *)mcProfileUUID;
-(void)setMcProfileUUID:(NSString *)arg1 ;
-(NSString *)mcPayloadUUID;
-(void)setMcPayloadUUID:(NSString *)arg1 ;
-(id)mcBackingProfile;
-(id)mcBackingPayload;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(void)_installCredentialsChangedObserver;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)credentialsChanged:(id)arg1 ;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)enabledAndSyncableDataclasses;
-(char)_useParentForCredentials;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(void)_markCredentialDirty;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(id)qualifiedUsername;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(void)setCreatingFromManagedObject:(char)arg1 ;
-(NSString *)shortDebugName;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(void)setSecCertificates:(id)arg1 ;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(char)isPropertyDirty:(id)arg1 ;
-(void)_setObjectID:(id)arg1 ;
-(ACAccount *)displayAccount;
-(id)accountPropertyForKey:(id)arg1 ;
-(NSString *)userFullName;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccountStore *)accountStore;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(char)isEnabledForDataclass:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSURL *)objectID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reload;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(char)isActive;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVisible:(char)arg1 ;
-(void)setActive:(char)arg1 ;
-(char)isVisible;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_loadAllCachedProperties;
-(void)_setAccountStore:(id)arg1 ;
-(NSSet *)dirtyDataclassProperties;
-(id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3 ;
-(id)diffAccount:(id)arg1 ;
-(NSSet *)dirtyAccountProperties;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)markAllPropertiesDirty;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)_loadCachedPropertiesWithoutCredentials;
-(id)accountByCleaningThirdPartyTransformations;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(ACAccountType *)accountType;
-(NSArray *)childAccounts;
-(id)initWithAccountType:(id)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccount *)parentAccount;
-(SecIdentityRef)copySecIdentity;
-(id)secCertificates;
-(char)authenticated;
-(char)isEnabledToSyncDataclass:(id)arg1 ;
-(char)addClientToken:(id)arg1 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(char)supportsPush;
-(NSMutableSet *)provisionedDataclasses;
-(ACAccountCredential *)credential;
-(id)fullDescription;
-(NSString *)authenticationType;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(NSString *)clientToken;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)setAuthenticated:(char)arg1 ;
-(NSString *)parentAccountIdentifier;
-(NSDictionary *)accountProperties;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)credentialWithError:(id*)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(NSDictionary *)dataclassProperties;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(char)isProvisionedForDataclass:(id)arg1 ;
-(char)isDirty;
-(char)supportsAuthentication;
-(void)setSupportsAuthentication:(char)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(void)refresh;
-(char)isAuthenticated;
-(void)setAccountType:(ACAccountType *)arg1 ;
@end

