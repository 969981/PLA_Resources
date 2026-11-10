/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456840; name: FUN_00456840
 */


int FUN_00456840(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0040c070(*(undefined8 *)(param_1 + 0x18));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  return iVar1 >> 3;
}


