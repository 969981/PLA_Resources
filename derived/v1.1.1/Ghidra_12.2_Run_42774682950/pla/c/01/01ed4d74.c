/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed4d74; name: FUN_01ed4d74
 */


void FUN_01ed4d74(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  undefined1 auStack_28 [8];
  
  lVar7 = *(long *)(param_1 + 0x78);
  lVar8 = lVar7 + 0x100;
  do {
    FUN_00956dac(&local_38,lVar8);
    if (local_38 != (long *)0x0) {
      lVar5 = FUN_008a7e50(local_38 + 0x1e,auStack_28);
      if ((lVar5 != 0) && (uVar6 = FUN_01ed6364(), (uVar6 & 1) != 0)) {
        FUN_01ba08ec(lVar5);
        FUN_01ba0a50(lVar5);
      }
      if (local_38 != (long *)0x0) {
        lVar5 = local_38[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
    lVar8 = lVar8 + 0x30;
  } while (lVar8 != lVar7 + 0x1f0);
  return;
}


