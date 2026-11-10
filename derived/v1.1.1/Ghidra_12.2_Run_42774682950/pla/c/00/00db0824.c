/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db0824; name: FUN_00db0824
 */


void FUN_00db0824(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *local_70 [4];
  long *local_50;
  
  FUN_00db093c();
  *param_1 = &PTR_LAB_041eded0;
  param_1[9] = &PTR_LAB_041edf00;
  param_1[10] = param_2;
  nn::prepo::PlayReport::PlayReport((PlayReport *)(param_1 + 0xb));
  plVar2 = (long *)param_1[10];
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x2000,8);
  param_1[0x16] = PTR_DAT_0437a508 + 0x10;
  param_1[0x12] = uVar1;
  param_1[0x13] = plVar2;
  param_1[0x1b] = 0;
  param_1[0x14] = 0x2000;
  param_1[0x15] = 8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1c),false,0);
  nn::prepo::PlayReport::SetBuffer((PlayReport *)(param_1 + 0xb),param_1[0x12]);
  FUN_00da1888(local_70,&DAT_041edfd0);
  FUN_00938764(param_1 + 0x16,0,local_70,0,0,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  return;
}


