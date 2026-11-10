/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096ea88; name: FUN_0096ea88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096ea88(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 local_2e0;
  code *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [96];
  undefined8 *local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  undefined8 uStack_230;
  undefined8 *local_228;
  undefined8 uStack_220;
  long *local_218;
  undefined8 uStack_210;
  undefined5 local_208;
  undefined3 uStack_203;
  undefined5 uStack_200;
  undefined2 local_1fb;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined1 local_f0;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78 [3];
  
  puVar4 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar6 = PTR_DAT_04379588;
  puVar5 = PTR_DAT_04379580;
  lVar13 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar13;
  plVar11 = *(long **)(lVar13 + 0xb0);
  if (plVar11 == (long *)0x0) {
    lVar13 = _DAT_000000e0;
  }
  else {
    plVar14 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar11[0x1c];
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  uVar12 = FUN_00923ca8(lVar13);
  FUN_00928010(uVar12,0);
  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  plVar11 = (long *)FUN_00954890();
  puVar7 = PTR_DAT_043796e8;
  lVar13 = *plVar11;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_0096eb34:
    plVar11 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar9 = *(int *)(lVar13 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar13 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_0096eb34;
      while (puVar15 != (undefined8 *)puVar7) {
        puVar15 = (undefined8 *)*puVar15;
        plVar11 = (long *)0x0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_0096eb38;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar11 = (long *)0x0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            plVar11 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar11 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_0096eb38:
  FUN_0199d068(&local_250,plVar11);
  puVar7 = PTR_DAT_04379f80;
  lVar13 = CONCAT71(uStack_24f,local_250);
  if (lVar13 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar9 = *(int *)(lVar13 + 0xc);
      do {
        plVar14 = *(long **)(lVar13 + 0x10);
        if (((*PTR_DAT_04379f78 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379f78), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379f78);
          if (plVar14 != (long *)0x0) goto LAB_0096f494;
LAB_0096f4c4:
          puVar15 = (undefined8 *)CONCAT71(uStack_24f,local_250);
          goto joined_r0x0096f4c8;
        }
        if (plVar14 == (long *)0x0) goto LAB_0096f4c4;
LAB_0096f494:
        while (plVar14 != (long *)puVar7) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_0096f4c4;
          }
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar14 = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            goto LAB_0096f4c4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
    plVar14 = (long *)0x0;
    puVar15 = (undefined8 *)CONCAT71(uStack_24f,local_250);
joined_r0x0096f4c8:
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (plVar14 != (long *)0x0) {
    local_250 = 0;
    local_248 = (undefined8 *)0x0;
    uStack_240 = 0;
    local_238 = (undefined8 *)0x0;
    uStack_230 = 0;
    local_208 = 0;
    local_228 = (undefined8 *)0x0;
    uStack_220 = 0;
    local_218 = (long *)0x0;
    uStack_210 = 0;
    uStack_203 = 0;
    uStack_200 = 0;
    local_1fb = 0x101;
    local_d8 = 0x50160bafddf4da48;
    local_c8 = 0x1e;
    local_d0 = "PLAY_UI_COMMON_PAUSE_MENU_OPEN";
    local_b0 = "PLAY_UI_COMMON_PAUSE_MENU_CLOSE";
    local_a8 = 0x1f;
    local_f0 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_c0 = (long *)0x0;
    local_b8 = 0x9b78493c20fb7de4;
    local_a0 = (long *)0x0;
    local_98 = 0x100;
    local_96 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00971528(&local_88,param_1 + 0x448);
    FUN_00880560(&local_228,&local_88);
    puVar15 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_260 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_260);
      }
    }
    (**(code **)(*plVar14 + 0x10))(&local_88,plVar14);
    local_260 = (undefined8 *)0x0;
    uStack_258 = 0;
    FUN_0096a7f4(&local_260,&local_88);
    puVar15 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_78[0] = *puVar15;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_0096adf4(&local_88,&local_260);
    FUN_00880560((ulong)&local_250 | 8,&local_88);
    puVar15 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_78[0] = *puVar15;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    puVar15 = local_260;
    if (local_260 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_260 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_260[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_78[0] = *puVar15;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    local_2e0 = 0;
    local_2d8 = (code *)0x0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    uVar12 = *(undefined8 *)PTR_DAT_04379698;
    *(undefined8 *)PTR_DAT_043796a0 = uVar12;
    FUN_0286ac54(uVar12,0x16,&local_250,0,&local_2e0);
    pcVar8 = local_2d8;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_2e0 = 0;
      local_2d8 = (code *)0x0;
      (*pcVar8)(auStack_2c0);
    }
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
    lVar13 = FUN_0095492c();
    *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 0x10;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    pcVar8 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar8)(auStack_150);
    }
    pcVar8 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = (code *)0x0;
      (*pcVar8)(auStack_1d0);
    }
    puVar15 = local_228;
    if (local_218 != (long *)0x0) {
      plVar11 = local_218 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_218 + 0x10))();
        puVar15 = local_228;
      }
    }
    local_228 = puVar15;
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    puVar15 = local_238;
    if (local_238 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_238 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_238[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    puVar15 = local_248;
    if (local_248 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_248 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_248[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


