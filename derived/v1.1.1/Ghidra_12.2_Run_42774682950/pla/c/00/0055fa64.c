/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055fa64; name: FUN_0055fa64
 */


undefined8 FUN_0055fa64(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    *param_3 = 0;
    uVar3 = (uint)*param_1;
    if (*param_1 != 5) goto joined_r0x0055fafc;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    *param_3 = 0;
    uVar3 = (uint)*param_1;
    if (uVar3 != 5) goto joined_r0x0055fafc;
  }
  if (*(short *)(param_1 + 6) == 0) {
    return 0;
  }
  pbVar1 = param_1 + 8;
  if (*(short *)(param_1 + 6) != 1) {
    pbVar1 = *(byte **)pbVar1;
  }
  param_1 = *(byte **)pbVar1;
  uVar3 = (uint)*param_1;
joined_r0x0055fafc:
  if (1 < uVar3 - 3) {
    return 0;
  }
  if (uVar3 == 3) {
    pbVar1 = param_1 + 0x18;
    uVar2 = 1;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_0055f690(*(ushort *)(param_1 + 2) >> 5 & 1,pbVar1,uVar2);
  *param_3 = param_1[2] & 1;
  return 1;
}


