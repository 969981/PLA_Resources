/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b2f5c; name: FUN_013b2f5c
 */


void FUN_013b2f5c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  FUN_013b3088(param_1,&local_50,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *param_1 = &PTR_FUN_04209ea8;
  param_1[9] = &PTR_LAB_04209f28;
  param_1[10] = &PTR_LAB_04209f70;
  *(undefined4 *)(param_1 + 0xf) = *param_3;
  uVar3 = *(undefined8 *)(param_3 + 2);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = uVar3;
  param_1[0x15] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x16);
    uVar3 = *param_4;
    uVar1 = param_4[1];
    uVar2 = param_4[3];
    param_1[0x14] = param_4[2];
    param_1[0x15] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar1;
  }
  param_1[0x24] = param_1[1];
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1[1];
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0x1fffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x31),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x35),false,0);
  return;
}


