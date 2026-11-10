/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01226258; name: FUN_01226258
 */


void FUN_01226258(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  uVar6 = FUN_0284eef8(*(undefined8 *)(param_1 + 0x448),param_2,0);
  if ((uVar6 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x2c8);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = (long *)plVar7[0x29];
    lVar10 = plVar7[0x2a];
    if ((lVar10 != 0) && (*plVar8 != -0x498d78dc2336f7fe)) {
      plVar9 = plVar8 + lVar10 * 6;
      lVar10 = lVar10 * 0x30;
      do {
        lVar10 = lVar10 + -0x30;
        if (lVar10 == 0) {
          plVar8 = plVar9;
          break;
        }
        plVar2 = plVar8 + 6;
        plVar1 = plVar8 + 6;
        plVar8 = plVar2;
      } while (*plVar1 != -0x498d78dc2336f7fe);
    }
    *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) | 1;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01226330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))();
        return;
      }
    }
  }
  return;
}


