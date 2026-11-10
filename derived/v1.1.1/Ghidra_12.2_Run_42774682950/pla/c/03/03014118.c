/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014118; name: FUN_03014118
 */


uint FUN_03014118(long param_1,char *param_2)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  ulong *puVar3;
  float *pfVar4;
  MutexType *pMVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  
  pMVar5 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar5);
  lVar9 = *(long *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_03014284:
    uVar6 = 0xffff;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x6c) + 1;
    if (*(float *)(lVar9 + 0x28) < 0.0) {
      uVar8 = 0;
      uVar6 = 0xffff;
      pfVar4 = (float *)(lVar9 + 0x78);
      do {
        uVar8 = uVar8 + 1;
        if (uVar1 <= uVar8) goto LAB_03014230;
        fVar10 = *pfVar4;
        pfVar4 = pfVar4 + 0x14;
      } while (fVar10 < 0.0);
      if ((int)uVar8 == -1) goto LAB_03014284;
    }
    else {
      uVar8 = 0;
    }
    uVar7 = (uint)uVar8;
    if (param_2 == (char *)0x0) {
      if (1 < *(ulong *)(lVar9 + (uVar8 & 0xffffffff) * 0x50)) {
        uVar7 = uVar7 + 1;
        uVar8 = (ulong)uVar7;
        puVar3 = (ulong *)(lVar9 + uVar8 * 0x50);
        uVar6 = 0xffff;
        while (uVar7 < uVar1) {
          uVar7 = (uint)uVar8;
          if ((0.0 <= *(float *)(puVar3 + 5)) && (*puVar3 < 2)) goto LAB_0301422c;
          uVar7 = uVar7 + 1;
          uVar8 = (ulong)uVar7;
          puVar3 = puVar3 + 10;
        }
        goto LAB_03014230;
      }
    }
    else {
      uVar6 = 0xffff;
      while( true ) {
        uVar7 = (uint)uVar8;
        __s1 = (char *)(*(ulong *)(lVar9 + (uVar8 & 0xffffffff) * 0x50) & 0xfffffffffffffffe);
        iVar2 = -(uint)(param_2 != (char *)0x0);
        if (__s1 != (char *)0x0) {
          iVar2 = strcmp(__s1,param_2);
        }
        if (iVar2 == 0) break;
        pfVar4 = (float *)(lVar9 + 0x28 + (ulong)(uVar7 + 1) * 0x50);
        do {
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar7;
          if (uVar1 <= uVar7) goto LAB_03014230;
          fVar10 = *pfVar4;
          pfVar4 = pfVar4 + 0x14;
        } while (fVar10 < 0.0);
      }
    }
LAB_0301422c:
    uVar6 = uVar7 & 0xffff;
  }
LAB_03014230:
  nn::os::UnlockMutex(pMVar5);
  return uVar6;
}


