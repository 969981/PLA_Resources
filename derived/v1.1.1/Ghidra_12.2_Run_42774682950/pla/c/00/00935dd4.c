/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935dd4; name: FUN_00935dd4
 */


bool FUN_00935dd4(long *param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 4) == 5) {
    return true;
  }
  bVar1 = *(byte *)(*(long *)(*param_2 + 0x70) + 0x7d);
  if (bVar1 < 6) {
    iVar2 = 0;
  }
  else if (bVar1 < 0xc) {
    iVar2 = 2;
  }
  else if (bVar1 < 0x12) {
    iVar2 = 1;
  }
  else if (bVar1 < 0x18) {
    iVar2 = 3;
  }
  else {
    iVar2 = (uint)(bVar1 < 0x1e) << 2;
  }
  return iVar2 == *(int *)(*param_1 + 4);
}


