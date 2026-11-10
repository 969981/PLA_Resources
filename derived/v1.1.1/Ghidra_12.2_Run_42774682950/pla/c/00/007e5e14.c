/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5e14; name: FUN_007e5e14
 */


void FUN_007e5e14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04377458;
  lVar2 = *(long *)PTR_DAT_04377458;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x68));
  if (*(int *)(param_1 + 8) - 1U < 2) {
    FUN_007e8a48(*(undefined8 *)puVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x68));
  return;
}


