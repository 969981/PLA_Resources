/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee0bfc; name: FUN_02ee0bfc
 */


void FUN_02ee0bfc(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    uVar1 = (int)param_2 + param_3;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
    plVar5 = (long *)*plVar4;
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar5;
      do {
        if ((*plVar8 == param_2) && ((int)plVar8[1] == param_3)) {
          plVar7 = (long *)0x0;
          goto LAB_02ee0c60;
        }
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
LAB_02ee0c60:
  plVar6 = plVar5;
  if ((*plVar6 == param_2) && ((int)plVar6[1] == param_3)) {
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 2;
    }
    *plVar4 = plVar6[2];
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    goto LAB_02ee0ca4;
  }
  plVar5 = (long *)plVar6[2];
  plVar7 = plVar6;
  if ((long *)plVar6[2] == (long *)0x0) {
LAB_02ee0ca4:
    FUN_02edfd6c(param_1,plVar8);
    if (plVar8[10] != 0) {
      *(undefined4 *)(plVar8 + 0xb) = 0;
      (*DAT_0442d150)(0);
      plVar8[10] = 0;
      *(undefined4 *)((long)plVar8 + 0x5c) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x02ee0ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0442d150)(0,plVar8);
    return;
  }
  goto LAB_02ee0c60;
}


