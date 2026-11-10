/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1b6ec; name: FUN_02c1b6ec
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_02c1b6ec(long param_1,int *param_2,uint param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  long *local_68;
  
  iVar20 = param_2[2];
  if (iVar20 == 0) {
    return 0;
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0xb8) + 0xe0);
  nn::os::LockMutex((MutexType *)(lVar15 + 0x68));
  lVar13 = *(long *)(lVar15 + 0x88);
  lVar3 = *(long *)(lVar15 + 0x90);
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x68));
  if ((ulong)(long)iVar20 < (ulong)((lVar3 - lVar13 >> 3) * 0x6db6db6db6db6db7)) {
    iVar19 = *param_2;
    iVar20 = param_2[1];
    uVar18 = *(undefined8 *)(param_2 + 2);
  }
  else {
    iVar19 = *param_2 >> 1;
    iVar20 = param_2[1] >> 1;
    uVar18 = CONCAT44(param_2[3],param_2[2] + -1);
  }
  iVar9 = 1;
  if ((int)param_3 >> 1 == 0) {
    iVar9 = -1;
  }
  iVar10 = 1;
  if ((param_3 & 1) == 0) {
    iVar10 = -1;
  }
  iVar10 = iVar19 + iVar10;
  uVar17 = (uint)uVar18;
  iVar4 = 1 << (ulong)(uVar17 & 0x1f);
  uVar14 = (uint)((ulong)uVar18 >> 0x20);
  if (iVar10 < 0) {
    iVar10 = iVar10 + iVar4;
    uVar11 = 0;
    if (((uVar14 | 1) < 10) && ((1 << (ulong)(uVar14 & 0x1f | 1) & 0x20aU) != 0)) {
      uVar11 = uVar14 | 1;
    }
LAB_02c1b7fc:
    iVar16 = iVar20;
  }
  else if (iVar20 < 0) {
    uVar5 = uVar14 | 8;
    uVar11 = 0;
    iVar16 = iVar4 + iVar20;
    if (uVar5 < 0xd) {
      uVar12 = 1 << (ulong)(uVar14 & 0x1f | 8) & 0x1300;
joined_r0x02c1b82c:
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar5;
      }
    }
  }
  else if (iVar10 < iVar4) {
    iVar16 = iVar20 - iVar4;
    uVar11 = uVar14;
    if (iVar20 < iVar4) goto LAB_02c1b7fc;
    uVar5 = uVar14 | 2;
    uVar11 = 0;
    if (uVar5 < 7) {
      uVar12 = 1 << (ulong)(uVar14 & 0x1f | 2) & 0x4c;
      goto joined_r0x02c1b82c;
    }
  }
  else {
    uVar11 = 0;
    if (((uVar14 | 4) < 0xd) && ((1 << (ulong)(uVar14 & 0x1f | 4) & 0x1050U) != 0)) {
      uVar11 = uVar14 | 4;
    }
    iVar10 = iVar10 - iVar4;
    iVar16 = iVar20;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + (long)(int)uVar11 * 0x10 + 0x140) == 0) {
    local_68 = (long *)0x0;
joined_r0x02c1b90c:
    uVar11 = 0;
joined_r0x02c1b90c:
    if (iVar19 < 0) goto LAB_02c1b9d4;
LAB_02c1b910:
    iVar20 = iVar20 + iVar9;
    if (-1 < iVar20) {
      if (iVar19 < iVar4) {
        uVar12 = uVar14;
        if (iVar4 <= iVar20) {
          uVar12 = 0;
          if (((uVar14 | 2) < 7) && ((1 << (ulong)(uVar14 & 0x1f | 2) & 0x4cU) != 0)) {
            uVar12 = uVar14 | 2;
          }
          iVar20 = iVar20 - iVar4;
        }
      }
      else {
        uVar12 = 0;
        if (((uVar14 | 4) < 0xd) && ((1 << (ulong)(uVar14 & 0x1f | 4) & 0x1050U) != 0)) {
          uVar12 = uVar14 | 4;
        }
        iVar19 = iVar19 - iVar4;
      }
      goto LAB_02c1ba84;
    }
    uVar5 = uVar14 | 8;
    iVar20 = iVar4 + iVar20;
    uVar12 = 0;
    if (0xc < uVar5) goto LAB_02c1ba84;
    uVar14 = 1 << (ulong)(uVar14 & 0x1f | 8) & 0x1300;
  }
  else {
    FUN_02c188ac(&local_68);
    plVar8 = local_68;
    if (local_68 == (long *)0x0) goto joined_r0x02c1b90c;
    pMVar1 = (MutexType *)(local_68 + 0xd);
    nn::os::LockMutex(pMVar1);
    lVar13 = plVar8[0x11];
    lVar3 = plVar8[0x12];
    nn::os::UnlockMutex(pMVar1);
    if (lVar3 == lVar13) {
      uVar11 = 0;
    }
    else {
      uVar11 = ~(uint)*(undefined8 *)
                       (*(long *)(local_68[0x11] + (long)(int)uVar17 * 0x38) +
                       (long)((iVar16 << (ulong)(uVar17 & 0x1f)) + iVar10) * 8) >> 0x1f;
    }
    if (local_68 != (long *)0x0) {
      lVar13 = local_68[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
      goto joined_r0x02c1b90c;
    }
    if (-1 < iVar19) goto LAB_02c1b910;
LAB_02c1b9d4:
    iVar20 = iVar20 + iVar9;
    uVar5 = uVar14 | 1;
    iVar19 = iVar4 + iVar19;
    uVar12 = 0;
    if (9 < uVar5) goto LAB_02c1ba84;
    uVar14 = 1 << (ulong)(uVar14 & 0x1f | 1) & 0x20a;
  }
  uVar12 = 0;
  if (uVar14 != 0) {
    uVar12 = uVar5;
  }
LAB_02c1ba84:
  if (*(long *)(*(long *)(param_1 + 0xb8) + (long)(int)uVar12 * 0x10 + 0x140) != 0) {
    FUN_02c188ac(&local_68);
    plVar8 = local_68;
    if (local_68 != (long *)0x0) {
      pMVar1 = (MutexType *)(local_68 + 0xd);
      nn::os::LockMutex(pMVar1);
      lVar13 = plVar8[0x11];
      lVar3 = plVar8[0x12];
      nn::os::UnlockMutex(pMVar1);
      if (lVar3 != lVar13) {
        if (-1 < (int)*(undefined8 *)
                       (*(long *)(local_68[0x11] + (long)(int)uVar17 * 0x38) +
                       (long)((iVar20 << (ulong)(uVar17 & 0x1f)) + iVar19) * 8)) {
          uVar11 = uVar11 | 2;
        }
      }
      if (local_68 != (long *)0x0) {
        lVar13 = local_68[0xb];
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          iVar20 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
  }
  if (uVar11 == 3) {
    return param_3 + 5;
  }
  if (uVar11 == 2) {
    return ((int)param_3 >> 1) + 3;
  }
  if (uVar11 == 1) {
    return (param_3 & 1) + 1;
  }
  return 0;
}


