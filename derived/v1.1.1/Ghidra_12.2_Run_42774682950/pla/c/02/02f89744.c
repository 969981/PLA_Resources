/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f89744; name: FUN_02f89744
 */


bool FUN_02f89744(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (param_2 >> 5 & 0x7ff) - *(int *)(param_1 + 0x28);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x20) <= iVar1)) {
    return false;
  }
  return (*(uint *)(param_1 + 0x18 + (long)iVar1 * 4 + *(long *)(param_1 + 0x18)) &
         1 << (ulong)(param_2 & 0x1f)) != 0;
}


