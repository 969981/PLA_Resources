/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302ed38; name: FUN_0302ed38
 */


/* WARNING: Removing unreachable block (ram,0x0302ee50) */
/* WARNING: Removing unreachable block (ram,0x0302f024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0302ed38(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  MutexType *pMVar16;
  long lVar17;
  uint *puVar18;
  float fVar19;
  
  uVar11 = *(uint *)(param_2 + 0x50);
  uVar9 = (ulong)uVar11;
  uVar2 = *(uint *)(param_2 + 0x80);
  uVar15 = (ulong)uVar2;
  lVar17 = *(long *)(param_1 + 0x150);
  if ((((*(byte *)(param_2 + 0x54) & 9) == 0) && ((*(byte *)(param_2 + 0x88) & 1) != 0)) &&
     (*(long *)(param_1 + 0x698) != 0)) {
    FUN_03058c80(*(long *)(param_1 + 0x698),uVar9,1);
  }
  uVar3 = *(uint *)(param_2 + 0x84);
  if (uVar3 != uVar11) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      lVar13 = *(long *)(param_1 + 0x38);
      uVar2 = uVar3;
      do {
        uVar12 = uVar2;
        uVar14 = (ulong)(uVar12 & 0xffffff);
        uVar2 = *(uint *)(lVar13 + uVar14 * 0xc0 + 0x84);
      } while (uVar2 != uVar11);
    }
    else {
      uVar12 = *(uint *)(*(long *)(param_1 + 0x70) + (uVar9 & 0xffffff) * 4);
      lVar13 = *(long *)(param_1 + 0x38);
      uVar14 = (ulong)(uVar12 & 0xffffff);
    }
    if (lVar13 + uVar14 * 0xc0 == param_2) {
      uVar12 = 0xffffff;
    }
    else {
      if (*(char *)(param_1 + 0x68) != '\0') {
        *(undefined4 *)(*(long *)(param_1 + 0x70) + ((ulong)uVar3 & 0xffffff) * 4) =
             *(undefined4 *)(lVar13 + uVar14 * 0xc0 + 0x50);
      }
      *(uint *)(lVar13 + uVar14 * 0xc0 + 0x84) = uVar3;
    }
    lVar17 = lVar17 + uVar15 * 0x80;
    *(uint *)(lVar17 + 0x48) = uVar12;
    *(uint *)(param_2 + 0x84) = uVar11;
    if (*(char *)(param_1 + 0x68) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x70) + (uVar9 & 0xffffff) * 4) = 0xffffff;
    }
    lVar13 = *(long *)(param_1 + 0x38) + ((ulong)*(uint *)(lVar17 + 0x48) & 0xffffff) * 0xc0;
    fVar19 = *(float *)(lVar13 + 0x3c);
    if (*(float *)(lVar13 + 0x3c) <= 0.0) {
      fVar19 = 0.0;
    }
    while (*(uint *)(lVar13 + 0x84) != *(uint *)(lVar17 + 0x48)) {
      lVar13 = *(long *)(param_1 + 0x38) + (ulong)(*(uint *)(lVar13 + 0x84) & 0xffffff) * 0xc0;
      if (fVar19 <= *(float *)(lVar13 + 0x3c)) {
        fVar19 = *(float *)(lVar13 + 0x3c);
      }
    }
    *(short *)(lVar17 + 0x5a) = (short)((uint)(fVar19 * 1.0039062) >> 0x10);
    iVar4 = *(int *)(param_2 + 0x80);
    if ((iVar4 != 0) && (*(long *)(param_1 + 0x698) != 0)) {
      lVar17 = *(long *)(param_1 + 0x150) + (long)iVar4 * 0x80;
      uVar11 = *(uint *)(lVar17 + 0x48);
      do {
        if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)(uVar11 & 0xffffff) * 0xc0 + 0x88) & 1) !=
            0) goto LAB_0302ee74;
        uVar11 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)(uVar11 & 0xffffff) * 0xc0 + 0x84);
      } while (uVar11 != *(uint *)(lVar17 + 0x48));
      puVar18 = (uint *)(lVar17 + 0x4c);
      if (*puVar18 == 0x7fffffff) {
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) + (long)iVar4 * 0x20 + 0x10) =
             0xffffffff;
      }
      else {
        uVar9 = (ulong)*(byte *)(lVar17 + 0x5e);
        pMVar16 = *(MutexType **)(param_1 + 0x480);
        nn::os::LockMutex(pMVar16);
        uVar11 = *puVar18;
        piVar10 = (int *)(param_1 + uVar9 * 0x18 + 0x188);
        if (uVar11 < (uint)((long)*piVar10 + -1)) {
          lVar13 = param_1 + uVar9 * 0x18;
          iVar4 = *(int *)(*(long *)(lVar13 + 0x180) + ((long)*piVar10 + -1) * 4);
          *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar4 * 0x80 + 0x4c) = uVar11;
          *(int *)(*(long *)(lVar13 + 0x180) + (long)(int)uVar11 * 4) = iVar4;
        }
        *(byte *)(lVar17 + 0x5e) = 0xff;
        *puVar18 = 0x7fffffff;
        *piVar10 = *piVar10 + -1;
        nn::os::UnlockMutex(pMVar16);
      }
    }
    goto LAB_0302ee74;
  }
  FUN_0302f120(param_1 + 0x710,param_1,uVar15);
  *(undefined4 *)(lVar17 + uVar15 * 0x80 + 0x48) = 0xffffff;
  uVar8 = _UNK_0388a138;
  uVar7 = _DAT_0388a130;
  if (*(int *)(param_1 + 0x158) <= (int)uVar2) goto LAB_0302ee74;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x150) + (long)(int)uVar2 * 0x80);
  if (*(char *)((long)puVar1 + 0x5f) == '\0') goto LAB_0302ee74;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)((long)puVar1 + 0x5e) = 0xff;
  puVar18 = (uint *)(param_1 + 0x16c);
  *(undefined2 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(char *)((long)puVar1 + 0x5f) = '\0';
  *(undefined4 *)((long)puVar1 + 0x4c) = 0x7fffffff;
  uVar3 = *(uint *)(param_1 + 0x16c);
  uVar11 = uVar3 & 0xffffff;
  if (uVar11 == 0xffffff) {
    uVar11 = 0xffffffff;
  }
  lVar17 = (long)(int)uVar2 * 0x80;
  *(uint *)(*(long *)(param_1 + 0x150) + lVar17) = uVar11;
  uVar11 = *puVar18;
  if (uVar11 == uVar3) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar18,0x10);
    if (bVar6) {
      *puVar18 = uVar3 & 0xff000000 | uVar2 & 0xffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0302ee58;
  }
  else {
    ClearExclusiveLocal();
LAB_0302ee58:
    do {
      while( true ) {
        uVar3 = 0xffffffff;
        if ((uVar11 & 0xffffff) != 0xffffff) {
          uVar3 = uVar11 & 0xffffff;
        }
        *(uint *)(*(long *)(param_1 + 0x150) + lVar17) = uVar3;
        uVar3 = *puVar18;
        if (uVar3 == uVar11) break;
        ClearExclusiveLocal();
        uVar11 = uVar3;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar18,0x10);
      if (bVar6) {
        *puVar18 = uVar11 & 0xff000000 | uVar2 & 0xffffff;
        cVar5 = ExclusiveMonitorsStatus();
      }
      uVar11 = uVar3;
    } while (cVar5 != '\0');
  }
  piVar10 = (int *)(param_1 + 0x170);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar6) {
      *piVar10 = *piVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0302ee74:
  *(undefined4 *)(param_2 + 0x80) = 0x7fffffff;
  return;
}


