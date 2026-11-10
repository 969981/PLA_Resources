/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5bbb8; name: FUN_01c5bbb8
 */


void FUN_01c5bbb8(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  int *piVar24;
  long *plVar25;
  long lVar26;
  long *local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  uint5 local_100;
  undefined3 uStack_fb;
  uint5 uStack_f8;
  undefined3 uStack_f3;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  puVar8 = PTR_DAT_0437a6e0;
  puVar7 = PTR_DAT_0437a6d8;
  piVar24 = *(int **)(param_1 + 0x440);
  if (piVar24 != *(int **)(param_1 + 0x448)) {
    do {
      iVar16 = *piVar24;
      iVar17 = iVar16 + -1;
      *piVar24 = iVar17;
      if (iVar17 == 0 || iVar16 < 1) {
        lVar26 = *(long *)(piVar24 + 2);
        if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
          piVar1 = (int *)(lVar26 + 0xc);
          iVar16 = *(int *)(lVar26 + 0xc);
          do {
            plVar25 = *(long **)(lVar26 + 0x10);
            if (((*puVar7 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar7), iVar17 != 0)) {
              uVar18 = FUN_00ad3750();
              *(undefined8 *)puVar8 = uVar18;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar25 == (long *)0x0) goto LAB_01c5bc64;
              if (plVar25 == (long *)puVar8) break;
              plVar25 = (long *)*plVar25;
            }
            iVar17 = *piVar1;
            if (iVar17 == iVar16) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar16 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar26 = *(long *)(lVar26 + 0x18);
                if (lVar26 != 0) {
                  plVar25 = (long *)(lVar26 + -0x50);
                  FUN_02c90d40(plVar25);
                  lVar26 = *(long *)(lVar26 + 8);
                  piVar1 = (int *)(lVar26 + 0xc);
                  do {
                    iVar16 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar16 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar16 + -1 == 0) {
                    *(undefined8 *)(lVar26 + 0x18) = 0;
                    (**(code **)(*plVar25 + 0x20))(plVar25);
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = iVar17;
          } while (iVar17 != 0);
        }
LAB_01c5bc64:
        piVar24 = (int *)FUN_01c5cd84(param_1 + 0x440,piVar24);
      }
      else {
        piVar24 = piVar24 + 6;
      }
    } while (piVar24 != *(int **)(param_1 + 0x448));
  }
  puVar7 = PTR_DAT_04379c28;
  if (*(int *)(param_1 + 0x290) == 3) {
    if (*(char *)(param_1 + 0x48c) != '\0') {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      puVar9 = PTR_DAT_04379c38;
      puVar8 = PTR_DAT_04379c30;
      local_a0 = 0;
      uStack_98 = 0;
      uVar18 = *(undefined8 *)PTR_DAT_04379c30;
      local_78 = 0x16;
      local_70 = (long *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_88 = (undefined1 *)0xaa46a7289665004;
      pcStack_80 = "SET_STATE_WORMHOLE_OUT";
      *(undefined8 *)PTR_DAT_04379c38 = uVar18;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      _local_100 = 0;
      _uStack_f8 = 0;
      local_110 = (undefined8 *)0x0;
      local_108 = (code *)0x0;
      FUN_02913338(uVar18,&local_88,&local_110,0,0,0);
      pcVar14 = local_108;
      if (local_108 == (code *)0x0) {
        local_108 = (code *)0x0;
      }
      else {
        _local_100 = 0;
        _uStack_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar14)(&local_f0);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar10 = PTR_DAT_04379e40;
      local_88 = &DAT_8d81cfe451e0a778;
      pcStack_80 = "WORMHOLE";
      local_78 = 8;
      local_70 = (long *)0x0;
      if (((*PTR_DAT_04379e40 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      puVar12 = PTR_DAT_04379e50;
      puVar11 = PTR_DAT_04379e48;
      uVar18 = *(undefined8 *)PTR_DAT_04379e48;
      *(undefined8 *)PTR_DAT_04379e50 = uVar18;
      FUN_029278b4(&local_110,uVar18,&local_88);
      if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar18 = *(undefined8 *)puVar11;
      *(undefined8 *)puVar12 = uVar18;
      FUN_02928c7c(uVar18,&local_108,0,0);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (((*puVar7 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar18 = *(undefined8 *)puVar8;
      local_78 = 0x16;
      local_70 = (long *)0x0;
      *(undefined8 *)puVar9 = uVar18;
      local_88 = (undefined1 *)0x2b54cc423b9f66a9;
      pcStack_80 = "PLAY_STDISTORTION_EXIT";
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      _local_100 = 0;
      _uStack_f8 = 0;
      local_110 = (undefined8 *)0x0;
      local_108 = (code *)0x0;
      FUN_02913338(uVar18,&local_88,&local_110,0,0,0);
      pcVar14 = local_108;
      if (local_108 == (code *)0x0) {
        local_108 = (code *)0x0;
      }
      else {
        _local_100 = 0;
        _uStack_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar14)(&local_f0);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar10 = PTR_DAT_043796e8;
      puVar9 = PTR_DAT_043796e0;
      puVar8 = PTR_DAT_043794d8;
      puVar7 = PTR_DAT_043794d0;
      lVar26 = *(long *)(param_1 + 0x3a0);
      if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
        piVar24 = (int *)(lVar26 + 0xc);
        iVar16 = *(int *)(lVar26 + 0xc);
        while( true ) {
          plVar25 = *(long **)(lVar26 + 0x10);
          if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar9), iVar17 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar7), iVar17 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar18;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_01c5be48;
            if (plVar25 == (long *)puVar10) break;
            plVar25 = (long *)*plVar25;
          }
          iVar17 = *piVar24;
          if (iVar17 == iVar16) break;
          ClearExclusiveLocal();
LAB_01c5c8c4:
          iVar16 = iVar17;
          if (iVar17 == 0) goto LAB_01c5be48;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar5) {
          *piVar24 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01c5c8c4;
        lVar26 = *(long *)(lVar26 + 0x18);
        plVar25 = (long *)(lVar26 + -0x50);
        if (lVar26 == 0) goto LAB_01c5be48;
        FUN_0199c138(&local_118,plVar25);
        if (local_118 == (long *)0x0) goto LAB_01c5cb58;
        FUN_01aef8b8(&local_110);
        if (local_110 == (undefined8 *)0x0) {
          local_120 = (long *)0x0;
          goto LAB_01c5c938;
        }
        FUN_016c3724(&local_120);
        puVar13 = local_110;
        if (local_110 == (undefined8 *)0x0) goto LAB_01c5c938;
        piVar24 = (int *)(local_110 + 1);
        do {
          iVar16 = *piVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 != 0) {
LAB_01c5c938:
          if (local_120 != (long *)0x0) goto LAB_01c5c940;
          goto joined_r0x01c5cb38;
        }
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (undefined1 *)*puVar13;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
        if (local_120 == (long *)0x0) goto joined_r0x01c5cb38;
LAB_01c5c940:
        uVar19 = (ulong)local_108 >> 0x20;
        local_108 = (code *)CONCAT44((uint)uVar19 & 0xffffff00,4);
        local_88 = (undefined1 *)0xdda9f413319d82e4;
        pcStack_80 = "player_face";
        local_100 = (uint5)(uint)local_100;
        local_78 = 0xb;
        local_70 = (long *)0x0;
        local_140 = (long *)0x6c14aed3022ec5d3;
        pcStack_138 = "face_wormhole_out";
        uStack_f8 = (uint5)(uint)uStack_f8;
        local_130 = 0x11;
        local_128 = (long *)0x0;
        local_110 = (undefined8 *)FUN_00ea3260(&local_88,&local_140);
        if (local_128 != (long *)0x0) {
          (**(code **)(*local_128 + 0x20))();
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        local_88 = (undefined1 *)0x53d987f9ef4a807b;
        pcStack_80 = "wormhole_out_keep_frame";
        local_78 = 0x17;
        local_70 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar22 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar22;
        uVar19 = *(ulong *)(lVar22 + 0x60);
        if (uVar19 == 0) {
LAB_01c5cbac:
          uVar15 = 0;
        }
        else {
          uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            uVar21 = uVar19 - 1 & 0xdda9f413319d82e4;
          }
          else if (uVar19 < 0xdda9f413319d82e5) {
            uVar21 = 0;
            if (uVar19 != 0) {
              uVar21 = 0xdda9f413319d82e4 / uVar19;
            }
            uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar19;
          }
          else {
            uVar21 = 0xdda9f413319d82e4;
          }
          plVar23 = *(long **)(*(long *)(lVar22 + 0x58) + uVar21 * 8);
          if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
          goto LAB_01c5cbac;
          if (1 < uVar20) {
            do {
              uVar20 = plVar23[1];
              if (uVar20 == 0xdda9f413319d82e4) {
                if (plVar23[2] == -0x22560becce627d1c) goto LAB_01c5caa4;
              }
              else {
                if (uVar19 <= uVar20) {
                  uVar6 = 0;
                  if (uVar19 != 0) {
                    uVar6 = uVar20 / uVar19;
                  }
                  uVar20 = uVar20 - uVar6 * uVar19;
                }
                if (uVar20 != uVar21) break;
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
            goto LAB_01c5cbac;
          }
          do {
            if (plVar23[1] != 0xdda9f413319d82e4) {
              if ((plVar23[1] & uVar19 - 1) == uVar21) goto LAB_01c5cd4c;
              goto LAB_01c5cbac;
            }
            if (plVar23[2] == -0x22560becce627d1c) goto LAB_01c5caa4;
LAB_01c5cd4c:
            plVar23 = (long *)*plVar23;
            uVar15 = 0;
          } while (plVar23 != (long *)0x0);
        }
        goto LAB_01c5cae4;
      }
    }
LAB_01c5be48:
    uVar15 = 0;
    *(undefined1 *)(param_1 + 0x48c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x290) != 1) goto LAB_01c5bc00;
    if (*(char *)(param_1 + 0x48c) == '\0') {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      puVar9 = PTR_DAT_04379c38;
      puVar8 = PTR_DAT_04379c30;
      local_a0 = 0;
      uStack_98 = 0;
      uVar18 = *(undefined8 *)PTR_DAT_04379c30;
      local_78 = 0x15;
      local_70 = (long *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_88 = (undefined1 *)0x29fae46030818c3f;
      pcStack_80 = "SET_STATE_WORMHOLE_IN";
      *(undefined8 *)PTR_DAT_04379c38 = uVar18;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      _local_100 = 0;
      _uStack_f8 = 0;
      local_110 = (undefined8 *)0x0;
      local_108 = (code *)0x0;
      FUN_02913338(uVar18,&local_88,&local_110,0,0,0);
      pcVar14 = local_108;
      if (local_108 == (code *)0x0) {
        local_108 = (code *)0x0;
      }
      else {
        _local_100 = 0;
        _uStack_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar14)(&local_f0);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar10 = PTR_DAT_04379e40;
      if (*(int *)(param_1 + 0x298) == 3) {
        local_88 = &DAT_8d81cfe451e0a778;
        pcStack_80 = "WORMHOLE";
        local_78 = 8;
        local_70 = (long *)0x0;
        if (((*PTR_DAT_04379e40 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        puVar12 = PTR_DAT_04379e50;
        puVar11 = PTR_DAT_04379e48;
        uVar18 = *(undefined8 *)PTR_DAT_04379e48;
        *(undefined8 *)PTR_DAT_04379e50 = uVar18;
        FUN_029278b4(&local_110,uVar18,&local_88);
        local_88 = (undefined1 *)0xd83eb24ac9d94977;
        pcStack_80 = "PLAY_BGM_HA_FI_CMN_WORMHOLE";
        local_78 = 0x1b;
        local_70 = (long *)0x0;
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar16 != 0))
        {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        uVar18 = *(undefined8 *)puVar11;
        *(undefined8 *)puVar12 = uVar18;
        FUN_02928520(uVar18,&local_108,&local_88);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar16 != 0))
        {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        uVar18 = *(undefined8 *)puVar11;
        *(undefined8 *)puVar12 = uVar18;
        FUN_02928980(uVar18,&local_108,0,0);
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
      }
      puVar11 = PTR_DAT_043796e8;
      puVar10 = PTR_DAT_043796e0;
      lVar26 = *(long *)(param_1 + 0x3a0);
      if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
        piVar24 = (int *)(lVar26 + 0xc);
        iVar16 = *(int *)(lVar26 + 0xc);
        while( true ) {
          plVar25 = *(long **)(lVar26 + 0x10);
          if (((*puVar10 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar10), iVar17 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar17 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar11 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_01c5bffc;
            if (plVar25 == (long *)puVar11) break;
            plVar25 = (long *)*plVar25;
          }
          iVar17 = *piVar24;
          if (iVar17 == iVar16) break;
          ClearExclusiveLocal();
LAB_01c5c408:
          iVar16 = iVar17;
          if (iVar17 == 0) goto LAB_01c5bffc;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar5) {
          *piVar24 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01c5c408;
        lVar26 = *(long *)(lVar26 + 0x18);
        plVar25 = (long *)(lVar26 + -0x50);
        if (lVar26 == 0) goto LAB_01c5bffc;
        FUN_0199c138(&local_140,plVar25);
        if (local_140 == (long *)0x0) goto LAB_01c5c634;
        FUN_01aef8b8(&local_110);
        if (local_110 == (undefined8 *)0x0) {
          local_118 = (long *)0x0;
          goto LAB_01c5c47c;
        }
        FUN_016c3724(&local_118);
        puVar13 = local_110;
        if (local_110 == (undefined8 *)0x0) goto LAB_01c5c47c;
        piVar24 = (int *)(local_110 + 1);
        do {
          iVar16 = *piVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 != 0) {
LAB_01c5c47c:
          if (local_118 != (long *)0x0) goto LAB_01c5c484;
          goto joined_r0x01c5c614;
        }
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (undefined1 *)*puVar13;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
        if (local_118 == (long *)0x0) goto joined_r0x01c5c614;
LAB_01c5c484:
        local_108 = (code *)CONCAT35(local_108._5_3_,4);
        local_100 = (uint5)(uint)local_100;
        uStack_f8 = (uint5)(uint)uStack_f8;
        local_110 = (undefined8 *)FUN_025d3f70();
        local_88 = (undefined1 *)0x53d987f9ef4a807b;
        pcStack_80 = "wormhole_out_keep_frame";
        local_78 = 0x17;
        local_70 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar22 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar22;
        uVar19 = *(ulong *)(lVar22 + 0x60);
        if (uVar19 == 0) {
LAB_01c5c6c8:
          uVar15 = 0;
        }
        else {
          uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            uVar21 = uVar19 - 1 & 0xdda9f413319d82e4;
          }
          else if (uVar19 < 0xdda9f413319d82e5) {
            uVar21 = 0;
            if (uVar19 != 0) {
              uVar21 = 0xdda9f413319d82e4 / uVar19;
            }
            uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar19;
          }
          else {
            uVar21 = 0xdda9f413319d82e4;
          }
          plVar23 = *(long **)(*(long *)(lVar22 + 0x58) + uVar21 * 8);
          if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
          goto LAB_01c5c6c8;
          if (1 < uVar20) {
            do {
              uVar20 = plVar23[1];
              if (uVar20 == 0xdda9f413319d82e4) {
                if (plVar23[2] == -0x22560becce627d1c) goto LAB_01c5c580;
              }
              else {
                if (uVar19 <= uVar20) {
                  uVar6 = 0;
                  if (uVar19 != 0) {
                    uVar6 = uVar20 / uVar19;
                  }
                  uVar20 = uVar20 - uVar6 * uVar19;
                }
                if (uVar20 != uVar21) break;
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
            goto LAB_01c5c6c8;
          }
          do {
            if (plVar23[1] != 0xdda9f413319d82e4) {
              if ((plVar23[1] & uVar19 - 1) == uVar21) goto LAB_01c5c878;
              goto LAB_01c5c6c8;
            }
            if (plVar23[2] == -0x22560becce627d1c) goto LAB_01c5c580;
LAB_01c5c878:
            plVar23 = (long *)*plVar23;
            uVar15 = 0;
          } while (plVar23 != (long *)0x0);
        }
        goto LAB_01c5c5c0;
      }
LAB_01c5bffc:
      bVar3 = *puVar7;
joined_r0x01c5c668:
      if (((bVar3 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar18 = *(undefined8 *)puVar8;
      local_78 = 0x17;
      local_70 = (long *)0x0;
      *(undefined8 *)puVar9 = uVar18;
      local_88 = (undefined1 *)0x6f81af4b2e7e287;
      pcStack_80 = "PLAY_STDISTORTION_ENTRY";
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      _local_100 = 0;
      _uStack_f8 = 0;
      local_110 = (undefined8 *)0x0;
      local_108 = (code *)0x0;
      FUN_02913338(uVar18,&local_88,&local_110,0,0,0);
      pcVar14 = local_108;
      if (local_108 == (code *)0x0) {
        local_108 = (code *)0x0;
      }
      else {
        _local_100 = 0;
        _uStack_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar14)(&local_f0);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    *(undefined1 *)(param_1 + 0x48c) = 1;
    uVar15 = 2;
  }
  *(undefined4 *)(param_1 + 0x290) = uVar15;
LAB_01c5bc00:
  FUN_01c5cfa4(param_1);
  return;
LAB_01c5caa4:
  plVar23 = (long *)plVar23[3];
  if (plVar23 == (long *)0x0) goto LAB_01c5cbac;
  plVar2 = plVar23 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar15 = FUN_00d78f50(plVar23,&local_88);
  do {
    iVar16 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
LAB_01c5cae4:
  _local_100 = CONCAT44(stack0xffffffffffffff04,uVar15);
  local_108._0_5_ = CONCAT14(1,(undefined4)local_108);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  FUN_025d35b8(local_120,&local_110);
  if (local_120 != (long *)0x0) {
    lVar22 = local_120[0xb];
    piVar24 = (int *)(lVar22 + 0xc);
    do {
      iVar16 = *piVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_120 + 0x20))();
    }
  }
joined_r0x01c5cb38:
  if (local_118 != (long *)0x0) {
    lVar22 = local_118[0xb];
    piVar24 = (int *)(lVar22 + 0xc);
    do {
      iVar16 = *piVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
LAB_01c5cb58:
  lVar26 = *(long *)(lVar26 + 8);
  piVar24 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar24;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
    if (bVar5) {
      *piVar24 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  goto LAB_01c5be48;
LAB_01c5c580:
  plVar23 = (long *)plVar23[3];
  if (plVar23 == (long *)0x0) goto LAB_01c5c6c8;
  plVar2 = plVar23 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar15 = FUN_00d78f50(plVar23,&local_88);
  do {
    iVar16 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
LAB_01c5c5c0:
  _local_100 = CONCAT44(stack0xffffffffffffff04,uVar15);
  local_108._0_5_ = CONCAT14(1,(undefined4)local_108);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  FUN_025d35b8(local_118,&local_110);
  if (local_118 != (long *)0x0) {
    lVar22 = local_118[0xb];
    piVar24 = (int *)(lVar22 + 0xc);
    do {
      iVar16 = *piVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
joined_r0x01c5c614:
  if (local_140 != (long *)0x0) {
    lVar22 = local_140[0xb];
    piVar24 = (int *)(lVar22 + 0xc);
    do {
      iVar16 = *piVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
LAB_01c5c634:
  lVar26 = *(long *)(lVar26 + 8);
  piVar24 = (int *)(lVar26 + 0xc);
  do {
    iVar16 = *piVar24;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
    if (bVar5) {
      *piVar24 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 != 0) goto LAB_01c5bffc;
  *(undefined8 *)(lVar26 + 0x18) = 0;
  (**(code **)(*plVar25 + 0x20))(plVar25);
  bVar3 = *puVar7;
  goto joined_r0x01c5c668;
}


