/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da780; name: FUN_003da780
 */


uint FUN_003da780(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = param_2 >> 2;
  if (uVar2 != 0) {
    pbVar4 = param_1;
    do {
      uVar2 = uVar2 - 1;
      param_3 = (*(int *)pbVar4 * 0x16a88000 | (uint)(*(int *)pbVar4 * -0x3361d2af) >> 0x11) *
                0x1b873593 ^ param_3;
      param_3 = (param_3 >> 0x13 | param_3 << 0xd) * 5 + 0xe6546b64;
      pbVar4 = pbVar4 + 4;
    } while (uVar2 != 0);
    param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
  }
  uVar3 = (uint)param_2 & 3;
  uVar1 = 0;
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_003da82c;
      uVar1 = (uint)param_1[2] << 0x10;
    }
    uVar1 = uVar1 | (uint)param_1[1] << 8;
  }
  param_3 = ((uVar1 ^ *param_1) * 0x16a88000 | (uVar1 ^ *param_1) * -0x3361d2af >> 0x11) *
            0x1b873593 ^ param_3;
LAB_003da82c:
  param_3 = param_3 ^ (uint)param_2;
  uVar1 = (param_3 ^ param_3 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}


