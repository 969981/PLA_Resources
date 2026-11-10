/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae6fb8; name: FUN_00ae6fb8
 */


void FUN_00ae6fb8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00ae6ef0(param_1,param_2,param_4);
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x2f0) = *param_3;
  *(undefined8 *)(param_1 + 0x300) = uVar1;
  *(undefined8 *)(param_1 + 0x308) = uVar3;
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    *(undefined1 *)(param_1 + 0x2e0) = 1;
  }
  return;
}


