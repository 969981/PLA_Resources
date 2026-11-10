/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7bb0; name: FUN_007f7bb0
 */


void FUN_007f7bb0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x20);
  iVar1 = FUN_007f21a8();
  iVar2 = FUN_007f2110(*(undefined8 *)(param_1 + 0x218));
  FUN_007fd760(param_2,uVar3,iVar2 + iVar1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


