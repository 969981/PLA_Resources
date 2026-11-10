/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7ea0; name: FUN_02ec7ea0
 */


void FUN_02ec7ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_042aa108;
  FUN_02ec7f60();
  puVar1 = param_1 + 0x1b;
  FUN_02eb04a0(puVar1);
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  if (param_1[8] != 0) {
    FUN_02f59e60(0);
  }
  FUN_02ec7fd0(param_1);
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (param_1 + 4 != (undefined8 *)param_1[5]) {
      FUN_02f59e70(4);
    }
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  param_1[0x1b] = &PTR_FUN_042a9648;
  (*(code *)PTR_FUN_042a9670)(puVar1);
  param_1[0x1b] = &PTR_LAB_042a9608;
  (*(code *)PTR_FUN_042a9630)(puVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x17));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x11));
  return;
}


