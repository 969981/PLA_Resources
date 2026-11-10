/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00868398; name: FUN_00868398
 */


void FUN_00868398(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  lVar2 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x1378));
  lVar4 = *(long *)(param_1 + 0x698);
  lVar3 = *(long *)(param_1 + 0x690);
  if ((lVar4 != lVar3) && (*(long *)(param_1 + 8) != 0)) {
    FUN_006d56b8(*(long *)(param_1 + 8),param_1 + 0x690);
    lVar3 = *(long *)(param_1 + 0x690);
    lVar4 = *(long *)(param_1 + 0x698);
  }
  for (; lVar4 != lVar3; lVar4 = lVar4 + -0x48) {
    if ((*(byte *)(lVar4 + -0x28) & 1) == 0) {
      bVar1 = *(byte *)(lVar4 + -0x48);
    }
    else {
      (**(code **)(**(long **)(lVar4 + -0x10) + 0x18))
                (*(long **)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -0x18),
                 *(ulong *)(lVar4 + -0x28) & 0xfffffffffffffffe,1);
      bVar1 = *(byte *)(lVar4 + -0x48);
    }
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(lVar4 + -0x30) + 0x18))
                (*(long **)(lVar4 + -0x30),*(undefined8 *)(lVar4 + -0x38),
                 *(ulong *)(lVar4 + -0x48) & 0xfffffffffffffffe,1);
    }
  }
  *(long *)(param_1 + 0x698) = lVar3;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


