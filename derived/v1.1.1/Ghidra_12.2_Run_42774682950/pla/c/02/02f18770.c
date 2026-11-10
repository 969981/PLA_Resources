/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18770; name: FUN_02f18770
 */


void FUN_02f18770(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    FUN_02ea3a44();
    return;
  }
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


