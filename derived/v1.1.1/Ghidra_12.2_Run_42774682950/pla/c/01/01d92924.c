/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d92924; name: FUN_01d92924
 */


void FUN_01d92924(long *param_1,undefined8 param_2,byte param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 param_6,byte param_7,uint param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int *piVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  float fVar32;
  long *local_1e8;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  long *local_1b0;
  long *local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  long *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  ushort local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  uint local_f0;
  byte local_ec;
  ulong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0 [2];
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  long *local_68;
  
  local_1b0 = (long *)param_1[0xd];
  if (local_1b0 != (long *)0x0) {
    lVar27 = local_1b0[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar22;
    }
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = *piVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar20 != 0)) {
    local_90 = (long *)FUN_00938550();
    puVar8 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_90);
    FUN_00100250(PTR_LAB_0437a8d8,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar28 = *(long **)PTR_DAT_0437a7d0;
  if (plVar28 == (long *)0x0) {
    local_1a8 = (long *)PTR_DAT_04379c88;
  }
  else {
    local_1a8 = plVar28 + 0xb;
  }
  local_1a8 = (long *)*local_1a8;
  if (plVar28 == (long *)0x0) {
    plVar31 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar31 = plVar28 + 0xc;
  }
  local_1a0 = *plVar31;
  if (plVar28 == (long *)0x0) {
    local_198 = 0;
  }
  else {
    local_198 = plVar28[0xd];
  }
  local_190 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  local_188 = (long *)0x0;
  local_180 = 0;
  local_190 = plVar28;
  FUN_0095e898(&local_188,param_1 + 0x12);
  (**(code **)(param_1[0x24] + 0x30))(param_1 + 0x24,&local_1b0);
  plVar28 = local_188;
  if (local_188 != (long *)0x0) {
    plVar31 = local_188 + 1;
    do {
      iVar20 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = iVar20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 0) {
      local_188[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_90 = (long *)*plVar28;
      FUN_02a44274(lVar27 + 0xd8,&local_90);
    }
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    lVar27 = local_1b0[0xb];
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      iVar20 = *piVar23;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_1b0 + 0x20))();
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  lVar27 = param_1[0x12];
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar23 = (int *)(lVar27 + 0xc);
    iVar20 = *(int *)(lVar27 + 0xc);
    do {
      plVar28 = *(long **)(lVar27 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar8), iVar21 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar21 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar21 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar22;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar28 == (long *)0x0) goto LAB_01d92ae4;
        if (plVar28 == (long *)puVar9) break;
        plVar28 = (long *)*plVar28;
      }
      iVar21 = *piVar23;
      if (iVar21 == iVar20) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar12) {
          *piVar23 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01d9319c;
        lVar27 = *(long *)(lVar27 + 0x18);
        plVar28 = (long *)(lVar27 + -0x50);
        if (lVar27 != 0) {
          FUN_0199c1ac(&local_98,plVar28);
          if (local_98 != (long *)0x0) {
            lVar26 = param_1[0xd];
            (**(code **)(*local_98 + 0x18))(&local_1b0);
            local_90 = (long *)0x0;
            uStack_88 = 0;
            FUN_0198c5c0(&local_90,&local_1b0);
            plVar31 = local_1b0;
            if (local_1b0 != (long *)0x0) {
              plVar24 = local_1b0 + 1;
              do {
                iVar20 = (int)*plVar24 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar12) {
                  *(int *)plVar24 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                local_1b0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar30 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar30;
                local_e0 = (undefined8 *)*plVar31;
                FUN_02a44274(lVar30 + 0xd8,&local_e0);
              }
            }
            FUN_0199ce28(&local_1b0,plVar28);
            FUN_0199d5ec(&local_e0,plVar28);
            FUN_0199f078(&local_b0,plVar28);
            lVar26 = FUN_01cf2950(lVar26,*(undefined8 *)(lVar26 + 8),&local_90,&local_1b0,&local_e0,
                                  &local_b0);
            if (lVar26 != 0) {
              lVar30 = *(long *)(lVar26 + 0x58);
              if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
              if (*(long *)(lVar30 + 0x10) == 0) {
                uVar22 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
                *(undefined8 *)(lVar30 + 0x10) = uVar22;
              }
              piVar23 = (int *)(lVar30 + 0xc);
              do {
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = *piVar23 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar24 = (long *)param_1[0x102];
            param_1[0x102] = lVar26;
            plVar31 = local_b0;
            if (plVar24 != (long *)0x0) {
              lVar26 = plVar24[0xb];
              piVar23 = (int *)(lVar26 + 0xc);
              do {
                iVar20 = *piVar23;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = iVar20 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))();
                plVar31 = local_b0;
              }
            }
            local_b0 = plVar31;
            if (plVar31 != (long *)0x0) {
              plVar24 = plVar31 + 1;
              do {
                iVar20 = (int)*plVar24 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar12) {
                  *(int *)plVar24 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                plVar31[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_68 = (long *)*plVar31;
                FUN_02a44274(lVar26 + 0xd8,&local_68);
              }
            }
            puVar7 = local_e0;
            if (local_e0 != (undefined8 *)0x0) {
              piVar23 = (int *)(local_e0 + 1);
              do {
                iVar20 = *piVar23;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = iVar20 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 + -1 == 0) {
                local_e0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_b0 = (long *)*puVar7;
                FUN_02a44274(lVar26 + 0xd8,&local_b0);
              }
            }
            plVar31 = local_1b0;
            if (local_1b0 != (long *)0x0) {
              plVar24 = local_1b0 + 1;
              do {
                iVar20 = (int)*plVar24 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar12) {
                  *(int *)plVar24 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                local_1b0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_e0 = (undefined8 *)*plVar31;
                FUN_02a44274(lVar26 + 0xd8,&local_e0);
              }
            }
            plVar31 = local_90;
            if (local_90 != (long *)0x0) {
              plVar24 = local_90 + 1;
              do {
                iVar20 = (int)*plVar24 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar12) {
                  *(int *)plVar24 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_1b0 = (long *)*plVar31;
                FUN_02a44274(lVar26 + 0xd8,&local_1b0);
              }
            }
            if (local_98 != (long *)0x0) {
              lVar26 = local_98[0xb];
              piVar23 = (int *)(lVar26 + 0xc);
              do {
                iVar20 = *piVar23;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = iVar20 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_98 + 0x20))();
              }
            }
          }
          lVar27 = *(long *)(lVar27 + 8);
          piVar23 = (int *)(lVar27 + 0xc);
          do {
            iVar20 = *piVar23;
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar12) {
              *piVar23 = iVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar20 + -1 != 0) break;
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*plVar28 + 0x20))(plVar28);
          lVar27 = param_1[0x37];
          pbVar5 = PTR_DAT_043794d0;
          pbVar6 = PTR_DAT_043796e0;
          puVar7 = (undefined8 *)PTR_DAT_043796e8;
          goto joined_r0x01d93500;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01d9319c:
      iVar20 = iVar21;
    } while (iVar21 != 0);
  }
