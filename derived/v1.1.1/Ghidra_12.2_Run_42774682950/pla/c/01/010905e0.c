/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010905e0; name: FUN_010905e0
 */


void FUN_010905e0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  tm *ptVar6;
  time_t local_40c8 [2];
  undefined8 local_40b8;
  undefined8 local_40b0;
  undefined8 local_40a8;
  undefined8 uStack_40a0;
  undefined4 local_4098;
  time_t local_4090 [2048];
  CalendarAdditionalInfo aCStack_90 [24];
  CalendarTime aCStack_78 [8];
  PosixTime aPStack_70 [16];
  
  bVar1 = *(char *)(*(long *)(param_1 + 0x98) + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
  }
  uVar5 = FUN_01123e40(param_2,param_1);
  if ((uVar5 & 1) == 0) {
    FUN_01090780(param_1);
  }
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_70);
  nn::time::ToCalendarTime(aCStack_78,aCStack_90,aPStack_70);
  local_40a8 = DAT_03a8103a;
  uStack_40a0 = DAT_03a81042;
  local_40b0 = DAT_03a81032;
  local_4098 = DAT_03a8104a;
  local_40b8 = DAT_03a8102a;
  nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4090,(LocationName *)&local_40b8);
  nn::time::ToPosixTime
            ((int *)&local_40b8,(PosixTime *)local_40c8,2,aCStack_78,(TimeZoneRule *)local_4090);
  local_4090[0] = local_40c8[0];
  ptVar6 = localtime(local_4090);
  if (ptVar6 != (tm *)0x0) {
    iVar3 = ptVar6->tm_year;
    iVar4 = ptVar6->tm_mon;
    iVar2 = ptVar6->tm_mday;
    FUN_02c831bc(*(undefined8 *)(param_1 + 0x98),param_3);
    FUN_02c824bc(*(undefined8 *)(param_1 + 0x98),(uint)(iVar3 % 100) % 100);
    FUN_02c827fc(*(undefined8 *)(param_1 + 0x98),(byte)iVar4 + 1);
    FUN_02c82b3c(*(undefined8 *)(param_1 + 0x98),iVar2);
  }
  FUN_010900a0(param_1,param_2,param_4);
  FUN_02c8135c(*(undefined8 *)(param_1 + 0x98),0x2f);
  if (bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
    FUN_02c66640();
  }
  return;
}


