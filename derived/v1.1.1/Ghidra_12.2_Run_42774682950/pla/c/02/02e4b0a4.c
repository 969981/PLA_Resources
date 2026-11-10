/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b0a4; name: FUN_02e4b0a4
 */


void FUN_02e4b0a4(long *param_1)

{
  long *plVar1;
  long *plVar3;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  plVar2 = plVar1;
  if ((int)param_1[1] != 0) {
    do {
      plVar3 = plVar2 + 1;
      *(undefined8 *)(*plVar2 + 0x38) = 0;
      plVar1 = (long *)*param_1;
      plVar2 = plVar3;
    } while (plVar3 != plVar1 + *(uint *)(param_1 + 1));
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(9);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


