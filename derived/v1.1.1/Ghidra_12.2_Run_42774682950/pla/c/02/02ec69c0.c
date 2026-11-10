/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec69c0; name: FUN_02ec69c0
 */


void FUN_02ec69c0(long *param_1)

{
  long *plVar1;
  
  for (plVar1 = (long *)*param_1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    *(int *)(plVar1[1] + 0x84) = *(int *)(plVar1[1] + 0x84) + -1;
    FUN_02eb939c(plVar1[1]);
    if (plVar1[2] != 0) {
      *(undefined4 *)(plVar1 + 3) = 0;
      FUN_02f59e60(0);
      plVar1[2] = 0;
      *(undefined4 *)((long)plVar1 + 0x1c) = 0;
    }
  }
  FUN_02ec6a90(param_1);
  return;
}


