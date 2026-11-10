/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed9ff8; name: FUN_01ed9ff8
 */


void FUN_01ed9ff8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_00151a70(*param_2,0xffffffff,*param_3);
  FUN_00151a70(*param_2,0xffffffff,*param_4);
  FUN_00151a70(*param_2,0xffffffff,*param_5);
  uVar2 = *param_2;
  FUN_01eda0c0(&local_50,uVar2);
  *param_1 = uVar2;
  FUN_00150260(uVar2,0xffffffff);
  uVar1 = FUN_00155070(uVar2,0xfff0b9d8);
  param_1[2] = local_50;
  *(undefined4 *)(param_1 + 3) = local_48;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


