/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d5fbc; name: FUN_011d5fbc
 */


void FUN_011d5fbc(long param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar3 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(byte *)(param_1 + 0x38) = param_3 & 1;
  FUN_011d6050(param_1,0,uVar1);
  FUN_011d6050(param_1,1,*(undefined8 *)(param_1 + 0x10));
  FUN_011d6050(param_1,2,*(undefined8 *)(param_1 + 0x18));
  FUN_011d6050(param_1,3,*(undefined8 *)(param_1 + 0x20));
  FUN_011d6050(param_1,4,*(undefined8 *)(param_1 + 0x28));
  FUN_011d6050(param_1,5,*(undefined8 *)(param_1 + 0x30));
  return;
}


