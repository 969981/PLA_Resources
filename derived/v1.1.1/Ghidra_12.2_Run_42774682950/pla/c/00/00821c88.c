/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821c88; name: FUN_00821c88
 */


undefined8 FUN_00821c88(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar3 = param_1[3];
  *param_1 = param_1[2];
  param_1[1] = uVar3;
  uVar2 = uVar2 ^ uVar2 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar3;
  uVar3 = uVar1 ^ uVar3 >> 0x13;
  uVar1 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar1 >> 0x13;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  return CONCAT44(uVar3,uVar1);
}


