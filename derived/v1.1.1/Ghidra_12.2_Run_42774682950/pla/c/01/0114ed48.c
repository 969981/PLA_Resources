/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114ed48; name: FUN_0114ed48
 */


void FUN_0114ed48(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_02a48e80(param_1,0x10000);
  *param_1 = &PTR_LAB_041f2c68;
  *(undefined4 *)(param_1 + 0x82) = param_2;
  param_1[9] = &PTR_LAB_041f2cd8;
  param_1[10] = &PTR_LAB_041f2d20;
  uVar3 = param_3[2];
  uVar1 = *param_3;
  uVar4 = param_3[1];
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_3 + 3);
  param_1[0x85] = uVar3;
  param_1[0x84] = uVar4;
  param_1[0x83] = uVar1;
  param_1[0x87] = param_3[4];
  param_1[0x88] = param_3[5];
  param_1[0x89] = param_3[6];
  plVar2 = (long *)param_3[7];
  param_1[0x8a] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  uVar1 = param_3[9];
  uVar4 = param_3[10];
  param_1[0x8b] = param_3[8];
  param_1[0x8d] = uVar4;
  param_1[0x8c] = uVar1;
  *(undefined4 *)(param_1 + 0x8e) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8f),false,0);
  *(undefined4 *)(param_1 + 0x93) = 0;
  return;
}


