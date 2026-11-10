/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009748d4; name: FUN_009748d4
 */


void FUN_009748d4(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  long local_2c0 [12];
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
  undefined4 local_208;
  undefined4 uStack_204;
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
  
  FUN_00982d58();
  uVar11 = FUN_00923ca8();
  FUN_00928010(uVar11,0);
  puVar4 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar6 = PTR_DAT_04379588;
  puVar5 = PTR_DAT_04379580;
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar12 = (long *)FUN_00954890();
  lVar13 = *plVar12;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_00974940:
    plVar12 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar9 = *(int *)(lVar13 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar13 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      if (puVar16 == (undefined8 *)0x0) goto LAB_00974940;
      while (puVar16 != (undefined8 *)PTR_DAT_043796e8) {
        puVar16 = (undefined8 *)*puVar16;
        plVar12 = (long *)0x0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_00974944;
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
          plVar12 = (long *)0x0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            plVar12 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar12 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_00974944:
  FUN_0199d068(&local_250,plVar12);
  lVar13 = CONCAT71(uStack_24f,local_250);
  if (lVar13 == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar9 = *(int *)(lVar13 + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*PTR_DAT_04379f78 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379f78), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379f80 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379f78);
          if (plVar15 != (long *)0x0) goto LAB_00975580;
LAB_009755b8:
          puVar16 = (undefined8 *)CONCAT71(uStack_24f,local_250);
          goto joined_r0x009755bc;
        }
        if (plVar15 == (long *)0x0) goto LAB_009755b8;
LAB_00975580:
        while (plVar15 != (long *)PTR_DAT_04379f80) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)0x0;
            goto LAB_009755b8;
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
            plVar15 = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar15 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            goto LAB_009755b8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
    plVar15 = (long *)0x0;
    puVar16 = (undefined8 *)CONCAT71(uStack_24f,local_250);
joined_r0x009755bc:
    if (puVar16 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar16 + 1);
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
        puVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar15 != (long *)0x0) {
    uVar11 = FUN_00982d58(param_1);
    FUN_00965f00(param_1 + 0x70,uVar11);
    FUN_00982d58(param_1);
    FUN_00923c90();
    uVar8 = FUN_00926f60();
    uVar14 = 2;
    if ((uVar8 & param_2 & 1) == 0) {
      uVar14 = 3;
    }
    *(undefined4 *)(param_1 + 0xd8) = uVar14;
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
    local_1fb = 0x101;
    uStack_204 = 0;
    uStack_200 = 0;
    local_d8 = 0x50160bafddf4da48;
    local_c8 = 0x1e;
    local_b0 = "PLAY_UI_COMMON_PAUSE_MENU_CLOSE";
    local_d0 = "PLAY_UI_COMMON_PAUSE_MENU_OPEN";
    local_a8 = 0x1f;
    local_98 = 0x100;
    local_f0 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_c0 = (long *)0x0;
    local_b8 = 0x9b78493c20fb7de4;
    local_a0 = (long *)0x0;
    local_96 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    FUN_00969490(&local_260,param_1 + 0x70);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_0096aaf4(&local_88,&local_260);
    FUN_00880560(&local_228,&local_88);
    puVar16 = local_88;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
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
        local_78[0] = *local_260;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    (**(code **)(*plVar15 + 0x10))(&local_88,plVar15);
    local_260 = (undefined8 *)0x0;
    uStack_258 = 0;
    FUN_0096a7f4(&local_260,&local_88);
    puVar16 = local_88;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_0096adf4(&local_88,&local_260);
    FUN_00880560((ulong)&local_250 | 8,&local_88);
    puVar16 = local_88;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    puVar16 = local_260;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    uStack_204 = FUN_009756f0(param_1);
    (**(code **)(*plVar15 + 0x10))(&local_88,plVar15);
    local_260 = (undefined8 *)0x0;
    uStack_258 = 0;
    FUN_0096a7f4(&local_260,&local_88);
    puVar16 = local_88;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_0096adf4(&local_88,&local_260);
    FUN_00880560((ulong)&local_250 | 8,&local_88);
    puVar16 = local_88;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    puVar16 = local_260;
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
        local_78[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_78);
      }
    }
    FUN_00982d58(param_1);
    lVar13 = FUN_00923bb4();
    local_96 = *(undefined1 *)(lVar13 + 0x478);
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    local_2e0 = &LAB_00975fec;
    local_2d8 = FUN_00975ff4;
    uVar11 = *(undefined8 *)PTR_DAT_04379698;
    *(undefined8 *)PTR_DAT_043796a0 = uVar11;
    local_2d0 = &LAB_00975ff8;
    puStack_2c8 = &LAB_00976004;
    local_2c0[0] = param_1;
    FUN_0286abb8(uVar11,0xb,&local_250,&local_2e0);
    pcVar7 = local_2d8;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar7)(local_2c0);
    }
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
    lVar13 = FUN_0095492c();
    *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 8;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    pcVar7 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar7)(auStack_150);
    }
    pcVar7 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = (code *)0x0;
      (*pcVar7)(auStack_1d0);
    }
    puVar16 = local_228;
    if (local_218 != (long *)0x0) {
      plVar12 = local_218 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_218 + 0x10))();
        puVar16 = local_228;
      }
    }
    local_228 = puVar16;
    if (puVar16 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar16 + 1);
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
        puVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    puVar16 = local_238;
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
        local_88 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    puVar16 = local_248;
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
        local_88 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    lVar13 = plVar15[0xb];
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
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


