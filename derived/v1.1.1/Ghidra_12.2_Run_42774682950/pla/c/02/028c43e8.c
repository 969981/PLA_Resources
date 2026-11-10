/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c43e8; name: FUN_028c43e8
 */


void FUN_028c43e8(long *param_1,long param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  
  plVar2 = *(long **)(*param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    plVar2 = (long *)plVar2[1];
    if (plVar1 != plVar2) {
      do {
        if (*plVar1 == *(long *)(param_2 + 8)) goto LAB_028c4434;
        plVar1 = plVar1 + 0x24;
      } while (plVar2 != plVar1);
      plVar1 = plVar2;
    }
LAB_028c4434:
    if (*(int *)(param_2 + 0x28) == 2) {
      if ((plVar1 != plVar2) &&
         (UNRECOVERED_JUMPTABLE = (code *)plVar1[4], UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        plVar1 = plVar1 + 8;
LAB_028c4490:
                    /* WARNING: Could not recover jumptable at 0x028c449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,param_2);
        return;
      }
    }
    else {
      if (*(int *)(param_2 + 0x2c) == 2) {
        if (plVar1 == plVar2) {
          return;
        }
      }
      else {
        if (plVar1 == plVar2) {
          return;
        }
        if ((code *)plVar1[4] != (code *)0x0) {
          (*(code *)plVar1[4])(plVar1 + 8,param_2);
        }
      }
      UNRECOVERED_JUMPTABLE = (code *)plVar1[0x14];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        plVar1 = plVar1 + 0x18;
        goto LAB_028c4490;
      }
    }
  }
  return;
}


