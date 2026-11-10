/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d9d984; name: FUN_01d9d984
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d9d984(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  long *local_1a8;
  undefined4 local_1a0;
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
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  char local_d0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 *local_90 [2];
  long *local_80 [2];
  
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar12 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar12;
  piVar13 = (int *)FUN_010aa96c(uVar12,*(undefined4 *)(param_3 + 0x28),
                                *(undefined2 *)(param_3 + 0x2c),param_4 & 1);
  if (*(ushort *)((long)piVar13 - (long)*piVar13) < 0x15) {
    return;
  }
  uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[10];
  if (uVar17 == 0) {
    return;
  }
  if (*(char *)((long)piVar13 + uVar17) == '\0') {
    return;
  }
  FUN_01a71da0(&local_140,*(undefined8 *)(param_1 + 0x1b8));
  if (local_140 == (long *)0x0) {
    uVar27 = 0;
  }
  else {
    if ((int)local_140[0x50] == 3) {
      plVar22 = local_140 + 0x5e;
LAB_01d9da3c:
      uVar27 = (undefined4)*plVar22;
    }
    else {
      if ((int)local_140[0x50] == 1) {
        plVar22 = local_140 + 0x56;
        goto LAB_01d9da3c;
      }
      uVar27 = 0;
    }
    lVar18 = local_140[0xb];
    piVar21 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar21;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar4) {
        *piVar21 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  local_1a8 = (long *)0x0;
  local_1a0 = 0;
  local_1e8 = 0;
  local_1b0 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e0 = (undefined8 *)0x0;
  uStack_1d8 = 0;
  local_1d0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  local_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
  if (*puVar19 < 0x29) {
    piVar21 = (int *)0x0;
  }
  else {
    piVar21 = (int *)0x0;
    if ((ulong)puVar19[0x14] != 0) {
      puVar1 = (uint *)((long)piVar13 + (ulong)puVar19[0x14]);
      piVar21 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if (((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
      (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar17 == 0)) ||
     (*(char *)((long)piVar21 + uVar17) == '\0')) {
    FUN_01e65e3c(&local_140);
    uVar26 = 0x3f800000;
    if (local_140 != (long *)0x0) {
      FUN_019bebc4(&local_168);
      plVar22 = local_168;
      if (local_140 != (long *)0x0) {
        plVar15 = local_140 + 1;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_140[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)puVar7;
          *(long *)puVar8 = lVar18;
          local_168 = (long *)*local_140;
          FUN_02a44274(lVar18 + 0xd8,&local_168);
        }
      }
      if (plVar22 != (long *)0x0) {
        if (*(ushort *)((long)piVar13 - (long)*piVar13) < 0x13) {
          local_140 = (long *)0x0;
        }
        else {
          uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[9];
          local_140 = (long *)0x0;
          if (uVar17 != 0) {
            local_140 = *(long **)((long)piVar13 + uVar17);
          }
        }
        piVar13 = (int *)FUN_00b550ac(plVar22,&local_140);
        if (*(ushort *)((long)piVar13 - (long)*piVar13) < 7) {
          piVar21 = (int *)0x0;
        }
        else {
          uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3];
          piVar21 = (int *)0x0;
          if (uVar17 != 0) {
            puVar1 = (uint *)((long)piVar13 + uVar17);
            piVar21 = (int *)((long)puVar1 + (ulong)*puVar1);
          }
        }
        local_1e8 = 0;
        uVar26 = 0;
        if (4 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
          uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
          uVar26 = 0;
          if (uVar17 != 0) {
            uVar26 = *(undefined4 *)((long)piVar21 + uVar17);
          }
        }
        uVar24 = 0;
        if (6 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
          uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
          uVar24 = 0;
          if (uVar17 != 0) {
            uVar24 = *(undefined4 *)((long)piVar21 + uVar17);
          }
        }
        local_1f8 = CONCAT44(uVar24,uVar26);
        uVar24 = 0;
        if (8 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
          uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4];
          uVar24 = 0;
          if (uVar17 != 0) {
            uVar24 = *(undefined4 *)((long)piVar21 + uVar17);
          }
        }
        uVar25 = 0;
        if (10 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
          uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[5];
          uVar25 = 0;
          if (uVar17 != 0) {
            uVar25 = *(undefined4 *)((long)piVar21 + uVar17);
          }
        }
        local_1f0 = CONCAT44(uVar25,uVar24);
        if ((0xc < *(ushort *)((long)piVar21 - (long)*piVar21)) &&
           (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6], uVar17 != 0)) {
          local_1e8 = *(undefined4 *)((long)piVar21 + uVar17);
        }
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xf) ||
           (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7], uVar17 == 0)) {
          local_1b0 = 0;
        }
        else {
          local_1b0 = *(undefined4 *)((long)piVar21 + uVar17);
        }
        lVar18 = plVar22[0xb];
        piVar13 = (int *)(lVar18 + 0xc);
        do {
          iVar10 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_1a0 = uVar27;
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
      }
    }
  }
  else {
    if (*puVar19 < 0x29) {
      piVar21 = (int *)0x0;
    }
    else {
      piVar21 = (int *)0x0;
      if ((ulong)puVar19[0x14] != 0) {
        puVar1 = (uint *)((long)piVar13 + (ulong)puVar19[0x14]);
        piVar21 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    local_1e8 = 0;
    uVar26 = 0;
    if (6 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
      uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
      uVar26 = 0;
      if (uVar17 != 0) {
        uVar26 = *(undefined4 *)((long)piVar21 + uVar17);
      }
    }
    uVar24 = 0;
    if (8 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
      uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4];
      uVar24 = 0;
      if (uVar17 != 0) {
        uVar24 = *(undefined4 *)((long)piVar21 + uVar17);
      }
    }
    local_1f8 = CONCAT44(uVar24,uVar26);
    uVar24 = 0;
    if (10 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
      uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[5];
      uVar24 = 0;
      if (uVar17 != 0) {
        uVar24 = *(undefined4 *)((long)piVar21 + uVar17);
      }
    }
    uVar25 = 0;
    if (0xc < *(ushort *)((long)piVar21 - (long)*piVar21)) {
      uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6];
      uVar25 = 0;
      if (uVar17 != 0) {
        uVar25 = *(undefined4 *)((long)piVar21 + uVar17);
      }
    }
    local_1f0 = CONCAT44(uVar25,uVar24);
    if ((0xe < *(ushort *)((long)piVar21 - (long)*piVar21)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7], uVar17 != 0)) {
      local_1e8 = *(undefined4 *)((long)piVar21 + uVar17);
    }
    if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0x11) ||
       (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[8], uVar17 == 0)) {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(undefined4 *)((long)piVar21 + uVar17);
    }
    local_1a0 = uVar27;
  }
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_00cf98c8(&local_140,*(long *)(param_1 + 0x188) + 0x260);
  if (local_140 != (long *)0x0) {
    if (*(int *)((long)local_140 + 0xc) != 0) {
      FUN_00cf98c8(&local_1e0,&local_140);
    }
    plVar22 = local_140;
    if (local_140 != (long *)0x0) {
      plVar15 = local_140 + 1;
      do {
        iVar10 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_140[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_168 = (long *)*plVar22;
        FUN_02a44274(lVar18 + 0xd8,&local_168);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 0x188) + 0x10))(&local_140);
  local_168 = (long *)0x0;
  pcStack_160 = (char *)0x0;
  FUN_009cca14(&local_168,&local_140);
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar15 = local_140 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_140[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_198 = (undefined8 *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_198);
    }
  }
  FUN_00ac3ca4(&local_1d0,&local_168);
  plVar22 = local_168;
  if (local_168 != (long *)0x0) {
    plVar15 = local_168 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_168[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_140 = (long *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_140);
    }
  }
  (**(code **)(**(long **)(param_1 + 400) + 0x18))(&local_140);
  local_168 = (long *)0x0;
  pcStack_160 = (char *)0x0;
  FUN_00b5ff1c(&local_168,&local_140);
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar15 = local_140 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_140[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_198 = (undefined8 *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_198);
    }
  }
  FUN_00b6021c(&local_1c0,&local_168);
  plVar22 = local_168;
  if (local_168 != (long *)0x0) {
    plVar15 = local_168 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_168[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_140 = (long *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_140);
    }
  }
  lVar18 = *(long *)(param_1 + 0x68);
  plVar22 = *(long **)(lVar18 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar22;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar15 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x350,0x10);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xb8))(plVar22);
  }
  FUN_00cf4858(plVar15,&local_1f8);
  plVar15[1] = (long)plVar22;
  plVar15[2] = (long)plVar15;
  plVar15[3] = 0x350;
  plVar15[4] = 0x10;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01d9f27c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar13 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar22 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar22 = plVar15 + 9;
  }
  (**(code **)(*plVar22 + 0xb8))(plVar22,lVar18);
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_009ad580(&local_140,lVar18 + 0x318);
  (**(code **)(*plVar22 + 0xc0))(plVar22,&local_140);
  plVar23 = local_140;
  if (local_140 != (long *)0x0) {
    plVar2 = local_140 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_140[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_168 = (long *)*plVar23;
      FUN_02a44274(lVar14 + 0xd8,&local_168);
    }
  }
  (**(code **)(*plVar22 + 200))(plVar22,*(undefined1 *)(lVar18 + 0x33b));
  (**(code **)(*plVar22 + 0x90))(plVar22);
  local_168 = plVar15;
  FUN_02a4dad4(lVar18 + 0xf0,&local_168);
  if (local_168 != (long *)0x0) {
    lVar18 = local_168[0xb];
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9f27c;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar18 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar18;
  local_140 = *(long **)(lVar18 + 0x230);
  local_110 = 0;
  uStack_108 = 0;
  local_168 = (long *)0xb1cd4d318bb16a06;
  pcStack_160 = "PokemonSightComponent";
  local_a0 = CONCAT11(local_a0._1_1_,1);
  local_f0 = CONCAT44(local_f0._4_4_,8);
  local_b0 = 1;
  uStack_ac = 0x3f800000;
  uStack_a8 = 0;
  local_a4 = 0;
  local_158 = 0x15;
  uStack_150 = 0;
  local_100 = uVar26;
  FUN_01d8febc(&local_148,param_1,&local_168);
  local_178 = local_148;
  if (local_148 != (long *)0x0) {
    lVar18 = local_148[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_01d9f27c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01c6ba38(&local_170,param_1,&local_178,&local_140);
  if (local_178 != (long *)0x0) {
    lVar18 = local_178[0xb];
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_178 + 0x20))();
    }
  }
  FUN_02be88ac(&local_198,local_170,0);
  FUN_00ab5ae0(&local_180,&local_198);
  puVar5 = local_198;
  if (local_198 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_198 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_198[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_90[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,local_90);
    }
  }
  puVar9 = PTR_DAT_043796e8;
  if (local_180 == (long *)0x0) goto joined_r0x01d9e59c;
  lVar18 = *(long *)(param_1 + 0x90);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar13 = (int *)(lVar18 + 0xc);
    iVar10 = *(int *)(lVar18 + 0xc);
    do {
      plVar22 = *(long **)(lVar18 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto joined_r0x01d9efcc;
        if (plVar22 == (long *)puVar9) break;
        plVar22 = (long *)*plVar22;
      }
      iVar11 = *piVar13;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          plVar22 = (long *)(lVar18 + -0x50);
          if (lVar18 != 0) {
            FUN_0199ce28(&local_198,plVar22);
            puVar5 = local_198;
            if (local_198 == (undefined8 *)0x0) goto LAB_01d9ef98;
            if (*(int *)((long)local_198 + 0xc) == 0) goto LAB_01d9f310;
            piVar13 = (int *)((long)local_198 + 0xc);
            iVar10 = *(int *)((long)local_198 + 0xc);
            goto LAB_01d9f06c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
  goto joined_r0x01d9efcc;
LAB_01d9f06c:
  do {
    plVar23 = (long *)puVar5[2];
    if (((*PTR_DAT_0437a668 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar11 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a668);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) goto LAB_01d9f310;
      if (plVar23 == (long *)PTR_DAT_0437a660) break;
      plVar23 = (long *)*plVar23;
    }
    iVar11 = *piVar13;
    if (iVar11 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = puVar5[3];
        plVar23 = (long *)0x0;
        puVar5 = local_198;
        if (lVar14 != 0) {
          plVar23 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x01d9f0c0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar11;
  } while (iVar11 != 0);
LAB_01d9f310:
  plVar23 = (long *)0x0;
  puVar5 = local_198;
joined_r0x01d9f0c0:
  local_198 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar13 = (int *)(puVar5 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar5[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_90[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,local_90);
    }
  }
  if (plVar23 != (long *)0x0) {
    plVar2 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 0x4b;
    }
    (**(code **)(*plVar2 + 0x20))(local_90,plVar2);
    local_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    FUN_01800100(&local_198,local_90);
    puVar5 = local_90[0];
    if (local_90[0] != (undefined8 *)0x0) {
      piVar13 = (int *)(local_90[0] + 1);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_90[0][2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_80[0] = (long *)*puVar5;
        FUN_02a44274(lVar14 + 0xd8,local_80);
      }
    }
    local_80[0] = local_180;
    local_188 = plVar2;
    if (local_180 != (long *)0x0) {
      lVar14 = local_180[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01d9f27c;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar13 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = *piVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_01e44b74(plVar23,0,local_80,&local_198);
    puVar5 = local_198;
    if (local_80[0] != (long *)0x0) {
      lVar14 = local_80[0][0xb];
      piVar13 = (int *)(lVar14 + 0xc);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_80[0] + 0x20))();
        puVar5 = local_198;
      }
    }
    local_198 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar13 = (int *)(puVar5 + 1);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar5[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_90[0] = (undefined8 *)*puVar5;
        FUN_02a44274(lVar14 + 0xd8,local_90);
      }
    }
    lVar14 = plVar23[0xb];
    piVar13 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
LAB_01d9ef98:
  lVar18 = *(long *)(lVar18 + 8);
  piVar13 = (int *)(lVar18 + 0xc);
  do {
    iVar10 = *piVar13;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
    if (bVar4) {
      *piVar13 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
joined_r0x01d9efcc:
  if (local_180 != (long *)0x0) {
    lVar18 = local_180[0xb];
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
joined_r0x01d9e59c:
  if (local_170 != (long *)0x0) {
    lVar18 = *(long *)((long)local_170 + 0x58);
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if (local_148 != (long *)0x0) {
    lVar18 = *(long *)((long)local_148 + 0x58);
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
  local_d0 = 0;
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  local_90[0] = (undefined8 *)0x15fccbff257c22be;
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_008802f0(&local_140,plVar15 + 0xb);
  local_168 = (long *)0x0;
  pcStack_160 = (char *)0x0;
  FUN_00880560(&local_168,&local_140);
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar15 = local_140 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_140[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_198 = (undefined8 *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_198);
    }
  }
  local_140 = (long *)0x0;
  local_138 = 0;
  FUN_00b6819c(&local_140,&local_168);
  plVar22 = local_168;
  if (local_168 != (long *)0x0) {
    plVar15 = local_168 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_168[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_198 = (undefined8 *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_198);
    }
  }
  local_208 = (undefined8 *)0x0;
  local_200 = 0;
  do {
    uVar12 = local_138;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_138,0x10);
    if (bVar4) {
      local_138 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar16;
  FUN_02a44e0c(&local_198,uVar16,uVar12);
  plVar22 = local_140;
  local_140 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar15 = plVar22 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar22[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_168 = (long *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_168);
    }
  }
  puVar5 = local_208;
  local_208 = (undefined8 *)0x0;
  if (local_198 == (undefined8 *)0x0) {
    if (puVar5 != (undefined8 *)0x0) {
      piVar13 = (int *)(puVar5 + 1);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 1) {
        puVar5[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_168 = (long *)*puVar5;
        FUN_02a44274(lVar18 + 0xd8,&local_168);
      }
    }
    uVar12 = 0;
  }
  else {
    puVar20 = local_198;
    if (puVar5 != (undefined8 *)0x0) {
      piVar13 = (int *)(puVar5 + 1);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar5[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_168 = (long *)*puVar5;
        FUN_02a44274(lVar18 + 0xd8,&local_168);
      }
      puVar20 = local_198;
    }
    local_198 = (undefined8 *)0x0;
    local_208 = puVar20;
  }
  puVar5 = local_198;
  local_200 = uVar12;
  if (local_198 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_198 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_198[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_168 = (long *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_168);
    }
  }
  FUN_00ceead4(param_2,local_90,&local_208);
  puVar5 = local_208;
  if (local_208 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_208 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_208[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_168 = (long *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_168);
    }
  }
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar15 = local_140 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_140[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_168 = (long *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_168);
    }
  }
  puVar5 = local_1c0;
  if (local_1a8 != (long *)0x0) {
    lVar18 = local_1a8[0xb];
    piVar13 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_1a8 + 0x20))();
      puVar5 = local_1c0;
    }
  }
  local_1c0 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar13 = (int *)(puVar5 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar5[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_140 = (long *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_140);
    }
  }
  puVar5 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_1d0 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_140 = (long *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_140);
    }
  }
  puVar5 = local_1e0;
  if (local_1e0 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_1e0 + 1);
    do {
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_1e0[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_140 = (long *)*puVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_140);
    }
  }
  return;
}


