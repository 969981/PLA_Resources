/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db8730; name: FUN_00db8730
 */


void FUN_00db8730(long param_1)

{
  ulong uVar1;
  undefined8 local_4078;
  undefined8 uStack_4070;
  undefined8 local_4068;
  undefined8 uStack_4060;
  undefined4 local_4058;
  TimeZoneRule aTStack_4050 [16388];
  int iStack_4c;
  CalendarAdditionalInfo aCStack_48 [24];
  CalendarTime aCStack_30 [8];
  PosixTime aPStack_28 [8];
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    nn::time::Initialize();
  }
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_28);
  nn::time::ToCalendarTime(aCStack_30,aCStack_48,aPStack_28);
  local_4068 = DAT_03a8103a;
  uStack_4060 = DAT_03a81042;
  local_4058 = DAT_03a8104a;
  local_4078 = DAT_03a8102a;
  uStack_4070 = DAT_03a81032;
  nn::time::LoadTimeZoneRule(aTStack_4050,(LocationName *)&local_4078);
  nn::time::ToPosixTime(&iStack_4c,(PosixTime *)&local_4078,2,aCStack_30,aTStack_4050);
  *(undefined8 *)(param_1 + 0x50) = local_4078;
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}


