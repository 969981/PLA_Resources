/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117a52c; name: FUN_0117a52c
 */


void FUN_0117a52c(long param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long *local_90;
  long *local_88;
  long *local_58;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar17 = *(long **)(lVar13 + 0x288);
  if (plVar17 != (long *)0x0) {
    lVar13 = plVar17[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  fVar22 = (float)FUN_0115e11c(*(undefined8 *)(param_1 + 0x5b0),0);
  fVar23 = (float)FUN_0115e11c(*(undefined8 *)(param_1 + 0x5b0),1);
  fVar24 = (float)FUN_0115e11c(*(undefined8 *)(param_1 + 0x5b0),2);
  fVar25 = (float)FUN_0115e11c(*(undefined8 *)(param_1 + 0x5b0),3);
  fVar26 = (float)FUN_0115e11c(*(undefined8 *)(param_1 + 0x5b0),4);
  uVar16 = *(uint *)(param_1 + 0x618);
  iVar9 = 0;
  iVar21 = 0;
  iVar20 = 0;
  iVar19 = 0;
  iVar18 = 0;
  piVar2 = (int *)(param_1 + (ulong)uVar16 * 0xc + 0x5cc);
  lVar13 = 1000;
  uVar4 = *(uint *)(plVar17 + 0xd);
  puVar14 = (uint *)(plVar17 + 0x10);
  while (uVar4 != 0) {
    uVar4 = *puVar14;
    fVar27 = 1.0;
    if ((uVar4 & 0x80) != 0) {
      fVar27 = fVar25;
    }
    fVar28 = (float)NEON_ucvtf((uint)(byte)puVar14[-3]);
    fVar27 = fVar26 * fVar28 + fVar27 * ((fVar22 + fVar23 * (float)(uVar4 & 0x7f)) / fVar24);
    if (9999.0 < fVar27) {
      fVar27 = 9999.0;
    }
    iVar18 = iVar18 + ((uVar4 & 0x80) >> 7);
    fVar28 = (float)NEON_ucvtf(*piVar2);
    *piVar2 = (int)(fVar27 + fVar28);
    *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
    uVar4 = *puVar14;
    iVar21 = ((uVar4 >> 9 ^ 0xffffffff) & 1) + iVar21;
    iVar20 = (uVar4 >> 8 & 1) + iVar20;
    uVar5 = puVar14[-6];
    iVar19 = (uVar4 >> 10 & 1) + iVar19;
    uVar4 = uVar5 + 0x1f;
    if (-1 < (int)uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = 1 << (ulong)(uVar5 & 0x1f);
    lVar1 = param_1 + (long)((int)uVar4 >> 5) * 4;
    uVar4 = *(uint *)(lVar1 + 0x61c);
    if ((uVar5 & uVar4) == 0) {
      *(uint *)(lVar1 + 0x61c) = uVar5 | uVar4;
      iVar9 = iVar9 + 1;
    }
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    uVar4 = puVar14[1];
    puVar14 = puVar14 + 7;
  }
  uVar4 = *(uint *)(param_1 + 0x5b8);
  if (uVar4 != 0) {
    lVar13 = param_1 + (ulong)uVar16 * 0xc;
    *(undefined4 *)(lVar13 + 0x5c4) = 9;
    uVar16 = uVar4;
    if (0x3e6 < uVar4) {
      uVar16 = 999;
    }
    *(uint *)(lVar13 + 0x5c8) = uVar16;
    uVar16 = *(int *)(param_1 + 0x618) + 1;
    *(uint *)(param_1 + 0x618) = uVar16;
    if (uVar4 < 0x1e) {
      if (uVar4 < 0x14) {
        if (uVar4 < 10) goto joined_r0x0117a7d4;
        *(undefined4 *)(param_1 + 0x5c4 + (ulong)uVar16 * 0xc) = 0;
        uVar11 = *(undefined8 *)(param_1 + 0x5b0);
        uVar12 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c4 + (ulong)uVar16 * 0xc) = 1;
        uVar11 = *(undefined8 *)(param_1 + 0x5b0);
        uVar12 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5c4 + (ulong)uVar16 * 0xc) = 2;
      uVar11 = *(undefined8 *)(param_1 + 0x5b0);
      uVar12 = 2;
    }
    uVar10 = FUN_0115e0bc(uVar11,uVar12);
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 0x5cc) = uVar10;
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
  }
joined_r0x0117a7d4:
  if (1 < iVar9) {
    lVar13 = param_1 + 0x5c4;
    *(undefined4 *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc) = 3;
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4) = iVar9;
    puVar14 = (uint *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4);
    if (999 < *puVar14) {
      *puVar14 = 999;
    }
    iVar8 = FUN_0115e0bc(*(undefined8 *)(param_1 + 0x5b0),3);
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 8) = iVar8 * iVar9;
    uVar16 = *(uint *)(param_1 + 0x618);
    puVar14 = (uint *)(lVar13 + (ulong)uVar16 * 0xc + 8);
    if (0x270 < *puVar14 >> 4) {
      *puVar14 = 9999;
      uVar16 = *(uint *)(param_1 + 0x618);
    }
    *(uint *)(param_1 + 0x618) = uVar16 + 1;
  }
  if (iVar21 != 0) {
    lVar13 = param_1 + 0x5c4;
    *(undefined4 *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc) = 4;
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4) = iVar21;
    puVar14 = (uint *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4);
    if (999 < *puVar14) {
      *puVar14 = 999;
    }
    iVar9 = FUN_0115e0bc(*(undefined8 *)(param_1 + 0x5b0),4);
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 8) = iVar9 * iVar21;
    uVar16 = *(uint *)(param_1 + 0x618);
    puVar14 = (uint *)(lVar13 + (ulong)uVar16 * 0xc + 8);
    if (0x270 < *puVar14 >> 4) {
      *puVar14 = 9999;
      uVar16 = *(uint *)(param_1 + 0x618);
    }
    *(uint *)(param_1 + 0x618) = uVar16 + 1;
  }
  if (iVar20 != 0) {
    lVar13 = param_1 + 0x5c4;
    *(undefined4 *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc) = 5;
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4) = iVar20;
    puVar14 = (uint *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4);
    if (999 < *puVar14) {
      *puVar14 = 999;
    }
    iVar9 = FUN_0115e0bc(*(undefined8 *)(param_1 + 0x5b0),5);
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 8) = iVar9 * iVar20;
    uVar16 = *(uint *)(param_1 + 0x618);
    puVar14 = (uint *)(lVar13 + (ulong)uVar16 * 0xc + 8);
    if (0x270 < *puVar14 >> 4) {
      *puVar14 = 9999;
      uVar16 = *(uint *)(param_1 + 0x618);
    }
    *(uint *)(param_1 + 0x618) = uVar16 + 1;
  }
  if (iVar19 != 0) {
    lVar13 = param_1 + 0x5c4;
    *(undefined4 *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc) = 7;
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4) = iVar19;
    puVar14 = (uint *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4);
    if (999 < *puVar14) {
      *puVar14 = 999;
    }
    iVar9 = FUN_0115e0bc(*(undefined8 *)(param_1 + 0x5b0),7);
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 8) = iVar9 * iVar19;
    uVar16 = *(uint *)(param_1 + 0x618);
    puVar14 = (uint *)(lVar13 + (ulong)uVar16 * 0xc + 8);
    if (0x270 < *puVar14 >> 4) {
      *puVar14 = 9999;
      uVar16 = *(uint *)(param_1 + 0x618);
    }
    *(uint *)(param_1 + 0x618) = uVar16 + 1;
  }
  if (iVar18 != 0) {
    lVar13 = param_1 + 0x5c4;
    *(undefined4 *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc) = 8;
    *(int *)(lVar13 + (ulong)*(uint *)(param_1 + 0x618) * 0xc + 4) = iVar18;
    uVar15 = (ulong)*(uint *)(param_1 + 0x618);
    puVar14 = (uint *)(lVar13 + uVar15 * 0xc + 4);
    if (999 < *puVar14) {
      *puVar14 = 999;
      uVar15 = (ulong)*(uint *)(param_1 + 0x618);
    }
    *(undefined4 *)(param_1 + uVar15 * 0xc + 0x5cc) = 0;
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_58);
  FUN_016b6208(&local_90,local_58);
  FUN_0165dd18(&local_88,local_90);
  if (local_90 != (long *)0x0) {
    plVar3 = local_90 + 10;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_016667d8(local_88,*(undefined4 *)(param_1 + 0x5b8));
  if (local_88 != (long *)0x0) {
    plVar3 = local_88 + 10;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar3 = local_58 + 10;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  lVar13 = plVar17[0xb];
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    iVar9 = *piVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar7) {
      *piVar2 = iVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  return;
}


