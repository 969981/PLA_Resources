/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d1898; name: FUN_032d1898
 */


int FUN_032d1898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *local_1c8;
  long local_1c0;
  int local_1b8;
  long alStack_1a0 [42];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    iVar2 = -0x7ffbfe00;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x10));
    FUN_032c4a00(alStack_1a0,param_1 + 0x210,*(int *)(param_1 + 0x358) << 3);
    iVar2 = *(int *)(param_1 + 0x358);
    alStack_1a0[iVar2] = param_1 + 0x58;
    FUN_032d19e0(&local_1c8,PTR_PTR_0434a400,alStack_1a0,iVar2 + 1,param_2,param_3);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))
                      (*(long **)(param_1 + 0x48),&LAB_032d1b30,&local_1c8);
    if (local_1c0 != 0) {
      (**(code **)(*local_1c8 + 0x18))(local_1c8,local_1c0,(long)local_1b8 << 3);
    }
    if (-1 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x358);
      if (0 < iVar2) {
        uVar3 = 0;
        do {
          lVar1 = uVar3 * 8;
          uVar3 = uVar3 + 1;
          FUN_032cd9dc(*(undefined8 *)(param_1 + 0x210 + lVar1),param_2,uVar3 & 0xffffffff,param_3);
          iVar2 = *(int *)(param_1 + 0x358);
        } while ((long)uVar3 < (long)iVar2);
      }
      FUN_032cd9dc(param_1 + 0x58,param_2,iVar2 + 1,param_3);
      iVar2 = 0;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  }
  return iVar2;
}


