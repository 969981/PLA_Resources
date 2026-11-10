/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4070c; name: FUN_02f4070c
 */


undefined8 FUN_02f4070c(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x44);
  uVar3 = 0;
  if (((~bVar2 & 0xf0) != 0) && ((char)bVar2 < '\0')) {
    bVar1 = bVar2 & 0xf0;
    if (0xef < bVar2) {
      bVar1 = bVar2;
    }
    *param_2 = bVar1;
    param_2[1] = *(byte *)(param_1 + 0x44) & 0xf;
    param_2[2] = *(byte *)(param_1 + 0x45);
    bVar2 = *(byte *)(param_1 + 0x46);
    uVar3 = 1;
    param_2[3] = bVar2;
    if ((bVar1 == 0x90) && (bVar2 == 0)) {
      uVar3 = 1;
      *param_2 = 0x80;
    }
  }
  return uVar3;
}


