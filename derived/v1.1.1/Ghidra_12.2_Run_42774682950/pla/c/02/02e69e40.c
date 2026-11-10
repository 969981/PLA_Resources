/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69e40; name: FUN_02e69e40
 */


void FUN_02e69e40(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_042a64b8;
  param_1[0xe] = &PTR_LAB_042a6590;
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    lVar1 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar1 + 0x1e8));
    *(int *)(lVar1 + 0x210) = *(int *)(lVar1 + 0x210) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x1e8));
  }
  *param_1 = &PTR_LAB_042a6438;
  if (*(char *)((long)param_1 + 0x69) != '\0') {
    (**(code **)(**(long **)(param_1[10] + 0x610) + 0x10))
              (*(long **)(param_1[10] + 0x610),param_1[4]);
  }
  if (param_1[3] != 0) {
    FUN_02e657bc();
    param_1[3] = 0;
  }
  if (param_1[0xb] == 0) {
    lVar1 = param_1[4];
  }
  else {
    (*DAT_0442d150)(7);
    lVar1 = param_1[4];
  }
  if (lVar1 != 0) {
    (*DAT_0442d150)(7);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  *param_1 = &PTR_LAB_042a6f90;
  return;
}


