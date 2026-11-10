/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025b590; name: FUN_0025b590
 */


void FUN_0025b590(long param_1)

{
  uint uVar1;
  void *__s;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  __s = *(void **)(*(long *)(param_1 + 0x18) + 0x10);
  *(void **)(*(long *)(param_1 + 0x18) + 0x10) = (void *)((long)__s + (long)(int)uVar1 * 0x18);
  if ((__s != (void *)0x0) && (0 < (int)uVar1)) {
    memset(__s,0,(ulong)uVar1 * 0x18);
  }
  *(void **)(param_1 + 0x28) = __s;
  return;
}