LAB_01d92ae4:
  lVar27 = param_1[0x37];
  pbVar5 = PTR_DAT_043794d0;
  pbVar6 = PTR_DAT_043796e0;
  puVar7 = (undefined8 *)PTR_DAT_043796e8;
joined_r0x01d93500:
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043796e0 = pbVar6;
  PTR_DAT_043796e8 = (undefined *)puVar7;
  if (lVar27 == 0) {
LAB_01d93188:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar27 = param_1[0x12];
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar23 = (int *)(lVar27 + 0xc);
    iVar20 = *(int *)(lVar27 + 0xc);
    do {
      plVar28 = *(long **)(lVar27 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar6), iVar21 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar5), iVar21 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar22;
          __cxa_guard_release(pbVar5);
        }
        *puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (plVar28 == (long *)0x0) goto LAB_01d92af4;
        if (plVar28 == puVar7) break;
        plVar28 = (long *)*plVar28;
      }
      iVar21 = *piVar23;
      if (iVar21 == iVar20) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar12) {
          *piVar23 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar27 = *(long *)(lVar27 + 0x18);
          plVar28 = (long *)(lVar27 + -0x50);
          if (lVar27 != 0) {
            lVar26 = param_1[0x37];
            FUN_0199bf58(local_c0,plVar28);
            FUN_01b3969c(lVar26,local_c0);
            if (local_c0[0] != (long *)0x0) {
              plVar31 = local_c0[0] + 1;
              do {
                iVar20 = (int)*plVar31 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar12) {
                  *(int *)plVar31 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                local_c0[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_1b0 = (long *)*local_c0[0];
                FUN_02a44274(lVar26 + 0xd8,&local_1b0);
              }
            }
            lVar27 = *(long *)(lVar27 + 8);
            piVar23 = (int *)(lVar27 + 0xc);
            do {
              iVar20 = *piVar23;
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar12) {
                *piVar23 = iVar20 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar20 + -1 == 0) {
              *(undefined8 *)(lVar27 + 0x18) = 0;
              (**(code **)(*plVar28 + 0x20))(plVar28);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar20 = iVar21;
    } while (iVar21 != 0);
  }
LAB_01d92af4:
  plVar28 = *(long **)(param_1[0x37] + 0x5e8);
  if (plVar28 == (long *)0x0) {
    local_c8 = (long *)0x0;
  }
  else {
    plVar31 = plVar28 + 10;
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      local_c8 = plVar28;
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_1 + 0x78))(param_1,&local_c8);
  if (local_c8 != (long *)0x0) {
    plVar31 = local_c8 + 10;
    do {
      iVar20 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = iVar20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  local_e0 = (undefined8 *)((ulong)local_e0 & 0xffff000000000000);
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0xffffffff00000000;
  uVar17 = FUN_02c6849c(plVar28[0x13]);
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,uVar17);
  uVar16 = FUN_02c6f924(plVar28[0x13]);
  local_e0._0_6_ = CONCAT24(uVar16,(undefined4)local_e0);
  local_d8 = FUN_02c6f5e8(plVar28[0x13]);
  uVar18 = FUN_02c68b0c(plVar28[0x13]);
  uVar19 = FUN_02c70958(plVar28[0x13]);
  local_d4 = CONCAT11(local_d4._1_1_,
                      (uVar18 & 0xfff0 ^ uVar18 >> 0x10 ^ uVar19 >> 0x10 ^ uVar19 & 0xfff0) < 0x10);
  bVar13 = FUN_02c6d5b0(plVar28[0x13]);
  bVar14 = FUN_02c6d8ec(plVar28[0x13]);
  bVar15 = FUN_02c7725c(plVar28[0x13]);
  puVar8 = PTR_DAT_0437a708;
  fVar32 = (float)bVar15 / 255.0 + (float)bVar15 / 255.0 + -1.0;
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar10 = PTR_DAT_0437a718;
  puVar9 = PTR_DAT_0437a710;
  uVar22 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar22;
  piVar23 = (int *)FUN_010aa4a0(uVar22,(ulong)local_e0 & 0xffffffff,local_e0._4_2_,local_d8);
  uVar17 = FUN_010a0650(fVar32,(ulong)local_e0 & 0xffffffff,local_e0._4_2_,local_d8,bVar13 & 1,
                        bVar14 & 1);
  *(undefined4 *)(param_1 + 0x103) = uVar17;
  uVar17 = 0;
  if ((0x2a < *(ushort *)((long)piVar23 - (long)*piVar23)) &&
     (uVar25 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[0x15], uVar25 != 0)) {
    uVar17 = *(undefined4 *)((long)piVar23 + uVar25);
  }
  lVar27 = param_1[0x12];
  *(undefined4 *)((long)param_1 + 0x81c) = uVar17;
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar23 = (int *)(lVar27 + 0xc);
    local_1e8._0_4_ = *(int *)(lVar27 + 0xc);
    do {
      plVar31 = *(long **)(lVar27 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar20 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar22;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar31 == (long *)0x0) goto LAB_01d92c98;
        if (plVar31 == (long *)PTR_DAT_043796e8) break;
        plVar31 = (long *)*plVar31;
      }
      iVar20 = *piVar23;
      if (iVar20 == (int)local_1e8) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar12) {
          *piVar23 = (int)local_1e8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01d93884;
        lVar27 = *(long *)(lVar27 + 0x18);
        plVar31 = (long *)(lVar27 + -0x50);
        if (lVar27 != 0) {
          FUN_0199c304(&local_1b0,plVar31);
          if (local_1b0 == (long *)0x0) {
            local_98 = (long *)0x0;
          }
          else {
            FUN_009acf14(&local_98);
            plVar24 = local_1b0;
            if (local_1b0 != (long *)0x0) {
              plVar29 = local_1b0 + 1;
              do {
                iVar20 = (int)*plVar29 + -1;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar12) {
                  *(int *)plVar29 = iVar20;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 == 0) {
                local_1b0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar26 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar26;
                local_90 = (long *)*plVar24;
                FUN_02a44274(lVar26 + 0xd8,&local_90);
              }
            }
          }
          if (local_98 != (long *)0x0) {
            FUN_0199c5b0(&local_1b0,plVar31);
            if (local_1b0 == (long *)0x0) {
              local_a0 = (long *)0x0;
            }
            else {
              FUN_009cd8d4(&local_a0);
              plVar24 = local_1b0;
              if (local_1b0 != (long *)0x0) {
                plVar29 = local_1b0 + 1;
                do {
                  iVar20 = (int)*plVar29 + -1;
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar12) {
                    *(int *)plVar29 = iVar20;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar20 == 0) {
                  local_1b0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar26 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar26;
                  local_90 = (long *)*plVar24;
                  FUN_02a44274(lVar26 + 0xd8,&local_90);
                }
              }
            }
            if (local_a0 != (long *)0x0) {
              FUN_0199d058(&local_1b0,plVar31);
              plVar24 = local_1b0;
              if (local_1b0 != (long *)0x0) {
                if (*(int *)((long)local_1b0 + 0xc) == 0) {
LAB_01d94754:
                  plVar24 = (long *)0x0;
                  plVar29 = local_1b0;
                }
                else {
                  piVar23 = (int *)((long)local_1b0 + 0xc);
                  iVar20 = *(int *)((long)local_1b0 + 0xc);
                  while( true ) {
                    local_1e8 = (long *)plVar24[2];
                    if (((*PTR_DAT_04379d80 & 1) == 0) &&
                       (iVar21 = __cxa_guard_acquire(PTR_DAT_04379d80), iVar21 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar21 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar21 != 0)) {
                        uVar22 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_04379d88 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_04379d80);
                      if (local_1e8 != (long *)0x0) goto LAB_01d93c10;
                      goto LAB_01d94754;
                    }
                    while( true ) {
                      if (local_1e8 == (long *)0x0) goto LAB_01d94754;
LAB_01d93c10:
                      if (local_1e8 == (long *)PTR_DAT_04379d88) break;
                      local_1e8 = (long *)*local_1e8;
                    }
                    iVar21 = *piVar23;
                    if (iVar21 == iVar20) break;
                    ClearExclusiveLocal();
LAB_01d93be8:
                    iVar20 = iVar21;
                    if (iVar21 == 0) goto LAB_01d94754;
                  }
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                  if (bVar12) {
                    *piVar23 = iVar20 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_01d93be8;
                  lVar26 = plVar24[3];
                  plVar24 = (long *)0x0;
                  plVar29 = local_1b0;
                  if (lVar26 != 0) {
                    plVar24 = (long *)(lVar26 + -0x50);
                  }
                }
                local_1b0 = plVar29;
                if (plVar29 != (long *)0x0) {
                  plVar1 = plVar29 + 1;
                  do {
                    iVar20 = (int)*plVar1 + -1;
                    cVar3 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar12) {
                      *(int *)plVar1 = iVar20;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar20 == 0) {
                    plVar29[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar26 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar26;
                    local_90 = (long *)*plVar29;
                    FUN_02a44274(lVar26 + 0xd8,&local_90);
                  }
                }
                if (plVar24 != (long *)0x0) {
                  iVar20 = FUN_025acc30(plVar24);
                  if (iVar20 - 5U < 2) {
                    if (((*puVar8 & 1) == 0) &&
                       (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar20 != 0)) {
                      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_0437a708);
                    }
                    uVar22 = *(undefined8 *)puVar9;
                    *(undefined8 *)puVar10 = uVar22;
                    piVar23 = (int *)FUN_010aa4a0(uVar22,(ulong)local_e0 & 0xffffffff,local_e0._4_2_
                                                  ,local_d8);
                    if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 0x21) ||
                       (uVar25 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[0x10],
                       uVar25 == 0)) goto LAB_01d93ccc;
                    bVar12 = *(char *)((long)piVar23 + uVar25) != '\0';
                  }
                  else {
LAB_01d93ccc:
                    bVar12 = false;
                  }
                  local_150 = 0;
                  local_f0 = 0;
                  local_160 = 0;
                  puStack_158 = &DAT_cbf29ce484222645;
                  local_f8 = &local_e0;
                  local_14c = 1;
                  local_ec = 1;
                  local_e8 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_190 = (long *)0x0;
                  local_188 = (long *)0x0;
                  local_1a0 = 0;
                  local_198 = 0;
                  local_1a8 = (long *)0x0;
                  local_1b0 = (long *)(ulong)param_8;
                  local_148 = 0;
                  uStack_140 = 0;
                  local_138 = 0;
                  uStack_130 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  plVar29 = (long *)param_1[0xd];
                  if (plVar29 == (long *)0x0) {
                  }
                  else {
                    lVar26 = plVar29[0xb];
                    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
                    if (*(long *)(lVar26 + 0x10) == 0) {
                      uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
                      *(undefined8 *)(lVar26 + 0x10) = uVar22;
                    }
                    piVar23 = (int *)(lVar26 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar4) {
                        *piVar23 = *piVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (local_1a8 != (long *)0x0) {
                      lVar26 = local_1a8[0xb];
                      piVar23 = (int *)(lVar26 + 0xc);
                      do {
                        iVar20 = *piVar23;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                        if (bVar4) {
                          *piVar23 = iVar20 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar20 + -1 == 0) {
                        *(undefined8 *)(lVar26 + 0x18) = 0;
                        lVar26 = *local_1a8;
                        local_1a8 = plVar29;
                        (**(code **)(lVar26 + 0x20))();
                        plVar29 = local_1a8;
                      }
                    }
                  }
                  local_1a8 = plVar29;
                  FUN_00b645bc(&local_1a0,param_1 + 0x10);
                  FUN_0199f078(&local_90,plVar31);
                  FUN_01c8f130(&local_190,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_b0 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_b0);
                    }
                  }
                  FUN_0199f718(&local_90,plVar31);
                  FUN_019d1ef8(&local_180,&local_90);
                  plVar29 = local_90;
                  local_170 = local_80;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_b0 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_b0);
                    }
                  }
                  plVar29 = (long *)local_98[0x10];
                  if (plVar29 != (long *)0x0) {
                    lVar26 = plVar29[0xb];
                    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
                    if (*(long *)(lVar26 + 0x10) == 0) {
                      uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
                      *(undefined8 *)(lVar26 + 0x10) = uVar22;
                    }
                    piVar23 = (int *)(lVar26 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar4) {
                        *piVar23 = *piVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  (**(code **)(*plVar29 + 0x18))(&local_90,plVar29);
                  local_b0 = (long *)0x0;
                  uStack_a8 = 0;
                  FUN_01690e2c(&local_b0,&local_90);
                  plVar1 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar2 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar2 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar4) {
                        *(int *)plVar2 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_68 = (long *)*plVar1;
                      FUN_02a44274(lVar26 + 0xd8,&local_68);
                    }
                  }
                  FUN_01d2a798(&uStack_168,&local_b0);
                  plVar1 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar2 = local_b0 + 1;
                    do {
                      iVar20 = (int)*plVar2 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar4) {
                        *(int *)plVar2 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*plVar1;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  lVar26 = plVar29[0xb];
                  piVar23 = (int *)(lVar26 + 0xc);
                  do {
                    iVar20 = *piVar23;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                    if (bVar4) {
                      *piVar23 = iVar20 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar20 + -1 == 0) {
                    *(undefined8 *)(lVar26 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))(plVar29);
                  }
                  (**(code **)(*local_98 + 0x18))(&local_90);
                  local_b0 = (long *)0x0;
                  uStack_a8 = 0;
                  FUN_0198cec0(&local_b0,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_68 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_68);
                    }
                  }
                  FUN_00b6231c(&local_108,&local_b0);
                  plVar29 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar1 = local_b0 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  local_14c = CONCAT11(param_5,~param_3) & 0x101;
                  local_150 = param_4;
                  (**(code **)(*(long *)param_1[0x37] + 0x10))(&local_90);
                  local_b0 = (long *)0x0;
                  uStack_a8 = 0;
                  FUN_009cc414(&local_b0,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_68 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_68);
                    }
                  }
                  FUN_00b6051c(&local_148,&local_b0);
                  plVar29 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar1 = local_b0 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  (**(code **)(*(long *)param_1[0x102] + 0x10))(&local_90);
                  local_b0 = (long *)0x0;
                  uStack_a8 = 0;
                  FUN_01afeab4(&local_b0,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_68 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_68);
                    }
                  }
                  FUN_01b01b6c(&local_138,&local_b0);
                  plVar29 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar1 = local_b0 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  FUN_01f07da0(&local_90,local_a0,0);
                  FUN_01364ab0(&local_128,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_b0 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_b0);
                    }
                  }
                  FUN_0199c708(&local_1b8,plVar31);
                  (**(code **)(*local_1b8 + 0x10))(&local_90);
                  local_b0 = (long *)0x0;
                  uStack_a8 = 0;
                  FUN_0193d560(&local_b0,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_68 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_68);
                    }
                  }
                  FUN_01940194(&local_118,&local_b0);
                  plVar29 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar1 = local_b0 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*plVar29;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  if (local_1b8 != (long *)0x0) {
                    lVar26 = local_1b8[0xb];
                    piVar23 = (int *)(lVar26 + 0xc);
                    do {
                      iVar20 = *piVar23;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar4) {
                        *piVar23 = iVar20 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 + -1 == 0) {
                      *(undefined8 *)(lVar26 + 0x18) = 0;
                      (**(code **)(*local_1b8 + 0x20))();
                    }
                  }
                  local_f0 = CONCAT13(bVar12,(int3)CONCAT22(param_6,CONCAT11(bVar14,bVar13))) &
                             0xff010101;
                  local_e8 = (ulong)(uint)fVar32;
                  local_ec = param_7 & 1;
                  lVar26 = FUN_01d39894(param_1[0xd],param_2,&local_1b0);
                  if (lVar26 != 0) {
                    lVar30 = *(long *)(lVar26 + 0x58);
                    if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
                    if (*(long *)(lVar30 + 0x10) == 0) {
                      uVar22 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
                      *(undefined8 *)(lVar30 + 0x10) = uVar22;
                    }
                    piVar23 = (int *)(lVar30 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar12) {
                        *piVar23 = *piVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  plVar29 = (long *)param_1[0x36];
                  param_1[0x36] = lVar26;
                  if (plVar29 != (long *)0x0) {
                    lVar26 = plVar29[0xb];
                    piVar23 = (int *)(lVar26 + 0xc);
                    do {
                      iVar20 = *piVar23;
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar12) {
                        *piVar23 = iVar20 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 + -1 == 0) {
                      *(undefined8 *)(lVar26 + 0x18) = 0;
                      (**(code **)(*plVar29 + 0x20))();
                    }
                  }
                  lVar26 = param_1[0x37];
                  (**(code **)(*(long *)param_1[0x36] + 0x10))(&local_90);
                  local_1c8 = (undefined8 *)0x0;
                  uStack_1c0 = 0;
                  FUN_01caabc4(&local_1c8,&local_90);
                  plVar29 = local_90;
                  if (local_90 != (long *)0x0) {
                    plVar1 = local_90 + 1;
                    do {
                      iVar20 = (int)*plVar1 + -1;
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar12) {
                        *(int *)plVar1 = iVar20;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 == 0) {
                      local_90[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar30 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar30;
                      local_b0 = (long *)*plVar29;
                      FUN_02a44274(lVar30 + 0xd8,&local_b0);
                    }
                  }
                  FUN_01b396a4(lVar26,&local_1c8);
                  puVar7 = local_1c8;
                  if (local_1c8 != (undefined8 *)0x0) {
                    piVar23 = (int *)(local_1c8 + 1);
                    do {
                      iVar20 = *piVar23;
                      cVar3 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                      if (bVar12) {
                        *piVar23 = iVar20 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 + -1 == 0) {
                      local_1c8[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar26 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar26;
                      local_90 = (long *)*puVar7;
                      FUN_02a44274(lVar26 + 0xd8,&local_90);
                    }
                  }
                  FUN_01d39a7c(&local_1b0);
                  lVar26 = plVar24[0xb];
                  piVar23 = (int *)(lVar26 + 0xc);
                  do {
                    iVar20 = *piVar23;
                    cVar3 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                    if (bVar12) {
                      *piVar23 = iVar20 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar20 + -1 == 0) {
                    *(undefined8 *)(lVar26 + 0x18) = 0;
                    (**(code **)(*plVar24 + 0x20))(plVar24);
                  }
                }
              }
              if (local_a0 != (long *)0x0) {
                lVar26 = local_a0[0xb];
                piVar23 = (int *)(lVar26 + 0xc);
                do {
                  iVar20 = *piVar23;
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                  if (bVar12) {
                    *piVar23 = iVar20 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar20 + -1 == 0) {
                  *(undefined8 *)(lVar26 + 0x18) = 0;
                  (**(code **)(*local_a0 + 0x20))();
                }
              }
            }
            if (local_98 != (long *)0x0) {
              lVar26 = local_98[0xb];
              piVar23 = (int *)(lVar26 + 0xc);
              do {
                iVar20 = *piVar23;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = iVar20 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_98 + 0x20))();
              }
            }
          }
          lVar27 = *(long *)(lVar27 + 8);
          piVar23 = (int *)(lVar27 + 0xc);
          do {
            iVar20 = *piVar23;
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar12) {
              *piVar23 = iVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar20 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar31 + 0x20))(plVar31);
          }
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01d93884:
      local_1e8._0_4_ = iVar20;
    } while (iVar20 != 0);
  }
