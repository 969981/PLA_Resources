/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed46d8; name: FUN_02ed46d8
 */


void FUN_02ed46d8(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  pMVar1 = DAT_0440a120;
  if ((*(byte *)(param_1 + 0xac) & 2) != 0) {
    pMVar1 = DAT_0440a120 + 0x38;
  }
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(pMVar1 + 0x28);
  if ((uVar3 == 0) ||
     (fVar5 = (float)NEON_ucvtf(*(undefined4 *)(pMVar1 + 0x30)), 0.9 < fVar5 / (float)uVar3)) {
    FUN_02e87758(pMVar1 + 0x20);
    uVar3 = *(uint *)(pMVar1 + 0x28);
    if (uVar3 == 0) goto LAB_02ed4764;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) / uVar3;
  }
  lVar4 = (ulong)(*(uint *)(param_1 + 0x10) - uVar2 * uVar3) * 8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(pMVar1 + 0x20) + lVar4);
  *(long *)(*(long *)(pMVar1 + 0x20) + lVar4) = param_1;
  *(int *)(pMVar1 + 0x30) = *(int *)(pMVar1 + 0x30) + 1;
LAB_02ed4764:
  nn::os::UnlockMutex(pMVar1);
  return;
}


