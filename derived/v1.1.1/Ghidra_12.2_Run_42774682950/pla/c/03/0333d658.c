/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d658; name: FUN_0333d658
 */


void FUN_0333d658(long param_1)

{
  long *plVar1;
  
  FUN_032c8e70();
  FUN_032d5d6c(param_1 + 0x1a0);
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    plVar1 = (long *)FUN_032d49a4();
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1 + 0x128,3);
  }
  FUN_032d5cb4(param_1 + 0x1a0);
  FUN_032cf7a4(param_1 + 0x128);
  return;
}


