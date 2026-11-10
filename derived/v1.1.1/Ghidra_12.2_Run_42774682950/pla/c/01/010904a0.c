/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010904a0; name: FUN_010904a0
 */


void FUN_010904a0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  tm *ptVar5;
  time_t local_40a0;
  undefined8 uStack_4098;
  undefined8 local_4090;
  undefined8 uStack_4088;
  undefined4 local_4080;
  time_t local_4078 [2048];
  int iStack_74;
  CalendarAdditionalInfo aCStack_70 [24];
  CalendarTime aCStack_58 [8];
  PosixTime aPStack_48 [8];
  
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  if (((uVar4 & 1) != 0) ||
     ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) != 0)) {
    nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_48);
    nn::time::ToCalendarTime(aCStack_58,aCStack_70,aPStack_48);
    local_4090 = DAT_03a8103a;
    uStack_4088 = DAT_03a81042;
    local_4080 = DAT_03a8104a;
    local_40a0 = DAT_03a8102a;
    uStack_4098 = DAT_03a81032;
    nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4078,(LocationName *)&local_40a0);
    nn::time::ToPosixTime
              (&iStack_74,(PosixTime *)&local_40a0,2,aCStack_58,(TimeZoneRule *)local_4078);
    local_4078[0] = local_40a0;
    ptVar5 = localtime(local_4078);
    if (ptVar5 != (tm *)0x0) {
      iVar2 = ptVar5->tm_year;
      iVar3 = ptVar5->tm_mon;
      iVar1 = ptVar5->tm_mday;
      FUN_02c831bc(*(undefined8 *)(param_1 + 0x98),0x7532);
      FUN_02c824bc(*(undefined8 *)(param_1 + 0x98),(uint)(iVar2 % 100) % 100);
      FUN_02c827fc(*(undefined8 *)(param_1 + 0x98),(byte)iVar3 + 1);
      FUN_02c82b3c(*(undefined8 *)(param_1 + 0x98),iVar1);
    }
  }
  return;
}


