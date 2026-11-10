/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58f80; name: FUN_02f58f80
 */


ulong FUN_02f58f80(int param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(&DAT_0442c138 + (long)param_1 * 0x820);
  lVar7 = (long)param_1;
  if (param_2 < uVar5) {
    uVar5 = 0;
  }
  else if (uVar5 <= *(ulong *)(&DAT_0442c130 + lVar7 * 0x820)) {
    uVar5 = 0;
  }
  puVar1 = (ulong *)(&DAT_0442c8f8 + lVar7 * 0x820);
  do {
    uVar6 = *puVar1;
    uVar4 = uVar6 + uVar5 + param_2;
    if (*(ulong *)(&DAT_0442c568 + lVar7 * 0x820) != 0 &&
        *(ulong *)(&DAT_0442c568 + lVar7 * 0x820) < uVar4) {
      return 0;
    }
    while (*puVar1 == uVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar4 = (**(code **)(&DAT_0442c0e8 + lVar7 * 0x820))(uVar5 + param_2,param_4);
        if (uVar5 == 0) {
          return uVar4;
        }
        if (uVar4 == 0) {
          return 0;
        }
        uVar5 = uVar5 - (uVar4 & (*(ulong *)(&DAT_0442c148 + lVar7 * 0x820) ^ 0xffffffffffffffff));
        *param_3 = uVar5 >> 3;
        return uVar4 + uVar5;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


