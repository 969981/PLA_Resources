/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148924c; name: FUN_0148924c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0148924c(long param_1)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  long *local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  
  local_98 = (long *)0x100000001;
  local_90._0_4_ = 1;
  uVar15 = *(ulong *)(param_1 + 0x28c0);
  lVar12 = *(long *)(param_1 + 0x2888);
  lVar20 = *(long *)(param_1 + 0x2890);
  uVar21 = uVar15 / 0xcc;
  plVar24 = (long *)(lVar12 + uVar21 * 8);
  if (lVar20 == lVar12) {
    bVar16 = true;
    lVar17 = *(long *)(param_1 + 0x2858);
  }
  else {
    lVar17 = *(long *)(lVar12 + uVar21 * 8) + (uVar15 % 0xcc) * 0x14;
    uVar2 = *(long *)(param_1 + 0x28c8) + uVar15;
    lVar18 = *(long *)(lVar12 + (uVar2 / 0xcc) * 8) + (uVar2 % 0xcc) * 0x14;
    if (lVar18 != lVar17) {
      do {
        while( true ) {
          iVar14 = *(int *)(lVar17 + 0xc);
          if (iVar14 < 0) {
            iVar14 = 0;
            *(undefined4 *)(lVar17 + 0xc) = 0;
          }
          *(undefined4 *)((long)&local_98 + (long)iVar14 * 4) = 0;
          lVar17 = lVar17 + 0x14;
          if (lVar17 - *plVar24 != 0xff0) break;
          plVar24 = plVar24 + 1;
          lVar17 = *plVar24;
          if (lVar18 == lVar17) goto LAB_01489e80;
        }
      } while (lVar18 != lVar17);
LAB_01489e80:
      if ((local_98._4_4_ == 0 && (int)local_98 == 0) && (int)local_90 == 0) {
        return;
      }
      uVar15 = *(ulong *)(param_1 + 0x28c0);
      lVar12 = *(long *)(param_1 + 0x2888);
      lVar20 = *(long *)(param_1 + 0x2890);
      uVar21 = uVar15 / 0xcc;
    }
    plVar24 = (long *)(lVar12 + uVar21 * 8);
    if (lVar20 == lVar12) {
      bVar16 = true;
      lVar17 = *(long *)(param_1 + 0x2858);
      lVar12 = lVar20;
    }
    else {
      lVar20 = *plVar24 + (uVar15 % 0xcc) * 0x14;
      uVar21 = *(long *)(param_1 + 0x28c8) + uVar15;
      lVar17 = *(long *)(lVar12 + (uVar21 / 0xcc) * 8) + (uVar21 % 0xcc) * 0x14;
      if (lVar17 != lVar20) {
        plVar9 = plVar24;
        do {
          while( true ) {
            if (*(char *)(lVar20 + 0x11) == '\x01') {
              return;
            }
            lVar20 = lVar20 + 0x14;
            if (lVar20 - *plVar9 == 0xff0) break;
            if (lVar17 == lVar20) goto LAB_01489334;
          }
          plVar9 = plVar9 + 1;
          lVar20 = *plVar9;
        } while (lVar17 != lVar20);
      }
LAB_01489334:
      bVar16 = false;
      lVar17 = *(long *)(param_1 + 0x2858);
    }
  }
  if (lVar17 == 0) {
    return;
  }
  puVar19 = (undefined8 *)
            (*(long *)(*(long *)(param_1 + 0x2818) + (*(ulong *)(param_1 + 0x2850) / 0xcc) * 8) +
            (*(ulong *)(param_1 + 0x2850) % 0xcc) * 0x14);
  local_f8 = *puVar19;
  uVar7 = puVar19[1];
  local_e8 = *(undefined4 *)(puVar19 + 2);
  local_98 = (long *)0x100000001;
  local_90 = (char *)CONCAT44(local_90._4_4_,1);
  if (bVar16) {
LAB_014893f4:
    uVar8 = 0;
  }
  else {
    lVar20 = *plVar24 + (uVar15 % 0xcc) * 0x14;
    uVar15 = *(long *)(param_1 + 0x28c8) + uVar15;
    lVar12 = *(long *)(lVar12 + (uVar15 / 0xcc) * 8) + (uVar15 % 0xcc) * 0x14;
    if (lVar12 == lVar20) goto LAB_014893f4;
    do {
      while( true ) {
        iVar14 = *(int *)(lVar20 + 0xc);
        if (iVar14 < 0) {
          iVar14 = 0;
          *(undefined4 *)(lVar20 + 0xc) = 0;
        }
        *(undefined4 *)((long)&local_98 + (long)iVar14 * 4) = 0;
        lVar20 = lVar20 + 0x14;
        if (lVar20 - *plVar24 != 0xff0) break;
        plVar24 = plVar24 + 1;
        lVar20 = *plVar24;
        if (lVar12 == lVar20) goto LAB_01489fd8;
      }
    } while (lVar12 != lVar20);
LAB_01489fd8:
    if ((int)local_98 != 0) goto LAB_014893f4;
    if (local_98._4_4_ == 0) {
      uVar8 = 2;
      if ((int)local_90 == 0) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      uVar8 = 1;
    }
  }
  uStack_f0 = CONCAT44(uVar8,(int)uVar7);
  lVar20 = *(long *)(param_1 + 0x2888);
  lVar12 = *(long *)(param_1 + 0x2890) - lVar20;
  uVar15 = 0;
  if (lVar12 != 0) {
    uVar15 = (lVar12 >> 3) * 0xcc - 1;
  }
  uVar21 = *(long *)(param_1 + 0x28c8) + *(long *)(param_1 + 0x28c0);
  if (uVar15 == uVar21) {
    FUN_01493cd4(param_1 + 0x2880);
    uVar21 = *(long *)(param_1 + 0x28c0) + *(long *)(param_1 + 0x28c8);
    lVar20 = *(long *)(param_1 + 0x2888);
    if (*(long *)(param_1 + 0x2890) == lVar20) goto LAB_0148a018;
LAB_01489440:
    lVar12 = *(long *)(lVar20 + (uVar21 / 0xcc) * 8) + (uVar21 % 0xcc) * 0x14;
  }
  else {
    if (*(long *)(param_1 + 0x2890) != lVar20) goto LAB_01489440;
LAB_0148a018:
    lVar12 = 0;
  }
  FUN_01494b20(param_1 + 0x28d0,lVar12,&local_f8);
  lVar12 = *(long *)(param_1 + 0x28c8);
  *(long *)(param_1 + 0x28c8) = lVar12 + 1;
  uVar15 = *(long *)(param_1 + 0x28c0) + lVar12;
  lVar12 = *(long *)(*(long *)(param_1 + 0x2888) + (uVar15 / 0xcc) * 8);
  uVar15 = uVar15 % 0xcc;
  plVar9 = *(long **)(param_1 + 0x2c8);
  plVar24 = plVar9 + 10;
  do {
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar16) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    plVar26 = DAT_043c3948;
    lVar20 = DAT_043c3930;
  } while (cVar6 != '\0');
  plVar23 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  lVar18 = (long)*(int *)(lVar12 + uVar15 * 0x14 + 0xc);
  if (DAT_043c3948 != (long *)0x0) {
    (**(code **)(*DAT_043c3948 + 0x18))(DAT_043c3948);
  }
  plVar27 = plVar23;
  if ((lVar17 != 0) && (*plVar23 != lVar20)) {
    lVar13 = lVar17 * 0x30;
    plVar25 = plVar23 + lVar17 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar27 = plVar25;
      if (lVar13 == 0) break;
      plVar28 = plVar23 + 6;
      plVar23 = plVar23 + 6;
      plVar27 = plVar23;
    } while (*plVar28 != lVar20);
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) | 1;
  puVar10 = (undefined4 *)(lVar12 + uVar15 * 0x14);
  uVar8 = *puVar10;
  uVar5 = puVar10[1];
  plVar23 = &DAT_043c3510 + lVar18 * 0x2c;
  local_98 = (long *)*plVar23;
  pcVar22 = (char *)(&DAT_043c3518)[lVar18 * 0x2c];
  local_88 = (undefined1 *)(&DAT_043c3520)[lVar18 * 0x2c];
  plVar26 = &DAT_043c3528 + lVar18 * 0x2c;
  local_80 = (long *)*plVar26;
  local_90 = pcVar22;
  if (local_80 == (long *)0x0) {
    cVar6 = *pcVar22;
  }
  else {
    (**(code **)(*local_80 + 0x18))();
    cVar6 = *pcVar22;
  }
  if (((cVar6 != '\0') &&
      (lVar20 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_98), lVar20 != 0)) &&
     (lVar20 = *(long *)(lVar20 + 0xe8), lVar20 != 0)) {
    FUN_00235780(lVar20);
    FUN_002350e8(lVar20,"T_count_00");
    FUN_002350e8(lVar20,"T_count_01");
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  plVar27 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar27 != (long *)0x0) {
    lVar20 = plVar27[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar16) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar25 = (long *)plVar27[0xd];
  if (plVar25 != (long *)0x0) {
    plVar28 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar16) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar20 = plVar27[0xb];
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar16) {
      *piVar1 = iVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  local_c0 = *plVar23;
  uStack_b8 = (&DAT_043c3518)[lVar18 * 0x2c];
  local_b0 = (&DAT_043c3520)[lVar18 * 0x2c];
  local_a8 = (long *)*plVar26;
  if (local_a8 == (long *)0x0) {
    plVar27 = (long *)0x0;
  }
  else {
    (**(code **)(*local_a8 + 0x18))();
    plVar27 = local_a8;
  }
  lVar17 = local_c0;
  plVar28 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x18))(plVar27);
  }
  plVar4 = plVar28;
  if ((lVar20 != 0) && (*plVar28 != lVar17)) {
    lVar13 = lVar20 * 0x30;
    plVar11 = plVar28 + lVar20 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar4 = plVar11;
      if (lVar13 == 0) break;
      plVar3 = plVar28 + 6;
      plVar28 = plVar28 + 6;
      plVar4 = plVar28;
    } while (*plVar3 != lVar17);
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) | 1;
  local_c0 = (&DAT_043c3530)[lVar18 * 0x2c];
  uStack_b8 = (&DAT_043c3538)[lVar18 * 0x2c];
  local_b0 = (&DAT_043c3540)[lVar18 * 0x2c];
  plVar27 = (long *)(&DAT_043c3548)[lVar18 * 0x2c];
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x18))(plVar27);
  }
  if (local_a8 != (long *)0x0) {
    lVar20 = *local_a8;
    local_a8 = plVar27;
    (**(code **)(lVar20 + 0x20))();
    plVar27 = local_a8;
  }
  local_a8 = plVar27;
  if (plVar25 != (long *)0x0) {
    plVar27 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar16) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = (long *)0x31caa71c4042fb4;
  local_c8 = plVar25;
  FUN_01381200(param_1 + 0x180,&local_c0,&local_c8,&local_98,0,uVar8,1);
  if (local_c8 == (long *)0x0) {
LAB_014897c0:
    plVar27 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar27 = local_c8 + 10;
    do {
      iVar14 = (int)*plVar27 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar16) {
        *(int *)plVar27 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 != 0) goto LAB_014897c0;
    (**(code **)(*local_c8 + 0x10))();
    plVar27 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar16) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      iVar14 = (int)*plVar28 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar16) {
        *(int *)plVar28 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
  }
  plVar28 = (long *)plVar27[0x38];
  if (plVar28 == (long *)0x0) {
    lVar20 = plVar25[0x16];
    if (lVar20 != 0) {
      plVar28 = *(long **)(lVar20 + 0x270);
      if (plVar28 != *(long **)(lVar20 + 0x278)) {
        iVar14 = 0;
        do {
          plVar4 = (long *)PTR_DAT_04379c88;
          if (*plVar28 != 0) {
            plVar4 = (long *)(*plVar28 + 0x58);
          }
          if (*plVar4 == 0x7a7669107aff2c39) goto LAB_0148a320;
          plVar28 = plVar28 + 1;
          iVar14 = iVar14 + 1;
        } while (*(long **)(lVar20 + 0x278) != plVar28);
      }
    }
    iVar14 = 0;
LAB_0148a320:
    FUN_02c2e33c(plVar25,iVar14,0);
  }
  else {
    plVar4 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar16) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar20 = plVar25[0x16];
    if (lVar20 != 0) {
      plVar11 = *(long **)(lVar20 + 0x270);
      if (plVar11 != *(long **)(lVar20 + 0x278)) {
        iVar14 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar3 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar3 == 0x7a7669107aff2c39) goto LAB_01489874;
          plVar11 = plVar11 + 1;
          iVar14 = iVar14 + 1;
        } while (*(long **)(lVar20 + 0x278) != plVar11);
      }
    }
    iVar14 = 0;
