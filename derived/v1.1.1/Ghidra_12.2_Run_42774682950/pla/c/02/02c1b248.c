/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1b248; name: FUN_02c1b248
 */


void FUN_02c1b248(long param_1,ulong *param_2,undefined4 param_3)

{
  ulong uVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  ulong local_70;
  ulong uStack_68;
  long *local_58;
  
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x140) == 0) {
    return;
  }
  FUN_02c188ac(&local_58);
  plVar9 = local_58;
  if (local_58 == (long *)0x0) {
    return;
  }
  uVar4 = *(uint *)((long)param_2 + 4);
  uVar5 = (uint)param_2[1];
  iVar11 = (int)*param_2;
  uVar13 = (uint)*(undefined8 *)
                  (*(long *)(local_58[0x11] + (long)(int)uVar5 * 0x38) +
                  (long)(int)((uVar4 << (ulong)(uVar5 & 0x1f)) + iVar11) * 8);
  if ((uVar13 >> 0x1e & 1) == 0) {
    if ((int)uVar13 < 0) {
      uVar1 = (long)(int)uVar5 + 1;
      uStack_68 = uVar1 & 0xffffffff;
      local_70 = (ulong)(uint)(iVar11 << 1) | (ulong)uVar4 << 0x21;
      pMVar2 = (MutexType *)(local_58 + 0xd);
      nn::os::LockMutex(pMVar2);
      lVar12 = plVar9[0x11];
      lVar14 = plVar9[0x12];
      nn::os::UnlockMutex(pMVar2);
      if (uVar1 < (ulong)((lVar14 - lVar12 >> 3) * 0x6db6db6db6db6db7)) {
        FUN_02c1b248(param_1,&local_70,0);
      }
      else {
        fVar15 = 1.0 / (float)(1 << (ulong)((uint)uVar1 & 0x1f));
        iVar10 = FUN_02c1b6ec(param_1,&local_70,0);
        lVar12 = param_1 + (long)iVar10 * 4;
        uVar5 = *(uint *)(lVar12 + 0x90);
        lVar14 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar10 * 8);
        FUN_02bc0574(lVar14);
        puVar8 = (undefined8 *)(*(long *)(lVar14 + 0xa8) + (ulong)uVar5 * 0x10);
        puVar8[1] = CONCAT44(-(fVar15 * (float)(int)(uVar4 << 1)),fVar15 * (float)(iVar11 << 1));
        *puVar8 = CONCAT44(fVar15,fVar15);
        *(int *)(lVar12 + 0x90) = *(int *)(lVar12 + 0x90) + 1;
      }
      plVar9 = local_58;
      uVar5 = *(uint *)((long)param_2 + 4);
      uVar4 = (int)*param_2 << 1 | 1;
      pMVar2 = (MutexType *)(local_58 + 0xd);
      uVar1 = (long)(int)param_2[1] + 1;
      local_70 = (ulong)uVar4 | (ulong)uVar5 << 0x21;
      uStack_68 = uVar1 & 0xffffffff;
      nn::os::LockMutex(pMVar2);
      lVar12 = plVar9[0x11];
      lVar14 = plVar9[0x12];
      nn::os::UnlockMutex(pMVar2);
      if (uVar1 < (ulong)((lVar14 - lVar12 >> 3) * 0x6db6db6db6db6db7)) {
        FUN_02c1b248(param_1,&local_70,1);
      }
      else {
        fVar15 = 1.0 / (float)(1 << (ulong)((uint)uVar1 & 0x1f));
        iVar11 = FUN_02c1b6ec(param_1,&local_70,1);
        lVar12 = param_1 + (long)iVar11 * 4;
        uVar13 = *(uint *)(lVar12 + 0x90);
        lVar14 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar11 * 8);
        FUN_02bc0574(lVar14);
        puVar8 = (undefined8 *)(*(long *)(lVar14 + 0xa8) + (ulong)uVar13 * 0x10);
        puVar8[1] = CONCAT44(-(fVar15 * (float)(int)(uVar5 << 1)),fVar15 * (float)(int)uVar4);
        *puVar8 = CONCAT44(fVar15,fVar15);
        *(int *)(lVar12 + 0x90) = *(int *)(lVar12 + 0x90) + 1;
      }
      plVar9 = local_58;
      iVar11 = (int)*param_2 << 1;
      uVar4 = *(int *)((long)param_2 + 4) << 1;
      pMVar2 = (MutexType *)(local_58 + 0xd);
      uVar1 = (long)(int)param_2[1] + 1;
      local_70 = CONCAT44(uVar4,iVar11) | 0x100000000;
      uStack_68 = uVar1 & 0xffffffff;
      nn::os::LockMutex(pMVar2);
      lVar12 = plVar9[0x11];
      lVar14 = plVar9[0x12];
      nn::os::UnlockMutex(pMVar2);
      if (uVar1 < (ulong)((lVar14 - lVar12 >> 3) * 0x6db6db6db6db6db7)) {
        FUN_02c1b248(param_1,&local_70,2);
      }
      else {
        fVar15 = 1.0 / (float)(1 << (ulong)((uint)uVar1 & 0x1f));
        iVar10 = FUN_02c1b6ec(param_1,&local_70,2);
        lVar12 = param_1 + (long)iVar10 * 4;
        uVar5 = *(uint *)(lVar12 + 0x90);
        lVar14 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar10 * 8);
        FUN_02bc0574(lVar14);
        puVar8 = (undefined8 *)(*(long *)(lVar14 + 0xa8) + (ulong)uVar5 * 0x10);
        puVar8[1] = CONCAT44(-(fVar15 * (float)(int)(uVar4 | 1)),fVar15 * (float)iVar11);
        *puVar8 = CONCAT44(fVar15,fVar15);
        *(int *)(lVar12 + 0x90) = *(int *)(lVar12 + 0x90) + 1;
      }
      plVar9 = local_58;
      uVar4 = (int)*param_2 << 1;
      uVar5 = *(int *)((long)param_2 + 4) << 1;
      uVar1 = (long)(int)param_2[1] + 1;
      local_70 = CONCAT44(uVar5,uVar4) | 0x100000001;
      pMVar2 = (MutexType *)(local_58 + 0xd);
      uStack_68 = uVar1 & 0xffffffff;
      nn::os::LockMutex(pMVar2);
      lVar12 = plVar9[0x11];
      lVar14 = plVar9[0x12];
      nn::os::UnlockMutex(pMVar2);
      if (uVar1 < (ulong)((lVar14 - lVar12 >> 3) * 0x6db6db6db6db6db7)) {
        FUN_02c1b248(param_1,&local_70,3);
        goto joined_r0x02c1b698;
      }
      fVar15 = 1.0 / (float)(1 << (ulong)((uint)uVar1 & 0x1f));
      param_2 = &local_70;
      param_3 = 3;
      uVar16 = CONCAT44(-(fVar15 * (float)(int)(uVar5 | 1)),fVar15 * (float)(int)(uVar4 | 1));
    }
    else {
      fVar15 = 1.0 / (float)(1 << (ulong)(uVar5 & 0x1f));
      uVar16 = CONCAT44(-(fVar15 * (float)(int)uVar4),fVar15 * (float)iVar11);
    }
    iVar11 = FUN_02c1b6ec(param_1,param_2,param_3);
    lVar12 = param_1 + (long)iVar11 * 4;
    uVar4 = *(uint *)(lVar12 + 0x90);
    lVar14 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar11 * 8);
    FUN_02bc0574(lVar14);
    puVar8 = (undefined8 *)(*(long *)(lVar14 + 0xa8) + (ulong)uVar4 * 0x10);
    puVar8[1] = uVar16;
    *puVar8 = CONCAT44(fVar15,fVar15);
    *(int *)(lVar12 + 0x90) = *(int *)(lVar12 + 0x90) + 1;
  }
joined_r0x02c1b698:
  if (local_58 != (long *)0x0) {
    lVar12 = local_58[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


