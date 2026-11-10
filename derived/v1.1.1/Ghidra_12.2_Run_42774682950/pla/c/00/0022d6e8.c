/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d6e8; name: FUN_0022d6e8
 */


void FUN_0022d6e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


