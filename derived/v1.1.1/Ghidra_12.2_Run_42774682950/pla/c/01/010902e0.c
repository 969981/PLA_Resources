/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010902e0; name: FUN_010902e0
 */


void FUN_010902e0(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  tm *ptVar8;
  time_t local_40a8;
  undefined8 uStack_40a0;
  undefined8 local_4098;
  undefined8 uStack_4090;
  undefined4 local_4088;
  time_t local_4080 [2048];
  int iStack_7c;
  CalendarAdditionalInfo aCStack_78 [24];
  CalendarTime aCStack_60 [8];
  PosixTime aPStack_58 [8];
  
  uVar6 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  if (((uVar6 & 1) == 0) &&
     (lVar7 = *(long *)(param_1 + 0x98), (*(ushort *)(*(long *)(lVar7 + 0x10) + 4) >> 2 & 1) == 0))
  {
    bVar1 = *(char *)(lVar7 + 0x19) == '\0';
    if (bVar1) {
      FUN_02c66480();
      lVar7 = *(long *)(param_1 + 0x98);
    }
    FUN_02c82e7c(lVar7,0);
    FUN_02c81afc(*(undefined8 *)(param_1 + 0x98),0);
    FUN_02c81e3c(*(undefined8 *)(param_1 + 0x98),0);
    FUN_02c8217c(*(undefined8 *)(param_1 + 0x98),0);
    nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_58);
    nn::time::ToCalendarTime(aCStack_60,aCStack_78,aPStack_58);
    local_4098 = DAT_03a8103a;
    uStack_4090 = DAT_03a81042;
    local_4088 = DAT_03a8104a;
    local_40a8 = DAT_03a8102a;
    uStack_40a0 = DAT_03a81032;
    nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4080,(LocationName *)&local_40a8);
    nn::time::ToPosixTime
              (&iStack_7c,(PosixTime *)&local_40a8,2,aCStack_60,(TimeZoneRule *)local_4080);
    local_4080[0] = local_40a8;
    ptVar8 = localtime(local_4080);
    if (ptVar8 != (tm *)0x0) {
      iVar3 = ptVar8->tm_year;
      iVar4 = ptVar8->tm_mon;
      iVar2 = ptVar8->tm_mday;
      FUN_02c831bc(*(undefined8 *)(param_1 + 0x98),0x7531);
      FUN_02c824bc(*(undefined8 *)(param_1 + 0x98),(uint)(iVar3 % 100) % 100);
      FUN_02c827fc(*(undefined8 *)(param_1 + 0x98),(byte)iVar4 + 1);
      FUN_02c82b3c(*(undefined8 *)(param_1 + 0x98),iVar2);
    }
    uVar5 = FUN_02c5fb2c(param_1);
    FUN_02c8383c(*(undefined8 *)(param_1 + 0x98),uVar5);
    FUN_02c8135c(*(undefined8 *)(param_1 + 0x98),0x2f);
    if (bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
      FUN_02c66640();
    }
  }
  return;
}


