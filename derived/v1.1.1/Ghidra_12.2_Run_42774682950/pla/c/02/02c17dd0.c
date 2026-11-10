/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c17dd0; name: FUN_02c17dd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02c17dd0(long param_1,int *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  long *local_70;
  ulong uStack_68;
  
  puVar19 = (uint *)(param_2 + 3);
  if (*(long *)(param_1 + (long)(int)*puVar19 * 0x10 + 0x140) == 0) {
    return;
  }
  FUN_02c188ac(&local_70);
  plVar12 = local_70;
  if (local_70 == (long *)0x0) {
    return;
  }
  iVar15 = param_2[1];
  uVar18 = param_2[2];
  iVar4 = *param_2;
  pMVar1 = (MutexType *)(local_70 + 0xd);
  lVar20 = *(long *)(local_70[0x11] + (long)(int)uVar18 * 0x38);
  nn::os::LockMutex(pMVar1);
  lVar14 = plVar12[0x11];
  lVar3 = plVar12[0x12];
  nn::os::UnlockMutex(pMVar1);
  if (lVar3 == lVar14) {
LAB_02c17e88:
    bVar11 = true;
    if (local_70 == (long *)0x0) goto LAB_02c17eb0;
LAB_02c17e94:
    lVar14 = local_70[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 + -1 != 0) goto LAB_02c17eb0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))();
    if (bVar11) {
      return;
    }
  }
  else {
    lVar14 = (long)iVar4 + (long)(iVar15 << (ulong)(uVar18 & 0x1f));
    uVar16 = *(ulong *)(lVar20 + lVar14 * 8);
    if ((int)uVar16 < 0) goto LAB_02c17e88;
    bVar11 = false;
    *(ulong *)(lVar20 + lVar14 * 8) = uVar16 | 0x80000000;
    if (local_70 != (long *)0x0) goto LAB_02c17e94;
LAB_02c17eb0:
    if (bVar11) {
      return;
    }
  }
  iVar13 = *param_2;
  iVar15 = param_2[1];
  uVar18 = param_2[2];
  iVar4 = iVar13 + -1;
  iVar5 = 1 << (ulong)(uVar18 & 0x1f);
  iVar6 = iVar15;
  if (iVar13 < 1) {
    iVar4 = iVar5 + iVar4;
    uVar17 = *puVar19 | 1;
    uVar16 = 0;
    if (uVar17 < 10) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 1) & 0x20a;
joined_r0x02c17f34:
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = (ulong)uVar17;
      }
    }
  }
  else if (iVar15 < 0) {
    uVar17 = *puVar19 | 8;
    uVar16 = 0;
    iVar6 = iVar5 + iVar15;
    if ((uVar17 < 0xd) && ((1 << (ulong)(*puVar19 & 0x1f | 8) & 0x1300U) != 0)) {
      uVar16 = (ulong)uVar17;
    }
  }
  else if (iVar5 < iVar13) {
    iVar4 = iVar4 - iVar5;
    uVar17 = *puVar19 | 4;
    uVar16 = 0;
    if (uVar17 < 0xd) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 4) & 0x1050;
      goto joined_r0x02c17f34;
    }
  }
  else {
    iVar6 = iVar15 - iVar5;
    if (iVar15 < iVar5) {
      uVar16 = (ulong)*puVar19;
      iVar6 = iVar15;
    }
    else {
      uVar17 = *puVar19 | 2;
      uVar16 = 0;
      if ((uVar17 < 7) && ((1 << (ulong)(*puVar19 & 0x1f | 2) & 0x4cU) != 0)) {
        uVar16 = (ulong)uVar17;
      }
    }
  }
  uVar17 = 0;
  if (uVar18 != 0) {
    local_70 = (long *)CONCAT44(iVar6 >> 1,iVar4 >> 1);
    uStack_68 = (ulong)(uVar18 - 1) | uVar16 << 0x20;
    FUN_02c17dd0(param_1,&local_70);
    iVar13 = *param_2;
    iVar15 = param_2[1];
    uVar17 = param_2[2];
  }
  iVar4 = iVar15 + -1;
  iVar6 = 1 << (ulong)(uVar17 & 0x1f);
  if (iVar13 < 0) {
    iVar5 = iVar6 + iVar13;
    uVar18 = *puVar19 | 1;
    uVar16 = 0;
    if (uVar18 < 10) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 1) & 0x20a;
joined_r0x02c1806c:
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = (ulong)uVar18;
      }
    }
  }
  else if (iVar15 < 1) {
    uVar18 = *puVar19 | 8;
    uVar16 = 0;
    iVar4 = iVar6 + iVar4;
    iVar5 = iVar13;
    if (uVar18 < 0xd) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 8) & 0x1300;
