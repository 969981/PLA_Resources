/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01da0934; name: FUN_01da0934
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01da0934(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 *param_5)

{
  uint *puVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  long *local_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  char *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long *local_148;
  long *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined **local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  char local_d0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 *local_88 [3];
  long *local_68;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar13 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar13;
  piVar14 = (int *)FUN_010aa96c(uVar13,*(undefined4 *)(param_3 + 0x28),
                                *(undefined2 *)(param_3 + 0x2c),param_4 & 1);
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar3 = *puVar18;
  if (uVar3 < 0x1d) {
    return;
  }
  if ((ulong)puVar18[0xe] == 0) {
    return;
  }
  if (*(char *)((long)piVar14 + (ulong)puVar18[0xe]) == '\0') {
    return;
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (long *)0x0;
  if (uVar3 < 0x2b) {
    piVar20 = (int *)0x0;
  }
  else {
    piVar20 = (int *)0x0;
    if ((ulong)puVar18[0x15] != 0) {
      puVar1 = (uint *)((long)piVar14 + (ulong)puVar18[0x15]);
      piVar20 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if (((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
      (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) ||
     (*(char *)((long)piVar20 + uVar21) == '\0')) {
    FUN_01e65e3c(&local_140);
    if (local_140 == (long *)0x0) {
LAB_01da0a40:
      uVar27 = 0x3f800000;
    }
    else {
      FUN_019bebc4(&local_168);
      plVar16 = local_140;
      plVar23 = local_168;
      if (local_140 != (long *)0x0) {
        plVar24 = local_140 + 1;
        do {
          iVar11 = (int)*plVar24 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar5) {
            *(int *)plVar24 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_140[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar22 = *(long *)puVar8;
          *(long *)puVar9 = lVar22;
          local_168 = (long *)*plVar16;
          FUN_02a44274(lVar22 + 0xd8,&local_168);
        }
      }
      if (plVar23 == (long *)0x0) goto LAB_01da0a40;
      if (*(ushort *)((long)piVar14 - (long)*piVar14) < 0x13) {
        local_140 = (long *)0x0;
      }
      else {
        uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[9];
        local_140 = (long *)0x0;
        if (uVar21 != 0) {
          local_140 = *(long **)((long)piVar14 + uVar21);
        }
      }
      piVar14 = (int *)FUN_00b550ac(plVar23,&local_140);
      if (*(ushort *)((long)piVar14 - (long)*piVar14) < 0xb) {
        piVar20 = (int *)0x0;
      }
      else {
        uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5];
        piVar20 = (int *)0x0;
        if (uVar21 != 0) {
          puVar1 = (uint *)((long)piVar14 + uVar21);
          piVar20 = (int *)((long)puVar1 + (ulong)*puVar1);
        }
      }
      puVar18 = (ushort *)((long)piVar20 - (long)*piVar20);
      uVar3 = *puVar18;
      if (uVar3 < 5) {
        uVar27 = 0;
LAB_01da18c0:
        local_1a8 = 0;
        local_1b0 = (ulong)uVar27;
      }
      else {
        if ((ulong)puVar18[2] == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(uint *)((long)piVar20 + (ulong)puVar18[2]);
        }
        if (uVar3 < 9) goto LAB_01da18c0;
        if ((ulong)puVar18[4] == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)((long)piVar20 + (ulong)puVar18[4]);
        }
        local_1b0 = CONCAT44(uVar26,uVar27);
        if ((uVar3 < 0xb) || ((ulong)puVar18[5] == 0)) {
          local_1a8 = 0;
        }
        else {
          local_1a8 = *(undefined4 *)((long)piVar20 + (ulong)puVar18[5]);
        }
      }
      plVar16 = (long *)*param_5;
      if (plVar16 != (long *)0x0) {
        lVar22 = plVar16[0xb];
        if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01da1cac;
        if (*(long *)(lVar22 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
          *(undefined8 *)(lVar22 + 0x10) = uVar13;
        }
        piVar14 = (int *)(lVar22 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = *piVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (local_1a0 != (long *)0x0) {
        lVar22 = local_1a0[0xb];
        piVar14 = (int *)(lVar22 + 0xc);
        do {
          iVar11 = *piVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          lVar22 = *local_1a0;
          local_1a0 = plVar16;
          (**(code **)(lVar22 + 0x20))();
          plVar16 = local_1a0;
        }
      }
      local_1a0 = plVar16;
      lVar22 = plVar23[0xb];
      piVar14 = (int *)(lVar22 + 0xc);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
    }
  }
  else {
    if (uVar3 < 0x2d) {
      piVar20 = (int *)0x0;
    }
    else {
      piVar20 = (int *)0x0;
      if ((ulong)puVar18[0x16] != 0) {
        puVar1 = (uint *)((long)piVar14 + (ulong)puVar18[0x16]);
        piVar20 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    puVar18 = (ushort *)((long)piVar20 - (long)*piVar20);
    uVar3 = *puVar18;
    if (uVar3 < 7) {
      uVar27 = 0;
LAB_01da13a8:
      uVar25 = 0;
LAB_01da13ac:
      local_1a8 = 0;
      local_1b0 = (ulong)uVar25;
    }
    else {
      if ((ulong)puVar18[3] == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(uint *)((long)piVar20 + (ulong)puVar18[3]);
      }
      if (uVar3 < 9) goto LAB_01da13a8;
      if ((ulong)puVar18[4] == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = *(uint *)((long)piVar20 + (ulong)puVar18[4]);
      }
      if (uVar3 < 0xb) goto LAB_01da13ac;
      if ((ulong)puVar18[5] == 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = *(undefined4 *)((long)piVar20 + (ulong)puVar18[5]);
      }
      local_1b0 = CONCAT44(uVar26,uVar25);
      if ((uVar3 < 0xd) || ((ulong)puVar18[6] == 0)) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = *(undefined4 *)((long)piVar20 + (ulong)puVar18[6]);
      }
    }
    plVar23 = (long *)*param_5;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01da1cac;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar13;
      }
      piVar14 = (int *)(lVar22 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_1a0 = plVar23;
  }
  lVar22 = *(long *)(param_1 + 0x68);
  plVar23 = *(long **)(lVar22 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar23;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x2f0,0x10);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar23 + 0xb8))(plVar23);
  }
  FUN_00cfe0a8(plVar16,&local_1b0);
  plVar16[1] = (long)plVar23;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x2f0;
  plVar16[4] = 0x10;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01da1cac;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar14 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar23 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar23 = plVar16 + 9;
  }
  (**(code **)(*plVar23 + 0xb8))(plVar23,lVar22);
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_009ad580(&local_140,lVar22 + 0x318);
  (**(code **)(*plVar23 + 0xc0))(plVar23,&local_140);
  plVar24 = local_140;
  if (local_140 != (long *)0x0) {
    plVar2 = local_140 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)puVar8;
      *(long *)puVar9 = lVar15;
      local_168 = (long *)*plVar24;
      FUN_02a44274(lVar15 + 0xd8,&local_168);
    }
  }
  (**(code **)(*plVar23 + 200))(plVar23,*(undefined1 *)(lVar22 + 0x33b));
  (**(code **)(*plVar23 + 0x90))(plVar23);
  local_168 = plVar16;
  FUN_02a4dad4(lVar22 + 0xf0,&local_168);
  if (local_168 != (long *)0x0) {
    lVar22 = local_168[0xb];
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar22 = plVar16[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01da1cac;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar13;
    }
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_140 = (long *)0x0;
  local_110 = 0;
  uStack_108 = 0;
  local_130 = PTR_DAT_04382858 + 0x10;
  local_f0 = 0;
  uStack_e8 = 0;
  local_120 = &PTR_FUN_04287c08;
  local_128 = 1;
  local_d0 = '\0';
  local_e0 = 0;
  uStack_ac = 0xbf800000;
  uStack_a8 = 0x3f000000;
  local_a4 = 0x3f000000;
  local_b0 = 1;
  local_a0 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar22 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar22;
  local_140 = *(long **)(lVar22 + 0x230);
  local_110 = 0;
  uStack_108 = 0;
  local_168 = (long *)0x105f85b7325b1ec;
  pcStack_160 = "PokemonSmellComponent";
  local_a0 = CONCAT11(local_a0._1_1_,1);
  local_f0 = CONCAT44(local_f0._4_4_,8);
  local_b0 = 1;
  uStack_ac = 0x3f800000;
  uStack_a8 = 0;
  local_a4 = 0;
  local_158 = 0x15;
  uStack_150 = 0;
  local_100 = uVar27;
  FUN_01d8febc(&local_148,param_1,&local_168);
  local_178 = local_148;
  if (local_148 != (long *)0x0) {
    lVar22 = local_148[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_01da1cac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar13;
    }
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01c6ba38(&local_170,param_1,&local_178,&local_140);
  if (local_178 != (long *)0x0) {
    lVar22 = local_178[0xb];
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_178 + 0x20))();
    }
  }
  FUN_02be88ac(&local_198,local_170,0);
  FUN_00ab5ae0(&local_180,&local_198);
  puVar6 = local_198;
  if (local_198 != (undefined8 *)0x0) {
    piVar14 = (int *)(local_198 + 1);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_198[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_88[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  puVar10 = PTR_DAT_043796e8;
  if (local_180 == (long *)0x0) goto joined_r0x01da11f0;
  lVar22 = *(long *)(param_1 + 0x90);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar14 = (int *)(lVar22 + 0xc);
    iVar11 = *(int *)(lVar22 + 0xc);
    do {
      plVar23 = *(long **)(lVar22 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar23 == (long *)0x0) goto joined_r0x01da19fc;
        if (plVar23 == (long *)puVar10) break;
        plVar23 = (long *)*plVar23;
      }
      iVar12 = *piVar14;
      if (iVar12 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar22 = *(long *)(lVar22 + 0x18);
          plVar23 = (long *)(lVar22 + -0x50);
          if (lVar22 != 0) {
            FUN_0199ce28(&local_198,plVar23);
            puVar6 = local_198;
            if (local_198 == (undefined8 *)0x0) goto LAB_01da19c8;
            if (*(int *)((long)local_198 + 0xc) == 0) goto LAB_01da1d40;
            piVar14 = (int *)((long)local_198 + 0xc);
            iVar11 = *(int *)((long)local_198 + 0xc);
            goto LAB_01da1a9c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  goto joined_r0x01da19fc;
LAB_01da1a9c:
  do {
    plVar24 = (long *)puVar6[2];
    if (((*PTR_DAT_0437a668 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar12 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a668);
    }
    while( true ) {
      if (plVar24 == (long *)0x0) goto LAB_01da1d40;
      if (plVar24 == (long *)PTR_DAT_0437a660) break;
      plVar24 = (long *)*plVar24;
    }
    iVar12 = *piVar14;
    if (iVar12 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar15 = puVar6[3];
        plVar24 = (long *)0x0;
        puVar6 = local_198;
        if (lVar15 != 0) {
          plVar24 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x01da1af0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while (iVar12 != 0);
LAB_01da1d40:
  plVar24 = (long *)0x0;
  puVar6 = local_198;
joined_r0x01da1af0:
  local_198 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar14 = (int *)(puVar6 + 1);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      puVar6[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)puVar8;
      *(long *)puVar9 = lVar15;
      local_88[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar15 + 0xd8,local_88);
    }
  }
  if (plVar24 != (long *)0x0) {
    plVar2 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 0x4b;
    }
    (**(code **)(*plVar2 + 0x20))(local_88,plVar2);
    local_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    FUN_01800100(&local_198,local_88);
    puVar6 = local_88[0];
    if (local_88[0] != (undefined8 *)0x0) {
      piVar14 = (int *)(local_88[0] + 1);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        local_88[0][2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar8;
        *(long *)puVar9 = lVar15;
        local_68 = (long *)*puVar6;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    local_68 = local_180;
    local_188 = plVar2;
    if (local_180 != (long *)0x0) {
      lVar15 = local_180[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01da1cac;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar13;
      }
      piVar14 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_01e44b74(plVar24,0,&local_68,&local_198);
    puVar6 = local_198;
    if (local_68 != (long *)0x0) {
      lVar15 = local_68[0xb];
      piVar14 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
        puVar6 = local_198;
      }
    }
    local_198 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      piVar14 = (int *)(puVar6 + 1);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        puVar6[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar8;
        *(long *)puVar9 = lVar15;
        local_88[0] = (undefined8 *)*puVar6;
        FUN_02a44274(lVar15 + 0xd8,local_88);
      }
    }
    lVar15 = plVar24[0xb];
    piVar14 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
LAB_01da19c8:
  lVar22 = *(long *)(lVar22 + 8);
  piVar14 = (int *)(lVar22 + 0xc);
  do {
    iVar11 = *piVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
    if (bVar5) {
      *piVar14 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
joined_r0x01da19fc:
  if (local_180 != (long *)0x0) {
    lVar22 = local_180[0xb];
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
joined_r0x01da11f0:
  if (local_170 != (long *)0x0) {
    lVar22 = *(long *)((long)local_170 + 0x58);
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if (local_148 != (long *)0x0) {
    lVar22 = *(long *)((long)local_148 + 0x58);
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
  local_d0 = 0;
  if (plVar16 != (long *)0x0) {
    lVar22 = plVar16[0xb];
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  local_88[0] = (undefined8 *)0xe988ee1dd8686a40;
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_008802f0(&local_140,plVar16 + 0xb);
  local_168 = (long *)0x0;
  pcStack_160 = (char *)0x0;
  FUN_00880560(&local_168,&local_140);
  plVar23 = local_140;
  if (local_140 != (long *)0x0) {
    plVar16 = local_140 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_198 = (undefined8 *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_198);
    }
  }
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_00b6879c(&local_140,&local_168);
  plVar23 = local_168;
  if (local_168 != (long *)0x0) {
    plVar16 = local_168 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_168[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_198 = (undefined8 *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_198);
    }
  }
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = 0;
  do {
    uVar13 = local_138;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_138,0x10);
    if (bVar5) {
      local_138 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar17 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar9 = uVar17;
  FUN_02a44e0c(&local_198,uVar17,uVar13);
  plVar23 = local_140;
  local_140 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    plVar16 = plVar23 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      plVar23[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_168 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_168);
    }
  }
  puVar6 = local_1c0;
  local_1c0 = (undefined8 *)0x0;
  if (local_198 == (undefined8 *)0x0) {
    if (puVar6 != (undefined8 *)0x0) {
      piVar14 = (int *)(puVar6 + 1);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 1) {
        puVar6[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)puVar8;
        *(long *)puVar9 = lVar22;
        local_168 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_168);
      }
    }
    uVar13 = 0;
  }
  else {
    puVar19 = local_198;
    if (puVar6 != (undefined8 *)0x0) {
      piVar14 = (int *)(puVar6 + 1);
      do {
        iVar11 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        puVar6[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)puVar8;
        *(long *)puVar9 = lVar22;
        local_168 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_168);
      }
      puVar19 = local_198;
    }
    local_198 = (undefined8 *)0x0;
    local_1c0 = puVar19;
  }
  puVar6 = local_198;
  local_1b8 = uVar13;
  if (local_198 != (undefined8 *)0x0) {
    piVar14 = (int *)(local_198 + 1);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_198[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_168 = (long *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,&local_168);
    }
  }
  FUN_00ceead4(param_2,local_88,&local_1c0);
  puVar6 = local_1c0;
  if (local_1c0 != (undefined8 *)0x0) {
    piVar14 = (int *)(local_1c0 + 1);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_1c0[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_168 = (long *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,&local_168);
    }
  }
  plVar23 = local_140;
  if (local_140 != (long *)0x0) {
    plVar16 = local_140 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_140[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)puVar8;
      *(long *)puVar9 = lVar22;
      local_168 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_168);
    }
  }
  if (local_1a0 != (long *)0x0) {
    lVar22 = local_1a0[0xb];
    piVar14 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1a0 + 0x20))();
    }
  }
  return;
}


