/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5cfa4; name: FUN_01c5cfa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c5cfa4(long param_1)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  long *plVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 in_q3 [16];
  undefined8 uVar28;
  long *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  code *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  ulong uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  ulong uStack_68;
  undefined8 local_58;
  
  puVar13 = PTR_DAT_0437a6e0;
  puVar12 = PTR_DAT_0437a6d8;
  puVar11 = PTR_DAT_043796e8;
  puVar10 = PTR_DAT_043796e0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  uVar28 = in_q3._8_8_;
  uVar18 = in_q3._0_8_;
  if (*(int *)(param_1 + 0x294) == 4) {
    if (*(char *)(param_1 + 0x4a5) == '\0') {
      return;
    }
    puVar20 = (uint *)(*(long *)(param_1 + 0x240) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x2f8) +
                                       (long)*(int *)(param_1 + 0x4a8) * 4) * 4 + 4);
    piVar1 = (int *)((long)puVar20 + (ulong)*puVar20);
    puVar23 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar2 = *puVar23;
    if (uVar2 < 5) {
      uVar26 = 0;
      uVar27 = 0;
      uVar17 = 0;
    }
    else {
      uVar26 = 0;
      uVar27 = 0;
      if ((ulong)puVar23[2] != 0) {
        uVar27 = *(undefined4 *)((long)piVar1 + (ulong)puVar23[2]);
      }
      if (uVar2 < 7) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar26 = 0;
        if ((ulong)puVar23[3] != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + (ulong)puVar23[3]);
        }
        if ((8 < uVar2) && ((ulong)puVar23[4] != 0)) {
          uVar17 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar23[4]);
        }
      }
    }
    plVar24 = (long *)CONCAT44(uVar26,uVar27);
    lVar21 = *(long *)(param_1 + 0x3a0);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      local_70 = plVar24;
      uStack_68 = uVar17;
      do {
        plVar25 = *(long **)(lVar21 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar18;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_01c5d164;
          if (plVar25 == (long *)puVar11) break;
          plVar25 = (long *)*plVar25;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            plVar25 = (long *)(lVar21 + -0x50);
            if (lVar21 != 0) {
              FUN_0199c138(&local_58,plVar25);
              if (local_58 != (long *)0x0) {
                FUN_009c69bc(&local_78);
                (**(code **)(*local_78 + 0x40))();
                local_90 = plVar24;
                uStack_88 = uVar17;
                uVar26 = FUN_01c5e3b0(param_1);
                uStack_98 = CONCAT44(uVar26,(undefined4)uStack_98);
                FUN_01c5dfc0(param_1,&local_90,&local_70,(long)&uStack_98 + 4);
                if (local_78 != (long *)0x0) {
                  lVar22 = local_78[0xb];
                  piVar1 = (int *)(lVar22 + 0xc);
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
                    *(undefined8 *)(lVar22 + 0x18) = 0;
                    (**(code **)(*local_78 + 0x20))();
                  }
                }
                if (local_58 != (long *)0x0) {
                  lVar22 = local_58[0xb];
                  piVar1 = (int *)(lVar22 + 0xc);
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
                    *(undefined8 *)(lVar22 + 0x18) = 0;
                    (**(code **)(*local_58 + 0x20))();
                  }
                }
              }
              lVar21 = *(long *)(lVar21 + 8);
              piVar1 = (int *)(lVar21 + 0xc);
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
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar25 + 0x20))(plVar25);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d164:
    uVar17 = (long)*(int *)(param_1 + 0x4a8) + 1;
    *(int *)(param_1 + 0x4a8) = (int)uVar17;
    if (uVar17 < (ulong)(*(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8) >> 2)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x4a5) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(long *)(param_1 + 0x300) = *(long *)(param_1 + 0x2f8);
    return;
  }
  switch(*(int *)(param_1 + 0x294)) {
  case 0:
    FUN_01c600c8();
    puVar9 = PTR_DAT_0437a6e0;
    puVar8 = PTR_DAT_0437a6d8;
    lVar21 = *(long *)(param_1 + 0x3b0);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          uVar19 = FUN_00ad3750();
          *(undefined8 *)puVar9 = uVar19;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d760;
          if (plVar24 == (long *)puVar9) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01c5db54;
          lVar21 = *(long *)(lVar21 + 0x18);
          if (lVar21 != 0) {
            plVar24 = (long *)(lVar21 + -0x50);
            FUN_02c90b50(plVar24,1);
            lVar21 = *(long *)(lVar21 + 8);
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 != 0) break;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*plVar24 + 0x20))(plVar24);
            lVar21 = *(long *)(param_1 + 0x3c0);
            pbVar6 = PTR_DAT_0437a6d8;
            puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
            goto joined_r0x01c5dbe8;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c5db54:
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d760:
    lVar21 = *(long *)(param_1 + 0x3c0);
    pbVar6 = PTR_DAT_0437a6d8;
    puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5dbe8:
    PTR_DAT_0437a6d8 = pbVar6;
    PTR_DAT_0437a6e0 = (undefined *)puVar7;
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*pbVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar6), iVar15 != 0)) {
          uVar19 = FUN_00ad3750();
          *puVar7 = uVar19;
          __cxa_guard_release(pbVar6);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d768;
          if (plVar24 == puVar7) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01c5dc34;
          lVar21 = *(long *)(lVar21 + 0x18);
          if (lVar21 != 0) {
            plVar24 = (long *)(lVar21 + -0x50);
            FUN_02c90b50(plVar24,1);
            lVar21 = *(long *)(lVar21 + 8);
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 != 0) break;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*plVar24 + 0x20))(plVar24);
            lVar21 = *(long *)(param_1 + 0x3d0);
            pbVar6 = PTR_DAT_0437a6d8;
            puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
            goto joined_r0x01c5dcc8;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c5dc34:
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d768:
    lVar21 = *(long *)(param_1 + 0x3d0);
    pbVar6 = PTR_DAT_0437a6d8;
    puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5dcc8:
    PTR_DAT_0437a6d8 = pbVar6;
    PTR_DAT_0437a6e0 = (undefined *)puVar7;
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*pbVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar6), iVar15 != 0)) {
          uVar19 = FUN_00ad3750();
          *puVar7 = uVar19;
          __cxa_guard_release(pbVar6);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d770;
          if (plVar24 == puVar7) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 != 0) {
              plVar24 = (long *)(lVar21 + -0x50);
              FUN_02c90b50(plVar24,1);
              lVar21 = *(long *)(lVar21 + 8);
              piVar1 = (int *)(lVar21 + 0xc);
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
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d770:
    FUN_009c69bc(&local_d0,param_1);
    (**(code **)(*local_d0 + 0x40))();
    if (local_d0 != (long *)0x0) {
      lVar21 = local_d0[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
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
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    puVar8 = PTR_DAT_04379c28;
    local_e0 = CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)_DAT_03889bf0 >> 0x20),
                        (float)uVar18 + (float)_DAT_03889bf0);
    uStack_d8 = CONCAT44((float)((ulong)uVar28 >> 0x20) + (float)((ulong)_UNK_03889bf8 >> 0x20),
                         (float)uVar28 + (float)_UNK_03889bf8);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar10 = PTR_DAT_04379c38;
    puVar9 = PTR_DAT_04379c30;
    local_58 = (long *)0x0;
    uVar18 = *(undefined8 *)PTR_DAT_04379c30;
    local_f0 = 0x1b;
    local_e8 = (long *)0x0;
    local_70 = (long *)0x0;
    uStack_68 = 0;
    local_100 = (long *)0x7ff474d18963ce5f;
    pcStack_f8 = "PLAY_STDISTORTION_CRACK_PRE";
    local_80 = 0;
    local_78 = (long *)0x0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar18;
    local_90 = (long *)0x0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    FUN_0291356c(uVar18,&local_100,&local_e0,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_d0,0,0);
    pcVar14 = local_c8;
    if (local_c8 == (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = (long *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar14)(&local_b0);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar18 = *(undefined8 *)puVar9;
    local_f0 = 0x25;
    local_e8 = (long *)0x0;
    local_100 = (long *)&DAT_2c69a153b16c8d6e;
    pcStack_f8 = "PLAY_STDISTORTION_CRACK_SPARK_PRE_RND";
    *(undefined8 *)puVar10 = uVar18;
    local_58 = (long *)0x0;
    local_70 = (long *)0x0;
    uStack_68 = 0;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_90 = (long *)0x0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    FUN_0291356c(uVar18,&local_100,&local_e0,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_d0,0,0);
    pcVar14 = local_c8;
    if (local_c8 == (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = (long *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar14)(&local_b0);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (*(long *)(param_1 + 0x390) == 0) {
      local_100 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_100);
      if (local_100 != (long *)0x0) {
        local_d0 = (long *)0xe8b9371a2070b289;
        local_c8 = (code *)0x399c095;
        local_c0 = 0x22;
        local_b8 = (long *)0x0;
        FUN_0290b66c(local_100,&local_d0,0);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (local_100 != (long *)0x0) {
          lVar21 = local_100[0xb];
          piVar1 = (int *)(lVar21 + 0xc);
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
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_100 + 0x20))();
          }
        }
      }
    }
    FUN_016c24d0(&local_d0,param_1 + 0x490);
    plVar24 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar25 = (long *)local_d0[0x58];
      if (plVar25 != (long *)0x0) {
        do {
          *(uint *)(plVar25 + 3) = *(uint *)(plVar25 + 3) & 0xfffffffb;
          FUN_01839500(plVar24);
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
        if (local_d0 == (long *)0x0) goto LAB_01c5d97c;
      }
      lVar21 = local_d0[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
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
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))(local_d0);
      }
    }
