/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec68b8; name: FUN_02ec68b8
 */


void FUN_02ec68b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  if ((int)param_1[1] != 0) {
    plVar2 = plVar1;
    do {
      *(int *)(*plVar2 + 0x84) = *(int *)(*plVar2 + 0x84) + -1;
      plVar3 = plVar2 + 1;
      FUN_02eb939c(*plVar2);
      plVar1 = (long *)*param_1;
      plVar2 = plVar3;
    } while (plVar3 != plVar1 + *(uint *)(param_1 + 1));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


