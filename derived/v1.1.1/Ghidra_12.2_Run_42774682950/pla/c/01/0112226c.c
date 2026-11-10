/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112226c; name: FUN_0112226c
 */


int FUN_0112226c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x7f10);
  if (uVar2 == 0xff) {
    return 0xff;
  }
  iVar1 = uVar2 + 1;
  *(byte *)(param_1 + 0x7f10) = (byte)iVar1;
  return iVar1;
}


