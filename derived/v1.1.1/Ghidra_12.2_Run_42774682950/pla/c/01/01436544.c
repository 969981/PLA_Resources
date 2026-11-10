/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01436544; name: FUN_01436544
 */


void FUN_01436544(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_0420f998;
  param_1[9] = &PTR_LAB_0420fa98;
  param_1[10] = &PTR_LAB_0420fae0;
  FUN_014365a4(param_1 + 0x9b);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd1),false,0);
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((long)param_1 + 0x6aa) = 0;
  return;
}


