/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede24c; name: FUN_02ede24c
 */


void FUN_02ede24c(undefined8 *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar3 = (uint *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = puVar3;
  if (uVar1 == 0) {
LAB_02ede284:
    if (puVar4 != puVar3 + (ulong)uVar1 * 10) goto LAB_02ede294;
  }
  else {
    lVar5 = (ulong)uVar1 * 0x28;
    do {
      if ((*puVar4 == param_2) && (*(ulong *)(puVar4 + 2) == param_3)) goto LAB_02ede284;
      lVar5 = lVar5 + -0x28;
      puVar4 = puVar4 + 10;
    } while (lVar5 != 0);
  }
  puVar2 = (ulong *)FUN_02ede308(param_1);
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = (ulong)param_2;
    puVar2[1] = param_3;
    puVar2[3] = 0x3f800000ffffffff;
    puVar2[4] = 0x1ffffffff;
  }
LAB_02ede294:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


