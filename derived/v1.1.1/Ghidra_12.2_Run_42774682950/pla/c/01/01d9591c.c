/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d9591c; name: FUN_01d9591c
 */


void FUN_01d9591c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0x100) = *param_2;
  *(undefined4 *)((long)param_1 + 0x804) = param_2[1];
  *(undefined4 *)(param_1 + 0x101) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x80c) = param_2[3];
  plVar1 = (long *)(**(code **)(*param_1 + 0x98))();
                    /* WARNING: Could not recover jumptable at 0x01d9595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))();
  return;
}


