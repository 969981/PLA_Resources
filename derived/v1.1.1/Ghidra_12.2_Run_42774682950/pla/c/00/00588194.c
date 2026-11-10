/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00588194; name: FUN_00588194
 */


void FUN_00588194(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  *param_1 = (long)(PTR_DAT_04374e58 + 0x10);
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 9) {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  *(bool *)(param_1 + 1) = *(long *)pbVar3 == 0x6d69746c61636f6c && pbVar3[8] == 0x65;
  return;
}


