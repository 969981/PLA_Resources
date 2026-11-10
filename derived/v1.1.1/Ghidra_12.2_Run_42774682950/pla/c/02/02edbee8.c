/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edbee8; name: FUN_02edbee8
 */


void FUN_02edbee8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    plVar11 = *(long **)(param_2 + 8);
    do {
      lVar10 = *plVar11;
      plVar5 = *(long **)(param_1 + 0x88);
      uVar2 = *(uint *)(param_1 + 0x90);
      if ((uVar2 == 0) || (*plVar5 == lVar10)) {
        plVar4 = plVar5;
      }
      else {
        lVar6 = (ulong)uVar2 * 0x30;
        plVar9 = plVar5;
        do {
          lVar6 = lVar6 + -0x30;
          if (lVar6 == 0) goto LAB_02edc034;
          plVar4 = plVar9 + 6;
          plVar1 = plVar9 + 6;
          plVar9 = plVar4;
        } while (*plVar1 != lVar10);
      }
      if (plVar4 == plVar5 + (ulong)uVar2 * 6) {
LAB_02edc034:
        plVar4 = (long *)FUN_02edc290(param_1 + 0x88);
        if (plVar4 != (long *)0x0) {
          *plVar4 = lVar10;
          goto LAB_02edbf4c;
        }
      }
      else {
LAB_02edbf4c:
        uVar2 = *(uint *)(DAT_0440a140 + 0x38);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = (uint)lVar10 / uVar2;
          }
          for (plVar5 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                                  (ulong)((uint)lVar10 - uVar3 * uVar2) * 8); plVar5 != (long *)0x0;
              plVar5 = (long *)*plVar5) {
            if (plVar5[1] == lVar10) {
              if ((2 < *(uint *)(plVar5[2] + 0x40)) &&
                 (lVar6 = *(long *)(*(long *)(plVar5[2] + 0x38) + 0x10), lVar6 != 0)) {
                plVar4[1] = *(long *)(lVar6 + 0x3c);
                lVar10 = *(long *)(lVar6 + 0x44);
                lVar7 = *(long *)(lVar6 + 0x4c);
                lVar8 = *(long *)(lVar6 + 0x54);
                *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(lVar6 + 0x5c);
                plVar4[3] = lVar7;
                plVar4[4] = lVar8;
                plVar4[2] = lVar10;
                goto LAB_02edbfc4;
              }
              break;
            }
          }
        }
        FUN_02edc16c(param_1 + 0x88,lVar10);
      }
LAB_02edbfc4:
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8));
  }
  return;
}


