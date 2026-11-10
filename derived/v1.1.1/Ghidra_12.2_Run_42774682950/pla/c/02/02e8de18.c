/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8de18; name: FUN_02e8de18
 */


void FUN_02e8de18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  MutexType *pMVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((param_2 != (long *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
    plVar8 = (long *)*DAT_0440a158;
    uVar3 = *(uint *)(DAT_0440a158 + 1);
    plVar2 = plVar8 + uVar3;
    if ((uVar3 != 0) && (*plVar8 != lVar7)) {
      lVar10 = (ulong)uVar3 * 8;
      plVar9 = plVar8;
      do {
        lVar10 = lVar10 + -8;
        plVar8 = plVar2;
        if (lVar10 == 0) break;
        plVar8 = plVar9 + 1;
        plVar1 = plVar9 + 1;
        plVar9 = plVar8;
      } while (*plVar1 != lVar7);
    }
    if (((plVar8 != (long *)0x0) && (plVar2 != plVar8)) && (*(short *)(lVar7 + 0x40) != -1)) {
      *(short *)(lVar7 + 0x40) = *(short *)(lVar7 + 0x40) + 1;
      *(long *)(param_1 + 0x50) = *param_2;
      uVar3 = *(uint *)(param_2 + 1);
      *(uint *)(param_1 + 0x58) = uVar3;
      pMVar6 = DAT_0440a120;
      nn::os::LockMutex(DAT_0440a120);
      uVar4 = *(uint *)(pMVar6 + 0x28);
      if (uVar4 == 0) {
        lVar7 = 0;
      }
      else {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        for (lVar7 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar3) {
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex(pMVar6);
      *(long *)(param_1 + 0xf0) = lVar7;
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e8df38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))(plVar11);
  return;
}


