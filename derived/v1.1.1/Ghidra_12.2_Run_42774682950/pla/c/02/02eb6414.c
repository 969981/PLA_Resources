/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb6414; name: FUN_02eb6414
 */


void FUN_02eb6414(MutexType *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  nn::os::LockMutex(param_1);
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 == 0) ||
     (fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x30)), 0.9 < fVar4 / (float)uVar2)) {
    FUN_02e87758(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 == 0) goto LAB_02eb6488;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x10) / uVar2;
  }
  lVar3 = (ulong)(*(uint *)(param_2 + 0x10) - uVar1 * uVar2) * 8;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(long *)(*(long *)(param_1 + 0x20) + lVar3) = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_02eb6488:
  nn::os::UnlockMutex(param_1);
  return;
}


