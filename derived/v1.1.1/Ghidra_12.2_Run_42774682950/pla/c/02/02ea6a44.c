/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6a44; name: FUN_02ea6a44
 */


long FUN_02ea6a44(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_24 [4];
  
  lVar1 = FUN_02ea7a60();
  if ((param_2 != -1) && (lVar1 != 0)) {
    if ((((long *)(lVar1 - 0x18U) < *(long **)(param_1 + 0x18)) ||
        (*(long *)(lVar1 - 0x18U) != param_2)) &&
       ((*(long **)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 3 + -3 <
         (long *)(lVar1 + 0x18U) || (*(long *)(lVar1 + 0x18U) != param_2)))) {
      FUN_02e44d58(param_1 + 0x28,param_2,auStack_24);
    }
  }
  return lVar1;
}


