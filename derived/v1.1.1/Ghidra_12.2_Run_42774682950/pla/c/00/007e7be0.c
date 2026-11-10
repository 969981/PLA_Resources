/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e7be0; name: FUN_007e7be0
 */


void FUN_007e7be0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar2 = uVar3 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
  uVar1 = uVar2 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  *param_1 = uVar1 ^ uVar4 ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar4 = param_2[1];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar2 = uVar3 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
  uVar1 = uVar2 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  param_1[1] = uVar1 ^ uVar4 ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar4 = param_2[2];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar2 = uVar3 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
  uVar1 = uVar2 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  param_1[2] = uVar1 ^ uVar4 ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar4 = param_2[3];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar2 = uVar3 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
  uVar1 = uVar2 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  param_1[3] = uVar1 ^ uVar4 ^ (uVar1 >> 8 | uVar1 << 0x18);
  return;
}


