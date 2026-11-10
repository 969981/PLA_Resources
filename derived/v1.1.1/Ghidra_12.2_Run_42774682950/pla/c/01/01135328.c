/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01135328; name: FUN_01135328
 */


void FUN_01135328(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f420));
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar4 & 1) != 0) ||
     ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) != 0))
  goto LAB_011353e0;
  iVar2 = FUN_02c6849c();
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
  if (iVar2 < 0x225) {
    if ((iVar2 == 0x3b) || (iVar2 == 0x65)) goto LAB_011353f4;
  }
  else if ((iVar2 == 0x225) || (iVar2 == 0x2c9)) {
LAB_011353f4:
    if (sVar1 == 2) goto LAB_011353e0;
  }
  else if ((iVar2 == 900) && (sVar1 == 1)) goto LAB_011353e0;
  *(long *)(param_1 + 0x1f440) = param_2;
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  FUN_01135404(param_1,uVar3);
LAB_011353e0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f420));
  return;
}


