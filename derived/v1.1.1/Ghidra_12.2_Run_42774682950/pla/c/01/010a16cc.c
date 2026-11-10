/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a16cc; name: FUN_010a16cc
 */


ulong FUN_010a16cc(void)

{
  int iVar1;
  tm *ptVar2;
  time_t local_4070;
  undefined8 uStack_4068;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined4 local_4050;
  time_t local_4048 [2048];
  int iStack_44;
  CalendarAdditionalInfo aCStack_40 [24];
  CalendarTime aCStack_28 [8];
  PosixTime aPStack_18 [8];
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_18);
  nn::time::ToCalendarTime(aCStack_28,aCStack_40,aPStack_18);
  local_4060 = DAT_03a8103a;
  uStack_4058 = DAT_03a81042;
  local_4050 = DAT_03a8104a;
  local_4070 = DAT_03a8102a;
  uStack_4068 = DAT_03a81032;
  nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4048,(LocationName *)&local_4070);
  nn::time::ToPosixTime(&iStack_44,(PosixTime *)&local_4070,2,aCStack_28,(TimeZoneRule *)local_4048)
  ;
  local_4048[0] = local_4070;
  ptVar2 = localtime(local_4048);
  iVar1 = ptVar2->tm_year;
  return (ulong)CONCAT16((char)ptVar2->tm_sec,
                         CONCAT15((char)ptVar2->tm_min,
                                  CONCAT14((char)ptVar2->tm_hour,
                                           iVar1 + ((uint)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25
                                                          ) - (iVar1 >> 0x1f)) * -100 & 0xffff |
                                           ptVar2->tm_mday << 0x18 |
                                           ptVar2->tm_mon * 0x10000 + 0x10000U & 0xff0000)));
}


