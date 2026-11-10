/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143dd0; name: FUN_01143dd0
 */


void FUN_01143dd0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  FUN_02a48e80(param_1,0x10000);
  *param_1 = &PTR_LAB_041f2908;
  param_1[9] = &PTR_LAB_041f2978;
  param_1[10] = &PTR_LAB_041f29c0;
  plVar2 = (long *)*param_2;
  param_1[0x82] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x83] = param_2[1];
  param_1[0x84] = param_2[2];
  param_1[0x85] = param_2[3];
  plVar2 = (long *)param_2[4];
  param_1[0x86] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  lVar1 = param_2[5];
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x88] = 1;
  *(int *)(param_1 + 0x87) = (int)lVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8a),false,0);
  return;
}


