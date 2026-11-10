/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327c5b8; name: FUN_0327c5b8
 */


uint FUN_0327c5b8(int *param_1)

{
  uint uVar2;
  uint uVar1;
  
  uVar1 = (param_1[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
          (param_1[1] * -0x61c8864f & 0xff00ffU) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_1 * -0x61c8864f & 0xff00ff00U) >> 8 | (*param_1 * -0x61c8864f & 0xff00ffU) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = uVar2 + 0x9e3779b9 + uVar1 * 0x40 + (uVar2 >> 2) ^ uVar1;
  uVar2 = (param_1[2] * -0x61c8864f & 0xff00ff00U) >> 8 |
          (param_1[2] * -0x61c8864f & 0xff00ffU) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  return uVar2 + 0x9e3779b9 + (uVar2 >> 2) + uVar1 * 0x40 ^ uVar1;
}