LAB_01d92c98:
  puVar11 = PTR_DAT_043796e8;
  puVar10 = PTR_DAT_043796e0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  local_1a8 = (long *)0x0;
  local_1a0 = 0;
  local_1b0 = (long *)0x0;
  lVar27 = param_1[0x12];
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
    piVar23 = (int *)(lVar27 + 0xc);
    iVar20 = *(int *)(lVar27 + 0xc);
    do {
      plVar31 = *(long **)(lVar27 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar10), iVar21 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar8), iVar21 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar22;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar31 == (long *)0x0) goto LAB_01d92ca8;
        if (plVar31 == (long *)puVar11) break;
        plVar31 = (long *)*plVar31;
      }
      iVar21 = *piVar23;
      if (iVar21 == iVar20) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar12) {
          *piVar23 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar27 = *(long *)(lVar27 + 0x18);
          plVar31 = (long *)(lVar27 + -0x50);
          if (lVar27 != 0) {
            FUN_0199c708(&local_90,plVar31);
            plVar24 = local_90;
            if (local_90 != (long *)0x0) {
              lVar26 = local_90[0xb];
              piVar23 = (int *)(lVar26 + 0xc);
              do {
                iVar20 = *piVar23;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
                if (bVar12) {
                  *piVar23 = iVar20 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar20 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_90 + 0x20))(local_90);
              }
              FUN_02599700(&local_90,plVar24);
              FUN_019d1ef8(&local_1b0,&local_90);
              plVar24 = local_90;
              local_1a0 = local_80;
              if (local_90 != (long *)0x0) {
                plVar29 = local_90 + 1;
                do {
                  iVar20 = (int)*plVar29 + -1;
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar12) {
                    *(int *)plVar29 = iVar20;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar20 == 0) {
                  local_90[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar26 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar26;
                  local_b0 = (long *)*plVar24;
                  FUN_02a44274(lVar26 + 0xd8,&local_b0);
                }
              }
            }
            lVar27 = *(long *)(lVar27 + 8);
            piVar23 = (int *)(lVar27 + 0xc);
            do {
              iVar20 = *piVar23;
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar12) {
                *piVar23 = iVar20 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar20 + -1 == 0) {
              *(undefined8 *)(lVar27 + 0x18) = 0;
              (**(code **)(*plVar31 + 0x20))(plVar31);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar20 = iVar21;
    } while (iVar21 != 0);
  }
LAB_01d92ca8:
  local_98 = (long *)param_1[0xd];
  if (local_98 != (long *)0x0) {
    lVar27 = local_98[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar22;
    }
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = *piVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_90 = (long *)0x0;
  uStack_88 = 0;
  FUN_01435a5c(&local_90,param_1[0x36] + 0x3c0);
  local_a0 = (long *)param_1[0x37];
  if (local_a0 != (long *)0x0) {
    lVar27 = local_a0[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01d93188;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar22;
    }
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = *piVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01cafcb0(&local_68,&local_98,&local_90,&local_a0,&local_1b0,param_1 + 0x3a);
  if (local_68 != (long *)0x0) {
    lVar27 = local_68[0xb];
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      iVar20 = *piVar23;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  plVar31 = local_90;
  if (local_a0 != (long *)0x0) {
    lVar27 = local_a0[0xb];
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      iVar20 = *piVar23;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
      plVar31 = local_90;
    }
  }
  local_90 = plVar31;
  if (plVar31 != (long *)0x0) {
    plVar24 = plVar31 + 1;
    do {
      iVar20 = (int)*plVar24 + -1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *(int *)plVar24 = iVar20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 0) {
      plVar31[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_b0 = (long *)*plVar31;
      FUN_02a44274(lVar27 + 0xd8,&local_b0);
    }
  }
  plVar31 = local_1b0;
  if (local_98 != (long *)0x0) {
    lVar27 = local_98[0xb];
    piVar23 = (int *)(lVar27 + 0xc);
    do {
      iVar20 = *piVar23;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar12) {
        *piVar23 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      plVar31 = local_1b0;
    }
  }
  local_1b0 = plVar31;
  if (plVar31 != (long *)0x0) {
    plVar24 = plVar31 + 1;
    do {
      iVar20 = (int)*plVar24 + -1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *(int *)plVar24 = iVar20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 0) {
      plVar31[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_b0 = (long *)*plVar31;
      FUN_02a44274(lVar27 + 0xd8,&local_b0);
    }
  }
  if (plVar28 != (long *)0x0) {
    plVar31 = plVar28 + 10;
    do {
      iVar20 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = iVar20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  return;
}