LAB_01489874:
    FUN_02c2e33c(plVar25,iVar14,plVar28);
    do {
      iVar14 = (int)*plVar4 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar16) {
        *(int *)plVar4 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  lVar20 = plVar27[0x38];
  lVar17 = plVar27[0x39];
  lVar13 = plVar27[0x37];
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,lVar20);
  if (*(char *)(lVar17 + 0x7c) != '\0') {
    **(undefined2 **)(lVar17 + 0x58) = 0;
    *(undefined2 *)(lVar17 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar17,lVar20,0,0);
  FUN_0283ce7c(plVar27,&DAT_043c3550 + lVar18 * 0x2c,plVar27[0x39],10);
  local_d0 = 1;
  local_d8 = 0x100000003;
  local_c0 = (&DAT_043c3570)[lVar18 * 0x2c];
  uStack_b8 = (&DAT_043c3578)[lVar18 * 0x2c];
  local_b0 = (&DAT_043c3580)[lVar18 * 0x2c];
  plVar27 = (long *)(&DAT_043c3588)[lVar18 * 0x2c];
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x18))(plVar27);
  }
  if (local_a8 != (long *)0x0) {
    lVar20 = *local_a8;
    local_a8 = plVar27;
    (**(code **)(lVar20 + 0x20))();
    plVar27 = local_a8;
  }
  local_a8 = plVar27;
  if (plVar25 != (long *)0x0) {
    plVar27 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar16) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = (long *)0x7a7668107aff2a86;
  local_e0 = plVar25;
  FUN_0148ce60(param_1 + 0x180,&local_c0,&local_e0,&local_98,&local_d8,0,uVar5);
  if (local_e0 != (long *)0x0) {
    plVar27 = local_e0 + 10;
    do {
      iVar14 = (int)*plVar27 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar16) {
        *(int *)plVar27 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar20 = *(long *)(param_1 + 0x4a8);
  local_78 = (long *)0x0;
  local_70 = 0;
  local_88 = &DAT_03996322;
  local_80 = (long *)0x0;
  local_9c = 0;
  local_98 = (long *)0x0;
  local_90 = &DAT_cbf29ce484222645;
  FUN_0284eb30(&local_98,&local_9c,uVar8);
  uVar21 = FUN_02c4d8d4(*(undefined8 *)(lVar20 + lVar18 * 0xc0 + 8),&local_98,local_9c,0);
  if ((uVar21 & 1) != 0) {
    lVar20 = lVar20 + lVar18 * 0xc0;
    *(undefined1 *)(lVar20 + 0x30) = 0;
    *(undefined4 *)(lVar20 + 0x34) = 0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar25 != (long *)0x0) {
    plVar27 = plVar25 + 10;
    do {
      iVar14 = (int)*plVar27 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar16) {
        *(int *)plVar27 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  lVar20 = *plVar23;
  plVar26 = (long *)*plVar26;
  if (plVar26 == (long *)0x0) {
    plVar23 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    plVar27 = plVar23 + lVar17 * 6;
  }
  else {
    (**(code **)(*plVar26 + 0x18))(plVar26);
    plVar23 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    plVar27 = plVar23 + lVar17 * 6;
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  if (lVar17 != 0) {
    lVar17 = *plVar23;
    while (lVar17 != lVar20) {
      plVar25 = plVar23 + 6;
      plVar23 = plVar27;
      if (plVar27 == plVar25) break;
      plVar23 = plVar25;
      lVar17 = *plVar25;
    }
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  *(byte *)(plVar23[4] + 0x58) = *(byte *)(plVar23[4] + 0x58) | 1;
  *(undefined1 *)(lVar12 + uVar15 * 0x14 + 0x11) = 1;
  lVar20 = (&DAT_043c35b0)[lVar18 * 0x2c];
  plVar23 = (long *)(&DAT_043c35c8)[lVar18 * 0x2c];
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  plVar27 = plVar26;
  if ((lVar17 != 0) && (*plVar26 != lVar20)) {
    lVar13 = lVar17 * 0x30;
    plVar25 = plVar26 + lVar17 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar27 = plVar25;
      if (lVar13 == 0) break;
      plVar28 = plVar26 + 6;
      plVar26 = plVar26 + 6;
      plVar27 = plVar26;
    } while (*plVar28 != lVar20);
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  *(byte *)(plVar27[4] + 0x58) =
       *(byte *)(plVar27[4] + 0x58) & 0xfe | *(byte *)(lVar12 + uVar15 * 0x14 + 0x10);
  local_98 = (long *)0xca879a697d0cc79c;
  local_90 = "PLAY_UI_COMMON_HUD_SLIDE_IN";
  local_88 = (undefined1 *)0x1b;
  local_80 = (long *)0x0;
  FUN_028354b0(&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  lVar12 = param_1 + lVar18 * 0x370;
  if (*(char *)(lVar12 + 0x650) == '\0') {
    *(undefined1 *)(lVar12 + 0x650) = 1;
  }
  lVar12 = *(long *)(param_1 + 0x2888);
  if (*(long *)(param_1 + 0x2890) != lVar12) {
    uVar21 = *(ulong *)(param_1 + 0x28c0);
    lVar20 = *(long *)(lVar12 + (uVar21 / 0xcc) * 8) + (uVar21 % 0xcc) * 0x14;
    uVar15 = *(long *)(param_1 + 0x28c8) + uVar21;
    lVar17 = *(long *)(lVar12 + (uVar15 / 0xcc) * 8) + (uVar15 % 0xcc) * 0x14;
    if (lVar17 != lVar20) {
      plVar26 = (long *)(lVar12 + (uVar21 / 0xcc) * 8);
      lVar12 = lVar20;
      plVar27 = plVar26;
      do {
        while( true ) {
          if (*(char *)(lVar12 + 0x11) == '\x02') {
            iVar14 = *(int *)(lVar12 + 0xc);
            if (-1 < iVar14) {
              do {
                if (*(int *)(lVar20 + 0xc) == iVar14) {
                  *(undefined1 *)(lVar20 + 0x11) = 3;
                }
                lVar20 = lVar20 + 0x14;
                if (lVar20 - *plVar26 == 0xff0) {
                  plVar26 = plVar26 + 1;
                  lVar20 = *plVar26;
                }
              } while (lVar17 != lVar20);
              lVar12 = param_1 + (long)iVar14 * 0x370;
              if (*(char *)(lVar12 + 0x860) == '\0') {
                *(undefined1 *)(lVar12 + 0x860) = 1;
              }
            }
            goto LAB_01489cb0;
          }
          lVar12 = lVar12 + 0x14;
          if (lVar12 - *plVar27 == 0xff0) break;
          if (lVar17 == lVar12) goto LAB_01489cb0;
        }
        plVar27 = plVar27 + 1;
        lVar12 = *plVar27;
      } while (lVar17 != lVar12);
    }
  }
LAB_01489cb0:
  lVar12 = *(long *)(param_1 + 0x2888);
  if (*(long *)(param_1 + 0x2890) != lVar12) {
    uVar21 = *(ulong *)(param_1 + 0x28c0);
    lVar20 = *(long *)(lVar12 + (uVar21 / 0xcc) * 8) + (uVar21 % 0xcc) * 0x14;
    uVar15 = *(long *)(param_1 + 0x28c8) + uVar21;
    lVar17 = *(long *)(lVar12 + (uVar15 / 0xcc) * 8) + (uVar15 % 0xcc) * 0x14;
    if (lVar17 != lVar20) {
      plVar26 = (long *)(lVar12 + (uVar21 / 0xcc) * 8);
      lVar12 = lVar20;
      plVar27 = plVar26;
      do {
        while( true ) {
          if (*(char *)(lVar12 + 0x11) == '\x04') {
            iVar14 = *(int *)(lVar12 + 0xc);
            if (-1 < iVar14) {
              do {
                if (*(int *)(lVar20 + 0xc) == iVar14) {
                  *(undefined1 *)(lVar20 + 0x11) = 5;
                }
                lVar20 = lVar20 + 0x14;
                if (lVar20 - *plVar26 == 0xff0) {
                  plVar26 = plVar26 + 1;
                  lVar20 = *plVar26;
                }
              } while (lVar17 != lVar20);
              lVar12 = param_1 + (long)iVar14 * 0x370;
              if (*(char *)(lVar12 + 0x7b0) == '\0') {
                *(undefined1 *)(lVar12 + 0x7b0) = 1;
              }
            }
            goto joined_r0x01489f74;
          }
          lVar12 = lVar12 + 0x14;
          if (lVar12 - *plVar27 == 0xff0) break;
          if (lVar17 == lVar12) goto joined_r0x01489f74;
        }
        plVar27 = plVar27 + 1;
        lVar12 = *plVar27;
      } while (lVar17 != lVar12);
    }
  }
joined_r0x01489f74:
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (plVar9 != (long *)0x0) {
    do {
      iVar14 = (int)*plVar24 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *(int *)plVar24 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  uVar15 = *(long *)(param_1 + 0x2850) + 1;
  *(long *)(param_1 + 0x2858) = *(long *)(param_1 + 0x2858) + -1;
  *(ulong *)(param_1 + 0x2850) = uVar15;
  if (uVar15 < 0x198) {
    return;
  }
  plVar24 = *(long **)(param_1 + 0x2860);
  uVar7 = **(undefined8 **)(param_1 + 0x2818);
  uVar15 = (**(code **)(*plVar24 + 0xc0))(plVar24);
  if ((uVar15 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar24,uVar7,0xff0,4);
      goto LAB_01489e08;
    }
  }
  (**(code **)(*plVar24 + 0x18))(plVar24,uVar7,0xff0,4);
LAB_01489e08:
  *(long *)(param_1 + 0x2818) = *(long *)(param_1 + 0x2818) + 8;
  *(long *)(param_1 + 0x2850) = *(long *)(param_1 + 0x2850) + -0xcc;
  return;
}


