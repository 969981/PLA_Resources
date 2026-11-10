/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143fdc; name: FUN_01143fdc
 */


void FUN_01143fdc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_02a48e80(param_1,0x10000);
  *param_1 = &PTR_LAB_041f29e8;
  param_1[9] = &PTR_LAB_041f2a58;
  param_1[10] = &PTR_LAB_041f2aa0;
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
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(int *)(param_1 + 0x87) = (int)lVar1;
  *(undefined8 *)((long)param_1 + 0x444) = *param_3;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8a),false,0);
  return;
}