LAB_01c5d97c:
    if (*(int *)(param_1 + 0x488) == 1) {
      FUN_01c601f8(param_1,2,1);
    }
    *(undefined4 *)(param_1 + 0x294) = 1;
    return;
  case 1:
    break;
  case 2:
    iVar16 = *(int *)(param_1 + 0x488);
    if (iVar16 == 2) {
      uVar18 = 0;
    }
    else {
      if (iVar16 == 0) {
        return;
      }
      if (iVar16 != 1) goto LAB_01c5df90;
      uVar18 = 1;
    }
    FUN_01c5b830(param_1,uVar18);
LAB_01c5df90:
    *(undefined8 *)(param_1 + 0x294) = 0x200000004;
    return;
  default:
    return;
  case 5:
    lVar21 = *(long *)(param_1 + 0x400);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
          uVar18 = FUN_00ad3750();
          *(undefined8 *)puVar13 = uVar18;
          __cxa_guard_release(puVar12);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d028;
          if (plVar24 == (long *)puVar13) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 != 0) {
              plVar24 = (long *)(lVar21 + -0x50);
              lVar22 = FUN_02c90d14(plVar24);
              if (((lVar22 == 0) || (*(int *)(lVar22 + 0x17c) < 1)) ||
                 (*(char *)(lVar22 + 0xc) == '\0')) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              lVar21 = *(long *)(lVar21 + 8);
              piVar1 = (int *)(lVar21 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
              if (bVar5) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d028:
    puVar9 = PTR_DAT_0437a6e0;
    puVar8 = PTR_DAT_0437a6d8;
    lVar21 = *(long *)(param_1 + 0x410);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          uVar18 = FUN_00ad3750();
          *(undefined8 *)puVar9 = uVar18;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d030;
          if (plVar24 == (long *)puVar9) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 != 0) {
              plVar24 = (long *)(lVar21 + -0x50);
              lVar22 = FUN_02c90d14(plVar24);
              if (((lVar22 == 0) || (*(int *)(lVar22 + 0x17c) < 1)) ||
                 (*(char *)(lVar22 + 0xc) == '\0')) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              lVar21 = *(long *)(lVar21 + 8);
              piVar1 = (int *)(lVar21 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
              if (bVar5) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d030:
    puVar9 = PTR_DAT_0437a6e0;
    puVar8 = PTR_DAT_0437a6d8;
    lVar21 = *(long *)(param_1 + 0x430);
    if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
      piVar1 = (int *)(lVar21 + 0xc);
      iVar16 = *(int *)(lVar21 + 0xc);
      do {
        plVar24 = *(long **)(lVar21 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          uVar18 = FUN_00ad3750();
          *(undefined8 *)puVar9 = uVar18;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01c5d038;
          if (plVar24 == (long *)puVar9) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 != 0) {
              plVar24 = (long *)(lVar21 + -0x50);
              lVar22 = FUN_02c90d14(plVar24);
              if (((lVar22 == 0) || (*(int *)(lVar22 + 0x17c) < 1)) ||
                 (*(char *)(lVar22 + 0xc) == '\0')) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              lVar21 = *(long *)(lVar21 + 8);
              piVar1 = (int *)(lVar21 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))(plVar24);
              }
              if (bVar5) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01c5d038:
    if (*(long *)(param_1 + 0x440) != *(long *)(param_1 + 0x448)) {
      return;
    }
    uVar17 = FUN_01c5a7f0(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    FUN_01c601f8(param_1,*(undefined4 *)(param_1 + 0x298),0);
    *(undefined8 *)(param_1 + 0x294) = 0x100000003;
    *(undefined4 *)(param_1 + 0x488) = 0;
    FUN_016c24d0(&local_70,param_1 + 0x490);
    if (local_70 == (long *)0x0) {
      return;
    }
    FUN_015916d0(local_70,1,8,0);
    if (local_70 == (long *)0x0) {
      return;
    }
    lVar21 = local_70[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
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
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
      return;
    }
    return;
  case 6:
    FUN_01c5e40c(param_1);
    return;
  }
  FUN_01839b24((long)register0x00000008 + -0x30,param_1 + 0x360);
  if (unaff_x22 == (long *)0x0) {
LAB_01c5de9c:
    bVar5 = false;
  }
  else {
    FUN_02be88ac((long)register0x00000008 + -0x48,unaff_x22,0);
    FUN_00ab5ae0((long)register0x00000008 + -0x38,(long)register0x00000008 + -0x48);
    if (unaff_x25 != 0) {
      piVar1 = (int *)(unaff_x25 + 8);
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
        *(undefined8 *)(unaff_x25 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        FUN_02a44274(lVar21 + 0xd8,(long)register0x00000008 + -0x28);
      }
    }
    if (unaff_x23 == (long *)0x0) goto LAB_01c5de9c;
    lVar22 = unaff_x23[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    lVar21 = unaff_x23[0xf];
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
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*unaff_x23 + 0x20))();
    }
    if ((char)lVar21 == '\x01') goto LAB_01c5de9c;
    bVar5 = true;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar21 = unaff_x22[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*unaff_x22 + 0x20))();
      if (bVar5) {
        return;
      }
      goto LAB_01c5dec8;
    }
  }
  if (bVar5) {
    return;
  }
LAB_01c5dec8:
  *(undefined4 *)(param_1 + 0x294) = 2;
  return;
}


