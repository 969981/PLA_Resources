/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011486f8; name: FUN_011486f8
 */


void FUN_011486f8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 local_24 [4];
  
  iVar1 = FUN_01148628();
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  lVar2 = *(long *)(param_1 + 0x160);
  if (lVar2 != 0) {
    if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
      local_24[0] = iVar1 == 2;
      (**(code **)(param_1 + 0x1a0))(param_1 + 0x1c0,local_24);
      lVar2 = *(long *)(param_1 + 0x160);
    }
    FUN_0114fb7c(lVar2);
    lVar2 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (lVar2 != 0) {
      FUN_0114e450(param_1 + 0x168);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return;
}


