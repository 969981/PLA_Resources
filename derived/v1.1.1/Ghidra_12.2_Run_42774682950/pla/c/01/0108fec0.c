/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fec0; name: FUN_0108fec0
 */


void FUN_0108fec0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  tm *ptVar8;
  time_t local_40c0;
  undefined8 uStack_40b8;
  undefined8 local_40b0;
  undefined8 uStack_40a8;
  undefined4 local_40a0;
  time_t local_4098 [2048];
  int iStack_94;
  CalendarAdditionalInfo aCStack_90 [24];
  CalendarTime aCStack_78 [8];
  PosixTime aPStack_70 [16];
  
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
    nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_70);
    nn::time::ToCalendarTime(aCStack_78,aCStack_90,aPStack_70);
    local_40b0 = DAT_03a8103a;
    uStack_40a8 = DAT_03a81042;
    local_40a0 = DAT_03a8104a;
    local_40c0 = DAT_03a8102a;
    uStack_40b8 = DAT_03a81032;
    nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4098,(LocationName *)&local_40c0);
    nn::time::ToPosixTime
              (&iStack_94,(PosixTime *)&local_40c0,2,aCStack_78,(TimeZoneRule *)local_4098);
    local_4098[0] = local_40c0;
    ptVar8 = localtime(local_4098);
    if (ptVar8 != (tm *)0x0) {
      iVar3 = ptVar8->tm_year;
      iVar4 = ptVar8->tm_mon;
      iVar2 = ptVar8->tm_mday;
      FUN_02c831bc(*(undefined8 *)(param_1 + 0x98),param_3);
      FUN_02c824bc(*(undefined8 *)(param_1 + 0x98),(uint)(iVar3 % 100) % 100);
      FUN_02c827fc(*(undefined8 *)(param_1 + 0x98),(byte)iVar4 + 1);
      FUN_02c82b3c(*(undefined8 *)(param_1 + 0x98),iVar2);
    }
    FUN_010900a0(param_1,param_2,param_4);
    uVar5 = FUN_02c5fb2c(param_1);
    FUN_02c8383c(*(undefined8 *)(param_1 + 0x98),uVar5);
    FUN_02c8135c(*(undefined8 *)(param_1 + 0x98),0x2f);
    if (bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
      FUN_02c66640();
    }
  }
  return;
}