joined_r0x02c1809c:
      uVar16 = 0;
      iVar5 = iVar13;
      if (uVar10 != 0) {
        uVar16 = (ulong)uVar18;
      }
    }
  }
  else {
    iVar5 = iVar13 - iVar6;
    if (iVar13 < iVar6) {
      if (iVar6 < iVar15) {
        uVar18 = *puVar19 | 2;
        uVar16 = 0;
        iVar4 = iVar4 - iVar6;
        iVar5 = iVar13;
        if (uVar18 < 7) {
          uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 2) & 0x4c;
          goto joined_r0x02c1809c;
        }
      }
      else {
        uVar16 = (ulong)*puVar19;
        iVar5 = iVar13;
      }
    }
    else {
      uVar18 = *puVar19 | 4;
      uVar16 = 0;
      if (uVar18 < 0xd) {
        uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 4) & 0x1050;
        goto joined_r0x02c1806c;
      }
    }
  }
  uVar18 = 0;
  if (uVar17 != 0) {
    local_70 = (long *)CONCAT44(iVar4 >> 1,iVar5 >> 1);
    uStack_68 = (ulong)(uVar17 - 1) | uVar16 << 0x20;
    FUN_02c17dd0(param_1,&local_70);
    iVar13 = *param_2;
    iVar15 = param_2[1];
    uVar18 = param_2[2];
  }
  iVar4 = iVar13 + 1;
  iVar5 = 1 << (ulong)(uVar18 & 0x1f);
  iVar6 = iVar15;
  if (iVar4 < 0) {
    iVar4 = iVar5 + iVar4;
    uVar17 = *puVar19 | 1;
    uVar16 = 0;
    if ((uVar17 < 10) && ((1 << (ulong)(*puVar19 & 0x1f | 1) & 0x20aU) != 0)) {
      uVar16 = (ulong)uVar17;
    }
  }
  else if (iVar15 < 0) {
    uVar17 = *puVar19 | 8;
    uVar16 = 0;
    iVar6 = iVar5 + iVar15;
    if ((uVar17 < 0xd) && ((1 << (ulong)(*puVar19 & 0x1f | 8) & 0x1300U) != 0)) {
      uVar16 = (ulong)uVar17;
    }
  }
  else {
    iVar9 = iVar4 - iVar5;
    if (iVar4 < iVar5) {
      iVar6 = iVar15 - iVar5;
      if (iVar15 < iVar5) {
        uVar16 = (ulong)*puVar19;
        iVar6 = iVar15;
      }
      else {
        uVar17 = *puVar19 | 2;
        uVar16 = 0;
        if ((uVar17 < 7) && ((1 << (ulong)(*puVar19 & 0x1f | 2) & 0x4cU) != 0)) {
          uVar16 = (ulong)uVar17;
        }
      }
    }
    else {
      uVar17 = *puVar19 | 4;
      uVar16 = 0;
      iVar4 = iVar9;
      if ((uVar17 < 0xd) && ((1 << (ulong)(*puVar19 & 0x1f | 4) & 0x1050U) != 0)) {
        uVar16 = (ulong)uVar17;
      }
    }
  }
  uVar17 = 0;
  if (uVar18 != 0) {
    local_70 = (long *)CONCAT44(iVar6 >> 1,iVar4 >> 1);
    uStack_68 = (ulong)(uVar18 - 1) | uVar16 << 0x20;
    FUN_02c17dd0(param_1,&local_70);
    iVar13 = *param_2;
    iVar15 = param_2[1];
    uVar17 = param_2[2];
  }
  iVar15 = iVar15 + 1;
  iVar4 = 1 << (ulong)(uVar17 & 0x1f);
  if (iVar13 < 0) {
    uVar18 = *puVar19 | 1;
    iVar13 = iVar4 + iVar13;
    if (uVar18 < 10) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 1) & 0x20a;
joined_r0x02c182a4:
      if (uVar10 != 0) goto joined_r0x02c182dc;
    }
  }
  else {
    if (-1 < iVar15) {
      iVar6 = iVar13 - iVar4;
      if (iVar4 <= iVar13) {
        uVar18 = *puVar19 | 4;
        uVar16 = 0;
        if ((uVar18 < 0xd) && ((1 << (ulong)(*puVar19 & 0x1f | 4) & 0x1050U) != 0)) {
          uVar16 = (ulong)uVar18;
        }
        goto joined_r0x02c18314;
      }
      iVar6 = iVar15 - iVar4;
      if (iVar4 <= iVar15) {
        uVar18 = *puVar19 | 2;
        uVar16 = 0;
        iVar15 = iVar6;
        iVar6 = iVar13;
        if (6 < uVar18) goto joined_r0x02c18314;
        if ((1 << (ulong)(*puVar19 & 0x1f | 2) & 0x4cU) != 0) {
          uVar16 = (ulong)uVar18;
          goto joined_r0x02c18314;
        }
        goto LAB_02c18370;
      }
      uVar18 = *puVar19;
joined_r0x02c182dc:
      uVar16 = (ulong)uVar18;
      iVar6 = iVar13;
      goto joined_r0x02c18314;
    }
    uVar18 = *puVar19 | 8;
    iVar15 = iVar4 + iVar15;
    if (uVar18 < 0xd) {
      uVar10 = 1 << (ulong)(*puVar19 & 0x1f | 8) & 0x1300;
      goto joined_r0x02c182a4;
    }
  }
LAB_02c18370:
  uVar16 = 0;
  iVar6 = iVar13;
joined_r0x02c18314:
  if (uVar17 != 0) {
    local_70 = (long *)CONCAT44(iVar15 >> 1,iVar6 >> 1);
    uStack_68 = (ulong)(uVar17 - 1) | uVar16 << 0x20;
    FUN_02c17dd0(param_1,&local_70);
  }
  return;
}


