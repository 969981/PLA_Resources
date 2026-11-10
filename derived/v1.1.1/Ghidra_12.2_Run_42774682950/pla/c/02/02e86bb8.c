/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86bb8; name: FUN_02e86bb8
 */


void FUN_02e86bb8(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  lVar3 = DAT_0440a120;
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xe0);
  nn::os::LockMutex(pMVar1);
  uVar4 = *(uint *)(lVar3 + 0x108);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x110)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_02e87758(lVar3 + 0x100);
    uVar4 = *(uint *)(lVar3 + 0x108);
    if (uVar4 == 0) goto LAB_02e86c54;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) / uVar4;
  }
  lVar5 = (ulong)(*(uint *)(param_1 + 0x10) - uVar2 * uVar4) * 8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(lVar3 + 0x100) + lVar5);
  *(long *)(*(long *)(lVar3 + 0x100) + lVar5) = param_1;
  *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + 1;
LAB_02e86c54:
  nn::os::UnlockMutex(pMVar1);
  return;
}


