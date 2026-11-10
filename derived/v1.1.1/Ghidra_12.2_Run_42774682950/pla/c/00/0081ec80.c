/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081ec80; name: FUN_0081ec80
 */


void FUN_0081ec80(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_043774c8;
  lVar9 = *(long *)PTR_DAT_043773f8;
  if (lVar9 == 0) {
    return;
  }
  if (*(long *)(lVar9 + 0x80) != 0) {
    puVar1 = (ulong *)(*(long *)(lVar9 + 0x80) + 0xb0);
    lVar5 = *(long *)PTR_DAT_043774c8;
    uVar6 = *puVar1;
    while( true ) {
      while (uVar6 != param_1) {
        if ((uVar6 & 0xfffffffe) != param_1) goto LAB_0081ed0c;
        FUN_00824d50(lVar5 / 100000);
        uVar6 = *puVar1;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') break;
      uVar6 = *puVar1;
    }
  }
LAB_0081ed0c:
  lVar5 = lVar9 + 0x40;
  FUN_0082481c(lVar5);
  lVar7 = *(long *)(lVar9 + 0x30);
  if (lVar7 != lVar9 + 0x28) {
    lVar8 = *(long *)puVar4;
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x10) + 0xb0);
      do {
        if (*puVar1 != param_1) {
          if ((*puVar1 & 0xfffffffe) == param_1) {
            FUN_00824824(lVar5);
            FUN_00824d50(lVar8 / 100000);
            FUN_0082481c(lVar5);
            lVar7 = *(long *)(lVar9 + 0x30);
            goto joined_r0x0081ed8c;
          }
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(lVar7 + 8);
joined_r0x0081ed8c:
    } while (lVar7 != lVar9 + 0x28);
  }
  FUN_00824824(lVar5);
  return;
}


