/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115057c; name: FUN_0115057c
 */


void FUN_0115057c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_02a48e80(param_1,0x10000);
  *param_1 = &PTR_LAB_041f2f38;
  param_1[0x82] = param_2;
  param_1[9] = &PTR_LAB_041f2fa8;
  param_1[10] = &PTR_LAB_041f2ff0;
  plVar2 = (long *)*param_3;
  param_1[0x83] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x84] = param_3[1];
  param_1[0x85] = param_3[2];
  param_1[0x86] = param_3[3];
  plVar2 = (long *)param_3[4];
  param_1[0x87] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  lVar1 = param_3[5];
  *(undefined4 *)(param_1 + 0x89) = 1;
  *(int *)(param_1 + 0x88) = (int)lVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8a),false,0);
  return;
}


