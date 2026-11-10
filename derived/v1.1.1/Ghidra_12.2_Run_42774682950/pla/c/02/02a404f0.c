/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a404f0; name: FUN_02a404f0
 */


undefined8 FUN_02a404f0(void)

{
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined4 local_4050;
  TimeZoneRule aTStack_4048 [16388];
  int iStack_44;
  CalendarAdditionalInfo aCStack_40 [24];
  CalendarTime aCStack_28 [8];
  PosixTime aPStack_18 [8];
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_18);
  nn::time::ToCalendarTime(aCStack_28,aCStack_40,aPStack_18);
  local_4050 = 0;
  local_4060 = 0;
  uStack_4058 = 0;
  local_4070 = 0x544d47;
  uStack_4068 = 0;
  nn::time::LoadTimeZoneRule(aTStack_4048,(LocationName *)&local_4070);
  nn::time::ToPosixTime(&iStack_44,(PosixTime *)&local_4070,2,aCStack_28,aTStack_4048);
  return local_4070;
}


