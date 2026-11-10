/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ccb80; name: FUN_010ccb80
 */


void FUN_010ccb80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_041f04f0;
  uVar2 = *param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = 0x555555555555555;
  param_1[6] = 0;
  param_1[4] = uVar2;
  uVar2 = *param_3;
  *param_3 = 0;
  param_1[8] = uVar2;
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  param_1[0xf] = 0;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  param_1[9] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x10),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x14),true,0);
  *(undefined2 *)(param_1 + 0x18) = 0;
  FUN_010cff30(param_1 + 1,param_2);
  return;
}


