/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef BLADERUNNER_GAME_CONSTANTS_H
#define BLADERUNNER_GAME_CONSTANTS_H

namespace BladeRunner {

enum Actors {
	kActorMcCoy            =  0,
	kActorSteele           =  1,
	kActorGordo            =  2,
	kActorDektora          =  3,
	kActorGuzza            =  4,
	kActorClovis           =  5,
	kActorLucy             =  6,
	kActorIzo              =  7,
	kActorSadik            =  8,
	kActorCrazylegs        =  9,
	kActorLuther           = 10, // This is the main model and AI for Luther and Lance (twins)
	kActorGrigorian        = 11,
	kActorTransient        = 12, // Homeless
	kActorLance            = 13, // Used for Lance speech lines (essentially empty AI script) - has Clues DB and Health
	kActorBulletBob        = 14,
	kActorRunciter         = 15,
	kActorInsectDealer     = 16,
	kActorTyrellGuard      = 17,
	kActorEarlyQ           = 18,
	kActorZuben            = 19,
	kActorHasan            = 20,
	kActorMarcus           = 21, // Used for Marcus Eisenduller corpse - has Clues DB and Health
	kActorMia              = 22,
	kActorOfficerLeary     = 23,
	kActorOfficerGrayford  = 24,
	kActorHanoi            = 25,
	kActorBaker            = 26, // Not actually used in anything (essentially empty AI script) - has Clues DB and Health and a T-pose Guard model
	kActorDeskClerk        = 27,
	kActorHowieLee         = 28,
	kActorFishDealer       = 29,
	kActorKlein            = 30,
	kActorMurray           = 31,
	kActorHawkersBarkeep   = 32,
	kActorHolloway         = 33,
	kActorSergeantWalls    = 34,
	kActorMoraji           = 35,
	kActorTheBard          = 36, // Not actually used in anything (essentially empty AI script) - has Health
	kActorPhotographer     = 37,
	kActorDispatcher       = 38, // Used for actor speech and ambient sound (essentially empty AI script)
	kActorAnsweringMachine = 39, // Used for machines's speech (essentially empty AI script)
	kActorRajif            = 40,
	kActorGovernorKolvig   = 41, // Used for actor speech (essentially empty AI script) - has Health
	kActorEarlyQBartender  = 42,
	kActorHawkersParrot    = 43, // Used for parrot speech (DEU, FRA only) (essentially empty AI script) - has Health
	kActorTaffyPatron      = 44, // Gordo's hostage (has speech in DEU, FRA)
	kActorLockupGuard      = 45, // Not actually used in anything (essentially empty AI script) - has Health
	kActorTeenager         = 46, // Not actually used in anything (essentially empty AI script) - has Health
	kActorHysteriaPatron1  = 47, // Early Q's Dancer  (has (cut) speech in DEU, FRA, but belongs to patron not dancer)
	kActorHysteriaPatron2  = 48, // Early Q's Dancer  (has (cut) speech in DEU, FRA, but belongs to patron not dancer)
	kActorHysteriaPatron3  = 49, // Early Q's Dancer (Restored) (has (cut) speech in DEU, FRA, but belongs to patron not dancer)
	kActorShoeshineMan     = 50, // Not actually used in anything (has code remnants in AI script) - has Health
	kActorTyrell           = 51,
	kActorChew             = 52,
	kActorGaff             = 53,
	kActorBryant           = 54, // Used as Sebastian's Bear doll in Bradbury
	kActorTaffy            = 55, // Not actually used in anything (essentially empty AI script) - has Clues DB and Health
	kActorSebastian        = 56,
	kActorRachael          = 57,
	kActorGeneralDoll      = 58,
	kActorIsabella         = 59,
	kActorBlimpGuy         = 60, // Used for ambient sound (essentially empty AI script)
	kActorNewscaster       = 61, // Used for TV speech (essentially empty AI script)
	kActorLeon             = 62,
	kActorMaleAnnouncer    = 63, // Not actually used in anything (essentially empty AI script)
	kActorFreeSlotA        = 64, // Rat (also the big Rat on the bridge)
	kActorFreeSlotB        = 65, // Rat
	kActorMaggie           = 66,
	kActorGenwalkerA       = 67, // Generic Walker or Bullet Bob's tracking gun
	kActorGenwalkerB       = 68,
	kActorGenwalkerC       = 69,
	kActorMutant1          = 70,
	kActorMutant2          = 71,
	kActorMutant3          = 72,
	kActorVoiceOver        = 99
};

enum Clues {
	kClueOfficersStatement                 =   0, // Audio Recording
	kClueDoorForced1                       =   1, // Audio Recording - Acquired when Leary is not present
	kClueDoorForced2                       =   2, // Audio Recording - Acquired when Leary is present
	kClueLimpingFootprints                 =   3, // Audio Recording
	kClueGracefulFootprints                =   4, // Audio Recording
	kClueShellCasings                      =   5, // Object
	kClueCandy                             =   6, // Object
	kClueToyDog                            =   7, // Object
	kClueChopstickWrapper                  =   8, // Object
	kClueSushiMenu                         =   9, // Photograph - ESPER hard-copy
	kClueLabCorpses                        =  10, // Audio Recording
	kClueLabShellCasings                   =  11, // Audio Recording
	kClueRuncitersVideo                    =  12, // Video Clip
	kClueLucy                              =  13, // Photograph - ESPER hard-copy
	kClueDragonflyAnklet                   =  14, // Photograph - ESPER hard-copy
	kClueReferenceLetter                   =  15, // Object
	kClueCrowdInterviewA                   =  16, // Audio Recording
	kClueCrowdInterviewB                   =  17, // Audio Recording
	kClueZubenRunsAway                     =  18, // (Intangible) - Not checked in KIA
	kClueZubenInterview                    =  19, // Audio Recording (CT02)
	kClueZubenSquadPhoto                   =  20, // Photograph
	kClueBigManLimping                     =  21, // Audio Recording - UNOBTAINED - Checked in KIA - Transient's hint about Zuben - TODO?
	kClueRunciterInterviewA                =  22, // Audio Recording - Identity Reveal for Lucy
	kClueRunciterInterviewB1               =  23, // Audio Recording - Lucy is Replicant
	kClueRunciterInterviewB2               =  24, // Audio Recording - Lucy is Human
	kClueHowieLeeInterview                 =  25, // Audio Recording
	kCluePaintTransfer                     =  26, // Audio Recording
	kClueChromeDebris                      =  27, // Object
	kClueRuncitersViewA                    =  28, // Photograph
	kClueRuncitersViewB                    =  29, // Photograph
	kClueCarColorAndMake                   =  30, // Photograph - ESPER hard-copy
	kCluePartialLicenseNumber              =  31, // Photograph - ESPER hard-copy
	kClueBriefcase                         =  32, // Object
	kClueGaffsInformation                  =  33, // Audio Recording
	kClueCrystalVisitedRunciters           =  34, // Intangible - UNOBTAINED - Not checked in KIA
	kClueCrystalVisitedChinatown           =  35, // Intangible - UNOBTAINED - Not checked in KIA
	kClueWantedPoster                      =  36, // Intangible - UNOBTAINED - Not checked in KIA - checked by Leon's AI
	kClueLicensePlate                      =  37, // Object
	kClueLicensePlateMatch                 =  38, // UNUSED
	kClueLabPaintTransfer                  =  39, // Audio Recording
	kClueDispatchHitAndRun                 =  40, // Audio Recording - Acquired in Cut Content. Original: Unobtained
	kClueInceptShotRoy                     =  41, // Photograph - UNOBTAINED - Not checked in KIA
	kClueInceptShotsLeon                   =  42, // UNUSED
	kCluePhoneCallGuzza                    =  43, // Audio Recording
	kClueDragonflyEarring                  =  44, // Object
	kClueTyrellSecurity                    =  45, // Video Clip
	kClueTyrellGuardInterview              =  46, // Audio Recording - Acquired in Cut Content. Original: Unobtained
	kClueBombingSuspect                    =  47, // Photograph - ESPER hard-copy
	kClueSadiksGun                         =  48, // Photograph - UNOBTAINED - Not checked in KIA - TODO: A removed ESPER clue?
	kClueDetonatorWire                     =  49, // Object
	kClueVictimInformation                 =  50, // Audio Recording
	kClueAttemptedFileAccess               =  51, // Audio Recording
	kClueCrystalsCase                      =  52, // Audio Recording
	kClueKingstonKitchenBox1               =  53, // Object
	kClueTyrellSalesPamphletEntertainModel =  54, // Object
	kClueTyrellSalesPamphletLolita         =  55, // Object
	kCluePeruvianLadyInterview             =  56, // Audio Recording
	kClueHasanInterview                    =  57, // Audio Recording
	kClueBobInterview1                     =  58, // Audio Recording - when Izo is Replicant
	kClueBobInterview2                     =  59, // Audio Recording - when Izo is Human
	kClueIzoInterview                      =  60, // Audio Recording - About INSECT JEWELRY
	kClueIzosWarning                       =  61, // Audio Recording - UNOBTAINED - Checked in KIA - Identity Reveal for Clovis - TODO?
	kClueRadiationGoggles                  =  62, // Object
	kClueGogglesReplicantIssue             =  63, // Audio Recording
	kClueFishLadyInterview                 =  64, // Audio Recording
	kClueDogCollar1                        =  65, // Object
	kClueWeaponsCache                      =  66, // Audio Recording
	kClueChewInterview                     =  67, // Audio Recording
	kClueMorajiInterview                   =  68, // Audio Recording
	kClueGordoInterview1                   =  69, // Audio Recording - When Gordo is Replicant - Identity Reveal for Gordo
	kClueGordoInterview2                   =  70, // Audio Recording - When Gordo is Human - Identity Reveal for Gordo
	kClueAnsweringMachineMessage           =  71, // Audio Recording - Sebastian's message
	kClueChessTable                        =  72, // Audio Recording - Acquired after bug fix. Original: Unobtained
	kClueSightingSadikBradbury             =  73, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs
	kClueStaggeredbyPunches                =  74, // Audio Recording
	kClueMaggieBracelet                    =  75, // Object
	kClueEnvelope                          =  76, // Object
	kClueIzosFriend                        =  77, // Photograph - ESPER hard-copy (Clovis)
	kClueChinaBarSecurityPhoto             =  78, // Photograph
	kCluePurchasedScorpions                =  79, // Audio Recording
	kClueWeaponsOrderForm                  =  80, // Object
	kClueShippingForm                      =  81, // Object
	kClueGuzzasCash                        =  82, // Restored Content: Audio Recording. Original: (Intangible)
	kCluePoliceIssueWeapons                =  83, // (Intangible) - Can be acquired - Not checked in KIA - TODO?
	kClueHysteriaToken                     =  84, // Object
	kClueRagDoll                           =  85, // Object
	kClueMoonbus1                          =  86, // Photograph
	kClueCheese                            =  87, // Object
	kClueDektorasDressingRoom              =  88, // Photograph
	kClueEarlyQsClub                       =  89, // Video Clip
	kClueDragonflyCollection               =  90, // Restored Content: Audio Recording. Original: (Intangible) - From Peruvian Lady
	kClueDragonflyBelt                     =  91, // Restored Content: Object. Original: (Intangible)
	kClueEarlyQInterview                   =  92, // Restored Content: Audio Recording. Original: (Intangible) - Identity Reveal for Dektora
	kClueStrangeScale1                     =  93, // Object
	kClueDektoraInterview1                 =  94, // Audio Recording
	kClueSuspectDektora                    =  95, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs
	kClueDektoraInterview2                 =  96, // Audio Recording - About belt and dragonflies
	kClueDektoraInterview3                 =  97, // Audio Recording - About vase (flowers)
	kClueDektorasCard                      =  98, // Object
	kClueGrigoriansNote                    =  99, // Object - Acquired in Cut Content. Original: Unobtained
	kClueCollectionReceipt                 = 100, // Object
	kClueSpecialIngredient                 = 101, // Audio Recording
	kClueStolenCheese                      = 102, // Audio Recording
	kClueGordoInterview3                   = 103, // Audio Recording - when Gordo is Replicant (about JOB)
	kClueGordoConfession                   = 104, // Audio Recording - about Cheese
	kClueGordosLighterReplicant            = 105, // Object
	kClueGordosLighterHuman                = 106, // Object
	kClueDektoraInterview4                 = 107, // Audio Recording - McCoy lets Dektora escape from attic - Identity Reveal for Clovis, Lucy - Replicant Clue for Dektora, Lucy, Clovis
	kClueHollowayInterview                 = 108, // Audio Recording - UNOBTAINED - Checked in KIA - Holloway says he's seen McCoy's incept photo - TODO?
	kClueBakersBadge                       = 109, // Object - UNOBTAINED - Checked in KIA - TODO?
	kClueHoldensBadge                      = 110, // Object
	kClueCar                               = 111, // (Intangible) - Not checked in KIA - Acquired when inspecting the crashed car, if McCoy has enough clues - TODO?
	kClueCarIdentified                     = 112, // Audio Recording - UNOBTAINED - Checked in KIA - McCoy's monologue when mainframe confirms suspect car - TODO?
	kClueCarRegistration1                  = 113, // Audio Recording - Dektora bought the car
	kClueCarRegistration2                  = 114, // Audio Recording - Gavin Kelly bought the car
	kClueCarRegistration3                  = 115, // Audio Recording - Blake Williams bought the car
	kClueCrazylegsInterview1               = 116, // Audio Recording - Acquired after bug fix. Original: Unobtained - Checked in KIA - When Dektora bought the car - Enables WOMAN dialogue option
	kClueCrazylegsInterview2               = 117, // Audio Recording - UNOBTAINED - Not checked in KIA - added to many actors DBs - TODO?
	kClueLichenDogWrapper                  = 118, // Object
	kClueRequisitionForm                   = 119, // Object - UNOBTAINED - Checked in KIA - TODO?
	kClueScaryChair                        = 120, // Audio Recording
	kClueIzosStashRaided                   = 121, // Audio Recording
	kClueHomelessManInterview1             = 122, // Audio Recording
	kClueHomelessManInterview2             = 123, // Audio Recording
	kClueHomelessManKid                    = 124, // Audio Recording
	kClueFolder                            = 125, // Object
	kClueGuzzaFramedMcCoy                  = 126, // Audio Recording
	kClueOriginalShippingForm              = 127, // Object - UNOBTAINED - Checked in KIA - TODO?
	kClueOriginalRequisitionForm           = 128, // Object
	kClueCandyWrapper                      = 129, // Object - UNOBTAINED - Checked in KIA - TODO?
	kClueGordoBlabs                        = 130, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs - TODO probably Audio Recording?
	kClueFlaskOfAbsinthe                   = 131, // Object
	kClueGuzzaAgreesToMeet                 = 132, // UNUSED
	kClueDektoraConfession                 = 133, // Audio Recording - UNOBTAINED - Not checked in KIA - added to many actors DBs - TODO?
	kClueRunciterConfession1               = 134, // Audio Recording - UNOBTAINED - Not checked in KIA - added to many actors DBs - TODO? Why in addition to 280, 281, 282? - Requires Zuben's Motive and Lucy to be Replicant
	kClueRunciterConfession2               = 135, // Audio Recording - UNOBTAINED - Not checked in KIA - added to many actors DBs - TODO? Why in addition to 280, 281, 282?
	kClueLutherLanceInterview              = 136, // Audio Recording
	kClueMoonbus2                          = 137, // Photograph - UNOBTAINED - Not checked in KIA
	kClueMoonbusCloseup                    = 138, // Photograph - UNOBTAINED - Not checked in KIA
	kCluePhoneCallDektora1                 = 139, // Audio Recording - McCoy agrees to leave with Dektora
	kCluePhoneCallDektora2                 = 140, // Audio Recording - McCoy prioritizes Moonbus and Clovis
	kCluePhoneCallLucy1                    = 141, // Audio Recording - Lucy suggests meeting at Crazylegs
	kCluePhoneCallLucy2                    = 142, // Audio Recording - McCoy prioritizes Moonbus and Clovis
	kCluePhoneCallClovis                   = 143, // Audio Recording
	kCluePhoneCallCrystal                  = 144, // Audio Recording
	kCluePowerSource                       = 145, // Object
	kClueBomb                              = 146, // Object - Acquired when McCoy leaves by car (underground) alone
	kClueDNATyrell                         = 147, // Object
	kClueDNASebastian                      = 148, // Object
	kClueDNAChew                           = 149, // Object - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO?
	kClueDNAMoraji                         = 150, // Object - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO?
	kClueDNALutherLance                    = 151, // Object
	kClueDNAMarcus                         = 152, // Object
	kClueGarterSnake                       = 153, // Object - Acquired in Cut Content. Original: Unobtained
	kClueSlug                              = 154, // Object - Acquired in Cut Content. Original: Unobtained
	kClueGoldfish                          = 155, // Object - Acquired in Cut Content. Original: Unobtained
	kClueZubenTalksAboutLucy1              = 156, // Audio Recording - Lucy is Replicant
	kClueZubenTalksAboutLucy2              = 157, // Audio Recording - Lucy is Human
	kClueZubensMotive                      = 158, // Audio Recording
	kClueSightingBulletBob                 = 159, // UNUSED
	kClueSightingClovis                    = 160, // UNUSED
	kClueSightingDektora                   = 161, // UNUSED
	kClueVKDektoraReplicant                = 162, // Audio Recording
	kClueVKDektoraHuman                    = 163, // Audio Recording
	kClueVKBobGorskyReplicant              = 164, // Audio Recording
	kClueVKBobGorskyHuman                  = 165, // Audio Recording
	kClueVKLutherLanceReplicant            = 166, // (Intangible) - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO? (Audio Recording)
	kClueVKLutherLanceHuman                = 167, // (Intangible) - UNOBTAINED - Checked in KIA - TODO? (Audio Recording)
	kClueVKGrigorianReplicant              = 168, // Audio Recording
	kClueVKGrigorianHuman                  = 169, // Audio Recording
	kClueVKIzoReplicant                    = 170, // (Intangible) - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO? (Audio Recording)
	kClueVKIzoHuman                        = 171, // (Intangible) - UNOBTAINED - Checked in KIA - TODO? (Audio Recording)
	kClueVKCrazylegsReplicant              = 172, // (Intangible) - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO? (Audio Recording)
	kClueVKCrazylegsHuman                  = 173, // (Intangible) - UNOBTAINED - Checked in KIA - TODO? (Audio Recording)
	kClueVKRunciterReplicant               = 174, // Audio Recording - Restored in Cut Content - but Runciter cannot be a Replicant, hence intentionally never triggered
	kClueVKRunciterHuman                   = 175, // Audio Recording - Restored in Cut Content
	kClueVKEarlyQReplicant                 = 176, // (Intangible) - UNOBTAINED - Checked in KIA - added to many actors DBs - TODO? (Audio Recording)
	kClueVKEarlyQHuman                     = 177, // (Intangible) - UNOBTAINED - Checked in KIA - TODO? (Audio Recording)
	kClueCrimeSceneNotes                   = 178, // Audio Recording
	kClueGrigorianInterviewA               = 179, // Audio Recording
	kClueGrigorianInterviewB1              = 180, // Audio Recording - When Izo is Replicant
	kClueGrigorianInterviewB2              = 181, // Audio Recording - When Izo is Human
	kClueLabAnalysisGoldChain              = 182, // UNUSED
	kClueSightingZuben                     = 183, // UNUSED
	kClueCrystalRetiredZuben               = 184, // UNUSED
	kClueCrystalRetiredGordo               = 185, // UNUSED
	kClueSightingGordo                     = 186, // UNUSED
	kClueCrystalRetiredIzo                 = 187, // UNUSED
	kClueClovisIncept                      = 188, // UNUSED
	kClueDektoraIncept                     = 189, // UNUSED
	kClueLucyIncept                        = 190, // UNUSED
	kClueGordoIncept                       = 191, // UNUSED
	kClueIzoIncept                         = 192, // UNUSED
	kClueSadikIncept                       = 193, // UNUSED
	kClueZubenIncept                       = 194, // UNUSED
	kClueMcCoyIncept                       = 195, // (Intangible) - UNOBTAINED - Not checked in KIA - added to DBs of Klein, Walls and Gaff
	kClueWarRecordsGordoFrizz              = 196, // UNUSED
	kCluePoliceWeaponUsed                  = 197, // (Intangible) - UNOBTAINED - Not checked in KIA - added to DBs of Klein, Walls and Gaff
	kClueMcCoysWeaponUsedonBob             = 198, // (Intangible) - UNOBTAINED - Not checked in KIA - added to DBs of Klein, Walls and Gaff
	kClueBobRobbed                         = 199, // UNUSED
	kClueBobShotInSelfDefense              = 200, // UNUSED
	kClueBobShotInColdBlood                = 201, // (Intangible) - UNOBTAINED - Not checked in KIA - added to DB of Grigorian
	kClueMcCoyRecoveredHoldensBadge        = 202, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele AI - added to DBs of Klein, Walls and Gaff
	kClueCrystalTestedBulletBob            = 203, // UNUSED
	kClueCrystalRetiredBob                 = 204, // UNUSED
	kClueCrystalTestedCrazylegs            = 205, // UNUSED
	kClueCrystalRetiredCrazylegs           = 206, // UNUSED
	kClueCrystalArrestedCrazylegs          = 207, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actor's DBs
	kClueCrystalTestedRunciter             = 208, // UNUSED
	kClueCrystalRetiredRunciter1           = 209, // UNUSED
	kClueCrystalRetiredRunciter2           = 210, // UNUSED
	kClueSightingMcCoyRuncitersShop        = 211, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs
	kClueMcCoyKilledRunciter1              = 212, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI - added to many actors DBs - see also 230
	kClueMcCoysDescription                 = 213, // (Intangible) - Acquired by Zuben, Gordo - Not checked in KIA - Checked in NR07 - added to many actors DBs
	kClueMcCoyIsABladeRunner               = 214, // (Intangible) - Acquired by Gordo, McCoy, Dektora, Zuben, Sebastian - Not checked in KIA - Checked in Sebastian, Clovis AI and NR07
	kClueMcCoyLetZubenEscape               = 215, // (Intangible) - Acquired by Gaff, Zuben - Not checked in KIA - Checked in Steele, Leary, Clovis AI and MA04
	kClueMcCoyWarnedIzo                    = 216, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI and NR07
	kClueMcCoyHelpedIzoIzoIsAReplicant     = 217, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI and NR07
	kClueMcCoyHelpedDektora                = 218, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI
	kClueMcCoyHelpedLucy                   = 219, // (Intangible) - Acquired by Lucy - Not checked in KIA - Checked in Steele, Clovis, Lucy AI, HF04
	kClueMcCoyHelpedGordo                  = 220, // (Intangible) - Acquired by Gordo - Not checked in KIA - Checked in Steele, Clovis AI
	kClueMcCoyShotGuzza                    = 221, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI
	kClueMcCoyRetiredZuben                 = 222, // (Intangible) - Acquired by Gaff, Gordo - Not checked in KIA - Checked in Steele, Gaff, Gordo, Clovis, Leary AI, MA04
	kClueMcCoyRetiredLucy                  = 223, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI, UG07
	kClueMcCoyRetiredDektora               = 224, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI, UG07
	kClueMcCoyRetiredGordo                 = 225, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Leary AI
	kClueMcCoyRetiredSadik                 = 226, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI
	kClueMcCoyShotZubenInTheBack           = 227, // (Intangible) - Acquired by Zuben - Not checked in KIA - Checked in Steele, Clovis, Leary AI - added to many actors DBs
	kClueMcCoyRetiredLutherLance           = 228, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI
	kClueMcCoyBetrayal                     = 229, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs
	kClueMcCoyKilledRunciter2              = 230, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI - added to many actors DBs - see also 212
	kClueClovisOrdersMcCoysDeath           = 231, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele AI - added to many actors DBs
	kClueEarlyAttemptedToSeduceLucy        = 232, // (Intangible) - UNOBTAINED - Not checked in KIA - added to many actors DBs
	kClueCarWasStolen                      = 233, // UNUSED
	kClueGrigoriansResponse1               = 234, // UNUSED
	kClueGrigoriansResponse2               = 235, // UNUSED
	kClueCrazysInvolvement                 = 236, // Restored content - Object -- Original - (Intangible) - UNOBTAINED - Not checked in KIA - Has weight for Crazylegs
	kClueGrigoriansResources               = 237, // Restored content -- Original -(Intangible) - UNOBTAINED - Not checked in KIA - Checked for Crazylegs dialogue
	kClueMcCoyPulledAGun                   = 238, // UNUSED - TODO: Was this for Crazylegs being offended?
	kClueMcCoyIsStupid                     = 239, // (Intangible) - Obtained by Leary - Not checked in KIA - Checked in Steele, Clovis, Leary AI - added to many actors DBs
	kClueMcCoyIsAnnoying                   = 240, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI - added to many actors DBs
	kClueMcCoyIsKind                       = 241, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis AI - added to many actors DBs
	kClueMcCoyIsInsane                     = 242, // (Intangible) - UNOBTAINED - Not checked in KIA - Checked in Steele, Clovis, Leary AI - added to many actors DBs
	kClueAnimalMurderSuspect               = 243, // Photograph - ESPER hard-copy
	kClueMilitaryBoots                     = 244, // Photograph - ESPER hard-copy
	kClueOuterDressingRoom                 = 245, // Photograph
	kCluePhotoOfMcCoy1                     = 246, // Photograph - ESPER hard-copy
	kCluePhotoOfMcCoy2                     = 247, // Photograph - ESPER hard-copy
	kClueEarlyQAndLucy                     = 248, // Photograph - ESPER hard-copy
	kClueClovisFlowers                     = 249, // Photograph - ESPER hard-copy
	kClueLucyWithDektora                   = 250, // Photograph - ESPER hard-copy
	kClueWomanInAnimoidRow                 = 251, // Photograph - ESPER hard-copy
	kClueScorpions                         = 252, // Photograph - ESPER hard-copy
	kClueStrangeScale2                     = 253, // Photograph - ESPER hard-copy
	kClueChinaBarSecurityCamera            = 254, // Photograph - ESPER hard-copy
	kClueIzo                               = 255, // Photograph - ESPER hard-copy
	kClueGuzza                             = 256, // Photograph - ESPER hard-copy
	kClueChinaBarSecurityDisc              = 257, // Video Clip
	kClueScorpionbox                       = 258, // Photograph - ESPER hard-copy
	kClueTyrellSecurityPhoto               = 259, // Photograph
	kClueChinaBar                          = 260, // Photograph
	kCluePlasticExplosive                  = 261, // Photograph - ESPER hard-copy
	kClueDogCollar2                        = 262, // Photograph - ESPER hard-copy
	kClueKingstonKitchenBox2               = 263, // Photograph - ESPER hard-copy
	kClueCrystalsCigarette                 = 264, // Object
	kClueSpinnerKeys                       = 265, // Object
	kClueAct2Ended                         = 266, // (Intangible) - Acquired by McCoy - Not checked in KIA - Identity Reveal for Clovis and Sadik
	kClueAct3Ended                         = 267, // UNUSED
	kClueAct4Ended                         = 268, // UNUSED
	kClueExpertBomber                      = 269, // Audio Recording - When Sadik is Replicant
	kClueAmateurBomber                     = 270, // Audio Recording - When Sadik is Human
	kClueVKLucyReplicant                   = 271, // Audio Recording
	kClueVKLucyHuman                       = 272, // Audio Recording
	kClueLucyInterview                     = 273, // Audio Recording
	kClueMoonbusReflection                 = 274, // Photograph - ESPER hard-copy
	kClueMcCoyAtMoonbus                    = 275, // Photograph - ESPER hard-copy
	kClueClovisAtMoonbus                   = 276, // Photograph - ESPER hard-copy
	kClueSadikAtMoonbus                    = 277, // Photograph - ESPER hard-copy
	kClueRachaelInterview                  = 278, // Audio Recording
	kClueTyrellInterview                   = 279, // Audio Recording
	kClueRuncitersConfession1              = 280, // Audio Recording
	kClueRuncitersConfession2              = 281, // UNUSED
	kClueRuncitersConfession3              = 282, // UNUSED
	kClueEarlyInterviewA                   = 283, // Audio Recording - UNOBTAINED - Not checked in KIA
	kClueEarlyInterviewB1                  = 284, // Audio Recording - UNOBTAINED - Not checked in KIA
	kClueEarlyInterviewB2                  = 285, // Audio Recording - UNOBTAINED - Not checked in KIA
	kClueCrazylegsInterview3               = 286, // Audio Recording - UNOBTAINED - Not checked in KIA
	kClueCrazylegGrovels                   = 287  // Audio Recording - UNOBTAINED - Not checked in KIA
};

enum ClueTypes {
	kClueTypeIntangible     = -1,
	kClueTypePhotograph     =  0,
	kClueTypeVideoClip      =  1,
	kClueTypeAudioRecording =  2,
	kClueTypeObject         =  3
};

enum Suspects {
	kSuspectSadik           = 0,
	kSuspectClovis          = 1,
	kSuspectZuben           = 2,
	kSuspectLucy            = 3,
	kSuspectDektora         = 4,
	kSuspectGordo           = 5,
	kSuspectIzo             = 6,
	kSuspectMcCoy           = 7,
	kSuspectGuzza           = 8
};

enum Crimes {
	kCrimeAnimalMurder      = 0,
	kCrimeEisendullerMurder = 1,
	kCrimeArmsDealing       = 2,
	kCrimeMorajiMurder      = 3,
	kCrimeBradburyAssault   = 4,
	kCrimeFactoryBombing    = 5,
	kCrimeBobMurder         = 6, // Unused
	kCrimeRunciterMurder    = 7, // Unused
	kCrimeMoonbusHijacking  = 8
};

enum SpinnerDestinations {
	kSpinnerDestinationPoliceStation    = 0,
	kSpinnerDestinationMcCoysApartment  = 1,
	kSpinnerDestinationRuncitersAnimals = 2,
	kSpinnerDestinationChinatown        = 3,
	kSpinnerDestinationAnimoidRow       = 4,
	kSpinnerDestinationTyrellBuilding   = 5,
	kSpinnerDestinationDNARow           = 6,
	kSpinnerDestinationBradburyBuilding = 7,
	kSpinnerDestinationNightclubRow     = 8,
	kSpinnerDestinationHysteriaHall     = 9
};

enum Flags {
	kFlagNotUsed0                             =   0, // is never checked
	kFlagRC02Entered                          =   1,
	kFlagGamePlayedInRestoredContentMode      =   2, // Re-purposed. Original: 2 is never used
	kFlagRC01GotOfficersStatement             =   3,
	kFlagRC02Left                             =   4,
	kFlagMcCoyCommentsOnMurderedAnimals       =   5, // Re-purposed. Original: 5 is never used
	kFlagRC02RunciterInterview                =   6,
	kFlagCT01TalkToHowieAboutDeadZuben        =   7, // Re-purposed. Original: 7 is never used
	kFlagRC01toRC02                           =   8,
	kFlagRC02toRC01                           =   9,
	kFlagDR01toDR04                           =  10,
	kFlagDR04toDR01                           =  11,
	kFlagPS07KleinTalkShellCasings            =  12,
	kFlagPS07KleinTalkOfficersStatement       =  13,
	kFlagPS10toPS11                           =  14,
	kFlagPS11toPS10                           =  15,
	kFlagPS11toPS12                           =  16,
	kFlagPS12toPS11                           =  17, // is never checked
	kFlagPS12toPS13                           =  18,
	kFlagPS13toPS12                           =  19,
	kFlagRC02RunciterVKChosen                 =  20, // Re-purposed. Original: 20 is never used
	kFlagPS13toPS05                           =  21,
	kFlagPS02toPS05                           =  22,
	kFlagPS06toPS05                           =  23,
	kFlagIntroPlayed                          =  24,
	kFlagCT01Visited                          =  25,
	kFlagCT01McCoyTalkedToHowieLee            =  26,
	kFlagCT01Evidence1Linked                  =  27,
	kFlagCT01Evidence2Linked                  =  28,
	kFlagCT01ZubenLeft                        =  29,
	kFlagCT01TalkToHowieAfterZubenMissing     =  30, // New, it is now set/unset to restore cut content there. Original: is never set
	kFlagCT01ZubenGone                        =  31,
	kFlagCT01GordoTalk                        =  32,
	kFlagMA02toMA06                           =  33,
	kFlagMA06ToMA02                           =  34,
	kFlagMA02ToMA04                           =  35,
	kFlagMA04ToMA02                           =  36,
	kFlagMA01toMA06                           =  37,
	kFlagMA06toMA01                           =  38,
	kFlagPS04toPS03                           =  39,
	kFlagZubenRetired                         =  40,
	kFlagZubenSpared                          =  41,
	kFlagPS03toPS04                           =  42,
	kFlagPS15Entered                          =  43,
	kFlagIzoIsReplicant                       =  44,
	kFlagGordoIsReplicant                     =  45,
	kFlagLucyIsReplicant                      =  46,
	kFlagDektoraIsReplicant                   =  47,
	kFlagSadikIsReplicant                     =  48,
	kFlagPS09GrigorianTalk1                   =  49,
	kFlagPS09GrigorianVKChosen                =  50, // Re-purposed. Original: 50 is never used
	kFlagGrigorianDislikeMcCoy                =  51,
	kFlagRC02McCoyCommentsOnVideoScreens      =  52, // Re-purposed. Original: 52 is never used
	kFlagPS09GrigorianDialogue                =  53,
	kFlagPS09GrigorianTalk2                   =  54,
	kFlagGrigorianArrested                    =  55,
	kFlagPS09CrazylegsGrigorianTalk           =  56,
	kFlagMA07toMA06                           =  57,
	kFlagMA06toMA07                           =  58,
	kFlagCT02ZubenTalk                        =  59,
	kFlagMA02MaggieIntroduced                 =  60,
	kFlagChapter1Ended                        =  61,
	kFlagMA04toMA05                           =  62,
	kFlagMA05toMA04                           =  63,
	kFlagGaffApproachedMcCoyAboutZuben        =  64,
	kFlagMcCoyCommentsOnTB05Monitors          =  65, // Re-purposed. Original: 65 is never used
	// 66 is never used
	// 67 is never used
	kFlagCT02toCT01                           =  68,
	kFlagCT02toCT03                           =  69,
	kFlagCT03toCT02                           =  70,
	kFlagCT03toCT01                           =  71,
	kFlagCT03toCT04                           =  72,
	kFlagCT04toCT03                           =  73,
	kFlagCT04toCT05                           =  74,
	kFlagCT05toCT04                           =  75,
	kFlagCT05toCT12                           =  76,
	kFlagCT05toCT06                           =  77,
	kFlagCT06toCT05                           =  78,
	kFlagCT06toCT08                           =  79,
	kFlagCT08toCT06                           =  80, // is never checked
	kFlagCT08toCT09                           =  81,
	kFlagCT09toCT10                           =  82, // is never checked
	kFlagCT09toCT11                           =  83, // is never checked
	kFlagCT09toCT08                           =  84, // is never checked
	kFlagCT10toCT09                           =  85,
	kFlagCT11toCT12                           =  86,
	// 87 is never used
	kFlagCT12toCT01                           =  88,
	kFlagCT12toCT03                           =  89,
	kFlagCT12toCT05                           =  90,
	kFlagCT12toCT11                           =  91,
	// 92 is never used
	// 93 is never used
	kFlagCT05WarehouseOpen                    =  94,
	kFlagTB05toTB02                           =  95,
	kFlagTB02toTB05                           =  96, // is never checked
	kFlagTB05toTB06                           =  97, // is never checked
	kFlagTB06toTB05                           =  98,
	kFlagTB05MonitorIntro                     =  99,
	kFlagTB05MonitorUnlockAttempt             = 100,
	kFlagTB05MonitorDone                      = 101,
	kFlagTB06Visited                          = 102,
	kFlagNotUsed103                           = 103, // is never set
	kFlagPS07KleinTalkPaintTransfer           = 104,
	kFlagPS07KleinTalkChromeDebris            = 105,
	kFlagHC04IsabellaTalk                     = 106,
	kFlagHC04toRC03                           = 107,
	kFlagRC03toHC04                           = 108,
	kFlagHC04toHC02                           = 109,
	kFlagHC02toHC04                           = 110,
	kFlagPS07KleinTalkClues                   = 111,
	kFlagMcCoyCommentsOnAnimoids              = 112, // Re-purposed. Original: 112 is never used
	kFlagScorpionsInAR02                      = 113, // Re-purposed. Original: 113 is never used
	kFlagRC03toRC01                           = 114,
	kFlagRC01toRC03                           = 115,
	kFlagRC03toAR02                           = 116,
	kFlagAR02toRC03                           = 117,
	kFlagRC03toUG01                           = 118,
	kFlagUG01toRC03                           = 119,
	kFlagRC03toRC04                           = 120, // is never checked
	kFlagRC04toRC03                           = 121,
	// 122 is never used
	kFlagCT01toCT12                           = 123,
	// 122 is never used
	kFlagMcCoyHasShellCasings                 = 125,
	kFlagMcCoyHasOfficersStatement            = 126,
	kFlagMcCoyHasPaintTransfer                = 127,
	kFlagMcCoyHasChromeDebris                 = 128,
	kFlagCT01ZubenMcCoyCheck                  = 129,
	kFlagPS02toPS01                           = 130,
	kFlagPS02toPS07                           = 131,
	kFlagPS02toPS03                           = 132,
	kFlagPS02toPS09                           = 133,
	kFlagPS03toPS14                           = 134,
	kFlagPS14toPS03                           = 135,
	kFlagPS05toPS06                           = 136,
	kFlagCT04HomelessTalk                     = 137,
	kFlagPS07KleinInsulted                    = 138,
	kFlagMcCoyTalkedToBulletBobAboutHasan     = 139, // Re-purposed. Original: 139 is never used
	// 140 is never used
	kFlagRC51Available                        = 141,
	kFlagNotUsed142                           = 142, // is never checked
	// 143 is never used
	kFlagCT07toCT06                           = 144,
	kFlagCT06ZubenPhoto                       = 145,
	kFlagChapter1Ending                       = 146,
	kFlagRC51ChopstickWrapperTaken            = 147,
	kFlagRC51CandyTaken                       = 148,
	kFlagRC51ToyDogTaken                      = 149,
	kFlagNotUsed150                           = 150, // has no use
	kFlagRC03UnlockedToUG01                   = 151,
	kFlagUG15toUG16a                          = 152,
	kFlagUG16toUG15a                          = 153,
	kFlagTB02toTB03                           = 154, // is never checked
	kFlagTB03toTB02                           = 155,
	kFlagPS07KleinInsultedTalk                = 156,
	kFlagSergeantWallsMazeInstructions        = 157, // Re-purposed. Original: 157 is never used
	kFlagSergeantWallsBuzzInDone              = 158,
	kFlagPS04GuzzaTalkZubenRetired            = 159,
	kFlagPS04GuzzaTalkZubenEscaped            = 160,
	kFlagPS04GuzzaTalkIsFurious               = 161,
	kFlagPS04GuzzaTalkDumpToMainframe         = 162,
	kFlagRC01ChromeDebrisTaken                = 163,
	kFlagIzoArrested                          = 164,
	kFlagCrazylegsArrested                    = 165,
	kFlagPS09CrazylegsTalk1                   = 166,
	kFlagPS09IzoTalk1                         = 167,
	kFlagPS09IzoTalk2                         = 168,
	kFlagCT04HomelessKilledByMcCoy            = 169,
	kFlagCT04HomelessBodyInDumpster           = 170,
	kFlagCT04HomelessBodyFound                = 171,
	kFlagCT04HomelessBodyThrownAway           = 172,
	kFlagCT04HomelessBodyInDumpsterNotChecked = 173, // is never checked
	kFlagCT04LicensePlaceFound                = 174,
	kFlagPS09CrazylegsTalk2                   = 175,
	kFlagMcCoyInChinaTown                     = 176,
	kFlagMcCoyInDNARow                        = 177,
	kFlagMcCoyInPoliceStation                 = 178,
	kFlagMcCoyInMcCoyApartment                = 179,
	kFlagMcCoyInAnimoidRow                    = 180,
	kFlagMcCoyInNightclubRow                  = 181,
	kFlagMcCoyInRunciters                     = 182,
	kFlagSteeleInRunciters                    = 183,
	kFlagSteeleInChinaTown                    = 184,
	kFlagSteeleInPoliceStation                = 185,
	kFlagRC01PoliceDone                       = 186,
	kFlagRC02RunciterTalk1                    = 187,
	// 188 is never used
	// 189 is never used
	kFlagRC02ShellCasingsTaken                = 190,
	// 191 is never used
	kFlagCT01BoughtHowieLeeFood               = 192,
	// 193 is never used
	// 194 is never used
	// 195 is never used
	kFlagKleinAnimation1                      = 196,
	kFlagKleinAnimation2                      = 197,
	kFlagKleinAnimation3                      = 198,
	kFlagOfficerLearyTakingNotes              = 199,
	// 200 is never used
	// 201 is never used
	// 202 is never used
	// 203 is never used
	kFlagPS15toPS05                           = 204,
	// 205 is never used
	kFlagSergeantWallsBuzzInRequest           = 206, // is never set
	// 207 is never used
	// 208 is never used
	// 209 is never used
	kFlagCT02ZubenFled                        = 210,
	kFlagPS09Entered                          = 211,
	kFlagNotUsed212                           = 212, // is never checked
	// 213 is never used
	// 214 is never used
	// 215 is never used
	kFlagBB09toBB10a                          = 216,
	// 217 is never used
	kFlagBB08toBB09                           = 218,
	kFlagBB09toBB08                           = 219,
	kFlagBB09toBB10b                          = 220,
	kFlagBB10toBB09                           = 221,
	kFlagBB10toBB11                           = 222, // is never checked
	kFlagBB11toBB10                           = 223,
	kFlagDR01toDR02                           = 224,
	kFlagDR02toDR01                           = 225,
	kFlagDR02toDR03                           = 226,
	kFlagDR03toDR02                           = 227,
	kFlagDR04toDR05                           = 228, // is never checked
	kFlagDR05toDR04                           = 229,
	kFlagDR04toDR06                           = 230,
	kFlagDR06toDR04                           = 231,
	kFlagNotUsed232                           = 232,
	// 233 is never used
	kFlagCT02toCT01walk                       = 234,
	// 235 is never used
	kFlagMcCoyAnimation1                      = 236,
	// 237 is never used
	// 238 is never used
	kFlagHowieLeeAnimation1                   = 239,
	// 240 is never used
	// 241 is never used
	// 242 is never used
	// 243 is never used
	// 244 is never used
	// 245 is never used
	kFlagWrongInvestigation                   = 246, // Re-purposed. Original: 246 is never used
	kFlagArrivedFromSpinner1                  = 247,
	kFlagSpinnerAtCT01                        = 248,
	kFlagSpinnerAtRC01                        = 249,
	kFlagSpinnerAtMA01                        = 250,
	kFlagSpinnerAtPS01                        = 251,
	kFlagSpinnerAtAR01                        = 252,
	kFlagSpinnerAtDR01                        = 253,
	kFlagSpinnerAtBB01                        = 254,
	kFlagSpinnerAtNR01                        = 255,
	kFlagSpinnerAtHF01                        = 256,
	kFlagMcCoyInHysteriaHall                  = 257,
	kFlagMcCoyInBradburyBuilding              = 258,
	kFlagMcCoyInUnderground                   = 259,
	// 260 is never used
	kFlagMcCoyInTyrellBuilding                = 261,
	kFlagBB01toBB02                           = 262,
	kFlagBB02toBB01                           = 263,
	kFlagBB01toDR02                           = 264,
	kFlagDR02toBB01                           = 265,
	kFlagDR05JustExploded                     = 266,
	kFlagDR03ChewTalk1                        = 267,
	kFlagDR06JesterActive                     = 268,
	kFlagDR05BombActivated                    = 269,
	kFlagDR05ChainShot                        = 270,
	kFlagDR05BombWillExplode                  = 271,
	kFlagDR05BombExploded                     = 272,
	kFlagArrivedFromSpinner2                  = 273,
	kFlagDR05MorajiTalk                       = 274,
	// 275 is never used
	kFlagNotUsed276                           = 276, // is never set
	// 277 is never used
	kFlagDR06KeyboardChecked                  = 278,
	// 279 is never used
	kFlagDR06VidphoneChecked                  = 280,
	kFlagBB03toBB02                           = 281,
	kFlagBB02toBB03                           = 282, // is never checked
	kFlagBB03toBB04                           = 283,
	kFlagBB04toBB03                           = 284,
	kFlagBB03toBB05                           = 285, // is never checked
	kFlagBB05toBB03                           = 286,
	kFlagRC04Entered                          = 287,
	// 288 is never used
	kFlagRC04McCoyShotBob                     = 289,
	kFlagRC04BobTalk1                         = 290,
	// 291 is never used
	kFlagRC04BobTalk2                         = 292,
	kFlagCT02PotTipped                        = 293,
	kFlagCT12GaffSpinner                      = 294,
	kFlagRC04BobShootMcCoy                    = 295,
	kFlagRC04McCoyCombatMode                  = 296,
	kFlagBB05toBB06                           = 297,
	kFlagBB06toBB05                           = 298,
	kFlagBB05toBB07                           = 299,
	kFlagBB07toBB05                           = 300,
	kFlagBB05toBB12                           = 301, // is never checked
	kFlagBB12toBB05                           = 302,
	kFlagRC04McCoyWarned                      = 303,
	kFlagCT11toCT09                           = 304, // is never checked
	kFlagRC04BobTalkAmmo                      = 305,
	kFlagNotUsed306                           = 306, // is never set
	kFlagSpinnerAtTB02                        = 307,
	kFlagHF01toHF02                           = 308,
	kFlagHF02toHF01                           = 309,
	kFlagHF01toHF03                           = 310,
	kFlagHF03toHF01                           = 311,
	kFlagHF01toHF05                           = 312,
	kFlagHF05toHF01                           = 313,
	kFlagUG01toUG02                           = 314,
	kFlagUG02toUG01                           = 315,
	kFlagUG01toUG10                           = 316,
	kFlagUG10toUG01                           = 317,
	kFlagUG02toHC03                           = 318,
	kFlagHC03toUG02                           = 319,
	kFlagAR01toAR02                           = 320,
	kFlagAR02toAR01                           = 321,
	kFlagAR01toHC01                           = 322,
	kFlagHC01toAR01                           = 323,
	kFlagUG01SteamOff                         = 324,
	kFlagCT04BodyDumped                       = 325,
	kFlagBB01Available                        = 326,
	// 327 is never used
	kFlagAR01FishDealerTalk                   = 328,
	kFlagAR02InsectDealerInterviewed          = 329,
	kFlagAR02HassanTalk                       = 330,
	kFlagAR02ScorpionsChecked                 = 331,
	kFlagBB02toBB04                           = 332,
	kFlagBB04toBB02                           = 333,
	kFlagUG03toUG04                           = 334, // is never checked
	kFlagUG04toUG03                           = 335,
	kFlagUG03toUG10                           = 336,
	kFlagUG10toUG03                           = 337,
	kFlagUG04toUG05                           = 338, // is never checked
	kFlagUG05toUG04                           = 339,
	kFlagUG04toUG06                           = 340,
	kFlagUG06toUG04                           = 341,
	kFlagUG06toNR01                           = 342,
	kFlagNR01toUG06                           = 343,
	kFlagUG12toUG14                           = 344,
	kFlagUG14toUG12                           = 345, // is never checked
	kFlagUG14toUG10                           = 346,
	kFlagUG10toUG14                           = 347, // is never checked
	kFlagUG14toUG19                           = 348,
	kFlagUG19toUG14                           = 349,
	kFlagUG15toUG13                           = 350,
	kFlagUG13toUG15                           = 351,
	kFlagUG15toUG17                           = 352,
	kFlagUG17toUG15                           = 353,
	kFlagUG15toUG16b                          = 354, // is never checked
	kFlagUG16toUG15b                          = 355,
	kFlagUG19toMA07                           = 356,
	kFlagMA07toUG19                           = 357,
	kFlagHF07toHF05                           = 358,
	kFlagHF05toHF07                           = 359,
	kFlagHF07toUG06                           = 360,
	kFlagUG06toHF07                           = 361,
	kFlagBB07toBB06                           = 362,
	kFlagBB06toBB07                           = 363,
	kFlagBB07toBB12                           = 364,
	kFlagBB12toBB07                           = 365,
	kFlagAR02InsectDealerTalk                 = 366,
	kFlagAR02StungByScorpion                  = 367,
	kFlagHF07Hole                             = 368,
	kFlagHF05Hole                             = 369,
	kFlagNotUsed370                           = 370, // is never checked
	// 371 is never used
	// 372 is never used
	kFlagKP02Available                        = 373,
	kFlagAR02DektoraBoughtScorpions           = 374,
	kFlagBB11SadikPunchedMcCoy                = 375,
	// 376 is never used
	kFlagHF01MurrayMiaIntro                   = 377,
	kFlagDirectorsCut                         = 378, // Designer's Cut (KIA options) flag!
	kFlagCT08toCT51                           = 379, // is never checked
	kFlagCT51toCT08                           = 380,
	// 381 is never used
	kFlagHF01MurrayMiaTalk                    = 382,
	kFlagNotUsed383                           = 383,
	kFlagHC01toHC02                           = 384,
	kFlagHC02toHC01                           = 385,
	kFlagHC01toHC03                           = 386, // is never checked
	kFlagHC03toHC01                           = 387,
	kFlagHC03TrapDoorOpen                     = 388,
	// 389 is never used
	// 390 is never used
	kFlagBB09SadikRun                         = 391,
	kFlagRC01McCoyAndOfficerLearyTalking      = 392,
	kFlagBB06toBB51                           = 393, // is never checked
	kFlagBB51toBB06a                          = 394,
	kFlagBB51toBB06b                          = 395,
	kFlagBB07ElectricityOn                    = 396,
	kFlagRC01McCoyAndOfficerLearyArtMetaphor  = 397,
	kFlagBB07PrinterChecked                   = 398,
	kFlagGeneralDollShot                      = 399,
	kFlagHC01IzoTalk1                         = 400,
	kFlagHC01IzoTalk2                         = 401,
	kFlagHC03Available                        = 402,
	kFlagHC03CageOpen                         = 403,
	kFlagHC02HawkersBarkeepIntroduction       = 404,
	kFlagHC02HawkersBarkeepBraceletTalk       = 405,
	kFlagUnused406                            = 406, // is never checked
	kFlagUnused407                            = 407, // is never checked
	kFlagMcCoyCommentsOnStatues               = 408, // Re-purposed. Original: 408 is never used
	kFlagMA01GaffApproachMcCoy                = 409,
	kFlagBB06AndroidDestroyed                 = 410,
	kFlagKP02toUG12                           = 411,
	kFlagUG12toKP02                           = 412, // is never checked
	kFlagKP02toKP01                           = 413, // is never checked
	kFlagKP01toKP02                           = 414,
	kFlagKP01toKP04                           = 415, // is never checked
	kFlagKP04toKP01                           = 416,
	kFlagKP01toKP03                           = 417,
	kFlagKP03toKP01                           = 418,
	kFlagKP03toKP05                           = 419,
	kFlagKP05toKP03                           = 420,
	kFlagKP03BombActive                       = 421,
	kFlagKP03BombExploded                     = 422,
	kFlagUG07toUG10                           = 423,
	kFlagUG10toUG07                           = 424, // is never checked
	kFlagUG07toUG08                           = 425, // is never checked
	kFlagUG08toUG07                           = 426,
	kFlagUG07toUG09                           = 427, // is never checked
	kFlagUG09ToUG07                           = 428,
	kFlagUG08toUG13                           = 429,
	kFlagUG13toUG08                           = 430,
	kFlagUG08ElevatorUp                       = 431,
	kFlagUG09toCT12                           = 432,
	kFlagCT12ToUG09                           = 433,
	kFlagUG13toUG18                           = 434, // is never checked
	kFlagUG18toUG13                           = 435,
	kFlagUG13CallElevator                     = 436,
	kFlagNR04toNR03                           = 437,
	kFlagNR03toNR04                           = 438,
	kFlagNR06toNR08                           = 439,
	kFlagNR08toNR06                           = 440, // is never checked
	kFlagNR06toNR07                           = 441,
	kFlagNR07toNR06                           = 442,
	kFlagGenericWalkerWaiting                 = 443,
	kFlagIzoShot                              = 444,
	// 445 is never used
	// 446 is never used
	kFlagTB03toUG17                           = 447,
	kFlagUG17toTB03                           = 448,
	kFlagUG02WeaponsChecked                   = 449,
	kFlagTB02ElevatorToTB05                   = 450,
	kFlagTB05Entered                          = 451,
	// 452 is never used
	kFlagTB02GuardTalk1                       = 453,
	// 454 is never used
	kFlagTB02GuardTalk2                       = 455,
	kFlagTB02SteeleTalk                       = 456,
	kFlagTB02SteeleEnter                      = 457,
	// 458 is never used
	// 459 is never used
	kFlagSteeleWalkingAround                  = 460,
	kFlagMaggieHasBomb                        = 461,
	kFlagGuzzaIsMovingAround                  = 462,
	kFlagHC01GuzzaWalk                        = 463,
	kFlagHC01GuzzaPrepare                     = 464,
	kFlagMcCoyArrested                        = 465,
	kFlagBB10Shelf1Available                  = 466,
	kFlagBB10Shelf2Available                  = 467,
	kFlagBB10Shelf3Available                  = 468,
	kFlagBB10Shelf4Available                  = 469,
	kFlagBB10Shelf5Available                  = 470,
	kFlagGaffChapter2Started                  = 471,
	// 472 is never used
	// 473 is never used
	kFlagUG10GateOpen                         = 474,
	kFlagNR09toNR10                           = 475,
	kFlagNR10toNR09                           = 476,
	kFlagNR11toNR10                           = 477, // is never checked
	kFlagMcCoyAtPS03                          = 478, // has no use
	kFlagMcCoyInHawkersCircle                 = 479,
	// 480 is never used
	// 481 is never used
	kFlagSteeleSmoking                        = 482,
	kFlagTB06Introduction                     = 483,
	kFlagKP03BombDisarmed                     = 484,
	kFlagTB06Photographer                     = 485,
	kFlagDNARowAvailable                      = 486,
	kFlagKIAPrivacyAddon                      = 487,
	// 488 is never used
	kFlagDektoraChapter2Started               = 489,
	kFlagEarlyQStartedChapter1                = 490,
	kFlagEarlyQStartedChapter2                = 491,
	kFlagCT04HomelessTrashFinish              = 492,
	kFlagBB02ElevatorDown                     = 493,
	kFlagBB02Entered                          = 494,
	kFlagBB05Entered                          = 495,
	kFlagBB08Entered                          = 496,
	kFlagBB12Entered                          = 497,
	kFlagUG02FromUG01                         = 498,
	kFlagUG02Interactive                      = 499,
	// 500 is never used
	// 501 is never used
	// 502 is never used
	// 503 is never used
	kFlagAR02DektoraWillBuyScorpions          = 504,
	kFlagDR03ChewTalkExplosion                = 505,
	kFlagBB08toBB12                           = 506,
	kFlagBB12toBB08                           = 507, // is never checked
	kFlagNR07Entered                          = 508,
	kFlagBB11SadikFight                       = 509,
	kFlagNotUsed510                           = 510, // is never set
	kFlagDR05ExplodedEntered                  = 511,
	// 512 is never used
	// 513 is never used
	// 514 is never used
	kFlagDR05ViewExplosion                    = 515,
	kFlagCT07ZubenAttack                      = 516,
	// 517 is never used
	// 518 is never used
	kFlagTB06DogCollarTaken                   = 519,
	kFlagTB06KitchenBoxTaken                  = 520,
	kFlagHC03TrapDoorOpened                   = 521,
	kFlagUG05TalkAboutTunnel                  = 522,
	kFlagMutantsActive                        = 523,
	kFlagUG06Chapter4Started                  = 524,
	kFlagCT10Entered                          = 525,
	// 526 is never used
	kFlagHF02toHF03                           = 527,
	kFlagHF03toHF02                           = 528,
	kFlagHF05toHF06                           = 529, // is never checked
	kFlagHF06toHF05                           = 530,
	kFlagCT11toDR01                           = 531,
	kFlagNR01toNR02                           = 532,
	kFlagNR02toNR01                           = 533,
	kFlagNR03toNR01                           = 534,
	kFlagNR01toNR03                           = 535,
	kFlagNR03toNR05                           = 536,
	kFlagNR05toNR03                           = 537,
	kFlagCT09Entered                          = 538,
	kFlagCT09LeonInterrupted                  = 539,
	kFlagCT09DeskClerkTalk                    = 540,
	// 541 is never used
	kFlagClovisChapter4Started                = 542,
	kFlagGordoTalk1                           = 543,
	kFlagGordoTalk2                           = 544,
	kFlagNotUsed545                           = 545, // is never set
	kFlagNR05toNR08                           = 546,
	kFlagNR08toNR05                           = 547,
	kFlagDR06MannequinHeadOpen                = 548,
	kFlagTB03Entered                          = 549,
	kFlagMcCoyTiedDown                        = 550,
	kFlagUG16toDR06                           = 551, // is never checked
	kFlagDR06toUG16                           = 552,
	kFlagUG13Entered                          = 553,
	kFlagUG13HomelessTalk1                    = 554,
	// 555 is never used
	kFlagUG16LutherLanceTalk1                 = 556,
	kFlagNotUsed557                           = 557, // is never checked
	kFlagDR01toCT11                           = 558,
	kFlagHF06SteelInterruption                = 559,
	kFlagLutherLanceIsReplicant               = 560,
	kFlagNR02GordoLeaveLighter                = 561,
	kFlagHF05CrazyLegsTalk1                   = 562,
	kFlagHF05CrazyLegsTalk2                   = 563,
	kFlagEarlyQStartedChapter3                = 564,
	kFlagNotUsed565                           = 565, // has no use
	kFlagHF03toHF04                           = 566, // is never checked
	kFlagHF04toHF03                           = 567,
	kFlagUG16ComputerOff                      = 568,
	kFlagNR04EarlyQWalkedIn                   = 569,
	// 570 is never used
	// 571 is never used
	// 572 is never used
	kFlagNR03Entered                          = 573,
	kFlagKP04toKP05                           = 574,
	kFlagKP05toKP04                           = 575,
	kFlagKP05toKP06                           = 576,
	kFlagKP06toKP05                           = 577, // has no use
	kFlagKP06toKP07                           = 578,
	kFlagKP07toKP06                           = 579,
	// 580 is never used
	// 581 is never used
	kFlagKP07BusActive                        = 582, // is never set
	// 583 is never used
	kFlagHF04DoorsClosed                      = 584,
	kFlagHF04CloseDoors                       = 585,
	kFlagHF04OpenDoors                        = 586,
	kFlagUG15LutherLanceStartedDying          = 587,
	kFlagNR05BartenderTalk1                   = 588,
	kFlagNR05BartenderTalk2                   = 589,
	kFlagNR05EarlyQTalk                       = 590,
	kFlagDektoraRanAway                       = 591,
	kFlagGordoRanAway                         = 592,
	kFlagLucyRanAway                          = 593,
	kFlagNR02GordoJumpDown                    = 594,
	kFlagLutherLanceAreDead                   = 595,
	kFlagUG16PulledGun                        = 596,
	kFlagUG16FolderFound                      = 597,
	kFlagUG07ClovisCaughtMcCoy                = 598,
	kFlagKIAPrivacyAddonIntro                 = 599,
	kFlagUG16LutherLanceTalkReplicants        = 600,
	kFlagUG16LutherLanceTalkHumans            = 601,
	// 602 is never used
	kFlagSteeleAimingAtGordo                  = 603,
	kFlagNR03McCoyThrownOut                   = 604,
	kFlagNR04DiscFound                        = 605,
	kFlagNR04EarlyQStungByScorpions           = 606,
	kFlagMcCoyRetiredHuman                    = 607,
	kFlagTB07toTB02                           = 608,
	kFlagNR04McCoyAimedAtEarlyQ               = 609,
	kFlagUG08Entered                          = 610,
	kFlagNR03HanoiTalk                        = 611,
	kFlagTB07RachaelTalk                      = 612,
	kFlagHF03LucyTalk                         = 613,
	kFlagNR08toNR09                           = 614,
	kFlagNR09toNR08                           = 615,
	kFlagMcCoyCapturedByHolloway              = 616,
	kFlagSpinnerMissing                       = 617,
	// 618 is never used
	// 619 is never used
	kFlagNR08Available                        = 620,
	// 621 is never used
	kFlagNR08TouchedDektora                   = 622,
	kFlagUG07Empty                            = 623,
	// 624 is never used
	kFlagTB07TyrellMeeting                    = 625,
	// 626 is never used
	kFlagNR01McCoyIsDrugged                   = 627,
	// 628 is never used
	kFlagUnpauseGenWalkers                    = 629,
	kFlagMutantsPaused                        = 630,
	kFlagRatWalkingAround                     = 631,
	kFlagNR01DektoraFall                      = 632,
	kFlagNR11DektoraBurning                   = 633,
	kFlagNR11BurnedUp                         = 634,
	kFlagNR11SteeleShoot                      = 635,
	kFlagNR08Faded                            = 636,
	kFlagMcCoyCommentsOnOldProjector          = 637, // Re-purposed. Original: 637 is never used
	kFlagNR07McCoyIsCop                       = 638,
	kFlagMcCoyCommentsOnEyeOfEyeworks         = 639, // Re-purposed. Original: 639 is never used
	kFlagNR10CameraDestroyed                  = 640,
	kFlagNR10toNR11                           = 641, // is never checked
	kFlagNR10McCoyBlinded                     = 642,
	kFlagSteeleKnowsBulletBobIsDead           = 643,
	kFlagNotUsed644                           = 644, // is never checked
	kFlagCT11DogWrapperTaken                  = 645,
	kFlagSteeleDead                           = 646, // is never checked
	kFlagMA04McCoySleeping                    = 647,
	kFlagMA07GaffTalk                         = 648,
	kFlagMA04PhoneMessageFromClovis           = 649,
	kFlagMA04PhoneMessageFromLucy             = 650,
	kFlagNR08McCoyWatchingShow                = 651,
	kFlagCrazylegsArrestedTalk                = 652,
	kFlagMcCoyIsHelpingReplicants             = 653,
	kFlagMA02Chapter5Started                  = 654,
	kFlagMA02RajifTalk                        = 655,
	kFlagUG02RadiationGogglesTaken            = 656,
	kFlagNotUsed657                           = 657, // is never set
	kFlagKP07Entered                          = 658,
	kFlagNR11BreakWindow                      = 659,
	kFlagDNARowAvailableTalk                  = 660,
	kFlagTB07ShadeDown                        = 661, // is never set
	kFlagHF01TalkToLovedOne                   = 662,
	kFlagHF05PoliceArrived                    = 663,
	kFlagUG07PoliceLeave                      = 664,
	kFlagUG19Available                        = 665,
	kFlagMcCoyFreedOfAccusations              = 666,
	kFlagCT11GrigorianNotePlaced              = 667, // Re-purposed. Original: 667 is never used
	kFlagUG13OriginalRequisitionFormPlaced    = 668, // Re-purposed. Original: 668 is never used
	kFlagKP02DispatchOnToxicKipple            = 669, // Re-purposed. Original: 669 is never used
	kFlagCallWithGuzza                        = 670,
	kFlagUG18GuzzaScene                       = 671,
	kFlagMA07toPS14                           = 672,
	kFlagPS14toMA07                           = 673,
	kFlagKP01Entered                          = 674,
	kFlagUG04DispatchOnHoodooRats             = 675, // Re-purposed. Original: 675 is never used
	kFlagUG15RatShot                          = 676,
	kFlagUG15BridgeWillBreak                  = 677,
	kFlagChapter2Intro                        = 678,
	kFlagChapter3Intro                        = 679,
	kFlagChapter4Intro                        = 680,
	kFlagMcCoyCommentsOnHoodooRats            = 681, // Re-purposed. Original: 681 is never used
	kFlagUG15BridgeBroken                     = 682,
	kFlagUG05TalkToPolice                     = 683,
	kFlagHF05PoliceAttacked                   = 684,
	kFlagClovisLyingDown                      = 685,
	kFlagNotUsed686                           = 686,
	kFlagMcCoyCommentsOnFans                  = 687, // Re-purposed. Original: 687 is never used
	kFlagPS05TV0                              = 688,
	kFlagPS05TV1                              = 689,
	kFlagPS05TV2                              = 690,
	kFlagPS05TV3                              = 691,
	kFlagPS05TV4                              = 692,
	kFlagUG03DeadHomeless                     = 693,
	kFlagUG14DeadHomeless                     = 694,
	kFlagNR01VisitedFirstTimeWithSpinner      = 695, // Re-purposed. Original: 695 is never used
	kFlagKP07ReplicantsAttackMcCoy            = 696,
	kFlagKP07McCoyPulledGun                   = 697,
	kFlagUG15LanceLuthorTrade                 = 698,
	kFlagTalkToZuben                          = 699,
	kFlagBB01VisitedFirstTimeWithSpinner      = 700, // Re-purposed. Original: 700 is never used
	kFlagMcCoyAttackedLucy                    = 701,
	kFlagBulletBobDead                        = 702,
	kFlagUG18BriefcaseTaken                   = 703,
	kFlagRC02EnteredChapter4                  = 704,
	kFlagRC02RunciterTalkWithGun              = 705,
	kFlagRC02RunciterTalk2                    = 706,
	kFlagTB06PhotographTalk1                  = 707,
	kFlagUG02AmmoTaken                        = 708,
	kFlagRC51Discovered                       = 709,
	kFlagAR01Entered                          = 710,
	kFlagMA04WatchedTV                        = 711,
	kFlagMcCoyShotAtZuben                     = 712,
	kFlagDR04McCoyShotMoraji                  = 713,
	kFlagMcCoyAttackedReplicants              = 714,
	kFlagDR06UnlockedToUG16                   = 715,
	kFlagUG13HomelessLayingdown               = 716,
	kFlagRC04BobTalk3                         = 717,
	kflagPS01toPS02                           = 718,
	kFlagCT02McCoyFell                        = 719,
	kFlagCT02McCoyCombatReady                 = 720,
	kFlagCT02McCoyShouldCommentOnDumpedSoup   = 721, // Now: used for cut content for McCoy's monologue if he fails to dodge the soup, Original: was set but not used
	kFlagChapter4Starting                     = 722,
	kFlagZubenBountyPaid                      = 723,
	kFlagUG15BridgeBreaks                     = 724,
	kFlagCT11DogWrapperAvailable              = 725,
	kFlagAR02Entered                          = 726, // Now: never checked (superseded by new kFlagScorpionsInAR02). Original: used to track if McCoy visited AR02 in order to remove scorpion's cage item if Dektora buys it
	kFlagPS04WeaponsOrderForm                 = 727,
	kFlagDR01Visited                          = 728, // Re-purposed. Original: 728 is never used
	kFlagNR08DektoraShow                      = 729
};

enum Variables {
	kVariableChapter                       =  1,
	kVariableChinyen                       =  2,
	kVariableGameVersion                   =  3, // Re-purposed. Original: not used, so it would have value of 0 in the classic version
	kVariableUG18CountUpForNextTrainAction =  4, // Re-purposed. Original: not used
	kVariableUG18StateOfTrains             =  5, // Re-purposed. Original: not used
	kVariableUG18StateOfGuzzaCorpse        =  6, // Re-purposed. Original: not used
	kVariableRC02Act1RunciterBanter        =  7, // Re-purposed. Original: not used
	// variable 8 is not used
	kVariablePoliceMazeScore               =  9,
	kVariablePoliceMazePS10TargetCounter   = 10,
	kVariablePoliceMazePS11TargetCounter   = 11,
	kVariablePoliceMazePS12TargetCounter   = 12,
	kVariablePoliceMazePS13TargetCounter   = 13,
	kVariableMcCoyEvidenceMissed           = 14,
	// variable 15 has no use
	kVariableFishDealerBanterTalk          = 16, // Re-purposed. Original: not used
	kVariableInsectDealerBanterTalk        = 17, // Re-purposed. Original: not used
	kVariableHasanBanterTalk               = 18, // Re-purposed. Original: not used
	kVariableIzoShot                       = 19, // has no use
	// variables 20 - 23 are not used
	kVariableBobShot                       = 24, // has no use
	kVariableGeneralDollShot               = 25, // has no use
	// variables 26 - 28 are not used
	kVariableLutherLanceShot               = 29,
	// variables 30 - 31 are not used
	kVariableGenericWalkerAModel           = 32, // values: 0 1 2 3 4 5 (6 7 8 9 for restored content)
	kVariableGenericWalkerBModel           = 33, // values: 0 1 2 3 4 5 (6 7 8 9 for restored content)
	kVariableGenericWalkerCModel           = 34, // values: 0 1 2 3 4 5 (6 7 8 9 for restored content)
	kVariableGenericWalkerConfig           = 35, // Re-purposed. Original: has no real use
	kVariableBB10ShelvesAvailable          = 36,
	kVariableWalkLoopActor                 = 37,
	kVariableWalkLoopRun                   = 38,
	kVariableDR06MannequinHeadOpened       = 39,
	kVariableHollowayArrest                = 40, // values: 1 dektora, 2 gordo, 3 lucy
	kVariableGordosJoke                    = 41,
	kVariableMcCoyDrinks                   = 42, // is never checked
	kVariableHanoiNR05Warnings             = 43,
	kVariableHanoiNR04Warnings             = 44,
	kVariableAffectionTowards              = 45, // values: 0 none, 1 steele, 2 dektora, 3 lucy
	kVariableGunPulledInFrontOfSebastian   = 46,
	kVariableNR01GetUpCounter              = 47,
	kVariableDNAEvidence                   = 48,
	kVariableCorruptedGuzzaEvidence        = 49,
	kVariableTaffyLewisMusic               = 50,
	kVariableReplicantsSurvivorsAtMoonbus  = 51,
	kVariableNextTvNews                    = 52,
	kVariableEarlyQFrontMusic              = 53,
	kVariableEarlyQBackMusic               = 54
};

enum Outtakes {
	kOuttakeIntro             =  0,
	kOuttakeMovieA            =  1,
	kOuttakeMovieB1           =  2,
	kOuttakeMovieB2           =  3,
	kOuttakeMovieB3           =  4,
	kOuttakeMovieB4           =  5,
	kOuttakeMovieB5           =  6,
	kOuttakeMovieC1           =  7,
	kOuttakeMovieC2           =  8,
	kOuttakeMovieC3           =  9,
	kOuttakeMovieD            = 10,
	kOuttakeInterrogation     = 11,
	kOuttakeEnd1A             = 12,
	kOuttakeEnd1B             = 13,
	kOuttakeEnd1C             = 14,
	kOuttakeEnd1D             = 15,
	kOuttakeEnd1E             = 16,
	kOuttakeEnd1F             = 17,
	kOuttakeEnd2              = 18,
	kOuttakeEnd3              = 19,
	kOuttakeEnd4A             = 20,
	kOuttakeEnd4B             = 21,
	kOuttakeEnd4C             = 22,
	kOuttakeEnd4D             = 23,
	kOuttakeEnd5              = 24,
	kOuttakeEnd6              = 25,
	kOuttakeEnd7              = 26,
	kOuttakeTyrellBuildingFly = 27,
	kOuttakeWestwood          = 28,
	kOuttakeFlyThrough        = 29, // Act 1 - Original: unused - has no sound
	kOuttakeAway1             = 30, // Act 2, 3
	kOuttakeAway2             = 31, // Act 1
	kOuttakeAscent            = 32, // Act 1, 4, 5 - Original: unused
	kOuttakeDescent           = 33, // Act 1, 4, 5
	kOuttakeInside1           = 34, // Act 1
	kOuttakeInside2           = 35, // Act 1, 2, 3
	kOuttakeTowards1          = 36, // Act 1 - This is sort of the reverse of kOuttakeFlyThrough (spinner is flying towards player)
	kOuttakeTowards2          = 37, // Act 1
	kOuttakeTowards3          = 38, // Act 1, 2, 3
	kOuttakeRachel            = 39,
	kOuttakeDektora           = 40,
	kOuttakeBladeRunner       = 41
};

enum AnimationModes {
	kAnimationModeIdle            =  0,
	kAnimationModeWalk            =  1,
	kAnimationModeRun             =  2,
	kAnimationModeTalk            =  3,
	kAnimationModeCombatIdle      =  4,
	kAnimationModeCombatAim       =  5,
	kAnimationModeCombatAttack    =  6,
	kAnimationModeCombatWalk      =  7,
	kAnimationModeCombatRun       =  8,
	// 9 - 19 various talk modes
	kAnimationModeDodge           = 20,
	kAnimationModeHit             = 21,
	kAnimationModeCombatHit       = 22,
	// 23 give / take away
	// 24 - 25 not used
	// 26 ???
	// 27 - 28 not used
	// 29 stand up
	// 30 - 37 not used
	// 38 McCoy searches inside big dumpster
	// 39 McCoy agonizing death animation - not used
	// 40 McCoy throws body
	kAnimationModeSpinnerGetIn    = 41,
	kAnimationModeSpinnerGetOut   = 42,
	// 43 - taking photo/using cellphone
	kAnimationModeWalkUp          = 44,
	kAnimationModeWalkDown        = 45,
	kAnimationModeCombatWalkUp    = 46,
	kAnimationModeCombatWalkDown  = 47,
	kAnimationModeDie             = 48,
	kAnimationModeCombatDie       = 49,
	// 50 Luther, Tyrell Guard ???
	// 51 Steele, Maggie ???
	kAnimationModeFeeding         = 52,
	kAnimationModeSit             = 53, // sitting (eg. for McCoy used in NR04, NR05 rotating couch) (McCoy, Clovis, Dektora, Guzza, Gordo)
	// 54 Clovis, Maggie ???
	// 55 transient, Tyrell Guard, Maggie
	// 56 Maggie ???
	// 57 Maggie ???
	// 58 - 60 not used
	// 61 Guzza ???
	// 62 Sadik ???
	// 63 Sadik ???
	kAnimationModeClimbUp         = 64,
	kAnimationModeClimbDown       = 65,
	kAnimationModeCombatClimbUp   = 66,
	kAnimationModeCombatClimbDown = 67
	// 68 McCoy getting kicked (while down)
	// 69 not used
	// 70 Dektora ???
	// 71 Dektora ???
	// 72 Desk Clerk, Leon ???
	// 73 EarlyQ ???
	// 74 EarlyQ ???
	// 75 McCoy drinking
	// 76 EarlyQ ???
	// 77 not used
	// 78 Hanoi ???
	// 79 Dektora ???
	// 80 Gordo ???
	// 81 - 82 not used
	// 83 Gordo ???
	// 84 Gordo ???
	// 85 McCoy, EarlyQ - sitdown
	// 86 - 87 not used
	// 88 ???
	// 89 Homeless ???
};

enum SceneLoopMode {
	kSceneLoopModeNone        = -1,
	kSceneLoopModeLoseControl =  0,
	kSceneLoopModeChangeSet   =  1,
	kSceneLoopModeOnce        =  2,
	kSceneLoopModeSpinner     =  3
};

enum Scenes {
	kSceneAR01 =   0, // Animoid Row - Fish dealer
	kSceneAR02 =   1, // Animoid Row - Insect dealer
	kSceneBB01 =   2, // Bradbury building - Outside
	kSceneBB02 =   3, // Bradbury building - Inside
	kSceneBB03 =   4, // Bradbury building - Entrance
	kSceneBB04 =   5, // Bradbury building - Elevator
	kSceneBB05 =   6, // Bradbury building - Entry hall
	kSceneBB06 =   7, // Bradbury building - Billiard room - front
	kSceneBB07 =   8, // Bradbury building - Sebastian's office
	kSceneBB08 =   9, // Bradbury Building - Bathroom
	kSceneBB09 =  10, // Bradbury Building - Above bathroom
	kSceneBB10 =  11, // Bradbury Building - Bookcase
	kSceneBB11 =  12, // Bradbury Building - Roof
	kSceneCT01 =  13, // Chinatown - Howie Lee's Restaurant
	kSceneCT02 =  14, // Chinatown - Restaurant - Kitchen
	kSceneCT03 =  15, // Chinatown - Back alley - Restaurant
	kSceneCT04 =  16, // Chinatown - Back alley - Dumpster
	kSceneCT05 =  17, // Chinatown - Warehouse - Inside
	kSceneCT06 =  18, // Chinatown - Passage - front
	kSceneCT07 =  19, // Chinatown - Passage - back
	kSceneCT08 =  20, // Chinatown - Yukon Hotel - Backroom
	kSceneCT09 =  21, // Chinatown - Yukon Hotel - Lobby
	kSceneCT10 =  22, // Chinatown - Yukon Hotel - Room
	kSceneCT11 =  23, // Chinatown - Yukon Hotel - Outside
	kSceneCT12 =  24, // Chinatown - Warehouse - Outside
	kSceneDR01 =  25, // DNA Row - Street
	kSceneDR02 =  26, // DNA Row - Eyeworld - Outside
	kSceneDR03 =  27, // DNA Row - Eyeworld - Inside
	kSceneDR04 =  28, // DNA Row - Dermo design - Outside
	kSceneDR05 =  29, // DNA Row - Dermo design - Inside
	kSceneDR06 =  30, // DNA Row - Twin's office
	kSceneHC01 =  31, // Hawker's Circle - Green pawn - Outside
	kSceneHC02 =  32, // Hawker's Circle - China bar
	kSceneHC03 =  33, // Hawker's Circle - Green pawn - Inside
	kSceneHF01 =  34, // Hysteria Hall - Outside
	kSceneHF02 =  35, // Hysteria Hall - Hall of Mirrors - Exit / Arcade Back Alley
	kSceneHF03 =  36, // Hysteria Hall - Hysteria Arcade
	kSceneHF04 =  37, // Hysteria Hall - Hall of Mirrors
	kSceneHF05 =  38, // Hysteria Hall - Crazy Legs Larry Autos - Inside
	kSceneHF06 =  39, // Hysteria Hall - Crazy Legs Larry Autos - Roof
	kSceneHF07 =  40, // Hysteria Hall - Crazy Legs Larry Autos - Underground
	kSceneKP01 =  41, // Kipple - Rubble
	kSceneKP02 =  42, // Kipple - Entry / Gate
	kSceneKP03 =  43, // Kipple - Bomb
	kSceneKP04 =  44, // Kipple - Huge pillar
	kSceneKP05 =  45, // Kipple - Moonbus - Far
	kSceneKP06 =  46, // Kipple - Moonbus - Near
	kSceneKP07 =  47, // Kipple - Moonbus - Inside
	kSceneMA01 =  48, // McCoy's Apartment - Roof
	kSceneMA02 =  49, // McCoy's Apartment - Living room
	kSceneMA04 =  50, // McCoy's Apartment - Sleeping room
	kSceneMA05 =  51, // McCoy's Apartment - Balcony
	kSceneMA06 =  52, // McCoy's Apartment - Elevator
	kSceneMA07 =  53, // McCoy's Apartment - Ground floor
	kSceneNR01 =  54, // Nightclub Row - Outside
	kSceneNR02 =  55, // Nightclub Row - Taffy Lewis'
	kSceneNR03 =  56, // Nightclub Row - Early Q's - Main area
	kSceneNR04 =  57, // Nightclub Row - Early Q's - Office
	kSceneNR05 =  58, // Nightclub Row - Early Q's - VIP area
	kSceneNR06 =  59, // Nightclub Row - Early Q's - Empty dressing room
	kSceneNR07 =  60, // Nightclub Row - Early Q's - Dektora's dressing room
	kSceneNR08 =  61, // Nightclub Row - Early Q's - Stage
	kSceneNR09 =  62, // Nightclub Row - Early Q's - Balcony
	kSceneNR10 =  63, // Nightclub Row - Early Q's - Projector room
	kSceneNR11 =  64, // Nightclub Row - Early Q's - Loft
	kScenePS01 =  65, // Police Station - Roof
	kScenePS02 =  66, // Police Station - Elevator
	kScenePS03 =  67, // Police Station - Ground floor
	kScenePS04 =  68, // Police Station - Guzza's Office
	kScenePS05 =  69, // Police Station - Mainframe & Shooting range hallway
	kScenePS06 =  70, // Police Station - ESPER room
	kScenePS07 =  71, // Police Station - Laboratory
	kScenePS09 =  72, // Police Station - Lockup
	kScenePS10 =  73, // Police Station - Shooting range 1
	kScenePS11 =  74, // Police Station - Shooting range 2
	kScenePS12 =  75, // Police Station - Shooting range 3
	kScenePS13 =  76, // Police Station - Shooting range 4
	kScenePS14 =  77, // Police Station - Outside
	kSceneRC01 =  78, // Runciter - Outside
	kSceneRC02 =  79, // Runciter - Inside
	kSceneRC03 =  80, // Bullet Bob's Runner Surplus - Outside
	kSceneRC04 =  81, // Bullet Bob's Runner Surplus - Inside
	kSceneTB02 =  82, // Tyrell Building - Reception
	kSceneTB03 =  83, // Tyrell Building - Reception back
	kSceneTB05 =  84, // Tyrell Building - Grav Test Lab - Outside
	kSceneTB06 =  85, // Tyrell Building - Grav Test Lab - Inside
	kSceneUG01 =  86, // Underground - Under RC03
	kSceneUG02 =  87, // Underground - Under HC03
	kSceneUG03 =  88, // Underground - Chair
	kSceneUG04 =  89, // Underground - Rails with crash - start
	kSceneUG05 =  90, // Underground - Under HF07 - Rails with cars
	kSceneUG06 =  91, // Underground - Under NR01 - Metro entrance
	kSceneUG07 =  92, // Underground - Pipe
	kSceneUG08 =  93, // Underground - Elevator
	kSceneUG09 =  94, // Underground - Behind CT12
	kSceneUG10 =  95, // Underground - Moving bridge
	kSceneUG12 =  96, // Underground - Gate
	kSceneUG13 =  97, // Underground - Homeless' living room
	kSceneUG14 =  98, // Underground - Crossroad
	kSceneUG15 =  99, // Underground - Bridge with rat
	kSceneUG16 = 100, // Underground - Under DR06
	kSceneUG17 = 101, // Underground - Under TB03
	kSceneUG18 = 102, // Underground - Pit
	kSceneUG19 = 103, // Underground - Under MA07
	kSceneBB51 = 104, // Bradbury Building - Billiard room - Back
	kSceneCT51 = 105, // Chinatown - Yukon Hotel - Backroom - back
	kSceneHC04 = 106, // Hawker's Circle - Kingston kitchen
	kSceneRC51 = 107, // Runciter - Lucy's desk
	kSceneTB07 = 108, // Tyrell Building - Tyrell's office
	kScenePS15 = 119, // Police Station - Armory
	kSceneBB12 = 120  // Bradbury Building - Monkey room
};

enum Sets {
	kSetAR01_AR02           =   0,
	kSetBB02_BB04_BB06_BB51 =   1,
	kSetBB06_BB07           =   2, //BB06
	kSetBB07                =   3,
	kSetCT01_CT12           =   4,
	kSetCT03_CT04           =   5,
	kSetCT08_CT51_UG12      =   6, //UG12
	kSetDR01_DR02_DR04      =   7,
	kSetHC01_HC02_HC03_HC04 =   8,
	kSetKP05_KP06           =   9,
	kSetMA02_MA04           =  10, //MA04
	kSetNR02                =  11,
	kSetNR04                =  12,
	kSetNR05_NR08           =  13,
	kSetPS10_PS11_PS12_PS13 =  14,
	kSetPS05                =  15,
	kSetRC02_RC51           =  16,
	kSetTB02_TB03           =  17,
	kSetTB07                =  18,
	kSetUG16                =  19,
	kSetBB01                =  20,
	kSetBB03                =  21,
	kSetBB05                =  22,
	kSetBB08                =  23,
	kSetBB09                =  24,
	kSetBB10                =  25,
	kSetBB11                =  26,
	kSetCT02                =  27,
	kSetCT05                =  28,
	kSetCT06                =  29,
	kSetCT07                =  30,
	kSetCT09                =  31,
	kSetCT10                =  32,
	kSetCT11                =  33,
	kSetDR03                =  34,
	kSetDR05                =  35,
	kSetDR06                =  36,
	kSetHF01                =  37,
	kSetHF02                =  38,
	kSetHF03                =  39,
	kSetHF04                =  40,
	kSetHF05                =  41,
	kSetHF06                =  42,
	kSetHF07                =  43,
	kSetKP01                =  44,
	kSetKP02                =  45,
	kSetKP03                =  46,
	kSetKP04                =  47,
	kSetKP07                =  48,
	kSetMA01                =  49,
	kSetMA04                =  50,
	kSetMA05                =  51,
	kSetMA06                =  52,
	kSetMA07                =  53,
	kSetNR01                =  54,
	kSetNR03                =  55,
	kSetNR06                =  56,
	kSetNR07                =  57,
	kSetNR09                =  58,
	kSetNR10                =  59,
	kSetNR11                =  60,
	kSetPS01                =  61,
	kSetPS02                =  62,
	kSetPS03                =  63,
	kSetPS04                =  64,
	kSetPS06                =  65,
	kSetPS07                =  66,
	kSetPS09                =  67,
	kSetPS14                =  68,
	kSetRC01                =  69,
	kSetRC03                =  70,
	kSetRC04                =  71,
	kSetTB05                =  72,
	kSetTB06                =  73,
	kSetUG01                =  74,
	kSetUG02                =  75,
	kSetUG03                =  76,
	kSetUG04                =  77,
	kSetUG05                =  78,
	kSetUG06                =  79,
	kSetUG07                =  80,
	kSetUG08                =  81,
	kSetUG09                =  82,
	kSetUG10                =  83,
	kSetUG12                =  84,
	kSetUG13                =  85,
	kSetUG14                =  86,
	kSetUG15                =  87,
	kSetUG17                =  88,
	kSetUG18                =  89,
	kSetUG19                =  90,
	kSetFreeSlotA           =  91,
	kSetFreeSlotB           =  92,
	kSetFreeSlotC           =  93,
	kSetFreeSlotD           =  94,
	kSetFreeSlotE           =  95,
	kSetFreeSlotF           =  96,
	kSetFreeSlotG           =  97,
	kSetFreeSlotH           =  98,
	kSetFreeSlotI           =  99,
	kSetFreeSlotJ           = 100,
	kSetPS15                = 101,
	kSetBB12                = 102
};

enum GameItems {
	kItemPS10Target1            =   0,
	kItemPS10Target2            =   1,
	kItemPS10Target3            =   2,
	kItemPS10Target4            =   3,
	kItemPS10Target5            =   4,
	kItemPS10Target6            =   5,
	kItemPS10Target7            =   6,
	kItemPS10Target8            =   7,
	kItemPS10Target9            =   8,
	kItemPS11Target1            =   9,
	kItemPS11Target2            =  10,
	kItemPS11Target3            =  11,
	kItemPS11Target4            =  12,
	kItemPS11Target5            =  13,
	kItemPS11Target6            =  14,
	kItemPS11Target7            =  15,
	kItemPS11Target8            =  16,
	kItemPS11Target9            =  17,
	kItemPS11Target10           =  18,
	kItemPS11Target11           =  19,
	kItemPS11Target12           =  20,
	kItemPS11Target13           =  21,
	kItemPS11Target14           =  22,
	kItemPS11Target15           =  23,
	// 24 is never used
	// 25 is never used
	// 26 is never used
	kItemPS11Target16           =  27,
	// 28 is never used
	kItemPS12Target1            =  29,
	kItemPS12Target2            =  30,
	kItemPS12Target3            =  31,
	kItemPS12Target4            =  32,
	kItemPS12Target5            =  33,
	kItemPS12Target6            =  34,
	kItemPS12Target7            =  35,
	kItemPS12Target8            =  36,
	kItemPS12Target9            =  37,
	kItemPS12Target10           =  38,
	kItemPS12Target11           =  39,
	kItemPS12Target12           =  40,
	kItemPS12Target13           =  41,
	kItemPS12Target14           =  42,
	kItemPS12Target15           =  43,
	kItemPS12Target16           =  44,
	kItemPS12Target17           =  45,
	kItemPS13Target1            =  46,
	kItemPS13Target2            =  47,
	kItemPS13Target3            =  48,
	kItemPS13Target4            =  49,
	kItemPS13Target5            =  50,
	kItemPS13Target6            =  51,
	kItemPS13Target7            =  52,
	kItemPS13Target8            =  53,
	kItemPS13Target9            =  54,
	kItemPS13Target10           =  55,
	kItemPS13Target11           =  56,
	kItemPS13Target12           =  57,
	kItemPS13Target13           =  58,
	// 59 is never used
	// 60 is never used
	// 61 is never used
	kItemPS13Target14           =  62,
	kItemPS13Target15           =  63,
	// 64 is never used
	// 65 is never used
	kItemChromeDebris           =  66,
	// 67 is never used
	// 68 is never used
	// 69 is never used
	// 70 is never used
	// 71 is never used
	// 72 is never used
	// 73 is never used
	// 74 is never used
	// 75 is never used
	// 76 is never used
	kItemDragonflyEarring       =  76,
	kItemBB06ControlBox         =  77,
	kItemBomb                   =  78,
	kItemCandy                  =  79,
	kItemCheese                 =  81,
	kItemChopstickWrapper       =  82,
	kItemDNATyrell              =  83,
	kItemDogCollar              =  84,
	kItemRagDoll                =  85,
	// 86 is never used
	// 87 is never used
	kItemRadiationGoogles       =  88,
	kItemGordosLighterReplicant =  89,
	kItemGordosLighterHuman     =  90,
	kItemBriefcase              =  91,
	kItemNote                   =  92, // original: 92 is never used
	// 93 is never used
	// 94 is never used
	// 95 is never used
	// 96 is never used
	// 97 is never used
	kItemToyDog                 =  98,
	// 99 is never used
	kItemShellCasingA           = 100,
	kItemShellCasingB           = 101,
	kItemShellCasingC           = 102,
	kItemDeadDogA               = 103,
	kItemDeadDogB               = 104,
	kItemDeadDogC               = 105,
	kItemScorpions              = 106,
	kItemCamera                 = 107,
	kItemKitchenBox             = 108,
	kItemChair                  = 109,
	kItemWeaponsCrate           = 110,
	kItemWeaponsOrderForm       = 111,
	// 112 is never used
	// 113 is never used
	// 114 is never used
	kItemDogWrapper             = 115,
	// 116 is never used
	// 117 is never used
	kItemPowerSource            = 118,
	kItemTyrellSalesPamphlet    = 119,
	kItemMoonbusPhoto           = 120,
	kItemGreenPawnLock          = 121,
	kItemChain                  = 122
};

enum GameModelAnimations {
	//   0 -  53: McCoy animations
	kModelAnimationMcCoyWithGunIdle               =   0,
	kModelAnimationMcCoyWithGunGotHitRight        =   1,
	kModelAnimationMcCoyWithGunGotHitLeft         =   2,
	kModelAnimationMcCoyWithGunWalking            =   3,
	kModelAnimationMcCoyWithGunRunning            =   4,
	kModelAnimationMcCoyWithGunShotDead           =   5,
	kModelAnimationMcCoyWithGunClimbStairsUp      =   6,
	kModelAnimationMcCoyWithGunClimbStairsDown    =   7,
	kModelAnimationMcCoyWithGunUnholsterGun       =   8,
	kModelAnimationMcCoyWithGunHolsterGun         =   9,
	kModelAnimationMcCoyWithGunAiming             =  10,
	kModelAnimationMcCoyWithGunStopAimResumeIdle  =  11,
	kModelAnimationMcCoyWithGunShooting           =  12,
	kModelAnimationMcCoyWalking                   =  13,
	kModelAnimationMcCoyRunning                   =  14,
	kModelAnimationMcCoyClimbStairsUp             =  15,
	kModelAnimationMcCoyClimbStairsDown           =  16,
	kModelAnimationMcCoyGotHitRight               =  17,
	kModelAnimationMcCoyFallsOnHisBack            =  18,
	kModelAnimationMcCoyIdle                      =  19,
	kModelAnimationMcCoyProtestingTalk            =  20,
	kModelAnimationMcCoyScratchHeadTalk           =  21,
	kModelAnimationMcCoyPointingTalk              =  22,
	kModelAnimationMcCoyUpsetTalk                 =  23,
	kModelAnimationMcCoyDismissiveTalk            =  24,
	kModelAnimationMcCoyScratchEarTalk            =  25,
	kModelAnimationMcCoyHandsOnWaistTalk          =  26,
	kModelAnimationMcCoyScratchEarLongerTalk      =  27,
	kModelAnimationMcCoyDodgeAndDrawGun           =  28,
	kModelAnimationMcCoyLeaningOver               =  29,
	kModelAnimationMcCoyThrowsBeggarInTrash       =  30,
	kModelAnimationMcCoyDiesInAgony               =  31,
	kModelAnimationMcCoyGivesFromPocket           =  32,
	kModelAnimationMcCoyLeaningOverSearching      =  33,
	kModelAnimationMcCoyLeaningOverResumeIdle     =  34,
	kModelAnimationMcCoyEntersSpinner             =  35,
	kModelAnimationMcCoyExitsSpinner              =  36,
	kModelAnimationMcCoyClimbsLadderUp            =  37,
	kModelAnimationMcCoyClimbsLadderDown          =  38,
	kModelAnimationMcCoyRecoversFromPassingOut    =  39,
	kModelAnimationMcCoyGiveMovement              =  40,
	kModelAnimationMcCoySittingToUseConsole       =  41,
	kModelAnimationMcCoyWithGunGrabbedByArm0      =  42,
	kModelAnimationMcCoyWithGunGrabbedByArm1      =  43,
	kModelAnimationMcCoyWithGunGrabbedByArmHurt   =  44,
	kModelAnimationMcCoyWithGunGrabbedByArmFreed  =  45,
	kModelAnimationMcCoyTiedInChairIdle           =  46,
	kModelAnimationMcCoyTiedInChairMoving         =  47,
	kModelAnimationMcCoyTiedInChairFreed          =  48,
	kModelAnimationMcCoyStartled                  =  49,
	kModelAnimationMcCoyCrouchingDown             =  50,
	kModelAnimationMcCoyCrouchedIdle              =  51,
	kModelAnimationMcCoyCrouchedGetsUp            =  52,
	kModelAnimationMcCoyDrinkingBooze             =  53,
	//  54 -  92: Steele animations
	kModelAnimationSteeleWithGunIdle                 =  54,
	kModelAnimationSteeleWithGunStrafeFast           =  55, // untriggered
	kModelAnimationSteeleWithGunStrafeSlow           =  56, // untriggered
	kModelAnimationSteeleWithGunGotHitRight          =  57,
	kModelAnimationSteeleWithGunGotHitLeft           =  58,
	kModelAnimationSteeleWithGunWalking              =  59,
	kModelAnimationSteeleWithGunRunning              =  60,
	kModelAnimationSteeleWithGunShotDead             =  61,
	kModelAnimationSteeleWithGunClimbStairsUp        =  62,
	kModelAnimationSteeleWithGunClimbStairsDown      =  63,
	kModelAnimationSteeleWithGunUnholsterGun         =  64,
	kModelAnimationSteeleWithGunHolsterGun           =  65,
	kModelAnimationSteeleWithGunShooting             =  66,
	kModelAnimationSteeleWalking                     =  67,
	kModelAnimationSteeleRunning                     =  68,
	kModelAnimationSteeleClimbStairsUp               =  69,
	kModelAnimationSteeleClimbStairsDown             =  70,
	kModelAnimationSteeleGotHitRight                 =  71,
	kModelAnimationSteeleGotHitLeft                  =  72,
	kModelAnimationSteeleShotDead                    =  73,
	kModelAnimationSteeleIdle                        =  74,
	kModelAnimationSteeleTakeCigPuff                 =  75,
	kModelAnimationSteeleThrowCigAndStepOnIt         =  76,
	kModelAnimationSteeleATalk                       =  77,
	kModelAnimationSteeleBTalk                       =  78,
	kModelAnimationSteeleSmallLeftHandMoveTalk       =  79,
	kModelAnimationSteeleProtestTalk                 =  80,
	kModelAnimationSteeleDismissTalk                 =  81,
	kModelAnimationSteeleWithGunAimingTalk           =  82,
	kModelAnimationSteeleClimbUpTrapDoor             =  83,
	kModelAnimationSteeleClimbLadderUp               =  84, // untriggered
	kModelAnimationSteeleClimbLadderDown             =  85, // untriggered
	kModelAnimationSteeleHopOffLadderDown            =  86, // untriggered
	kModelAnimationSteeleLookRightThenDropDead       =  87, // UNUSED
	kModelAnimationSteeleWithGunAimingToRightIdle    =  88, // Aiming at Gordo
	kModelAnimationSteeleWithGunAimingToRightTalk    =  89,
	kModelAnimationSteeleWithGunAimingToRightHandHit =  90,
	kModelAnimationSteeleWithGunAimingToRightHolster =  91,
	kModelAnimationSteeleWithGunAimingToRightShoot   =  92, // Shooting at Gordo
	//  93 - 133: Gordo animations
	kModelAnimationGordoWithGunIdle                =  93,
	kModelAnimationGordoStrafeFast                 =  94, // UNUSED
	kModelAnimationGordoStrafeSlow                 =  95, // UNUSED
	kModelAnimationGordoWithGunGotHitRight         =  96,
	kModelAnimationGordoWithGunGotHitLeft          =  97,
	kModelAnimationGordoWithGunWalking             =  98,
	kModelAnimationGordoWithGunRunning             =  99,
	kModelAnimationGordoWithGunShotDead            = 100,
	kModelAnimationGordoWithGunClimbStairsUp       = 101,
	kModelAnimationGordoWithGunClimbStairsDown     = 102,
	kModelAnimationGordoWithGunUnholsterGun        = 103,
	kModelAnimationGordoWithGunHolsterGun          = 104,
	kModelAnimationGordoWithGunShooting            = 105,
	kModelAnimationGordoWithGunJumpingDown         = 106,
	kModelAnimationGordoWalking                    = 107,
	kModelAnimationGordoRunning                    = 108,
	kModelAnimationGordoClimbStairsUp              = 109,
	kModelAnimationGordoClimbStairsDown            = 110,
	kModelAnimationGordoGotHitRight                = 111,
	kModelAnimationGordoGotHitLeft                 = 112,
	kModelAnimationGordoShotDead                   = 113,
	kModelAnimationGordoSitting                    = 114,
	kModelAnimationGordoWavesGetsUpAndPays         = 115,
	kModelAnimationGordoIdle                       = 116,
	kModelAnimationGordoBrushOffShoulder           = 117, // talks too?
	kModelAnimationGordoChecksHand                 = 118, // talks too?
	kModelAnimationGordoLeavesSomethingOnCounter   = 119,
	kModelAnimationGordoIdleTalk                   = 120,
	kModelAnimationGordoSuggestingTalk             = 121,
	kModelAnimationGordoSuggestAndPointTalk        = 122,
	kModelAnimationGordoSuggestAndDismissTalk      = 123,
	kModelAnimationGordoDismissiveTalk             = 124,
	kModelAnimationGordoUpsetTalk                  = 125,
	kModelAnimationGordoExplainAndPointTalk        = 126,
	kModelAnimationGordoAdjustBowtieTalk           = 127,
	kModelAnimationGordoWithGunWithHostageATalk    = 128,
	kModelAnimationGordoWithGunWithHostageBTalk    = 129, // hostage pushes his gun-holding hand upwards
	kModelAnimationGordoWithGunWithHostageCTalk    = 130, // shooting hostage?
	kModelAnimationGordoWithGunWithHostageLetsGo   = 131, // hits hostage?
	kModelAnimationGordoWithGunWithHostageGetsShot = 132, // hits hostage?
	kModelAnimationGordoSitsLookingAtSomething     = 133, // UNUSED
	// 134 - 171: Dektora animations
	kModelAnimationDektoraCombatIdle             = 134,
	kModelAnimationDektoraCombatWalkingA         = 135,
	kModelAnimationDektoraCombatWalkingB         = 136,
	kModelAnimationDektoraCombatGotHitRight      = 137,
	kModelAnimationDektoraCombatGotHitLeft       = 138,
	kModelAnimationDektoraCombatBegin            = 139, // assumes fighting pose
	kModelAnimationDektoraCombatEnd              = 140, // exits combat mode
	kModelAnimationDektoraCombatLegAttack        = 141,
	kModelAnimationDektoraCombatPunchAttack      = 142,
	kModelAnimationDektoraWalking                = 143,
	kModelAnimationDektoraRunning                = 144, // fast walking
	kModelAnimationDektoraClimbStairsUp          = 145,
	kModelAnimationDektoraClimbStairsDown        = 146,
	kModelAnimationDektoraFrontShoveMove         = 147,
	kModelAnimationDektoraBackDodgeMove          = 148,
	kModelAnimationDektoraFallsDead              = 149,
	kModelAnimationDektoraSittingIdle            = 150,
	kModelAnimationDektoraSittingShootingGun     = 151, // UNUSED?
	kModelAnimationDektoraSittingSubtleTalking   = 152,
	kModelAnimationDektoraSittingIntenseTalking  = 153,
	kModelAnimationDektoraSittingPullingGunOut   = 154,
	kModelAnimationDektoraSittingHoldingGun      = 155,
	kModelAnimationDektoraStandingIdle           = 156, // slow nod left right, could be talking too
	kModelAnimationDektoraStandingTalkGestureA   = 157, // dismissive / questioning
	kModelAnimationDektoraStandingNodShort       = 158, // could be talking too
	kModelAnimationDektoraStandingTalkAgreeing   = 159,
	kModelAnimationDektoraStandingTalkGestureB   = 160, // mellow
	kModelAnimationDektoraStandingTalkGestureC   = 161, // move both hands
	kModelAnimationDektoraStandingTalkGestureD   = 162, // appreciative
	kModelAnimationDektoraInFlamesA              = 163,
	kModelAnimationDektoraInFlamesGotHit         = 164, // UNUSED?
	kModelAnimationDektoraInFlamesStartFalling   = 165,
	kModelAnimationDektoraInFlamesB              = 166,
	kModelAnimationDektoraInFlamesEndFalling     = 167,
	kModelAnimationDektoraDancingA               = 168,
	kModelAnimationDektoraDancingB               = 169,
	kModelAnimationDektoraDancingC               = 170,
	kModelAnimationDektoraDancingFinale          = 171,
	// 172 - 207: Guzza animations
	kModelAnimationGuzzaWithGunIdle                         = 172,
	kModelAnimationGuzzaWithGunGotHitRight                  = 173, // Untriggered
	kModelAnimationGuzzaWithGunGotHitLeft                   = 174,
	kModelAnimationGuzzaWithGunGotHitStraight               = 175,
	kModelAnimationGuzzaWithGunWalking                      = 176,
	kModelAnimationGuzzaWithGunRunning                      = 177,
	kModelAnimationGuzzaWithGunShotDeadCollapsesInPlace     = 178, // UNUSED
	kModelAnimationGuzzaWithGunSuggestTalk                  = 179,
	kModelAnimationGuzzaWithGunDismissTalk                  = 180,
	kModelAnimationGuzzaWithGunBackwardTalk                 = 181, // Untriggered
	kModelAnimationGuzzaWithGunUnholsterGun                 = 182,
	kModelAnimationGuzzaWithGunHolsterGun                   = 183,
	kModelAnimationGuzzaWithGunShooting                     = 184,
	kModelAnimationGuzzaWalking                             = 185,
	kModelAnimationGuzzaRunning                             = 186,
	kModelAnimationGuzzaClimbStairsUp                       = 187,
	kModelAnimationGuzzaClimbStairsDown                     = 188,
	kModelAnimationGuzzaSitAndTalkOrChew                    = 189,
	kModelAnimationGuzzaSitAndEat                           = 190,
	kModelAnimationGuzzaSitAndLookAtFood                    = 191,
	kModelAnimationGuzzaSitAndSmallHandMoveTalk             = 192,
	kModelAnimationGuzzaSitAndSmallBothHandsMoveTalk        = 193,
	kModelAnimationGuzzaSitAndLargerHandMoveTalk            = 194,
	kModelAnimationGuzzaSitAndUpsetHandMoveTalk             = 195,
	kModelAnimationGuzzaSitAndDismissHandMoveTalk           = 196,
	kModelAnimationGuzzaStandIdle                           = 197,
	kModelAnimationGuzzaStandAndWipeNose                    = 198,
	kModelAnimationGuzzaStandAndScratchBelly                = 199,
	kModelAnimationGuzzaStandAndGiveOrPutHigh               = 200, // animationMode 23. Is this ever used?
	kModelAnimationGuzzaStandAndSuggestTalk                 = 201,
	kModelAnimationGuzzaStandAndExplainOneHandMoveTalk      = 202,
	kModelAnimationGuzzaStandAndExplainBothHandsMoveTalk    = 203,
	kModelAnimationGuzzaStandAndGiveOrThrowWaistLevel       = 204,
	kModelAnimationGuzzaStandAndDismissiveOneHandMoveTalk   = 205,
	kModelAnimationGuzzaStandAndDismissiveBothHandsMoveTalk = 206,
	kModelAnimationGuzzaWithGunShotFallBackwards            = 207,
	// 208 - 252: Clovis animations
	kModelAnimationClovisCombatIdle                         = 208,
	kModelAnimationClovisCombatStrafeSlow                   = 209, // Untriggered
	kModelAnimationClovisCombatStrafeFast                   = 210, // Untriggered
	kModelAnimationClovisCombatGotHitRight                  = 211,
	kModelAnimationClovisCombatGotHitLeft                   = 212,
	kModelAnimationClovisCombatWalking                      = 213, // Untriggered
	kModelAnimationClovisCombatRunning                      = 214, // UNUSED
	kModelAnimationClovisCombatClimbStairsUp                = 215, // Untriggered
	kModelAnimationClovisCombatClimbStairsDown              = 216, // Untriggered
	kModelAnimationClovisCombatAssumePosition               = 217,
	kModelAnimationClovisCombatResumeNonCombat              = 218,
	kModelAnimationClovisCombatPunchAttack                  = 219,
	kModelAnimationClovisWalking                            = 220,
	kModelAnimationClovisRunning                            = 221,
	kModelAnimationClovisClimbStairsUp                      = 222, // Untriggered
	kModelAnimationClovisClimbStairsDown                    = 223, // Untriggered
	kModelAnimationClovisGotHitRight                        = 224,
	kModelAnimationClovisGotHitLeft                         = 225,
	kModelAnimationClovisShotDead                           = 226,
	kModelAnimationClovisIdle                               = 227,
	kModelAnimationClovisLookingUpAndAbout                  = 228,
	kModelAnimationClovisOscillatingFeet                    = 229, // UNUSED
	kModelAnimationClovisCalmTalk                           = 230,
	kModelAnimationClovisSuggestingTalk                     = 231,
	kModelAnimationClovisSuggestingAndBeardScratchTalk      = 232,
	kModelAnimationClovisAffirmingTalk                      = 233,
	kModelAnimationClovisHandCircularMoveTalk               = 234,
	kModelAnimationClovisPointingTalk                       = 235,
	kModelAnimationClovisNegotiatingTalk                    = 236,
	kModelAnimationClovisGiveAndTakeOrPointingToSelf        = 237, // UNUSED (Talking too?)
	kModelAnimationClovisKneelingChecking                   = 238,
	kModelAnimationClovisStandingToKneeling                 = 239,
	kModelAnimationClovisKneelingToStanding                 = 240,
	kModelAnimationClovisKneelingTalking                    = 241,
	kModelAnimationClovisJumpingDodging                     = 242, // animation mode 20 (TODO Where is this used in game? In the Moonbus massacre scenario?)
	kModelAnimationClovisLayingWithBookIdle                 = 243,
	kModelAnimationClovisLayingWithBookStopsReadingTalk     = 244,
	kModelAnimationClovisLayingWithBookStillReadingTalk     = 245,
	kModelAnimationClovisLayingWithBookGotHitOrSmallCough   = 246, // UNUSED
	kModelAnimationClovisLayingWithBookReadingOutLoud       = 247, // Untriggered - ends in kModelAnimationClovisLayingWithBookStopsReadingTalk
	kModelAnimationClovisLayingWithBookGotHitOrViolentCough = 248, // Untriggered - ends in kModelAnimationClovisLayingWithBookDyingDropBook
	kModelAnimationClovisLayingWithBookDyingDropBook        = 249, // Untriggered?!
	kModelAnimationClovisLayingWithBookUnholsterGun         = 250, // Untriggered - ends in kModelAnimationClovisLayingWithBookPointingGun
	kModelAnimationClovisLayingWithBookPointingGun          = 251, // maybe also firing? // linked with untriggered kModelAnimationClovisLayingWithBookUnholsterGun
	kModelAnimationClovisLayingWithBookDyingDropGun         = 252, // This is the one used for Clovis laying down death (A bug?)
	// 253 - 276: Lucy animations
	kModelAnimationLucyWalking                              = 253,
	kModelAnimationLucyRunning                              = 254,
	kModelAnimationLucyClimbStairsUp                        = 255,
	kModelAnimationLucyClimbStairsDown                      = 256,
	kModelAnimationLucyGotHitBendsForward                   = 257,
	kModelAnimationLucyGotHitBendsBackward                  = 258,
	kModelAnimationLucyShotDead                             = 259,
	kModelAnimationLucyIdle                                 = 260,
	kModelAnimationLucyPlayingArcade                        = 261, // UNUSED
	kModelAnimationLucyGestureGive                          = 262, // UNUSED
	kModelAnimationLucyCalmShortRightwardsNodTalk           = 263,
	kModelAnimationLucyComplainingTalk                      = 264,
	kModelAnimationLucyIntenseTalk                          = 265,
	kModelAnimationLucyPointingTalk                         = 266,
	kModelAnimationLucySelfPointingTalk                     = 267,
	kModelAnimationLucyVeryUpsetTalk                        = 268,
	kModelAnimationLucyCalmLongRightwardsNodTalk            = 269,
	kModelAnimationLucySubtleThrowKissTalk                  = 270,
	kModelAnimationLucyHappyHopTalk                         = 271,
	kModelAnimationLucyCombatIdle                           = 272,
	kModelAnimationLucyCombatBlocksUp                       = 273, // Untriggered. Could potentially be used as "attacks up" too
	kModelAnimationLucyCombatResumeNonCombat                = 274, // Untriggered
	kModelAnimationLucyCombatDropsDead                      = 275, // Untriggered. Somewhat faster than kModelAnimationLucyShotDead (259)
	kModelAnimationLucyRemovesNeckletDiesFromExplosion      = 276, // Untriggered
	// 277 - 311: Izo animations
	kModelAnimationIzoCombatIdle              = 277,
	kModelAnimationIzoCombatTurnRight         = 278, // untriggered
	kModelAnimationIzoCombatTurnLeft          = 279, // untriggered
	kModelAnimationIzoCombatGotHitRight       = 280,
	kModelAnimationIzoCombatGotHitLeft        = 281,
	kModelAnimationIzoCombatWalking           = 282,
	kModelAnimationIzoCombatRunning           = 283,
	kModelAnimationIzoCombatShotDead          = 284,
	kModelAnimationIzoCombatClimbStairsUp     = 285, // untriggered
	kModelAnimationIzoCombatClimbStairsDown   = 286, // untriggered
	kModelAnimationIzoCombatUnseatheSword     = 287,
	kModelAnimationIzoCombatSeatheSword       = 288,
	kModelAnimationIzoCombatSwordAttack       = 289,
	kModelAnimationIzoWalking                 = 290,
	kModelAnimationIzoRunning                 = 291,
	kModelAnimationIzoClimbStairsUp           = 292, // untriggered
	kModelAnimationIzoClimbStairsDown         = 293, // untriggered
	kModelAnimationIzoGotHitRight             = 294, // UNUSED
	kModelAnimationIzoGotHitLeft              = 295, // UNUSED
	kModelAnimationIzoShotDead                = 296,
	kModelAnimationIzoIdle                    = 297,
	kModelAnimationIzoAwkwardPlayWithHands    = 298,
	kModelAnimationIzoCalmTalk                = 299,
	kModelAnimationIzoMoreCalmTalk            = 300,
	kModelAnimationIzoExplainingTalk          = 301,
	kModelAnimationIzoHeadNodsAgreeingTalk    = 302,
	kModelAnimationIzoOffensiveTalk           = 303,
	kModelAnimationIzoHeadNodsDisagreeingTalk = 304,
	kModelAnimationIzoUnderstandingTalk       = 305,
	kModelAnimationIzoClimbLadderDown         = 306, // untriggered
	kModelAnimationIzoClimbLadderUp           = 307, // untriggered
	kModelAnimationIzoHoldingCameraIdle       = 308,
	kModelAnimationIzoPicksCameraFromShop     = 309,
	kModelAnimationIzoHoldingCameraTalk       = 310,
	kModelAnimationIzoHoldingCameraUsesFlash  = 311,
	// 312 - 345: Sadik animations
	kModelAnimationSadikCombatIdle                       = 312,
	kModelAnimationSadikCombatTurnRight                  = 313, // untriggered
	kModelAnimationSadikCombatTurnLeft                   = 314, // untriggered
	kModelAnimationSadikCombatGotHitFront                = 315,
	kModelAnimationSadikCombatGotHitMore                 = 316,
	kModelAnimationSadikCombatWalking                    = 317,
	kModelAnimationSadikCombatRunning                    = 318,
	kModelAnimationSadikCombatShotDead                   = 319, // UNUSED
	kModelAnimationSadikCombatUnholsterGun               = 320,
	kModelAnimationSadikCombatHolsterGun                 = 321, // untriggered
	kModelAnimationSadikCombatFireGunAndReturnToPoseIdle = 322, // A bit bugged. Sadik has all dark/black clothes suddenly here.
	kModelAnimationSadikWalking                          = 323,
	kModelAnimationSadikRunning                          = 324,
	kModelAnimationSadikGotHitFront                      = 325,
	kModelAnimationSadikGotHitMore                       = 326,
	kModelAnimationSadikShotDead                         = 327,
	kModelAnimationSadikIdle                             = 328,
	kModelAnimationSadikShiftsShoulders                  = 329,
	kModelAnimationSadikGesturePointOrGive               = 330,
	kModelAnimationSadikCalmTalk                         = 331,
	kModelAnimationSadikMoreCalmTalk                     = 332,
	kModelAnimationSadikSuggestTalk                      = 333,
	kModelAnimationSadikUrgeTalk                         = 334,
	kModelAnimationSadikAccuseTalk                       = 335,
	kModelAnimationSadikProtestTalk                      = 336,
	kModelAnimationSadikMockTalk                         = 337,
	kModelAnimationSadikThisAndThatTalk                  = 338,
	kModelAnimationSadikClimbLadderDown                  = 339, // untriggered
	kModelAnimationSadikClimbLadderUp                    = 340, // untriggered
	kModelAnimationSadikJumpAcross                       = 341, // untriggered
	kModelAnimationSadikHangingDropsDown                 = 342, // untriggered
	kModelAnimationSadikKicksSomeoneWhoIsDown            = 343,
	kModelAnimationSadikHoldsSomeoneAndPunches           = 344,
	kModelAnimationSadikPicksUpAndThrowsMcCoy            = 345, // A bit bugged. Last frames 27-30 are empty and Sadik's model looks rough/wrong-ish.
	// 346 - 359: Twins/Luther animations
	kModelAnimationTwinsSitIdle                          = 346,
	kModelAnimationTwinsSitTyping                        = 347, // UNUSED
	kModelAnimationTwinsSitLancePutsSomethingToTheLeft   = 348,
	kModelAnimationTwinsSitLanceShortCalmTalk            = 349, // Mostly looks like Lance is talking. Probably could be used for both.
	kModelAnimationTwinsSitLanceLongerCalmTalk           = 350, // Mostly looks like Lance is talking. Probably could be used for both.
	kModelAnimationTwinsSitLutherCalmTalk                = 351, // Mostly looks like Luther is talking. Probably could be used for both.
	kModelAnimationTwinsSitLutherMoreCalmTalk            = 352, // Mostly looks like Luther is talking. Probably could be used for both.
	kModelAnimationTwinsSitLanceMoreCalmTalk             = 353, // Mostly looks like Lance is talking. Probably could be used for both.
	kModelAnimationTwinsSitLutherProtestTalk             = 354, // Mostly looks like Luther is talking. Probably could be used for both.
	kModelAnimationTwinsSitLutherGoAheadTalk             = 355, // Mostly looks like Luther is talking. Probably could be used for both.
	kModelAnimationTwinsSitLutherHitsOrFeedsLance        = 356, // TODO Check when this happens (animationMode: 6)
	kModelAnimationTwinsSitDropForwards                  = 357,
	kModelAnimationTwinsSitAlmostDeadLutherPushesButton  = 358,
	kModelAnimationTwinsSitDieCompletely                 = 359,
	// 360 - 387: EarlyQ animations
	kModelAnimationEarlyQCombatIdle                  = 360,
	kModelAnimationEarlyQCombatWalking               = 361,
	kModelAnimationEarlyQCombatUnholsterGun          = 362,
	kModelAnimationEarlyQCombatHolsterGun            = 363,
	kModelAnimationEarlyQCombatFiresGun              = 364,
	kModelAnimationEarlyQWalking                     = 365,
	kModelAnimationEarlyQGotHitRight                 = 366,
	kModelAnimationEarlyQGotHitLeft                  = 367,
	kModelAnimationEarlyQDropsDead                   = 368,
	kModelAnimationEarlyQIdle                        = 369,
	kModelAnimationEarlyQHandOnFace                  = 370, // maybe cigarrette?
	kModelAnimationEarlyQGivesSomething              = 371, // maybe the photo? // TODO check when this happens (animationMode 23)
	kModelAnimationEarlyQCalmTalk                    = 372,
	kModelAnimationEarlyQCalmExplainTalk             = 373,
	kModelAnimationEarlyQVulgarTalk                  = 374,
	kModelAnimationEarlyQDismissTalk                 = 375,
	kModelAnimationEarlyQMoreDismissTalk             = 376,
	kModelAnimationEarlyQIntenseExplainTalk          = 377,
	kModelAnimationEarlyQSubtleExplainTalk           = 378,
	kModelAnimationEarlyQExcitedTalk                 = 379,
	kModelAnimationEarlyQAnnounceTalk                = 380,
	kModelAnimationEarlyQSPicksUpBottleAndPoursDrink = 381,
	kModelAnimationEarlyQSHoldsDrinkIdle             = 382,
	kModelAnimationEarlyQSitsAndCrossesLegs          = 383,
	kModelAnimationEarlyQSitIdle                     = 384,
	kModelAnimationEarlyQSitTalk                     = 385,
	kModelAnimationEarlyQSitScorpionAgonyDeath       = 386,
	kModelAnimationEarlyQSitToStandingUp             = 387,
	// 388 - 421: Zuben animations
	kModelAnimationZubenCombatIdle               = 388,
	kModelAnimationZubenCombatHitFront           = 389,
	kModelAnimationZubenCombatHitBack            = 390,
	kModelAnimationZubenCombatWalking            = 391,
	kModelAnimationZubenCombatRunning            = 392,
	kModelAnimationZubenCombatShotDead           = 393,
	kModelAnimationZubenCombatClimbStairsUp      = 394, // UNUSED
	kModelAnimationZubenCombatClimbStairsDown    = 395, // UNUSED
	kModelAnimationZubenCombatUnholsterCleaver   = 396,
	kModelAnimationZubenCombatHolsterCleaver     = 397, // TODO check if properly triggered
	kModelAnimationZubenCleaverAttack            = 398,
	kModelAnimationZubenWalking                  = 399,
	kModelAnimationZubenRunning                  = 400,
	kModelAnimationZubenClimbStairsUp            = 401, // UNUSED
	kModelAnimationZubenClimbStairsDown          = 402, // UNUSED
	kModelAnimationZubenClimbShotFront           = 403,
	kModelAnimationZubenClimbShotBack            = 404,
	kModelAnimationZubenShotDead                 = 405,
	kModelAnimationZubenIdle                     = 406,
	kModelAnimationZubenQuickLookLeftRight       = 407, // UNUSED
	kModelAnimationZubenLooksAtSomeone           = 408,
	kModelAnimationZubenCalmTalk                 = 409,
	kModelAnimationZubenProtestTalk              = 410,
	kModelAnimationZubenQuestionTalk             = 411,
	kModelAnimationZubenMoreQuestionTalk         = 412,
	kModelAnimationZubenPointingTalk             = 413,
	kModelAnimationZubenYetMoreQuestiongTalk     = 414,
	kModelAnimationZubenScratchEarTalk           = 415,
	kModelAnimationZubenDontKnowTalk             = 416,
	kModelAnimationZubenThreatenTalk             = 417,
	kModelAnimationZubenPlayWithHands            = 418, // TODO partially used?
	kModelAnimationZubenToppleSoupCauldron       = 419,
	kModelAnimationZubenBashOnDoor               = 420,
	kModelAnimationZubenJumpDownFromCeiling      = 421,
	// 422 - 437: Generic walker A/B/C animations (with/without umbrella, walking/still)
	kModelGenWalkerHattedPersonFastPace                     = 422, // Walking  - Frame 1 used for standing still
	kModelGenWalkerHattedPersonLoweredFace                  = 423, // Walking  - Frame 6 used for standing still
	kModelGenWalkerHattedPersonWithUmbrella                 = 424, // Walking  - Same model as 426
	kModelGenWalkerHattedPersonNoUmbrellaSmallSteps         = 425, // Walking  - Same model as 427
	kModelGenWalkerHattedPersonWithUmbrellaStandsStill      = 426, // Standing - Same model as 424
	kModelGenWalkerHattedPersonNoUmbrellaStandsStill        = 427, // Standing - Same model as 425
	kModelGenWalkerHoodedPersonWithUmbrella                 = 428, // Walking  - Same model as 430
	kModelGenWalkerPunkPersonWithGlassesAndBeard            = 429, // Walking  - Same model as 431
	kModelGenWalkerHoodedPersonWithUmbrellaStandsStill      = 430, // Standing - Same model as 428
	kModelGenWalkerPunkPersonWithGlassesAndBeardStandsStill = 431, // Standing - Same model as 429
	kModelGenWalkerPunkPersonWithGlasses                    = 432, // Walking  - Same model as 433
	kModelGenWalkerPunkPersonWithGlassesStandsStill         = 433, // Standing - Same model as 432
	kModelGenWalkerHattedChild                              = 434, // Walking  - Frame 11 used for standing still
	kModelGenWalkerChild                                    = 435, // Walking  - Frame 0 (or 5) used for standing still
	kModelGenWalkerHattedPersonWithWoodenUmbrella           = 436, // Walking  - Frame 4 used for standing still
	kModelGenWalkerHattedLadyWithWoodenUmbrellaStandsStill  = 437, // Standing - *Not the same model with 436* - Just single frame
	// 438 - 439: Dancer model animations (UNUSED - RESTORED)
	kModelAnimationHysteriaPatron3DanceHandsDownLeanBackForth = 438, // UNUSED - 27 frames - RESTORED
	kModelAnimationHysteriaPatron3DanceHandsDownToHandsUp     = 439, // UNUSED - 24 frames - RESTORED (not looping, needs to be subsequently reversed to loop)
	//       440: Tracking Gun (At Bullet Bob's shop)
	kModelAnimationBulletBobsTrackingGun         = 440,
	// 441 - 450: Shooting range targets
	kModelAnimationMaleTargetEmptyHandsActive    = 441,
	kModelAnimationMaleTargetEmptyHandsDead      = 442, // 441+1
	kModelAnimationMaleTargetWithGunActive       = 443,
	kModelAnimationMaleTargetWithGunDead         = 444, // 443+1
	kModelAnimationMaleTargetWithShotgunActive   = 445,
	kModelAnimationMaleTargetWithShotgunDead     = 446, // 445+1
	kModelAnimationFemaleTargetWithBabyActive    = 447,
	kModelAnimationFemaleTargetWithBabyDead      = 448, // 447+1
	kModelAnimationFemaleTargetWithGunActive     = 449,
	kModelAnimationFemaleTargetWithGunDead       = 450, // 449+1
	//       451: Baker animations (probably for debug purposes or leftover from a removed character)
	kModelAnimationBakerTpose                    = 451, // This is a security guard T-pose (1 frame) model
	// 452 - 469: CrazyLegs animations
	kModelAnimationCrazylegsRollSlow             = 452,
	kModelAnimationCrazylegsRollFast             = 453, // untriggered
	kModelAnimationCrazylegsIdle                 = 454,
	kModelAnimationCrazylegsHandsUpIdle          = 455, // Is this triggered for Crazylegs?
	kModelAnimationCrazylegsMobileIdle           = 456, // Is this triggered for Crazylegs?
	kModelAnimationCrazylegsGestureGive          = 457, // animationMode 23. Is this triggered for Crazylegs?
	kModelAnimationCrazylegsCalmTalk             = 458,
	kModelAnimationCrazylegsSmallHandMoveTalk    = 459,
	kModelAnimationCrazylegsPointingAtSelfTalk   = 460,
	kModelAnimationCrazylegsDisagreeTalk         = 461,
	kModelAnimationCrazylegsFastTalk             = 462,
	kModelAnimationCrazylegsProtestTalk          = 463,
	kModelAnimationCrazylegsMobileCalmTalk       = 464, // last frame (11) seems bugged (hand snaps to bit lower and without mobile)
	kModelAnimationCrazylegsMobileIntenseTalk    = 465,
	kModelAnimationCrazylegsHandsUpTalk          = 466,
	kModelAnimationCrazylegsHandsUpRaisesHands   = 467, // untriggered
	kModelAnimationCrazylegsHandsUpLowersHands   = 468,
	kModelAnimationCrazylegsHangsUpMobile        = 469,
	// 470 - 486: Grigorian animations
	kModelAnimationGrigorianWalking                  = 470, // UNUSED
	kModelAnimationGrigorianSitIdle                  = 471, // UNUSED
	kModelAnimationGrigorianSitIdleNailBiting        = 472, // UNUSED
	kModelAnimationGrigorianSitDismissTalk           = 473, // UNUSED
	kModelAnimationGrigorianSitHeadacheTalk          = 474, // UNUSED
	kModelAnimationGrigorianSitProtestTalk           = 475, // UNUSED
	kModelAnimationGrigorianSitToStandingUp          = 476, // UNUSED
	kModelAnimationGrigorianSitFromStandingUp        = 477, // UNUSED
	kModelAnimationGrigorianStandIdle                = 478, // maybe calm talk too?
	kModelAnimationGrigorianStandAnnoyedTalk         = 479,
	kModelAnimationGrigorianStandArmsCrossedTalk     = 480,
	kModelAnimationGrigorianStandProtestTalk         = 481,
	kModelAnimationGrigorianStandProtestMoreTalk     = 482,
	kModelAnimationGrigorianStandProtestEvenMoreTalk = 483,
	kModelAnimationGrigorianStandInsistentTalk       = 484,
	kModelAnimationGrigorianStandDismissOrAccuseTalk = 485,
	kModelAnimationGrigorianStandBegOrMockingTalk    = 486,
	// 487 - 505: Transient/Homeless animations
	kModelAnimationTransientWalking                  = 487,
	kModelAnimationTransientRunning                  = 488, // UNUSED
	kModelAnimationTransientShotDeadCollapseInPlace  = 489,
	kModelAnimationTransientShotInTheBackDropsDead   = 490, // UNUSED
	kModelAnimationTransientLayingIdle               = 491,
	kModelAnimationTransientLayingCalmTalk           = 492,
	kModelAnimationTransientLayingMoreCalmTalk       = 493,
	kModelAnimationTransientLayingThisAndThatTalk    = 494,
	kModelAnimationTransientLayingShotDead           = 495,
	kModelAnimationTransientLayingGestureGiveOrTake  = 496,
	kModelAnimationTransientIdle                     = 497,
	kModelAnimationTransientIdleToSearchingTrash     = 498, // UNUSED
	kModelAnimationTransientPickingNodeAndWiping     = 499,
	kModelAnimationTransientGestureGive              = 500, // or probably idle, but it doesn't look like idle
	kModelAnimationTransientScratchBackOfHeadTalk    = 501,
	kModelAnimationTransientDescriptiveTalk          = 502,
	kModelAnimationTransientPointingAtTalk           = 503, // Could be used when he points to where Zuben ran to
	kModelAnimationTransientSearchingTrash           = 504,
	kModelAnimationTransientSearchingTrashToIdle     = 505,
	// 506 - 525: Bullet Bob animations
	kModelAnimationBulletBobSittingCombatIdle         = 506,
	kModelAnimationBulletBobSittingCombatGotHit       = 507, // UNUSED
	kModelAnimationBulletBobSittingCombatStrafeSlow   = 508, // UNUSED
	kModelAnimationBulletBobSittingCombatStrafeFast   = 509, // UNUSED
	kModelAnimationBulletBobSittingCombatShotDead     = 510,
	kModelAnimationBulletBobSittingCombatTalk         = 511, // UNUSED
	kModelAnimationBulletBobSittingCombatRetrievesGun = 512,
	kModelAnimationBulletBobSittingCombatFiresGun     = 513,
	kModelAnimationBulletBobSittingIdle               = 514,
	kModelAnimationBulletBobSittingHeadMoveAround     = 515, // UNUSED - RESTORED
	kModelAnimationBulletBobSittingHeadMoveDownThink  = 516,
	kModelAnimationBulletBobSittingCalmTalk           = 517,
	kModelAnimationBulletBobSittingDismissiveTalk     = 518,
	kModelAnimationBulletBobSittingSuggestTalk        = 519,
	kModelAnimationBulletBobSittingQuickSuggestTalk   = 520,
	kModelAnimationBulletBobSittingExplainTalk        = 521,
	kModelAnimationBulletBobSittingGossipTalk         = 522,
	kModelAnimationBulletBobSittingHeadNodLeftTalk    = 523,
	kModelAnimationBulletBobSittingPersistentTalk     = 524,
	kModelAnimationBulletBobSittingThumbsUp           = 525, // TODO when is this used? animationMode 23
	// 526 - 544: Runciter animations
	kModelAnimationRunciterWalking              = 526,
	kModelAnimationRunciterGotHit               = 527, // UNUSED
	kModelAnimationRunciterShotDead             = 528,
	kModelAnimationRunciterIdle                 = 529,
	kModelAnimationRunciterScratchesWoundIdle   = 530,
	kModelAnimationRunciterPicksNose            = 531,
	kModelAnimationRunciterGestureGive          = 532,
	kModelAnimationRunciterCalmTalk             = 533,
	kModelAnimationRunciterSuggestOnTipToesTalk = 534, // TODO why does he seem on tip-toes? Is someone holding him up?
	kModelAnimationRunciterExplainTalk          = 535,
	kModelAnimationRunciterAngryTalk            = 536,
	kModelAnimationRunciterQuestionTalk         = 537,
	kModelAnimationRunciterOffensiveTalk        = 538,
	kModelAnimationRunciterComplainCryTalk      = 539,
	kModelAnimationRunciterDespairTalk          = 540,
	kModelAnimationRunciterCannotBelieveTalk    = 541,
	kModelAnimationRunciterAttack               = 542, // UNUSED - TODO What is he supposed to be doing?
	kModelAnimationRunciterDefendOrPourMove     = 543, // UNUSED - TODO What is he supposed to be doing?
	kModelAnimationRunciterProtectSelfMove      = 544, // UNUSED - TODO What is he supposed to be doing?
	// 545 - 554: Insect Dealer animations
	kModelAnimationInsectDealerSittingIdle            = 545,
	kModelAnimationInsectDealerSittingScratchEarIdle  = 546,
	kModelAnimationInsectDealerSittingGestureGive     = 547, // TODO is this used? animationMode: 23
	kModelAnimationInsectDealerSittingCalmTalk        = 548,
	kModelAnimationInsectDealerSittingExplainTalk     = 549,
	kModelAnimationInsectDealerSittingPointingTalk    = 550,
	kModelAnimationInsectDealerSittingHeadMoveTalk    = 551,
	kModelAnimationInsectDealerSittingSuggestTalk     = 552,
	kModelAnimationInsectDealerSittingGossipTalk      = 553,
	kModelAnimationInsectDealerSittingDescriptiveTalk = 554,
	// 555 - 565: Tyrell Guard animations
	kModelAnimationTyrellGuardSittingIdle                 = 555,
	kModelAnimationTyrellGuardSittingLookingAtMonitorIdle = 556, // UNUSED
	kModelAnimationTyrellGuardSittingGestureGive          = 557,
	kModelAnimationTyrellGuardSittingCalmTalk             = 558,
	kModelAnimationTyrellGuardSittingExplainTalk          = 559,
	kModelAnimationTyrellGuardSittingHandOverHeadTalk     = 560,
	kModelAnimationTyrellGuardSittingSuggestTalk          = 561,
	kModelAnimationTyrellGuardSittingUpsetTalk            = 562,
	kModelAnimationTyrellGuardSittingMaybeHugsMonitors    = 563, // ??? untriggered
	kModelAnimationTyrellGuardSittingSleepingWakingUp     = 564, // Triggered to play partially (states 1, 2)
	kModelAnimationTyrellGuardSittingPressingAlertButton  = 565, // TODO check - does this actually get triggered? animationMode 50
	// 566 - 570: Mia animations
	kModelAnimationMiaIdle             = 566,
	kModelAnimationMiaGestureGive      = 567, // TODO when is this used? animationMode 23
	kModelAnimationMiaHeadNodTalk      = 568,
	kModelAnimationMiaMoreCalmTalk     = 569,
	kModelAnimationMiaHandsOnWaistTalk = 570,
	// 571 - 604: Officer Leary animations
	kModelAnimationOfficerLearyCombatIdle             = 571,
	kModelAnimationOfficerLearyCombatGotHitRight      = 572,
	kModelAnimationOfficerLearyCombatGotHitLeft       = 573,
	kModelAnimationOfficerLearyCombatWalking          = 574,
	kModelAnimationOfficerLearyCombatRunning          = 575,
	kModelAnimationOfficerLearyCombatShotDead         = 576,
	kModelAnimationOfficerLearyCombatClimbStairsUp    = 577, // untriggered?
	kModelAnimationOfficerLearyCombatClimbStairsDown  = 578, // untriggered?
	kModelAnimationOfficerLearyCombatUnholsterGun     = 579,
	kModelAnimationOfficerLearyCombatHolsterGun       = 580,
	kModelAnimationOfficerLearyCombatFireGun          = 581,
	kModelAnimationOfficerLearyWalking                = 582,
	kModelAnimationOfficerLearyRunning                = 583,
	kModelAnimationOfficerLearyClimbStairsUp          = 584, // untriggered?
	kModelAnimationOfficerLearyClimbStairsDown        = 585, // untriggered?
	kModelAnimationOfficerLearyGotHitFront            = 586,
	kModelAnimationOfficerLearyGotHitBack             = 587,
	kModelAnimationOfficerLearyShotDead               = 588,
	kModelAnimationOfficerLearyOscillateIdle          = 589,
	kModelAnimationOfficerLearyLookAroundIdle         = 590,
	kModelAnimationOfficerLearyRockBackForthIdle      = 591,
	kModelAnimationOfficerLearyCalmExplainTalk        = 592,
	kModelAnimationOfficerLearyIndicateTalk           = 593,
	kModelAnimationOfficerLearyLongerExplainTalk      = 594,
	kModelAnimationOfficerLearyWarnOrThreatenTalk     = 595,
	kModelAnimationOfficerLearyUpsetOrCommandTalk     = 596,
	kModelAnimationOfficerLearyMoreUpsetTalk          = 597,
	kModelAnimationOfficerLearyUrgeOrQuestionTalk     = 598,
	kModelAnimationOfficerLearyHandsOnWaistTalk       = 599,
	kModelAnimationOfficerLearyScratchHeadApologyTalk = 600,
	kModelAnimationOfficerLearyTakingNotes            = 601,
	kModelAnimationOfficerLearyIntenseTakingNotes     = 602, // UNUSED
	kModelAnimationOfficerLearyPutNotepadAway         = 603,
	kModelAnimationOfficerLearyTakeOutNotepad         = 604,
	// 605 - 641: Officer Grayford animations
	kModelAnimationOfficerGrayfordCombatIdle              = 605,
	kModelAnimationOfficerGrayfordCombatSlowStrafe        = 606, // UNUSED
	kModelAnimationOfficerGrayfordCombatFastStrafe        = 607, // UNUSED
	kModelAnimationOfficerGrayfordCombatGotHitRight       = 608,
	kModelAnimationOfficerGrayfordCombatGotHitLeft        = 609,
	kModelAnimationOfficerGrayfordCombatWalking           = 610,
	kModelAnimationOfficerGrayfordCombatRunning           = 611,
	kModelAnimationOfficerGrayfordCombatShotDead          = 612,
	kModelAnimationOfficerGrayfordCombatClimbStairsUp     = 613, // UNUSED
	kModelAnimationOfficerGrayfordCombatClimbStairsDown   = 614, // UNUSED
	kModelAnimationOfficerGrayfordCombatUnholsterGun      = 615,
	kModelAnimationOfficerGrayfordCombatHolsterGun        = 616,
	kModelAnimationOfficerGrayfordCombatFireGun           = 617,
	kModelAnimationOfficerGrayfordWalking                 = 618,
	kModelAnimationOfficerGrayfordRunning                 = 619,
	kModelAnimationOfficerGrayfordClimbStairsUp           = 620, // UNUSED
	kModelAnimationOfficerGrayfordClimbStairsDown         = 621, // UNUSED
	kModelAnimationOfficerGrayfordGotHitFront             = 622,
	kModelAnimationOfficerGrayfordGotHitBack              = 623,
	kModelAnimationOfficerGrayfordShotDead                = 624,
	kModelAnimationOfficerGrayfordOscillateIdle           = 625,
	kModelAnimationOfficerGrayfordLookAroundDownwardsIdle = 626,
	kModelAnimationOfficerGrayfordLookAroundSidewaysIdle  = 627,
	kModelAnimationOfficerGrayfordGestureGive             = 628, // UNUSED
	kModelAnimationOfficerGrayfordCalmExplainTalk         = 629,
	kModelAnimationOfficerGrayfordCalmRightHandMoveTalk   = 630,
	kModelAnimationOfficerGrayfordScratchHeadTalk         = 631,
	kModelAnimationOfficerGrayfordQuickHandMoveTalk       = 632,
	kModelAnimationOfficerGrayfordSevereTalk              = 633,
	kModelAnimationOfficerGrayfordMockTalk                = 634,
	kModelAnimationOfficerGrayfordPointingTalk            = 635,
	kModelAnimationOfficerGrayfordQuestionTalk            = 636,
	kModelAnimationOfficerGrayfordDismissTalk             = 637,
	kModelAnimationOfficerGrayfordPlaceRadioToEar         = 638,
	kModelAnimationOfficerGrayfordTalkToAndLowerRadio     = 639,
	kModelAnimationOfficerGrayfordTakeOutRadioFromPocket  = 640,
	kModelAnimationOfficerGrayfordPutAwayRadioInPocket    = 641,
	// 642 - 660: Hanoi animations
	kModelAnimationHanoiCombatIdle             = 642,
	kModelAnimationHanoiCombatKicksDoorIn      = 643, // TODO check when this happens (animationMode 71)
	kModelAnimationHanoiCombatFiresGun         = 644,
	kModelAnimationHanoiWalking                = 645,
	kModelAnimationHanoiGotHitOrViolentHeadNod = 646,
	kModelAnimationHanoiShotDead               = 647,
	kModelAnimationHanoiLooksAroundIdle        = 648,
	kModelAnimationHanoiScratchesBackIdle      = 649,
	kModelAnimationHanoiCalmTalk               = 650,
	kModelAnimationHanoiExplainTalk            = 651,
	kModelAnimationHanoiDownwardsNodTalk       = 652,
	kModelAnimationHanoiDenyTalk               = 653,
	kModelAnimationHanoiSlightBowingTalk       = 654,
	kModelAnimationHanoiLaughTalk              = 655, // untriggered. Restored.
	kModelAnimationHanoiMockTalk               = 656,
	kModelAnimationHanoiGrabsMcCoy             = 657, // TODO check when this happens (animationMode 23)
	kModelAnimationHanoiHoldsMcCoyUp           = 658,
	kModelAnimationHanoiHoldsMcCoyUpAndTalks   = 659,
	kModelAnimationHanoiPunchUpAttack          = 660, // untriggered
	// 661 - 670: Desk Clerk (Yukon) animations
	kModelAnimationDeskClerkReadPaperIdle                 = 661,
	kModelAnimationDeskClerkReadPaperChangePageIdle       = 662,
	kModelAnimationDeskClerkReadPaperCalmTalk             = 663,
	kModelAnimationDeskClerkReadPaperMoreCalmTalk         = 664,
	kModelAnimationDeskClerkReadPaperMoveLeftTalk         = 665,
	kModelAnimationDeskClerkReadPaperSlightClosePaperTalk = 666,
	kModelAnimationDeskClerkReadPaperMoreClosePaperTalk   = 667,
	kModelAnimationDeskClerkIsHeldUpByLeonIdle            = 668,
	kModelAnimationDeskClerkFallingAfterLeonLetsGo        = 669,
	kModelAnimationDeskClerkHeadSmashedOnCounter          = 670,
	// 671 - 681: Howie Lee animations
	kModelAnimationHowieLeeGathersOfTidiesUp              = 671,
	kModelAnimationHowieLeeWalking                        = 672,
	kModelAnimationHowieLeePutsIngredientsCooking         = 673,
	kModelAnimationHowieLeeLongGestureGive                = 674,
	kModelAnimationHowieLeeQuickGestureGive               = 675, // UNUSED
	kModelAnimationHowieLeeCalmTalk                       = 676,
	kModelAnimationHowieLeeExplainTalk                    = 677,
	kModelAnimationHowieLeeUpsetTalk                      = 678,
	kModelAnimationHowieLeeAngryTalk                      = 679,
	kModelAnimationHowieLeeNoTimeTalk                     = 680,
	kModelAnimationHowieLeeElaborateMovementTalk          = 681, // Sushi throwing?
	// 682 - 687: Fish Dealer animations
	kModelAnimationFishDealerWalking       = 682,
	kModelAnimationFishDealerIdle          = 683,
	kModelAnimationFishDealerGestureGive   = 684, // TODO check when this happens (animationMode 23)
	kModelAnimationFishDealerCalmTalk      = 685,
	kModelAnimationFishDealerExplainTalk   = 686,
	kModelAnimationFishDealerNoTroubleTalk = 687,
	// 688 - 697: Dino Klein animations
	kModelAnimationKleinWalking                    = 688,
	kModelAnimationKleinStandingIdle               = 689,
	kModelAnimationKleinTalkScratchBackOfHead      = 690,
	kModelAnimationKleinWorkingOnInstruments       = 691,
	kModelAnimationKleinTalkSmallLeftHandMove      = 692,
	kModelAnimationKleinTalkRightHandTouchFace     = 693,
	kModelAnimationKleinTalkWideHandMotion         = 694,
	kModelAnimationKleinTalkSuggestOrAsk           = 695,
	kModelAnimationKleinTalkDismissive             = 696,
	kModelAnimationKleinTalkRaisingBothHands       = 697,
	// 698 - 704: Murray animations
	kModelAnimationMurrayIdle            = 698,
	kModelAnimationMurrayGestureGive     = 699, // untriggered
	kModelAnimationMurrayCalmTalk        = 700,
	kModelAnimationMurrayMoreCalmTalk    = 701,
	kModelAnimationMurrayExplainTalk     = 702,
	kModelAnimationMurrayMoreExplainTalk = 703,
	kModelAnimationMurrayCautionTalk     = 704,
	// 705 - 715: Hawker's Barkeep animations
	kModelAnimationHawkersBarkeepIdle                   = 705,
	kModelAnimationHawkersBarkeepCleaningBar            = 706,
	kModelAnimationHawkersBarkeepWipingGlasses          = 707,
	kModelAnimationHawkersBarkeepGestureGive            = 708,
	kModelAnimationHawkersBarkeepGiveMoonshine          = 709,
	kModelAnimationHawkersBarkeepCalmTalk               = 710,
	kModelAnimationHawkersBarkeepExplainTalk            = 711,
	kModelAnimationHawkersBarkeepBentsAndWipesTalk      = 712,
	kModelAnimationHawkersBarkeepAltGestureGiveTalk     = 713, // similar to 708, kind of bents more
	kModelAnimationHawkersBarkeepBentingTalk            = 714,
	kModelAnimationHawkersBarkeepBentingAndDismissTalk  = 715,
	// 716 - 721: Holloway animations
	kModelAnimationHollowayWalking                     = 716,
	kModelAnimationHollowayIdle                        = 717,
	kModelAnimationHollowaySlightHeadMove              = 718, // UNUSED
	kModelAnimationHollowayGlobAttack                  = 719,
	kModelAnimationHollowayCalmTalk                    = 720,
	kModelAnimationHollowayExplainTalk                 = 721,
	// 722 - 731: Sergeant Walls animations
	kModelAnimationSergeantWallsIdle             = 722,
	kModelAnimationSergeantWallsScratchHead      = 723, // UNUSED
	kModelAnimationSergeantWallsGestureGive      = 724,
	kModelAnimationSergeantWallsCalmTalk         = 725,
	kModelAnimationSergeantWallsMoreHeadMoveTalk = 726,
	kModelAnimationSergeantWallsExplainTalk      = 727,
	kModelAnimationSergeantWallsLaughTalk        = 728,
	kModelAnimationSergeantWallsHarderLaughTalk  = 729,
	kModelAnimationSergeantWallsDefendTalk       = 730,
	kModelAnimationSergeantWallsHitsBuzzerTalk   = 731,
	// 732 - 743: Moraji animations
	// In all Moraji's animations except 742, 743, he still has the cuff on his left hand
	kModelAnimationMorajiRunning                           = 732,
	kModelAnimationMorajiCuffedIdle                        = 733,
	kModelAnimationMorajiCuffedFastTalk                    = 734,
	kModelAnimationMorajiCuffedMoreFastTalk                = 735,
	kModelAnimationMorajiCuffedPointingTalk                = 736,
	kModelAnimationMorajiCuffedSomethingExplodingToHisLeft = 737, // McCoy shooting at cuffs
	kModelAnimationMorajiCuffedShotDead                    = 738,
	kModelAnimationMorajiRunningDivesForward               = 739,
	kModelAnimationMorajiLayingForwardTalk                 = 740,
	kModelAnimationMorajiLayingForwardDies                 = 741,
	kModelAnimationMorajiSittingGetsUp                     = 742, // no cuff here
	kModelAnimationMorajiStandingUpUrgentTalk              = 743, // UNUSED - no cuff here either
	// 744 - 750: Photographer animations
	kModelAnimationPhotographerWalking          = 744,
	kModelAnimationPhotographerIdle             = 745,
	kModelAnimationPhotographerTakingAPhoto     = 746,
	kModelAnimationPhotographerCalmTalk         = 747,
	kModelAnimationPhotographerMoreHeadMoveTalk = 748, // UNUSED - RESTORED
	kModelAnimationPhotographerExplainTalk      = 749,
	kModelAnimationPhotographerSuggestTalk      = 750,
	//       751: Rajif animations
	kModelAnimationRajifWithGunIdle             = 751,
	// 752 - 757: EarlyQ Bartender animations
	kModelAnimationEarlyQBartenderWipingGlassIdle      = 752,
	kModelAnimationEarlyQBartenderWipingTable          = 753,
	kModelAnimationEarlyQBartenderPuttingAGlassOnTable = 754,
	kModelAnimationEarlyQBartenderCalmTalk             = 755,
	kModelAnimationEarlyQBartenderExplainTalk          = 756, // UNUSED - RESTORED
	kModelAnimationEarlyQBartenderDescribeTalk         = 757,
	// 758 - 764: Shoeshine Man animations (UNUSED)
	kModelAnimationShoeshineManWalking              = 758, // UNUSED
	kModelAnimationShoeshineManSitsIdle             = 759, // UNUSED
	kModelAnimationShoeshineManSitsGestureGive      = 760, // UNUSED
	kModelAnimationShoeshineManSitsCalmTalk         = 761, // UNUSED
	kModelAnimationShoeshineManSitsMoreHeadMoveTalk = 762, // UNUSED
	kModelAnimationShoeshineManSitsViolentHeadMove  = 763, // UNUSED - Coughs? Spits? Talks?
	kModelAnimationShoeshineManSitsGetsUp           = 764, // UNUSED
	// 765 - 772: Tyrell animations
	kModelAnimationTyrellWalking             = 765,
	kModelAnimationTyrellIdle                = 766,
	kModelAnimationTyrellHeadMoveIdle        = 767,
	kModelAnimationTyrellFastNodTalk         = 768,
	kModelAnimationTyrellSuggestTalk         = 769,
	kModelAnimationTyrellConsideringTalk     = 770,
	kModelAnimationTyrellBowsAndSuggestsTalk = 771, // TODO check if triggered
	kModelAnimationTyrellDismissTalk         = 772,
	// 773 - 787: Chew animations
	kModelAnimationChewWalking                 = 773, // untriggered
	kModelAnimationChewTakesAStepBackwards     = 774, // untriggered
	kModelAnimationChewGotHit                  = 775, // untriggered
	kModelAnimationChewShotDead                = 776, // untriggered
	kModelAnimationChewIdle                    = 777,
	kModelAnimationChewFiddlingWithInstruments = 778,
	kModelAnimationChewAdjustingInstrument     = 779,
	kModelAnimationChewProtestTalk             = 780,
	kModelAnimationChewAngryTalk               = 781,
	kModelAnimationChewExplainTalk             = 782,
	kModelAnimationChewGoAwayTalk              = 783, // frame 6 is a bit bugged (a slice is missing at head height)
	kModelAnimationChewDismissiveTalk          = 784,
	kModelAnimationChewPointingSomewhereTalk   = 785, // TODO check if triggered
	kModelAnimationChewDescribePulledTalk      = 786, // TODO check if triggered
	kModelAnimationChewDescribePushedTalk      = 787, // TODO check if triggered
	// 788 - 804: Gaff animations
	kModelAnimationGaffWalking                   = 788,
	kModelAnimationGaffClimbStairsUp             = 789, // UNUSED
	kModelAnimationGaffClimbStairsDown           = 790, // UNUSED
	kModelAnimationGaffGotHitRight               = 791, // UNUSED
	kModelAnimationGaffGotHitLeft                = 792, // UNUSED
	kModelAnimationGaffShotDown                  = 793, // UNUSED // probably not dead, for continuity reasons
	kModelAnimationGaffIdle                      = 794,
	kModelAnimationGaffLooksAroundAndDown        = 795, // UNUSED
	kModelAnimationGaffMakesOrigamiMaybe         = 796, // UNUSED
	kModelAnimationGaffGestureGive               = 797, // UNUSED
	kModelAnimationGaffCalmPointingWithStickTalk = 798,
	kModelAnimationGaffExplainTalk               = 799,
	kModelAnimationGaffDescribeTalk              = 800,
	kModelAnimationGaffLaughHeadBackTalk         = 801,
	kModelAnimationGaffEntersSpinner             = 802,
	kModelAnimationGaffExitsSpinner              = 803, // UNUSED
	kModelAnimationGaffReachesOver               = 804, // UNUSED
	// 805 - 808: Bear "Bryant" (Sebastian's toy) animations
	kModelAnimationBearToyWalking         = 805,
	kModelAnimationBearToyOscillatingIdle = 806, // untriggered?
	kModelAnimationBearToyGotHit          = 807, // UNUSED
	kModelAnimationBearToyShotDead        = 808, // untriggered
	// 809 - 821: Sebastian animations
	kModelAnimationSebastianWalking                    = 809, // TODO check if Sebastian ever walks (probably not)
	kModelAnimationSebastianStepsBack                  = 810, // TODO check when this happens (animationMode 20)
	kModelAnimationSebastianIdle                       = 811,
	kModelAnimationSebastianAwkwardPlayWithHands       = 812, // UNUSED
	kModelAnimationSebastianCalmHeadNodLeftTalk        = 813,
	kModelAnimationSebastianCalmHeadNodRightTalk       = 814,
	kModelAnimationSebastianSuggestTalk                = 815,
	kModelAnimationSebastianWonderingTalk              = 816,
	kModelAnimationSebastianPointingToSelfTalk         = 817,
	kModelAnimationSebastianScratchEarTalk             = 818,
	kModelAnimationSebastianAnnoyedTalk                = 819,
	kModelAnimationSebastianWaitTalk                   = 820, // last frame 13 is bugged (empty)
	kModelAnimationSebastianTriesToRunHitsHeadAndFalls = 821, // untriggered -- related to animationMode 48 "kAnimationModeDie"
	// 822 - 832: Rachael animations
	kModelAnimationRachaelWalking                  = 822,
	kModelAnimationRachaelIdle                     = 823,
	kModelAnimationRachaelIdleOscilate             = 824, // UNUSED
	kModelAnimationRachaelTalkSoftNod              = 825,
	kModelAnimationRachaelTalkNodToLeft            = 826,
	kModelAnimationRachaelTalkSuggestWithNodToLeft = 827,
	kModelAnimationRachaelTalkIndiffWithNodToLeft  = 828,
	kModelAnimationRachaelTalkOfferPointing        = 829,
	kModelAnimationRachaelTalkHaltMovement         = 830,
	kModelAnimationRachaelTalkHandOnChest          = 831,
	kModelAnimationRachaelTalkHandWaveToRight      = 832,
	// 833 - 837: "General" (Sebastian's toy) animations
	kModelGeneralDollWalking    = 833,
	kModelGeneralDollIdle       = 834,
	kModelGeneralDollHaltSalute = 835,
	kModelGeneralDollShotDead   = 836, // untriggered
	kModelGeneralDollGotHit     = 837, // untriggered
	// 838 - 845: Mama Isabella animations
	kModelIsabellaIdle              = 838,
	kModelIsabellaPutsSpicesInSoup  = 839,
	kModelIsabellaGestureGiveOrTake = 840, // untriggered
	kModelIsabellaCalmTalk          = 841,
	kModelIsabellaSuggestTalk       = 842,
	kModelIsabellaProtestTalk       = 843,
	kModelIsabellaMoreCalmTalk      = 844,
	kModelIsabellaLaughTalk         = 845,
	// 846 - 856: Leon animations
	kModelLeonWalking              = 846,
	kModelLeonIdle                 = 847,
	kModelLeonGrabHoldHigh         = 848,
	kModelLeonGrabLetsGo           = 849,
	kModelLeonCalmTalk             = 850,
	kModelLeonComplainTalk         = 851,
	kModelLeonAwkwardTalk          = 852,
	kModelLeonDenyTalk             = 853,
	kModelLeonGrabTalk             = 854,
	kModelLeonGrabAndGutPunchTalk  = 855,
	kModelLeonPunchAttack          = 856,
	// 857 - 862: Rat (Free Slot A/B) animations
	kModelAnimationRatJumpAttack                   = 857,
	kModelAnimationRatRunning                      = 858,
	kModelAnimationRatDying                        = 859,
	kModelAnimationRatHurt                         = 860,
	kModelAnimationRatIdle                         = 861,
	kModelAnimationRatSlowWalk                     = 862,
	// 863 - 876: Maggie animations
	kModelAnimationMaggieWalking                   = 863,
	kModelAnimationMaggieStandingIdle              = 864,
	kModelAnimationMaggieBarking                   = 865,
	kModelAnimationMaggieLyingDown                 = 866,
	kModelAnimationMaggieLyingIdleTailWagging      = 867,
	kModelAnimationMaggieLyingStandingUp           = 868,
	kModelAnimationMaggieStandingOnTwoFeet         = 869,
	kModelAnimationMaggieBarkingOrHeadUp           = 870,
	kModelAnimationMaggieLyingDead                 = 871,
	kModelAnimationMaggieWalkingTrapped            = 872,
	kModelAnimationMaggieStandingOnTwoFeetTrapped  = 873,
	kModelAnimationMaggieExploding                 = 874,
	kModelAnimationMaggieStandingIdleTrapped       = 875,
	kModelAnimationMaggieToggleSleepingWakeUp      = 876,
	// 877 - 884: Hysteria Patron1 (dancer) animations
	kModelAnimationHysteriaPatron1DanceStandingUpSemiSitAndUp = 877,
	kModelAnimationHysteriaPatron1DanceStandingUpLeftMotion   = 878,
	kModelAnimationHysteriaPatron1DanceStandingUpStowingMoney = 879, // original UNUSED (restored)
	kModelAnimationHysteriaPatron1DanceSplitsDuckAndDown      = 880,
	kModelAnimationHysteriaPatron1DanceSplitsSemiUpAndDown    = 881,
	kModelAnimationHysteriaPatron1DanceSplitsBackAndForth     = 882,
	kModelAnimationHysteriaPatron1DanceStandingUpToSplits     = 883,
	kModelAnimationHysteriaPatron1DanceSplitsToStandingUp     = 884,
	// 885 - 892: Hysteria Patron2 (dancer) animations
	kModelAnimationHysteriaPatron2DanceHandsBellyMotion       = 885, // most used
	kModelAnimationHysteriaPatron2DanceHandsUpLeftMotion      = 886,
	kModelAnimationHysteriaPatron2DanceHandsUpSitAndUp        = 887,
	kModelAnimationHysteriaPatron2DanceHandsDownHipsSwirl     = 888,
	kModelAnimationHysteriaPatron2DanceHandsDownLegSwirl      = 889,
	kModelAnimationHysteriaPatron2DanceHandsDownLeanBackForth = 890, // 27 frames - same motion as 438 for Patron3Dance
	kModelAnimationHysteriaPatron2DanceHandsUpToHandsDown     = 891,
	kModelAnimationHysteriaPatron2DanceHandsDownToHandsUp     = 892, // 24 frames - same motion as 439 for Patron3Dance
	// 893 - 900: Mutant 1 animations - Special with pipe
	kModelAnimationMutant1Walking              = 893,
	kModelAnimationMutant1Idle                 = 894,
	kModelAnimationMutant1CalmTalk             = 895, // UNUSED
	kModelAnimationMutant1MoreCalmTalk         = 896, // untriggered?
	kModelAnimationMutant1YellOrHurt           = 897, // untriggered
	kModelAnimationMutant1MeleeAttack          = 898,
	kModelAnimationMutant1Jump                 = 899, // untriggered?
	kModelAnimationMutant1ShotDead             = 900,
	// 901 - 907: Mutant 2 animations - Special with tiny hand, no weapon
	kModelAnimationMutant2Walking              = 901,
	kModelAnimationMutant2Running              = 902,
	kModelAnimationMutant2Idle                 = 903,
	kModelAnimationMutant2CalmTalk             = 904, // untriggered?
	kModelAnimationMutant2YellOrHurt           = 905, // untriggered
	kModelAnimationMutant2MeleeAttack          = 906,
	kModelAnimationMutant2ShotDead             = 907,
	// 908 - 917: Mutant 3 animations - Throws rocks, ranged attack
	kModelAnimationMutant3Walking              = 908,
	kModelAnimationMutant3Running              = 909,
	kModelAnimationMutant3Idle                 = 910,
	kModelAnimationMutant3CalmTalk             = 911, // untriggered
	kModelAnimationMutant3YellOrHurt           = 912, // untriggered?
	kModelAnimationMutant3PicksUpAndThrowsRock = 913,
	kModelAnimationMutant3CrouchedWaiting      = 914, // untriggered?
	kModelAnimationMutant3CrouchedToStanding   = 915, // untriggered?
	kModelAnimationMutant3CrouchedFromStanding = 916, // untriggered?
	kModelAnimationMutant3ShotDead             = 917,
	// 918 - 919: Taffy Patron (Gordo's hostage) animations
	kModelAnimationTaffyPatronRunning          = 918,
	kModelAnimationTaffyPatronShotDead         = 919,
	// 920 - 930: Hasan animations
	kModelAnimationHasanTalkWipeFaceLeftHand01    = 920, // UNUSED
	kModelAnimationHasanIdleSlightMovement        = 921,
	kModelAnimationHasanGestureSuggest            = 922,
	kModelAnimationHasanTakingABiteSnakeMove      = 923,
	kModelAnimationHasanTalkPointingRightHand     = 924, // UNUSED
	kModelAnimationHasanTalkMovingBothHands       = 925,
	kModelAnimationHasanTalkLeftRightLeftGesture  = 926,
	kModelAnimationHasanTalkRaiseHandSnakeMove    = 927,
	kModelAnimationHasanTalkMovingBothHandsAndNod = 928,
	kModelAnimationHasanTalkWipeFaceLeftHand02    = 929, // (almost) identical to 920 (same number of frames too)
	kModelAnimationHasanTalkUpset                 = 930,
	// 931 - 996: Item animations
	kModelAnimationBadge                       = 931,
	kModelAnimationBomb                        = 932,
	kModelAnimationCandy                       = 933,
	kModelAnimationCandyWrapper                = 934,
	kModelAnimationDektorasCard                = 935,
	kModelAnimationCheese                      = 936,
	kModelAnimationChopstickWrapper            = 937,
	kModelAnimationChromeDebris                = 938,
	kModelAnimationDragonflyBelt               = 939,
	kModelAnimationDragonflyEarring            = 940,
	kModelAnimationDNADataDisc                 = 941,
	kModelAnimationDogCollar                   = 942,
	kModelAnimationRagDoll                     = 943,
	kModelAnimationEnvelope                    = 944,
	kModelAnimationFlaskOfAbsinthe             = 945,
	kModelAnimationFolderInKIA                 = 946,
	kModelAnimationGoldfish                    = 947,
	kModelAnimationFolder                      = 948,
	kModelAnimationLetter                      = 949, // Restored Content - Used for Crazylegs Note in his Advertisement pamphlet
	kModelAnimationGarterSnake                 = 950,
	kModelAnimationLichenDogWrapper            = 951,
	kModelAnimationLicensePlate                = 952,
	kModelAnimationGordosLighterReplicant      = 953,
	kModelAnimationGordosLighterHuman          = 954,
	kModelAnimationKingstonKitchenBox          = 955,
	kModelAnimationMaggieBracelet              = 956,
	kModelAnimationGrigoriansNote              = 957,
	kModelAnimationOriginalRequisitionForm     = 958,
	kModelAnimationOriginalShippingForm        = 959, // original: Never placed in game world
	kModelAnimationPowerSource                 = 960,
	kModelAnimationCollectionReceipt           = 961,
	kModelAnimationRequisitionForm             = 962,
	kModelAnimationRadiationGoggles            = 963,
	kModelAnimationReferenceLetter             = 964,
	kModelAnimationWeaponsOrderForm            = 965,
	kModelAnimationShellCasings                = 966,
	kModelAnimationSlug                        = 967,
//	kModelAnimationKnife                       = 968, // UNUSED - 3 frames - a knife? - spins badly
	kModelAnimationStrangeScale                = 969,
	kModelAnimationHysteriaToken               = 970,
	kModelAnimationToyDog                      = 971,
	kModelAnimationTyrellSalesPamphlet         = 972,
	kModelAnimationTyrellSalesPamphletKIA      = 973,
	kModelAnimationDetonatorWire               = 974,
	kModelAnimationVideoDisc                   = 975,
	kModelAnimationCageOfScorpions             = 976,
	kModelAnimationIzoCamera                   = 977,
	kModelAnimationDeadDogA                    = 978,
	kModelAnimationDeadDogB                    = 979,
	kModelAnimationDeadDogC                    = 980,
	kModelAnimationMarcusDead                  = 981,
	kModelAnimationYukonHotelChair             = 982,
	kModelAnimationWeaponsCrate                = 983,
	kModelAnimationPhoto                       = 984,
	kModelAnimationCrystalsCigarette           = 985,
	kModelAnimationSpinnerKeys                 = 986,
	kModelAnimationBriefcase                   = 987,
	kModelAnimationDNAEvidence01OutOf6         = 988,
//	kModelAnimationDNAEvidence02OutOf6         = 989, // UNUSED - actual 2 parts of DNA
	kModelAnimationDNAEvidence03OutOf6         = 990, // used for two parts found
	kModelAnimationDNAEvidence04OutOf6         = 991, // used for three parts found
//	kModelAnimationDNAEvidence05OutOf6         = 992, // UNUSED - actual 5 parts of DNA
	kModelAnimationDNAEvidenceComplete         = 993,
//	kModelAnimationAmmoType00                  = 994, // UNUSED - simple bullet
	kModelAnimationAmmoType01                  = 995, // from Bullet Bob's
	kModelAnimationAmmoType02                  = 996  // from Izo stash (Act 4)
};

enum Elevators {
	kElevatorMA = 1,
	kElevatorPS = 2
};

// enum SceneObjectOffset {
// 	kSceneObjectActorIdStart  = 0,
// 	kSceneObjectActorIdEnd    = kSceneObjectActorIdStart  +  73,
// 	kSceneObjectItemIdStart   = kSceneObjectActorIdEnd    +   1,
// 	kSceneObjectItemIdEnd     = kSceneObjectItemIdStart   + 123,
// 	kSceneObjectObjectIdStart = kSceneObjectItemIdEnd     +   1,
// 	kSceneObjectObjectIdEnd   = kSceneObjectObjectIdStart +  95
// };

enum SceneObjectOffset {
	kSceneObjectOffsetActors  =   0,
	kSceneObjectOffsetItems   =  74,
	kSceneObjectOffsetObjects = 198
};

enum ActorCombatStates {
	kActorCombatStateIdle                 = 0,
	kActorCombatStateCover                = 1,
	kActorCombatStateApproachCloseAttack  = 2,
	kActorCombatStateUncover              = 3,
	kActorCombatStateAim                  = 4,
	kActorCombatStateRangedAttack         = 5,
	kActorCombatStateCloseAttack          = 6,
	kActorCombatStateFlee                 = 7,
	kActorCombatStateApproachRangedAttack = 8
};

enum PoliceMazeTrackInstruction {
	kPMTIActivate        = -26, // args: variableId, maxValue
	kPMTILeave           = -25, // args: -
	kPMTIShoot           = -24, // args: soundId, notUsed
	kPMTIEnemyReset      = -23, // args: otherItemId
	kPMTIEnemySet        = -22, // args: otherItemId
	kPMTIFlagReset       = -21, // args: flagId
	kPMTIFlagSet         = -20, // args: flagId
	kPMTIVariableDec     = -19, // args: variableId
	kPMTIVariableInc     = -18, // args: variableId, maxValue
	kPMTIVariableReset   = -17, // args: variableId
	kPMTIVariableSet     = -16, // args: variableId, value
	kPMTITargetSet       = -15, // args: otherItemId, value
	kPMTIPausedReset1of3 = -14, // args: otherItemId1, otherItemId2, otherItemId3
	kPMTIPausedReset1of2 = -13, // args: otherItemId1, otherItemId2
	kPMTIPausedSet       = -12, // args: otherItemId
	kPMTIPausedReset     = -11, // args: otherItemId
	kPMTIPlaySound       = -10, // args: soundId, volume
	kPMTIObstacleReset   =  -9, // args: otherItemId
	kPMTIObstacleSet     =  -8, // args: otherItemId
	kPMTIWaitRandom      =  -7, // args: min, max
	kPMTIRotate          =  -6, // args: target, delta
	kPMTIFacing          =  -5, // args: angle
	kPMTIRestart         =  -4, // args: -
	kPMTIWait            =  -3, // args: time
	kPMTIMove            =  -2, // args: target
	kPMTIPosition        =  -1, // args: index
	kPMTI26              =   0
};

enum PlayerAgenda {
	kPlayerAgendaPolite     = 0,
	kPlayerAgendaNormal     = 1,
	kPlayerAgendaSurly      = 2,
	kPlayerAgendaErratic    = 3,
	kPlayerAgendaUserChoice = 4
};

enum AffectionTowards {
	kAffectionTowardsNone    = 0,
	kAffectionTowardsSteele  = 1,
	kAffectionTowardsDektora = 2,
	kAffectionTowardsLucy    = 3
};

/*
 * Common goals:
 *   0 -  99 - first chapter
 * 100 - 199 - second chapter
 * 200 - 299 - third chapter
 * 300 - 399 - fourth chapter
 * 400 - 499 - fifth chapter
 * 599       - dead / gone
 */

enum GoalMcCoy {
	kGoalMcCoyDefault              =   0,
	kGoalMcCoyDodge                =   1,
	kGoalMcCoyLeanOverAndSearch    =   2, // unused, McCoy searching dumpster is done by Actor_Change_Animation_Mode(kActorMcCoy, 38);
	kGoalMcCoyBB11GetUp            = 100,
	kGoalMcCoyBB11PrepareToRunAway = 101,
	kGoalMcCoyBB11RunAway          = 102,
	kGoalMcCoyBB11GetCaught        = 103,
	kGoalMcCoyNRxxSitAtTable       = 200,
	kGoalMcCoyNRxxStandUp          = 201,
	kGoalMcCoyNR01ThrownOut        = 210,
	kGoalMcCoyNR01GetUp            = 211,
	kGoalMcCoyNR01LayDrugged       = 212,
	kGoalMcCoyNR04Drink            = 220,
	kGoalMcCoyNR04PassOut          = 221,
	kGoalMcCoyNR11Shoot            = 230,
	kGoalMcCoyNR10Fall             = 231,
	kGoalMcCoyUG07Caught           = 301,
	kGoalMcCoyUG07BrokenFinger     = 302,
	kGoalMcCoyUG07Released         = 303,
	kGoalMcCoyCallWithGuzza        = 350,
	kGoalMcCoyUG15Fall             = 390,
	kGoalMcCoyUG15Die              = 391,
	kGoalMcCoyStartChapter5        = 400,
	kGoalMcCoyArrested             = 500,
	kGoalMcCoyGone                 = 599
};

enum GoalSteele {
	// chapter 1
	kGoalSteeleDefault                     =   0,
	kGoalSteeleGoToRC01                    =   1,
	kGoalSteeleGoToRC02                    =   2,
	kGoalSteeleGoToFreeSlotC1              =   3,
	kGoalSteeleGoToFreeSlotG1              =   4,
	kGoalSteeleGoToCT01                    =   5,
	kGoalSteeleGoToFreeSlotC2              =   6,
	kGoalSteeleGoToFreeSlotG2              =   7,
	kGoalSteeleGoToPoliceShootingRange     =   8,
	kGoalSteeleGoToPS02                    =   9,
	kGoalSteeleGoToFreeSlotG3              =  10,
	kGoalSteeleInterviewGrigorian          =  11,
	// chapter 2
	kGoalSteeleApprehendIzo                = 100,
	kGoalSteeleGoToTB02                    = 110,
	kGoalSteeleLeaveTB02                   = 111,
	kGoalSteeleGoToPoliceStation           = 112,
	kGoalSteeleWalkAround                  = 113,
	kGoalSteeleShootIzo                    = 120,
	kGoalSteeleArrestIzo                   = 121,
	kGoalSteeleIzoBlockedByMcCoy           = 125,
	kGoalSteeleLeaveRC03                   = 130,
	kGoalSteeleWalkAroundRestart           = 190,
	// chapter 3
	kGoalSteeleStartChapter3               = 205,
	kGoalSteeleNR11StartWaiting            = 210,
	kGoalSteeleNR11StopWaiting             = 211,
	kGoalSteeleNR11Enter                   = 212,
	kGoalSteeleNR11Entered                 = 213,
	kGoalSteeleNR11Decide                  = 214,
	kGoalSteeleNR11Shoot                   = 215,
	kGoalSteeleNR11StopShooting            = 216,
	kGoalSteeleNR01WaitForMcCoy            = 230,
	kGoalSteeleNR01GoToNR08                = 231,
	kGoalSteeleNR01GoToNR02                = 232,
	kGoalSteeleNR01GoToHF03                = 233,
	kGoalSteeleHF03McCoyChasingLucy        = 234,
	kGoalSteeleNR08WalkOut                 = 235,
	kGoalSteeleNR10Wait                    = 236,
	kGoalSteeleHF02ConfrontLucy            = 240,
	kGoalSteeleHF02ShootLucy               = 241,
	kGoalSteeleHF02LucyShotBySteele        = 242,
	kGoalSteeleHF02LucyRanAway             = 243,
	kGoalSteeleHF02LucyShotByMcCoy         = 244,
	kGoalSteeleHF02LucyLostByMcCoy         = 245,
	kGoalSteeleHFxxGoToSpinner             = 246,
	kGoalSteeleNR01ConfrontGordo           = 250,
	kGoalSteeleNR01TalkToGordo             = 251,
	kGoalSteeleNR01ShootGordo              = 252,
	kGoalSteeleNR01ShootMcCoy              = 255,
	kGoalSteeleNR01McCoyShotGordo          = 258,
	kGoalSteeleNR01McCoyShotGun            = 260,
	kGoalSteeleNR01PrepareTalkAboutShotGun = 261,
	kGoalSteeleNR01TalkAboutShotGun        = 262,
	kGoalSteeleNR01ShotByMcCoy             = 270,
	kGoalSteeleNR01PrepareShotByMcCoy      = 271,
	kGoalSteeleNRxxGoToSpinner             = 275,
	kGoalSteeleTalkAboutMissingSpinner     = 280,
	kGoalSteeleImmediatelyStartChapter4    = 285,
	kGoalSteeleNR01StartChapter4           = 290,
	kGoalSteeleHF01StartChapter4           = 291,
	// chapter 4
	kGoalSteeleStartChapter4               = 300,
	// chapter 5
	kGoalSteeleStartChapter5               = 400,
	kGoalSteeleHF06Attack                  = 402, // has no use
	// kGoalSteeleKP03WillShootMcCoy = 410,
	kGoalSteeleKP03Walk                    = 411,
	kGoalSteeleKP03StopWalking             = 412,
	kGoalSteeleKP03Leave                   = 413,
	kGoalSteeleKP03Exploded                = 415,
	kGoalSteeleKP03Dying                   = 416,
	kGoalSteeleKP03ShootMcCoy              = 418,
	kGoalSteeleKP03Dead                    = 419,
	kGoalSteeleKP01Wait                    = 420,
	kGoalSteeleKP01TalkToMcCoy             = 421,
	kGoalSteeleKP01Leave                   = 422,
	kGoalSteeleKP01Left                    = 423,
	kGoalSteeleKP05Enter                   = 430,
	kGoalSteeleKP05Leave                   = 431,
	kGoalSteeleKP06Enter                   = 432,
	kGoalSteeleKP06Leave                   = 433,
	kGoalSteeleWaitingForEnd               = 499,
	kGoalSteeleGone                        = 599
};

enum GoalDektora {
	kGoalDektoraDefault                      =   0,
	// chapter 1
	kGoalDektoraStartWalkingAround           = 100,
	kGoalDektoraWalkAroundAsReplicant        = 101,
	kGoalDektoraWalkAroundAsHuman            = 102,
	kGoalDektoraStopWalkingAround            = 103,
	// chapter 2
	kGoalDektoraStartChapter3                = 199,
	kGoalDektoraNR07Sit                      = 200,
	kGoalDektoraNR08Dance                    = 210,
	kGoalDektoraNR08Leave                    = 211,
	kGoalDektoraNR08ReadyToRun               = 245,
	kGoalDektoraNR08GoToNR10                 = 246,
	kGoalDektoraNR10AttackMcCoy              = 247,
	kGoalDektoraNR11Hiding                   = 250,
	kGoalDektoraNR11WalkAway                 = 260,
	kGoalDektoraNR11PrepareBurning           = 269,
	kGoalDektoraNR11Burning                  = 270,
	kGoalDektoraNR11BurningGoToMcCoy         = 271,
	kGoalDektoraNR11BurningGoToWindow        = 272,
	kGoalDektoraNR11PrepareFallThroughWindow = 273,
	kGoalDektoraNR11FallThroughWindow        = 274,
	kGoalDektoraNR11BurningFallToNR10        = 279,
	kGoalDektoraNR11RanAway                  = 290,
	kGoalDektoraNR07RanAway                  = 295,
	kGoalDektoraStartAct4StashedAway         = 300,
	kGoalDektoraKP07Wait                     = 513, // new goal when in moonbus, Act 5
	kGoalDektoraGone                         = 599
};

enum GoalGordo {
	// chapter 1
	kGoalGordoDefault                   =   0,
	kGoalGordoCT01Leave                 =   1,
	kGoalGordoCT01Left                  =   2,
	kGoalGordoCT05WalkThrough           =   3,
	kGoalGordoCT05Leave                 =   4,
	kGoalGordoCT05Left                  =   5,
	kGoalGordoCT01StandUp               =  90,
	kGoalGordoCT01WalkAway              =  91,
	kGoalGordoCT01BidFarewellToHowieLee =  92,
	kGoalGordoCT01WalkToHowieLee        =  93,
	// chapter 2
	kGoalGordoWalkAround                = 100,
	kGoalGordoGoToDNARow                = 101,
	kGoalGordoGoToChinaTown             = 102,
	kGoalGordoGoToFreeSlotHAGJ          = 103,
	kGoalGordoGoToFreeSlotAH            = 104,
	// chapter 3
	kGoalGordoStartChapter3             = 200,
	kGoalGordoNR02WaitAtBar             = 201,
	kGoalGordoNR02GoToPodium            = 202,
	kGoalGordoNR02WaitForMcCoy          = 204,
	kGoalGordoNR02NextAct               = 205,
	kGoalGordoNR02TellJoke1             = 206,
	kGoalGordoNR02TellJoke2             = 207,
	kGoalGordoNR02TellJoke3             = 208,
	kGoalGordoNR02TalkAboutMcCoy        = 210,
	kGoalGordoNR02WaitAtPodium          = 211,
	kGoalGordoNR02TalkToMcCoy           = 215,
	kGoalGordoNR02RunAway1              = 220,
	kGoalGordoNR02RunAway2              = 221,
	kGoalGordoNR02RunAway3              = 222,
	kGoalGordoGoToFreeSlotGAG           = 225,
	kGoalGordoNR01WaitAndAttack         = 230,
	kGoalGordoNR01Attack                = 231,
	kGoalGordoNR01WaitAndGiveUp         = 240,
	kGoalGordoNR01GiveUp                = 241,
	kGoalGordoNR01TalkToMcCoy           = 242,
	kGoalGordoNR01RunAway               = 243,
	kGoalGordoNR01WaitAndTakeHostage    = 250,
	kGoalGordoNR01ReleaseHostage        = 251,
	kGoalGordoNR01HostageShot           = 254,
	kGoalGordoNR01HostageDie            = 255,
	kGoalGordoNR01Arrested              = 260,
	kGoalGordoNR01RanAway               = 280,
	kGoalGordoNR01Die                   = 299,
	kGoalGordoKP07Wait                  = 513, // new goal when in moonbus, Act 5
	kGoalGordoGone                      = 599
};

enum GoalGuzza {

	kGoalGuzzaDefault                 =   0, // added goal
	kGoalGuzzaLeftOffice              = 100,
	kGoalGuzzaGoToHawkersCircle1      = 101,
	kGoalGuzzaAtOffice                = 102,
	kGoalGuzzaGoToHawkersCircle2      = 103,
	kGoalGuzzaGoToFreeSlotB           = 104,
	kGoalGuzzaGoToFreeSlotG           = 105,
	kGoalGuzzaWasAtNR03               = 200,
	kGoalGuzzaSitAtNR03               = 201,
	kGoalGuzzaUG18Wait                = 300,
	kGoalGuzzaUG18Target              = 301,
	kGoalGuzzaUG18WillGetShotBySadik  = 302,
	kGoalGuzzaUG18HitByMcCoy          = 303,
	kGoalGuzzaUG18MissedByMcCoy       = 304,
	kGoalGuzzaUG18ShotByMcCoy         = 305,
	kGoalGuzzaUG18ShootMcCoy          = 306,
	kGoalGuzzaUG18FallDown            = 307,
	kGoalGuzzaUG18ShotBySadik         = 390,
	kGoalGuzzaGone                    = 599
};

enum GoalClovis {
	kGoalClovisDefault                   = 100,
	kGoalClovisBB11WalkToMcCoy           = 101,
	kGoalClovisBB11StopSadik             = 102,
	kGoalClovisBB11TalkWithSadik         = 103,
	kGoalClovisBB11PrepareTalkToMcCoy    = 104, // bug? this is not triggered when player skips dialogue too fast
	kGoalClovisBB11TalkToMcCoy           = 105, // ends Chapter 2
	// chapter 4
	kGoalClovisUG18Wait                  = 300,
	kGoalClovisUG18SadikWillShootGuzza   = 301,
	kGoalClovisUG18SadikIsShootingGuzza  = 302,
	kGoalClovisUG18GuzzaDied             = 303,
	kGoalClovisUG18Leave                 = 310,
	kGoalClovisStartChapter3             = 350,
	kGoalClovisStartChapter4             = 400,
	kGoalClovisUG07ChaseMcCoy            = 401,
	kGoalClovisUG07KillMcCoy             = 402,
	// chapter 5
	kGoalClovisStartChapter5             = 500,
	kGoalClovisDecide                    = 510,
	kGoalClovisKP06Wait                  = 511, // this immediately reset to kGoalClovisKP07Wait by Sadik at start of chapter 5
	kGoalClovisKP06TalkToMcCoy           = 512, // never triggered
	kGoalClovisKP07Wait                  = 513,
	kGoalClovisKP07TalkToMcCoy           = 514,
	kGoalClovisKP07SayFinalWords         = 515,
	kGoalClovisKP07FlyAway               = 516, // and game over
	kGoalClovisKP07ReplicantsAttackMcCoy = 517,
	kGoalClovisKP07LayDown               = 518,
	kGoalClovisGone                      = 599
};

enum GoalLucy {
	kGoalLucyDefault              =   0,
	// chapter 3
	kGoalLucyMoveAround           = 200,
	kGoalLucyWillReturnToHF03     = 201,
	kGoalLucyGoToHF03             = 205,
	kGoalLucyHF03RunOutPhase1     = 210,
	kGoalLucyHF03RunOutPhase2     = 211,
	kGoalLucyHF03RunToHF041       = 212,
	kGoalLucyHF03RunToHF042       = 213,
	kGoalLucyHF03RunAwayWithHelp1 = 214,
	kGoalLucyHF03RunAwayWithHelp2 = 215,
	kGoalLucyGoToFreeSlotGAG      = 220,
	kGoalLucyGoToFreeSlotGAHJ     = 225,
	kGoalLucyHF04Start            = 230,
	kGoalLucyHF04TalkToMcCoy      = 232,
	kGoalLucyHF04Run1             = 233,
	kGoalLucyHF04Run2             = 234,
	kGoalLucyHF04WaitForMcCoy1    = 235,
	kGoalLucyHF04Run3             = 236,
	kGoalLucyHF04WaitForMcCoy2    = 237,
	kGoalLucyHF04Run4             = 238,
	kGoalLucyHF04WalkAway         = 239,
	kGoalLucyReturnToHF03         = 250,
	kGoalLucyHF03RanAway          = 299,
	// chapter 4
	kGoalLucyStartChapter4        = 300,
	kGoalLucyUG01Wait             = 310,
	kGoalLucyUG01VoightKampff     = 311,
	kGoalLucyUG01RunAway          = 312,
	kGoalLucyKP07Wait             = 513, // new goal when in moonbus, Act 5
	kGoalLucyGone                 = 599
};

enum GoalIzo {
	kGoalIzoDefault            =   0,
	kGoalIzoPrepareCamera      =   1,
	kGoalIzoTakePhoto          =   2,
	kGoalIzoRunToUG02          =   3,
	kGoalIzoStopRunning        = 100,
	kGoalIzoRunToRC03          = 101,
	kGoalIzoWaitingAtRC03      = 102,
	kGoalIzoEscape             = 103, // how can this happen? can mccoy catch izo in ug02?
	kGoalIzoRC03Walk           = 110,
	kGoalIzoRC03Run            = 111,
	kGoalIzoRC03RunAway        = 114,
	kGoalIzoGetArrested        = 120,
	kGoalIzoGotArrested        = 180,
	kGoalIzoRC03RanAwayDone    = 181, // new - added for bug fix of Izo getting stuck at RC03
	kGoalIzoGoToHC01           = 150,
	kGoalIzoGoToHC03           = 155,
	kGoalIzoDieHidden          = 198,
	kGoalIzoDie                = 199,
	kGoalIzoEscapedSteeleKnows = 200, // Set after conversation with Steele about Izo escaping (original: untriggered)
	kGoalIzoKP07Wait           = 513, // new goal when in moonbus, Act 5
	kGoalIzoGone               = 599
};

enum GoalSadik {
	kGoalSadikDefault                       = 100,
	kGoalSadikRunFromBB09                   = 101,
	kGoalSadikBB11Wait                      = 102,
	kGoalSadikBB11ThrowMcCoy                = 103,
	kGoalSadikBB11CatchMcCoy                = 104,
	kGoalSadikBB11KnockOutMcCoy             = 105,
	kGoalSadikBB11KickMcCoy                 = 106,
	kGoalSadikBB11TalkWithClovis            = 107,
	kGoalSadikUG18Wait                      = 300,
	kGoalSadikUG18Move                      = 301,
	kGoalSadikUG18Decide                    = 302,
	// 303, 304 and 305 are never set or used
	kGoalSadikUG18WillShootMcCoy            = 306,
	kGoalSadikUG18PrepareShootMcCoy         = 307,
	kGoalSadikUG18ShootMcCoy                = 308,
	kGoalSadikUG18Leave                     = 310,
	kGoalSadikKP06NeedsReactorCoreFromMcCoy = 416,
	kGoalSadikGone                          = 599
};

enum GoalLuther {
	kGoalLutherDefault           = 400,
	kGoalLutherMoveAround        = 401,
	kGoalLutherMoveAroundRestart = 402,
	kGoalLutherStop              = 403,
	kGoalLutherShot              = 494,
	kGoalLutherDyingStarted      = 495,
	kGoalLutherDyingWait         = 496,
	kGoalLutherDyingCheck        = 497,
	kGoalLutherDie               = 498,
	kGoalLutherDead              = 499,
	kGoalLutherKP07Wait          = 513, // new goal when in moonbus, Act 5
	kGoalLutherGone              = 599
};

enum GoalHowieLee {
	kGoalHowieLeeDefault              =   0,
	kGoalHowieLeeMovesInDiner01       =   1,
	kGoalHowieLeeMovesInDiner02       =   2,
	kGoalHowieLeeMovesInDiner03       =   3,
	kGoalHowieLeeGoesToCT04GarbageBin =   4,
	kGoalHowieLeeGoesToFreeSlotH      =   5,
	kGoalHowieLeeMovesInDiner06       =   6, // Unused goal?
	kGoalHowieLeeStopMoving           =  50,
	kGoalHowieLeeGoesToFreeSlotC      = 100
};

enum GoalTransient {
	kGoalTransientDefault   = 0,
	kGoalTransientCT04Leave = 2
};

enum GoalBulletBob {
	kGoalBulletBobDefault       =  0,
	kGoalBulletBobWarningMcCoy  =  1,
	kGoalBulletBobShootMcCoy    =  2,
	kGoalBulletBobWillShotMcCoy =  3, // has no use
	kGoalBulletBobDead          =  4,
	kGoalBulletBobShotMcCoy     =  6,
	kGoalBulletBobGone          = 99
};

// applies to all generic walkers
enum GoalGenericWalker {
	kGoalGenwalkerDefault             =   0, // setup walker model and path
	kGoalGenwalkerMoving              =   1,
	kGoalGenwalkerABulletBobsTrackGun = 200  // only kActorGenWalkerA will change goal to this
};

enum GoalRachael {
	kGoalRachaelDefault                        =   0,
	kGoalRachaelLeavesAfterTyrellMeeting       = 200,
	kGoalRachaelShouldBeOutsideMcCoysAct3      = 211, // added Rachael goal
	kGoalRachaelShouldBeInElevatorMcCoysAct3   = 212, // added Rachael goal
	kGoalRachaelIsOutsideMcCoysBuildingAct3    = 300,
	kGoalRachaelIsInsideMcCoysElevatorAct3     = 302, // added Rachael goal
	kGoalRachaelIsInsideElevatorStartTalkAct3  = 303, // added Rachael goal
	kGoalRachaelIsOutWalksToPoliceHQAct3       = 305,
	kGoalRachaelIsOutResumesWalkToPoliceHQAct3 = 306,
	kGoalRachaelIsOutFleeingToPoliceHQAct3     = 307, // added Rachael goal
	kGoalRachaelAtEndOfAct3IfNotMetWithMcCoy   = 399, // added Rachael goal
	kGoalRachaelAtEndOfAct3IfMetWithMcCoy      = 400,
	kGoalRachaelIsInsideMcCoysElevatorAct4     = 402, // added Rachael goal
	kGoalRachaelIsInsideElevatorStartTalkAct4  = 403, // added Rachael goal
	kGoalRachaelIsOutsideMcCoysBuildingAct4    = 404, // added Rachael goal
	kGoalRachaelIsOutWalksToPoliceHQAct4       = 405, // added Rachael goal
	kGoalRachaelAtEndOfAct4                    = 499  // added Rachael goal
};

enum GoalRunciter {
	kGoalRunciterDefault        =   0,
	kGoalRunciterRC02WalkAround =   1,
	kGoalRunciterGoToFreeSlotGH =   2,
	kGoalRunciterRC02Wait       = 300,
	kGoalRunciterDead           = 599
};

enum GoalTyrellGuard {
	kGoalTyrellGuardSleeping             = 300,
	kGoalTyrellGuardWakeUpAndArrestMcCoy = 301,
	kGoalTyrellGuardWakeUp               = 302,
	kGoalTyrellGuardArrestMcCoy          = 303,
	kGoalTyrellGuardWait                 = 304
};

enum GoalEarlyQ {
	// cut feature? goals 0 - 200 has no use as EarlyQ is walking around NR which is not accessible
	kGoalEarlyQWalkAround           = 200,
	kGoalEarlyQNR04Enter            = 201,
	kGoalEarlyQNR04Talk1            = 202,
	kGoalEarlyQNR04GoToBar          = 203,
	kGoalEarlyQNR04PourDrink        = 204,
	kGoalEarlyQNR04GoToMcCoy        = 205,
	kGoalEarlyQNR04McCoyPulledGun   = 206,
	kGoalEarlyQNR04SitDown          = 207,
	kGoalEarlyQNR04ScorpionsCheck   = 208,
	kGoalEarlyQNR04Talk2            = 209,
	kGoalEarlyQNR04StungByScorpions = 210,
	kGoalEarlyQNR04WaitForPulledGun = 211,
	kGoalEarlyQNR04TakeDisk         = 212,
	kGoalEarlyQNR04Talk3            = 213,
	kGoalEarlyQNR04AskForDisk       = 214,
	kGoalEarlyQNR04HandDrink        = 215,
	kGoalEarlyQNR04GetShot          = 216,
	kGoalEarlyQNR04Leave            = 217,
	kGoalEarlyQNR05Wait             = 220,
	kGoalEarlyQNR05WillLeave        = 221,
	kGoalEarlyQNR05Leave            = 222,
	kGoalEarlyQNR05AnnouceDektora   = 223,
	kGoalEarlyQNR05UnlockNR08       = 224,
	kGoalEarlyQNR05UnlockedNR08     = 225,
	kGoalEarlyQNR05TalkingToMcCoy   = 229,
	kGoalEarlyQNR04Wait             = 230
};

enum GoalZuben {
	kGoalZubenDefault             =   0,
	kGoalZubenCT01WalkToCT02      =   1,
	kGoalZubenCT02RunToFreeSlotG  =   2,
	kGoalZubenCT07Spared          =   4,
	kGoalZubenCT07RunToFreeSlotA  =   5,
	kGoalZubenDie                 =   6,
	kGoalZubenSpared              =   7,
	kGoalZubenCT02PushPot         =   8,
	kGoalZubenCT02RunToDoor       =   9,
	kGoalZubenCT02OpenDoor        =  10,
	kGoalZubenCT06JumpDown        =  11,
	kGoalZubenCT06AttackMcCoy     =  12,
	kGoalZubenCT06HideAtFreeSlotA =  13,
	kGoalZubenCT02PotDodgeCheck   =  14,
	kGoalZubenFled                =  20,
	kGoalZubenMA01AttackMcCoy     =  21,
	kGoalZubenDiesInChapter1      =  99,
	kGoalZubenKP07Wait            = 513, // new goal when in moonbus, Act 5
	kGoalZubenGone                = 599
};

enum GoalHasan {
	kGoalHasanDefault                         =   0,
	kGoalHasanIsAway                          = 300, // original final goal for Hasan
	kGoalHasanIsWalkingAroundIsAtAR02         = 301, // new goal for restored content
	kGoalHasanIsWalkingAroundStayAwayFromAR02 = 302, // new goal for restored content
	kGoalHasanIsWalkingAroundStaysAtAR02      = 303, // new goal for restored content
	kGoalHasanIsWalkingAroundIsAway           = 304  // new goal for restored content
};

enum GoalOfficerLeary {
	kGoalOfficerLearyDefault                          =   0,
	kGoalOfficerLearyRC01WalkToCrowd                  =   1,
#if BLADERUNNER_ORIGINAL_BUGS
	kGoalOfficerLearyRC01CrowdInterrogation           =   2,
#else
	kGoalOfficerLearyRC01CrowdInterrogation           =   2,
	kGoalOfficerLearyRC01ResumeWalkToCrowd            =   4, // added OfficerLeary goal
#endif // BLADERUNNER_ORIGINAL_BUGS
	kGoalOfficerLearyPoliceDoneFromRC01               =   3,
	kGoalOfficerLearyEndOfAct1                        =  99,
	kGoalOfficerLearyVisitsBulletBob                  = 102, // un-triggered
	kGoalOfficerLearyStartOfAct4                      = 300,
	kGoalOfficerLearyHuntingAroundAct4                = 305,
	kGoalOfficerLearyPrepareToHuntAroundAct4          = 306,
	kGoalOfficerLearyBlockingUG07                     = 307,
	// 308 - 309 un-triggered?
	kGoalOfficerLearyAttackMcCoyAct4                  = 310,
	kGoalOfficerLearyStartOfAct5                      = 400,
	kGoalOfficerLearyDummyGoalAct5                    = 410,
	kGoalOfficerLearyPoliceWait120SecondsToAttackHF05 = 420,
	kGoalOfficerLearyPoliceWait60SecondsToAttackHF05  = 425,
	kGoalOfficerLearyPoliceAboutToAttackHF05          = 430,
	kGoalOfficerLearyDead                             = 599
};


enum GoalOfficerGrayford {
	kGoalOfficerGrayfordDefault                       =   0,
	kGoalOfficerGrayfordWalksInPS03a                  =   1,
	kGoalOfficerGrayfordWalksInPS03b                  =   2,
	kGoalOfficerGrayfordWalksInPS03c                  =   3,
	kGoalOfficerGrayfordWalksInPS03d                  =   4,
	kGoalOfficerGrayfordWalksInFreeSlotC              =   5,
	kGoalOfficerGrayfordWalksInPS09a                  =   6,
	kGoalOfficerGrayfordWalksInPS09b                  =   7,
	kGoalOfficerGrayfordWalksInPS09c                  =   8,
	kGoalOfficerGrayfordWalksInPS03e                  =   9,
	kGoalOfficerGrayfordPrepareToRestartWalkAround    =  10,
	kGoalOfficerGrayfordStopAndTalk1                  =  99, // this is used temporarily to make him stop and talk
	kGoalOfficerGrayfordArrivesToDR04                 = 101,
	kGoalOfficerGrayfordArrivedAtDR04                 = 102,
	kGoalOfficerGrayfordTalkToMcCoyAndReportAtDR04    = 103,
	kGoalOfficerGrayfordPatrolsAtDR04a                = 104,
	kGoalOfficerGrayfordPatrolsAtDR04b                = 105,
	kGoalOfficerGrayfordStopPatrolToTalkToMcCoyAtDR04 = 106,
	kGoalOfficerGrayfordLeavesWithMorajiCorpseDR04    = 110,
	kGoalOfficerGrayfordStopAndTalkDR04               = 199, // this is used temporarily to make him stop and talk while at DR04 (Moraji's death scene)
	kGoalOfficerGrayfordStartOfAct4                   = 300,
	kGoalOfficerGrayfordHuntingAroundAct4             = 305,
	kGoalOfficerGrayfordPrepareToHuntAroundAct4       = 306,
	kGoalOfficerGrayfordBlockingUG07                  = 307,
	kGoalOfficerGrayfordArrestsMcCoyAct4CT12          = 308,
	kGoalOfficerGrayfordAttackMcCoyAct4               = 310,
	kGoalOfficerGrayfordArrestMcCoyInTB03Act4         = 399, // TB02_TB03
	kGoalOfficerGrayfordStartOfAct5                   = 400,
	kGoalOfficerGrayfordDummyGoalAct5                 = 410,
	kGoalOfficerGrayfordPoliceAboutToAttackHF05       = 430,
	kGoalOfficerGrayfordDead                          = 599
};

enum GoalHanoi {
	kGoalHanoiDefault                 = 200,
	kGoalHanoiResetTimer              = 201,
	kGoalHanoiNR07TalkToMcCoy         = 202,
	kGoalHanoiNR07GrabMcCoy           = 203,
	kGoalHanoiNR03GoToDefaultPosition = 210,
	kGoalHanoiNR03GoToSwivelTable     = 211,
	kGoalHanoiNR03GoToOfficeDoor      = 212,
	kGoalHanoiNR03GoToDancer          = 213,
	kGoalHanoiNR03StartGuarding       = 215,
	kGoalHanoiThrowOutMcCoy           = 220,
	kGoalHanoiNR08WatchShow           = 230,
	kGoalHanoiNR08Leave               = 235,
	kGoalHanoiNR08Left                = 236,
	kGoalHanoiNR04Enter               = 240,
	kGoalHanoiNR04ShootMcCoy          = 241
};

enum GoalDeskClerk {
	kGoalDeskClerkDefault           =   0,
	kGoalDeskClerkKnockedOut        =   1,
	kGoalDeskClerkRecovered         =   2,
	kGoalDeskClerkGone              = 400
};

enum GoalKlein {
	kGoalKleinDefault                 =   0,
	kGoalKleinMovingInLab01           =   1,
	kGoalKleinMovingInLab02           =   2,
	kGoalKleinGotoLabSpeaker          =   3,
	kGoalKleinIsAnnoyedByMcCoyInit    =   4,
	kGoalKleinIsAnnoyedByMcCoy01      =   5,
	kGoalKleinIsAnnoyedByMcCoy02      =   6,
	kGoalKleinIsAnnoyedByMcCoyFinal   =   7,
	kGoalKleinIsAnnoyedByMcCoyPreInit =   8, // new goal
	kGoalKleinAwayAtEndOfActOne       = 100,
	kGoalKleinAwayAtEndOfActThree     = 299  // new goal for restored content purposes
};

enum GoalHolloway {
	kGoalHollowayDefault             =   0,
	kGoalHollowayGoToNR07            = 240,
	kGoalHollowayGoToNR02            = 241,
	kGoalHollowayGoToHF03            = 242,
	kGoalHollowayApproachMcCoy       = 250,
	kGoalHollowayTalkToMcCoy         = 251,
	kGoalHollowayKnockOutMcCoy       = 255,
	kGoalHollowayPrepareCaptureMcCoy = 256,
	kGoalHollowayCaptureMcCoy        = 257
};

enum GoalMoraji {
	kGoalMorajiDefault    =  0,
	kGoalMorajiShot       =  5,
	kGoalMorajiFreed      = 10,
	kGoalMorajiRunOut     = 11,
	kGoalMorajiGetUp      = 18,
	kGoalMorajiScream     = 19,
	kGoalMorajiJump       = 20,
	kGoalMorajiLayDown    = 21,
	kGoalMorajiDie        = 22,
	kGoalMorajiDead       = 23,
	kGoalMorajiChooseFate = 30,
	kGoalMorajiPerished   = 99
};

enum GoalGaff {
	kGoalGaffDefault             =   0,
	kGoalGaffCT12WaitForMcCoy    =   1,
	kGoalGaffCT12GoToSpinner     =   2,
	kGoalGaffMA01ApproachMcCoy   =   3,
	kGoalGaffMA01Leave           =   4,
	kGoalGaffCT12Leave           =   5,
	kGoalGaffCT12FlyAway         =  10,
	kGoalGaffStartWalkingAround  = 100,
	kGoalGaffWalkAround          = 101,
	kGoalGaffRepeatWalkingAround = 102,
	kGoalGaffStartChapter4       = 299,
	kGoalGaffMA07Wait            = 300,
	kGoalGaffMA07TalkToMcCoy     = 301,
	kGoalGaffMA07Left            = 302,
	kGoalGaffMA07ShootMcCoy      = 303, // cannot be triggered
	kGoalGaffGone                = 499
};

enum GoalLeon {
	kGoalLeonDefault            = 0,
	kGoalLeonHoldingDeskClerk   = 1,
	kGoalLeonReleaseDeskClerk   = 2,
	kGoalLeonPrepareTalkToMcCoy = 3,
	kGoalLeonTalkToMcCoy        = 4,
	kGoalLeonApproachMcCoy      = 5, // there is no way how to trigger this path in the game
	kGoalLeonPunchMcCoy         = 6, // there is no way how to trigger this path in the game
	kGoalLeonLeave              = 7,
	kGoalLeonGone               = 8
};

enum GoalCrazyLegs {
	kGoalCrazyLegsDefault         =   0,
	kGoalCrazyLegsShotAndHit      =   1,
	kGoalCrazyLegsLeavesShowroom  =   2, // set either after McCoy re-holsters his gun, or if McCoy tells him to lie to Steele
	// goal 10 seems unused
	// goal 10 updates to 11 (also unused)
	kGoalCrazyLegsMcCoyDrewHisGun = 210, // When McCoy draws gun and Ch < 5
	kGoalCrazyLegsIsArrested      = 699
};

enum GoalFreeSlotA { // Rat A
	kGoalFreeSlotADefault            =   0,
	kGoalFreeSlotAUG15Wait           = 300,
	kGoalFreeSlotAUG15WalkOut        = 301,
	kGoalFreeSlotAUG15RunToOtherSide = 302,
	kGoalFreeSlotAUG15RunBack        = 303,
	kGoalFreeSlotAUG15Attack         = 304,
	kGoalFreeSlotAWalkAround         = 306,
	kGoalFreeSlotAWalkAroundRestart  = 307,
	kGoalFreeSlotAAttackMcCoy        = 308,
	kGoalFreeSlotAUG15Die            = 305,
	kGoalFreeSlotAUG15Fall           = 309,
	kGoalFreeSlotAUG15Prepare        = 310,
	kGoalFreeSlotAAct5Default        = 400,
	kGoalFreeSlotAAct5Prepare        = 405,
	kGoalFreeSlotAAct5KP02Attack     = 406,
	kGoalFreeSlotAGoneIntermediate   = 411,
	kGoalFreeSlotAGone               = 599
};

enum GoalFreeSlotB { // Rat B
	kGoalFreeSlotBAct4Default      = 300,
	kGoalFreeSlotBAct4WalkAround   = 301,
	kGoalFreeSlotBAct4AttackMcCoy  = 302,
	kGoalFreeSlotBAct5Default      = 400,
	kGoalFreeSlotBAct5Prepare      = 405,
	kGoalFreeSlotBAct5KP02Attack   = 406,
	kGoalFreeSlotBGoneIntermediate = 411,
	kGoalFreeSlotBGone             = 599
};

enum GoalMaggie {
	kGoalMaggieMA02Default        =   0,
	kGoalMaggieMA02WalkToEntrance =   1,
	kGoalMaggieMA02Intermediate02 =   2, // unused (checked in MA02 but never assigned)
	kGoalMaggieMA02GetFed         =   3,
	kGoalMaggieMA02SitDownToGetUp =   6, // new - original: Unused
	kGoalMaggieMA02WalkToMcCoy    =   7,
	kGoalMaggieMA02Wait           =   8,
	kGoalMaggieMA02GoingToSleep   =   9,
	kGoalMaggieMA02SitDownToSleep =  10,
	kGoalMaggieMA02Sleeping       =  11,
	kGoalMaggieMA02Intermediate12 =  12,
	kGoalMaggieAct5Default        = 400,
	kGoalMaggieAct5Start          = 410,
	kGoalMaggieKP05Wait           = 411,
	kGoalMaggieKP05McCoyEntered   = 412,
	kGoalMaggieKP05WalkToMcCoy    = 413,
	kGoalMaggieKP05WillExplode    = 414,
	kGoalMaggieKP05Explode        = 415,
	kGoalMaggieDead               = 599
};

enum ActorTimers {
	kActorTimerAIScriptCustomTask0 = 0,
	kActorTimerAIScriptCustomTask1 = 1,
	kActorTimerAIScriptCustomTask2 = 2,
	kActorTimerMovementTrack       = 3,
	kActorTimerClueExchange        = 4,
	kActorTimerAnimationFrame      = 5,
	kActorTimerRunningStaminaFPS   = 6
};

// Certain tracks are available at Frank Klepacki's website/portfolio for Blade Runner
// Those are noted with their "official" name in a side-comment here, as they appear at the website
// A few may not match the incremental number given in-game (eg. kMusicGothic3 is "Gothic Club 2")
enum MusicTracks {
	kMusicArabLoop =  0, // Animoid Row track     (Not available at Frank Klepacki's website/portfolio for Blade Runner)
	kMusicBatl226M =  1, // "Battle Theme"
	kMusicBRBlues  =  2, // "Blade Runner Blues"
	kMusicKyoto    =  3, // "Etsuko Theme"
	kMusicOneTime  =  4, // "One More Time, Love" (Not available at Frank Klepacki's website/portfolio for Blade Runner)
	kMusicGothic3  =  5, // "Gothic Club 2"
	kMusicArkdFly1 =  6,
	kMusicArkDnce1 =  7,
	kMusicTaffy2   =  8, // "Taffy's Club 2"
	kMusicTaffy3   =  9, // "Enigma Drift"
	kMusicTaffy4   = 10, // "Late Call"
	kMusicBeating1 = 11, // "Nexus"
	kMusicCrysDie1 = 12, // "Awakenings"
	kMusicGothic1  = 13, // "Gothic Club"
	kMusicGothic2  = 14, // "Transition"
	kMusicStrip1   = 15, // "The Eyes Follow"
	kMusicDkoDnce1 = 16,
	kMusicCredits  = 17, // "End Credits"
	kMusicMoraji   = 18, // "Ending"
	kMusicClovDie1 = 19, // "Remorse"
	kMusicClovDies = 20, // "Solitude"
	kMusicLoveSong = 21  // "Love Theme" (Lucy, Dektora, Subway drive ending)
};

enum SFXSounds {
	kSfxCROSLOCK =   0,  // PS02, PS10, VK
	kSfxSTEAM1   =   1,
	kSfxSPINNY1  =   2,  // used only in Shooting Range Set
	kSfxFEMHURT1 =   3,  // used only 3 times; 2 of them are bugs
	kSfxFEMHURT2 =   4,  // used only in Shooting Range Set (and for Moraji (Removed))
	kSfxGUNMISS1 =   5,  // unused
	kSfxGUNMISS2 =   6,  // unused
	kSfxGUNMISS3 =   7,  // unused
	kSfxGUNMISS4 =   8,  // unused
	kSfxHITTARG1 =   9,  // unused
	kSfxHITTARG2 =  10,  // unused
	kSfxHITTARG3 =  11,  // unused
	kSfxLGCAL1   =  12,
	kSfxLGCAL2   =  13,  // used only twice in UG18
	kSfxLGCAL3   =  14,  // used only in UG18
	kSfxMDCAL1   =  15,  // unused
	kSfxMDCAL2   =  16,  // unused
	kSfxRICO1    =  17,  // unused
	kSfxRICO2    =  18,  // unused
	kSfxRICO3    =  19,  // used only once - PS11 for a maze target (A Bug?)
	kSfxRICOCHT1 =  20,  // unused
	kSfxRICOCHT2 =  21,  // unused
	kSfxRICOCHT3 =  22,  // unused
	kSfxRICOCHT4 =  23,  // unused
	kSfxRICOCHT5 =  24,  // unused
	kSfxSMCAL1   =  25,  // unused
	kSfxSMCAL2   =  26,  // unused
	kSfxSMCAL3   =  27,
	kSfxSMCAL4   =  28,  // unused
	kSfxTARGUP1  =  29,
	kSfxTARGUP2  =  30,  // unused
	kSfxTARGUP3  =  31,  // used only once - PS11
	kSfxTARGUP4  =  32,
	kSfxTARGUP5  =  33,
	kSfxTARGUP6  =  34,
	kSfxTARGUP7  =  35,  // unused - similar to TARGUP6, bit more sustained
	kSfxTRGSPIN1 =  36,  // unused
	kSfxTRGSPIN2 =  37,  // unused - similar to kSfxTRGSPIN1, bit faster
	kSfxTRGSPIN3 =  38,  // unused - ugly sound
	kSfxDRIPPY4  =  39,  // unused
	kSfxDRIPPY10 =  40,  // used only once - CT05
	kSfxDRIPPY1  =  41,  // used only once - CT05
	kSfxDRIPPY2  =  42,  // used only once - CT05
	kSfxDRIPPY6  =  43,  // used only once - CT05
	kSfxDRIPPY7  =  44,  // used only once - CT05
	kSfxPSAMB6   =  45,  //           - Looping
	kSfxRTONE3   =  46,  //           - Looping (Guzza's Office PS04) - Used once
	kSfxSCANNER1 =  47,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER2 =  48,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER3 =  49,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER4 =  50,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER5 =  51,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER6 =  52,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxSCANNER7 =  53,  // used only twice. In PS04 and UG02 (Izo's stash)
	kSfxCTRAIN1  =  54,  //           - Looping
	kSfxCTAMBL1  =  55,  //           - Looping (CT01, CT12) - Used twice
	kSfxCTAMBR1  =  56,  //           - Looping
	kSfxSTEAM3   =  57,
	kSfxSTEAM6A  =  58,
	kSfxNEON5    =  59,  // used three times. In CT01, CT12, DR03.
	kSfxNEON6    =  60,  // used three times. In CT01, CT12, HC02.
	kSfxDISH1    =  61,
	kSfxDISH2    =  62,
	kSfxDISH3    =  63,
	kSfxDISH4    =  64,
	kSfxDISH5    =  65,  // unused
	kSfxSPIN1A   =  66,
	kSfxSPIN2A   =  67,
	kSfxSPIN2B   =  68,
	kSfxSPIN3A   =  69,
	kSfxBOOLOOP2 =  70,  //           - Looping (Hall of Mirrors HF04) - Used once
	kSfxBRBED5   =  71,  //           - Looping
	kSfxSWEEP2   =  72,
	kSfxSWEEP3   =  73,
	kSfxSWEEP4   =  74,
	kSfxWINDLOP8 =  75,  //           - Looping (Runciter's interior RC02) - Used once
	kSfxPETDEAD1 =  76,  // used only once - RC02
	kSfxPETDEAD3 =  77,  // used only once - RC02
	kSfxPETDEAD4 =  78,  // used only once - RC02
	kSfxPETDEAD5 =  79,  // used only once - CT05 (Chinatown Warehouse)
	kSfxRCAMB1   =  80,  // unused    - Looping
	kSfxRCAMBR1  =  81,  //           - Looping
	kSfxRCCARBY1 =  82,
	kSfxRCCARBY2 =  83,
	kSfxRCCARBY3 =  84,
	kSfxRCRAIN1  =  85,  //           - Looping (Runciter's interior RC02) - Used once
	kSfxRCTALK1  =  86,  // unused    - Looping?
	kSfxSIREN2   =  87,
	kSfxRCTALK2  =  88,  // unused    - Looping?
	kSfxRCTALK3  =  89,  // unused    - Looping?
	kSfxPSDOOR1  =  90,
	kSfxPSDOOR2  =  91,
	kSfxPSPA6    =  92,  // used only once - PS03 (Ground Level)
	kSfxPSPA7    =  93,  // used only once - PS03 (Ground Level)
	kSfxPSPA8    =  94,  // used only once - PS03 (Ground Level)
	kSfxBOILPOT2 =  95,  //           - Looping
	kSfxKTCHRAIN =  96,  //           - Looping - (Zuben's Kitchen CT02) - Used once
	kSfxNEON7    =  97,
	kSfxBIGFAN2  =  98,  //           - Looping (DR01, DR02) - Used twice
	kSfxROOFAIR1 =  99,  //           - Looping
	kSfxROOFRMB1 = 100,  //           - Looping
	kSfxROOFRAN1 = 101,  //           - Looping
	kSfxROOFLIT1 = 102,  // used only twice. In MA01 (McCoy's roof) and MA05 (McCoy's balcony)
	kSfxRAINAWN1 = 103,  //           - Looping
	kSfxAPRTAMB5 = 104,  //           - Looping (MA02, MA04) - Used twice
	kSfxCTRUNOFF = 105,  //           - Looping
	kSfxCTROOFL1 = 106,  //           - Looping (Chinatown Warehouse CT05) - Used once
	kSfxCTROOFR1 = 107,  //           - Looping (Chinatown Warehouse CT05) - Used once
	kSfxDRAMB4   = 108,  //           - Looping (Crazylegs underground basement HF07) - Used once
	kSfxBRBED3   = 109,  //           - Looping
	kSfxRESPRTR1 = 110,  //           - Looping (Chew's EyeWorld DR03) - Used once
	kSfxDRAMB5   = 111,  //           - Looping (Dektora's Backstage NR06, NR07) - Used twice
	kSfxFACTAMB2 = 112,  //             Looping (DR01, HF07) - Used twice 
	kSfxDRRAIN1  = 113,  // unused    - Looping
	kSfxSPINUP1  = 114,  // used only in elevator MA06 (Name implies use for Spinner taking off)
	kSfxSPINOPN3 = 115,  // unused (spinner door open)
	kSfxSPINOPN4 = 116,
	kSfxCARUP3   = 117,
	kSfxCARDOWN3 = 118,
	kSfxSPINCLS1 = 119,
	kSfxSERVOU1  = 120,  // used only in PS01 (Police HQ Roof)
	kSfxSERVOD1  = 121,  // used only twice; 1 is unused (shot doll "General"), other is in PS01
	kSfxMTLHIT1  = 122,  // used three times; MA01 (Roof), PS01 (Roof), NR11 (Loft)
	kSfxSPNBEEP9 = 123,
	kSfxPRISAMB3 = 124,  //           - Looping (Lockup PS09) - Used once
	kSfxPRISSLM1 = 125,  // used once in PS09
	kSfxPRISSLM2 = 126,  // used once in PS09
	kSfxPRISSLM3 = 127,  // used once in PS09
	kSfxSPINAMB2 = 128,  // unused - Restored in spinner.cpp (At "Select Destination" message)
	kSfxSPNAMB1  = 129,  // unused    - Looping? Ugly Sound
	kSfxSPNBEEP2 = 130,  // used once in UG02
	kSfxSPNBEEP3 = 131,  // used only twice; UG02 and KIA Save
	kSfxSPNBEEP4 = 132,  // used only twice; UG02 and MA04
	kSfxSPNBEEP5 = 133,  // used once in UG02
	kSfxSPNBEEP6 = 134,  // used only twice; UG02 and KIA Save
	kSfxSPNBEEP7 = 135,  // used in UG02, and KIA Save, KIA Settings
	kSfxSPNBEEP8 = 136,  // used once in UG02
	kSfxPRISAMB1 = 137,  //           - Looping (Lockup PS09) - Used once
	kSfxBRBED5X  = 138,  //           - Looping (Lockup PS09) - Used once
	kSfxLABAMB1  = 139,  // unused    - Looping?
	kSfxLABAMB2  = 140,  // unused    - Looping?
	kSfxLABAMB3  = 141,  //           - Looping
	kSfxTUBES1   = 142,  // used once in PS07 (Lab)
	kSfxTUBES2   = 143,  // unused
	kSfxTUBES3   = 144,  // unused
	kSfxTUBES4   = 145,  // used once in PS07 (Lab)
	kSfxLABMISC1 = 146,  // used twice; in PS07, TB05
	kSfxLABMISC2 = 147,
	kSfxLABMISC3 = 148,
	kSfxLABMISC4 = 149,
	kSfxLABMISC5 = 150,
	kSfxLABMISC6 = 151,
	kSfxLABMISC7 = 152,  // used once in PS07 (Lab)
	kSfxLABMISC8 = 153,  // used once in PS07 (Lab)
	kSfxLABMISC9 = 154,  // used once in PS07 (Lab)
	kSfxLABBUZZ1 = 155,  // used in PS07 (restored), PS10 (Buzzer fix), PS15 (removed)
	kSfxPAGE1    = 156,  // used twice; in PS15 (Sgt Walls Armory), PS05 (Mainframe Hall)
	kSfxPAGE2    = 157,  // used twice; in PS15 (Sgt Walls Armory), PS05 (Mainframe Hall)
	kSfxPAGE3    = 158,  // used twice; in PS15 (Sgt Walls Armory), PS05 (Mainframe Hall)
	kSfxUPTARG3  = 159,  // used in PS10 (for Maze Targets)
	kSfxCEMENTL1 = 160,  // footsteps sound (left) (also used in DR06 for mannequin head)
	kSfxCEMENTL2 = 161,  // footsteps sound (left) (also used in DR06 for mannequin head)
	kSfxCEMENTL3 = 162,  // footsteps sound (left)
	kSfxCEMENTL4 = 163,  // footsteps sound (left)
	kSfxCEMENTL5 = 164,  // footsteps sound (left)
	kSfxCEMENTR1 = 165,  // footsteps sound (right)
	kSfxCEMENTR2 = 166,  // footsteps sound (right)
	kSfxCEMENTR3 = 167,  // footsteps sound (right)
	kSfxCEMENTR4 = 168,  // footsteps sound (right)
	kSfxCEMENTR5 = 169,  // footsteps sound (right)
	kSfxCEMWETL1 = 170,  // footsteps sound (Wet, left)
	kSfxCEMWETL2 = 171,  // footsteps sound (Wet, left)
	kSfxCEMWETL3 = 172,  // footsteps sound (Wet, left)
	kSfxCEMWETL4 = 173,  // footsteps sound (Wet, left)
	kSfxCEMWETL5 = 174,  // footsteps sound (Wet, left)
	kSfxCEMWETR1 = 175,  // footsteps sound (Wet, right)
	kSfxCEMWETR2 = 176,  // footsteps sound (Wet, right)
	kSfxCEMWETR3 = 177,  // footsteps sound (Wet, right)
	kSfxCEMWETR4 = 178,  // footsteps sound (Wet, right)
	kSfxCEMWETR5 = 179,  // footsteps sound (Wet, right)
	kSfxGARBAGE4 = 180,  // used once in CT04 (Chinatown Back Alley with big dumpster)
	kSfx67_0470R = 181,
	kSfx67_0480R = 182,
	kSfx67_0500R = 183,
	kSfx67_0540R = 184,
	kSfx67_0560R = 185,
	kSfx67_0870R = 186,
	kSfx67_0880R = 187,  // unused
	kSfx67_0900R = 188,
	kSfx67_0940R = 189,
	kSfx67_0960R = 190,
	kSfx67_1070R = 191,
	kSfx67_1080R = 192,
	kSfx67_1100R = 193,
	kSfx67_1140R = 194,
	kSfx67_1160R = 195,
	kSfxZUBWLK1  = 196,
	kSfxZUBWLK2  = 197,
	kSfxZUBWLK3  = 198,
	kSfxZUBWLK4  = 199,
	kSfxBIGPOT4  = 200,  // unused
	kSfxMTLDOOR2 = 201,
	kSfxPOTSPL4  = 202,  // unused
	kSfxPOTSPL5  = 203,  // used once in CT02 - also in (cut) ShotAtAndHit() code of Generic Walkers A, B, C 
	kSfxBIGPOT3  = 204,  // used only twice; CT02 and DR06 (mannequin head broken)
	kSfxCTDRONE1 = 205,
	kSfxZUBLAND1 = 206,
	kSfxZUBDEAD1 = 207,  // used only in Zuben AI
	kSfxELDOORO2 = 208,  // used in MA06, PS02
	kSfxELDOORC1 = 209,  // used in MA06, PS02
	kSfxELEAMB3  = 210,  //           - Looping used in MA06, PS02
	kSfxFOUNTAIN = 211,  //           - Looping used in TB02, TB03
	kSfxBELLY1   = 212,  // used in TB02, TB03, TB07
	kSfxBELLY2   = 213,  // used in TB02, TB03, TB07
	kSfxBELLY3   = 214,  // used in TB02, TB03, TB07
	kSfxBELLY4   = 215,  // used in TB02, TB03, TB07
	kSfxBELLY5   = 216,  // used in TB02, TB03, TB07
	kSfxHUMMER1  = 217,  //           - Looping (DR04) and non-looping (TB05)
	kSfxHUMMER2  = 218,  // used once in TB05
	kSfxHUMMER3  = 219,  //           - Looping (DR01, DR02, TB05)
	kSfxHUMMER4  = 220,  // used once in TB05
	kSfxPUNCH1   = 221,  // used only in Sadik AI
	kSfxKICK1    = 222,  // used only in Sadik and holloway AI
	kSfxKICK2    = 223,  // used only in Sadik AI
	kSfxBANG1    = 224,
	kSfxBANG2    = 225,
	kSfxBANG3    = 226,  // used twice; UG03 and UG05
	kSfxBANG4    = 227,
	kSfxBANG5    = 228,
	kSfxBANG6    = 229,
	kSfxGLOOP1   = 230,  // used only in UG10
	kSfxGLOOP2   = 231,  // unused
	kSfxGLOOP3   = 232,  // unused
	kSfxGLOOP4   = 233,  // used only in UG10
	kSfxPIPER1   = 234,
	kSfxSQUEAK1  = 235,
	kSfxTB5LOOP1 = 236,  //           - Looping (TB05, TB06)
	kSfxTB5LOOP2 = 237,  //           - Looping (TB05, TB06)
	kSfxHCBELL1  = 238,  // used twice; HC02 and HC03
	kSfxHCSING1  = 239,  // unused
	kSfxINDFLUT1 = 240,  // used twice; HC02 and HC03
	kSfxHCLOOP1  = 241,  //           - Looping
	kSfxHCANM8   = 242,
	kSfxHCANM2   = 243,
	kSfxHCANM3   = 244,
	kSfxHCANM4   = 245,
	kSfxHCANM5   = 246,
	kSfxHCANM6   = 247,
	kSfxHCANM7   = 248,
	kSfxHCANM1   = 249,
	kSfxDOGTOY3  = 250,  // unused
	kSfxBARAMB2  = 251,  // unused - identical to kSfxBARAMB1
	kSfxBARSFX1  = 252,
	kSfxBARSFX2  = 253,  // unused
	kSfxBARSFX3  = 254,
	kSfxBARSFX4  = 255,
	kSfxBARSFX5  = 256,
	kSfxBARSFX6  = 257,
	kSfxBARSFX7  = 258,
	kSfxCLINK1   = 259,
	kSfxCLINK2   = 260,
	kSfxCLINK3   = 261,
	kSfxCLINK4   = 262,
	kSfxDOGBARK1 = 263,  // used only in Maggie AI
	kSfxDOGBARK3 = 264,  // used only in Maggie AI
	kSfxDOGBITE1 = 265,  // unused
	kSfxDOGCRY1  = 266,  // unused
	kSfxDOGCRY2  = 267,  // unused
	kSfxDOGFAR1  = 268,  // unused
	kSfxDOGFAR2  = 269,  // unused
	kSfxDOGGUN1  = 270,  // unused
	kSfxDOGGUN2  = 271,  // unused
	kSfxDOGHURT1 = 272,  // used only in Maggie AI
	kSfxDOGMAD1  = 273,  // unused
	kSfxDOGNEED1 = 274,  // unused
	kSfxDOGNEED2 = 275,  // unused
	kSfxDOGTAIL1 = 276,  // used only in Maggie AI
	kSfxDOGTAIL2 = 277,  // unused
	kSfxDOGTOY1  = 278,  // unused
	kSfxDOGTOY2  = 279,  // unused
	kSfxBARAMB1  = 280,  //           - Looping
	kSfx14KBEEP1 = 281,  // used only in HC03
	kSfxTBBEEP1  = 282,  // unused
	kSfxTBDOOR1  = 283,  // used twice; TB05, TB06
	kSfxTBDOOR2  = 284,  // unused
	kSfxTBLOOP1  = 285,  //           - Looping (TB06)
	kSfxTRUCKBY1 = 286,  // used twice; BB01, RC03
	kSfxCHEVBY1  = 287,  // used only in RC03 (outside Bullet Bob's)
	kSfxFIREBD1  = 288,  //           - Looping (DR04, UG06)
	kSfxGLASSY1  = 289,  // used only in BB10 (Bradubury Bookcase Before Rooftop)
	kSfxGLASSY2  = 290,  // used only in BB10
	kSfxBBDRIP1  = 291,
	kSfxBBDRIP2  = 292,
	kSfxBBDRIP3  = 293,
	kSfxBBDRIP4  = 294,
	kSfxBBDRIP5  = 295,
	kSfxRADIATR1 = 296,  // unused
	kSfxRADIATR2 = 297,  // used only in BB09 (Bradubury above bathroom)
	kSfxRADIATR3 = 298,  // used only in BB09
	kSfxRADIATR4 = 299,  // used only in BB09
	kSfxJESTMOV1 = 300,  // used only in DR06
	kSfxINDXPLOD = 301,  // used only in DR04
	kSfxJESTMUS1 = 302,  // unused
	kSfxBBGRN1   = 303,
	kSfxBBGRN2   = 304,
	kSfxBBGRN3   = 305,
	kSfxBBMOVE1  = 306,
	kSfxBBMOVE2  = 307,
	kSfxBBMOVE3  = 308,
	kSfxHAUNT1   = 309,
	kSfxHAUNT2   = 310,
	kSfxMONKCYM1 = 311,
	kSfxCAMERA2  = 312,
	kSfxMONKEY1  = 313,
	kSfxMONKEY2  = 314,  // unused
	kSfxRUNAWAY1 = 315,
	kSfxTRPDOOR1 = 316,  // open and shut
	kSfxTRPDORO  = 317,  // unused - open
	kSfxTRPDORC  = 318,  // unused - shut
	kSfxAUDLAFF1 = 319,
	kSfxAUDLAFF2 = 320,
	kSfxAUDLAFF3 = 321,
	kSfxAUDLAFF4 = 322,
	kSfxAUDLAFF5 = 323,
	kSfxAUDLAFF6 = 324,
	kSfxAUDLAFF7 = 325,
	kSfxAUDLAFF8 = 326,
	kSfxAUDLAFF9 = 327,
	kSfxCHAINLNK = 328,
	kSfxMAMASNG1 = 329,  //           - Looping
	kSfxROTIS2   = 330,  //           - Looping
	kSfxSTMLOOP7 = 331,  //           - Looping
	kSfxUGBED1   = 332,  //           - Looping
	kSfxUGBED2   = 333,  //           - Looping
	kSfxBIGFAN3  = 334,  // unused
	kSfxGETITEM1 = 335,
	kSfxFLORBUZZ = 336,  //           - Looping
	kSfxDESKBELL = 337,
	kSfxCURTAIN1 = 338,
	kSfxDRAWER1  = 339,
	kSfxARCBED1  = 340,  //           - Looping
	kSfxCIRCUS1  = 341,  //           - Looping
	kSfxFORTUNE1 = 342,  // unused (un-triggered)
	kSfxCARCREK1 = 343,
	kSfxCARLAND1 = 344,
	kSfxDORSLID1 = 345,  // used only twice
	kSfxDORSLID2 = 346,  // used only once
	kSfxKUNG1    = 347,  // unused
	kSfxLOWERN1  = 348,
	kSfxLOWERY1  = 349,
	kSfxMAGCHNK1 = 350,
	kSfxMAGDROP1 = 351,
	kSfxMAGMOVE1 = 352,
	kSfxMAGMOVE2 = 353,
	kSfxRAISEN1  = 354,
	kSfxRAISEY1  = 355,
	kSfxBUMSNOR1 = 356,
	kSfxBUMSNOR2 = 357,
	kSfxBUMSNOR3 = 358,
	kSfxSTONDOR1 = 359,
	kSfxSTONDOR2 = 360,
	kSfxSEXYAD2  = 361,
	kSfxMUSBLEED = 362,  //           - Looping ("Iron Fist" track from Command & Conquer - The Covert Operations (OST))
	kSfxSUNROOM1 = 363,
	kSfxSUNROOM2 = 364,
	kSfxSUNROOM3 = 365,
	kSfxSUNROOM4 = 366,
	kSfxSUBWAY1  = 367,
	kSfxYELL1M1  = 368,
	kSfxGRUNT1M1 = 369,
	kSfxGRUNT2M1 = 370,
	kSfxHURT1M1  = 371,
	kSfxCARGELE2 = 372,
	kSfxCARUP3B  = 373,
	kSfxCOLONY   = 374,
	kSfxTHNDER2  = 375,
	kSfxTHNDER3  = 376,
	kSfxTHNDER4  = 377,
	kSfxTHNDR1   = 378,
	kSfxTHNDR2   = 379,
	kSfxTHNDR3   = 380,
	kSfxRAIN10   = 381,  //           - Looping
	kSfxRAINALY1 = 382,  //           - Looping
	kSfxSKINBED1 = 383,  //           - Looping
	kSfxRUMLOOP1 = 384,  //           - Looping
	kSfxPHONE1   = 385,
	kSfxESPLOOP1 = 386,  //           - Looping
	kSfxESPLOOP2 = 387,  //           - Looping
	kSfxESPLOOP3 = 388,  //           - Looping
	kSfxSTEAMY1  = 389,
	kSfxSTEAMY2  = 390,
	kSfxSQUEAK2  = 391,
	kSfxSQUEAK3  = 392,
	kSfxSQUEAK4  = 393,  // used only once
	kSfxSQUEAK5  = 394,
	kSfxGRUNT1M2 = 395,
	kSfxGRUNT1M3 = 396,
	kSfxGRUNT2M2 = 397,
	kSfxGRUNT2M3 = 398,
	kSfxHURT1M2  = 399,
	kSfxHURT1M3  = 400,
	kSfxYELL1M2  = 401,
	kSfxYELL1M3  = 402,
	kSfxVIDFONE1 = 403,
	kSfxDRAIN1X  = 404,
	kSfxTOILET1  = 405,
	kSfxGARGLE1  = 406,
	kSfxWASH1    = 407,
	kSfxAPRTFAN1 = 408,  //           - Looping
	kSfxMA04VO1A = 409,  // unused Developer commentary for MA04 scene (McCoy's apartment)
	kSfxCT01VO1A = 410,  // unused Developer commentary for CT01 scene (Howie Lee's, Chinatown)
	kSfxHC01VO1A = 411,  // unused Developer commentary for HC01 scene (Hawker's Circle)
	kSfxELEBAD1  = 412,
	kSfxBR025_5A = 413,
	kSfxBR027_1P = 414,
	kSfxBR024_4B = 415,
	kSfxBR029_3A = 416,
	kSfxBR034_1A = 417,
	kSfxBR030_3A = 418,
	kSfxBR031_1P = 419,
	kSfxBR028_2A = 420,
	kSfxBR026_2A = 421,  // unused
	kSfxBR032_7B = 422,
	kSfxBR033_4B = 423,
	kSfxBR035_7B = 424,
	kSfxBR010_4A = 425,  // unused
	kSfxBR011_2A = 426,
	kSfxBR012_3B = 427,  // unused
	kSfxBR013_3D = 428,
	kSfxBR014_5A = 429,
	kSfxBR015_3C = 430,  // unused
	kSfxBR016_2B = 431,
	kSfxBR017_2A = 432,  // unused
	kSfxBR018_3E = 433,  // unused
	kSfxBBELE2   = 434,
	kSfxRATTY1   = 435,  // unused
	kSfxRATTY2   = 436,  // unused
	kSfxRATTY3   = 437,
	kSfxRATTY4   = 438,
	kSfxRATTY5   = 439,
	kSfxSCARY1   = 440,
	kSfxSCARY2   = 441,
	kSfxSCARY3   = 442,
	kSfxSCARY4   = 443,
	kSfxSCARY5   = 444,
	kSfxSCARY6   = 445,
	kSfxSCARY7   = 446,
	kSfxPNEUM5   = 447,  // used only once
	kSfxROBOTMV1 = 448,
	kSfxMCGUN1   = 449,
	kSfxMCGUN2   = 450,
	kSfxDEKGLAS1 = 451,  // used only once
	kSfx35MM     = 452,
	kSfx35MMBRK1 = 453,
	kSfx35MMGO1  = 454,  // unused
	kSfxBR027_3P = 455,
	kSfxBRWIND2  = 456,
	kSfxBUTN6    = 457,
	kSfxBR018_1P = 458,
	kSfxBR003_1A = 459,
	kSfxBRTARGET = 460,
	kSfxVKBEEP1  = 461,
	kSfxVKBEEP2  = 462,
	kSfxCAMCOP1  = 463,
	kSfxKPAMB1   = 464,  //           - Looping
	kSfxMANHOLE1 = 465,  // unused
	kSfxMETALL1  = 466,
	kSfxMETALL2  = 467,
	kSfxMETALL3  = 468,
	kSfxMETALL4  = 469,
	kSfxMETALL5  = 470,
	kSfxMETALR1  = 471,
	kSfxMETALR2  = 472,
	kSfxMETALR3  = 473,
	kSfxMETALR4  = 474,
	kSfxMETALR5  = 475,
	kSfxWOODL1   = 476,
	kSfxWOODL2   = 477,
	kSfxWOODL3   = 478,
	kSfxWOODL4   = 479,
	kSfxWOODL5   = 480,
	kSfxWOODR1   = 481,
	kSfxWOODR2   = 482,
	kSfxWOODR3   = 483,
	kSfxWOODR4   = 484,
	kSfxWOODR5   = 485,
	kSfxDIALOUT3 = 486,  // unused
	kSfxBIKEMIX4 = 487,
	kSfxCHAINBRK = 488,
	kSfxGUNAIM1  = 489,  // unused
	kSfxCAREXPL1 = 490,
	kSfxCRYEXPL1 = 491,
	kSfxSHOTCOK1 = 492,
	kSfxSHOTGUN1 = 493,
	kSfxDOGEXPL1 = 494,
	kSfxBEEP16   = 495,
	kSfxMECHAN1C = 496,
	kSfxMECHAN1  = 497,
	kSfxPANEL1   = 498,
	kSfxPANEL2   = 499,
	kSfxPANOPEN  = 500,
	kSfxELECTRO1 = 501,
	kSfxBEEP1    = 502,
	kSfxBUTN4P   = 503,
	kSfxBUTN4R   = 504,
	kSfxBUTN5P   = 505,
	kSfxBUTN5R   = 506,
	kSfxTEXT1    = 507,
	kSfxTEXT3    = 508,
	kSfxBEEP10   = 509,
	kSfxBEEP10A  = 510,
	kSfxBEEP15   = 511,
	kSfxMUSVOL8  = 512,
	kSfxELECBP1  = 513,
	kSfxCRZYEXPL = 514,  // unused
	kSfxELEBUTN1 = 515,
	kSfxELECLAB1 = 516,  //           - Looping
	kSfxGUNH1A   = 517,
	kSfxGUNH1B   = 518,
	kSfxGUNH1C   = 519,
	kSfxGUNH2A   = 520,
	kSfxGUNH2B   = 521,
	kSfxGUNH2C   = 522,
	kSfxGUNH3A   = 523,
	kSfxGUNH3B   = 524,
	kSfxGUNH3C   = 525,
	kSfxGUNM1A   = 526,
	kSfxGUNM1B   = 527,
	kSfxGUNM1C   = 528,
	kSfxGUNM2A   = 529,
	kSfxGUNM2B   = 530,
	kSfxGUNM2C   = 531,
	kSfxGUNM3A   = 532,
	kSfxGUNM3B   = 533,
	kSfxGUNM3C   = 534,
	kSfxGUNH1AR  = 535,  // unused - adds reverb to 517
	kSfxGUNH1BR  = 536,  // unused - adds reverb to 518
	kSfxGUNH1CR  = 537,  // unused - adds reverb to 519
	kSfxGUNH2AR  = 538,  // unused - adds reverb to 520
	kSfxGUNH2BR  = 539,  // unused - adds reverb to 521
	kSfxGUNH2CR  = 540,  // unused - adds reverb to 522
	kSfxGUNH3AR  = 541,  // unused - adds reverb to 523
	kSfxGUNH3BR  = 542,  // unused - adds reverb to 524
	kSfxGUNH3CR  = 543,  // unused - adds reverb to 525
	kSfxGUNM1AR  = 544,  // unused - adds reverb to 526
	kSfxGUNM1BR  = 545,  // unused - adds reverb to 527
	kSfxGUNM1CR  = 546,  // unused - adds reverb to 528
	kSfxGUNM2AR  = 547,  // unused - adds reverb to 529
	kSfxGUNM2BR  = 548,  // unused - adds reverb to 530
	kSfxGUNM2CR  = 549,  // unused - adds reverb to 531
	kSfxGUNM3AR  = 550,  // unused - adds reverb to 532
	kSfxGUNM3BR  = 551,  // unused - adds reverb to 533
	kSfxGUNM3CR  = 552,  // unused - adds reverb to 534
	kSfxGARBAGE  = 553,
	kSfxBELLTONE = 554,  // unused
	kSfxMALEHURT = 555,
	kSfxHOLSTER1 = 556,
	kSfxHEADHIT2 = 557,
	kSfxUGLEVER1 = 558,
	kSfxCOMPDWN4 = 559,
	kSfxDROPGLAS = 560,
	kSfxBRKFNGR1 = 561,
	kSfxBOMBFAIL = 562,
	kSfxBABYCRY2 = 563,
	kSfxBRKROPE1 = 564,
	kSfxKICKDOOR = 565,  // unused
	kSfxDEKCLAP1 = 566,
	kSfxWHISTLE1 = 567,
	kSfxWHISTLE2 = 568,
	kSfxWHISTLE3 = 569,
	kSfxFEMORG1  = 570,
	kSfxFEMORG2  = 571,
	kSfxFEMORG3  = 572,
	kSfxFEMORG4  = 573,
	kSfxDOORLOCK = 574,
	kSfxRIMSHOT1 = 575,
	kSfxRIMSHOT2 = 576,
	kSfxRIMSHOT3 = 577,
	kSfxRIMSHOT4 = 578,
	kSfxRIMSHOT5 = 579,
	kSfxGOTSHOT1 = 580,  // unused
	kSfxCOMEDY   = 581,
	kSfxDRUGOUT  = 582,
	kSfxPLANKDWN = 583,
	kSfxBANGDOOR = 584,  // unused
	kSfxCOMPBED1 = 585,  //           - Looping
	kSfxMOONBED2 = 586,  //           - Looping
	kSfxDATALOAD = 587,
	kSfxBEEPNEAT = 588,
	kSfxWINDLOOP = 589,  //           - Looping
	kSfxTBALARM  = 590,
	kSfxLIGHTON  = 591,
	kSfxCOMPON1  = 592,
	kSfxCHARMTL7 = 593,
	kSfxCHARMTL8 = 594,
	kSfxCHARMTL9 = 595,
	kSfxSHUTDOWN = 596
};

enum GameDifficultyLevel {
	kGameDifficultyEasy   = 0,
	kGameDifficultyMedium = 1,
	kGameDifficultyHard   = 2
};

enum MusicTrackLoop {
	kMusicLoopPlayOnce              =  0, // do not loop
	kMusicLoopRepeat                =  1, // loop track
	kMusicLoopRepeatRandomStart     =  2, // (Restored Content) start from random point - do not loop track
	kMusicLoopPlayOnceRandomStart   =  3  // (Restored Content) start from random point - loop track
};

} // End of namespace BladeRunner

#endif
