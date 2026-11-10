/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026bf660; name: FUN_026bf660
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_026bf660(long param_1,undefined4 *param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_68;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  local_13c = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = *param_2;
  if (*(long *)(param_1 + 0xd8) == 0) {
    local_148 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_148);
  }
  if (*(long *)(param_1 + (long)*(int *)(param_1 + 0x84) * 0x10 + 0x88) == 0) {
    local_150 = (long *)0x0;
    lVar21 = *(long *)(param_1 + 0xe8);
    puVar7 = PTR_DAT_043794d0;
    puVar8 = PTR_DAT_04379fc8;
    puVar9 = PTR_DAT_04379fd0;
  }
  else {
    FUN_00959eac(&local_150);
    lVar21 = *(long *)(param_1 + 0xe8);
    puVar7 = PTR_DAT_043794d0;
    puVar8 = PTR_DAT_04379fc8;
    puVar9 = PTR_DAT_04379fd0;
  }
  PTR_DAT_043794d0 = puVar7;
  PTR_DAT_04379fc8 = puVar8;
  PTR_DAT_04379fd0 = puVar9;
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
    piVar2 = (int *)(lVar21 + 0xc);
    iVar11 = *(int *)(lVar21 + 0xc);
    do {
      plVar22 = *(long **)(lVar21 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto joined_r0x026bf6f8;
        if (plVar22 == (long *)puVar9) break;
        plVar22 = (long *)*plVar22;
      }
      iVar12 = *piVar2;
      if (iVar12 == iVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          plVar22 = (long *)0x0;
          if (*(long *)(lVar21 + 0x18) != 0) {
            plVar22 = (long *)(*(long *)(lVar21 + 0x18) + -0x50);
          }
          goto joined_r0x026c0298;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
joined_r0x026bf6f8:
  plVar22 = (long *)0x0;
joined_r0x026c0298:
  if (((local_148 == (long *)0x0) || (plVar22 == (long *)0x0)) || (local_150 == (long *)0x0))
  goto LAB_026c02a4;
  if (*(char *)((long)param_2 + 1) == '\0') {
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00ac3fa4(&local_120,local_150 + 0x49);
    FUN_0099c748(&local_68,&local_120);
    plVar20 = local_120;
    if (local_120 != (long *)0x0) {
      plVar19 = local_120 + 1;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_98 = (long *)*plVar20;
        FUN_02a44274(lVar21 + 0xd8,&local_98);
      }
    }
    if (local_68 != (long *)0x0) {
      uVar13 = (**(code **)(*local_68 + 0x1b0))();
      if ((uVar13 & 1) != 0) {
        local_13c = 1;
        plVar20 = local_68 + 0x15a;
        FUN_01839c8c(&local_98,plVar20);
        if (local_98 == (long *)0x0) {
          uVar24 = 0;
          uVar25 = 0;
          uVar13 = 0;
        }
        else {
          FUN_01839c8c(&local_120,plVar20);
          if (local_120 == (long *)0x0) {
LAB_026bfee8:
            uVar24 = 0;
            uVar25 = 0;
            uVar13 = 0;
          }
          else {
            lVar21 = local_120[0xb];
            piVar2 = (int *)(lVar21 + 0xc);
            iVar11 = *(int *)((long)local_120 + 0x7c);
            do {
              iVar12 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*local_120 + 0x20))();
            }
            if (iVar11 != 2) goto LAB_026bfee8;
            if (local_98[0x1a] == 0) {
              uVar24 = 0;
              uVar25 = 0;
              uVar13 = 0;
            }
            else {
              pauVar1 = (undefined1 (*) [16])(local_98[0x1a] + 0xc0);
              uVar24 = (undefined4)*(undefined8 *)*pauVar1;
              uVar25 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
              uVar13 = (ulong)auVar23._0_4_;
            }
          }
          if (local_98 != (long *)0x0) {
            lVar21 = local_98[0xb];
            piVar2 = (int *)(lVar21 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*local_98 + 0x20))();
            }
          }
        }
        local_130 = CONCAT44(uVar25,uVar24);
        uStack_128 = uVar13;
      }
      if (local_68 != (long *)0x0) {
        lVar21 = local_68[0xb];
        piVar2 = (int *)(lVar21 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
  }
  else {
    local_13c = 0;
    local_130 = 0;
    uStack_128 = 0;
  }
  uVar13 = (**(code **)(*local_150 + 0x140))();
  if (((uVar13 & 1) == 0) || (uVar13 = FUN_01af14b0(local_148,&local_140), (uVar13 & 1) == 0))
  goto LAB_026c02a4;
  (**(code **)(*local_150 + 0x148))();
  lVar21 = *(long *)PTR_DAT_0437b4f0;
  uVar25 = *(undefined4 *)(lVar21 + 0x1d4);
  uVar24 = *(undefined4 *)(lVar21 + 0x1cc);
  iVar11 = *(int *)(lVar21 + 0x1d0);
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  FUN_01901218(&local_120,plVar22 + 0x18);
  if (local_120 == (long *)0x0) {
    local_68 = (long *)0x0;
    plVar20 = local_68;
  }
  else {
    FUN_009b8630(&local_68);
    plVar19 = local_120;
    plVar20 = local_68;
    if (local_120 != (long *)0x0) {
      plVar3 = local_120 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_98 = (long *)*plVar19;
        FUN_02a44274(lVar21 + 0xd8,&local_98);
        plVar20 = local_68;
      }
    }
  }
  local_68 = plVar20;
  if (plVar20 != (long *)0x0) {
    local_120._4_4_ = (uint)((ulong)local_120 >> 0x20);
    if (*(char *)((long)param_2 + 1) == '\0') {
      local_120 = (long *)((ulong)local_120._4_4_ << 0x20);
      if ((char)plVar20[0x6e] == '\0') {
        uVar13 = (ulong)*(uint *)(plVar20 + 0x6c);
      }
      else {
        uVar13 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(plVar20 + 0x6a),4) -
                                       (float)((ulong)plVar20[0x68] >> 0x20),
                                       SUB164(*(undefined1 (*) [16])(plVar20 + 0x6a),0) -
                                       (float)plVar20[0x68]));
      }
      if ((int)plVar20[0x1baa] != 0) {
        FUN_01a3a62c(uVar13,1.0 / (float)iVar11,uVar25,plVar20,&local_120,uVar24);
      }
    }
    else {
      local_120 = (long *)((ulong)local_120._4_4_ << 0x20);
      if ((char)plVar20[0x6e] == '\0') {
        uVar13 = (ulong)*(uint *)(plVar20 + 0x6c);
      }
      else {
        uVar13 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(plVar20 + 0x6a),4) -
                                       (float)((ulong)plVar20[0x68] >> 0x20),
                                       SUB164(*(undefined1 (*) [16])(plVar20 + 0x6a),0) -
                                       (float)plVar20[0x68]));
      }
      FUN_01a3a980(uVar13,plVar20,&local_120);
      FUN_01a3afa8(0x43340000,local_68,1);
      FUN_01a349fc(local_68);
    }
    plVar20 = local_68;
    FUN_009c69bc(&local_158,local_148);
    FUN_01a4ad9c(plVar20,&local_158);
    if (local_158 != (long *)0x0) {
      lVar21 = local_158[0xb];
      piVar2 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_158 + 0x20))();
      }
    }
    if (*(char *)((long)local_68 + 0x3ea) == '\0') {
      if (local_68 == (long *)0x0) goto LAB_026bf8f4;
    }
    else {
      *(undefined1 *)((long)local_68 + 0x3ea) = 0;
      *(undefined4 *)((long)local_68 + 0x3ec) = 0;
      *(undefined1 *)(local_68 + 0x7e) = 0;
      *(undefined4 *)((long)local_68 + 0x3f4) = 0;
    }
    lVar21 = local_68[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_026bf8f4:
  FUN_009c69bc(&local_160,local_150);
  if (local_160 == (long *)0x0) {
LAB_026bfa20:
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_026bfa28;
LAB_026bfe00:
    FUN_00959d38(&local_120);
    plVar20 = local_120;
    if (local_120 != (long *)0x0) {
      if ((int)local_120[0xe] == 5) {
        *(undefined4 *)(local_120 + 0xe) = 5;
      }
      else {
        lVar15 = local_120[0x21];
        uVar13 = *(ulong *)(lVar15 + 0xa8);
        lVar21 = *(long *)(lVar15 + 0x70);
        if (*(long *)(lVar15 + 0x78) != lVar21) {
          uVar4 = *(long *)(lVar15 + 0xb0) + uVar13;
          puVar16 = (undefined8 *)(*(long *)(lVar21 + (uVar13 / 0x38) * 8) + (uVar13 % 0x38) * 0x48)
          ;
          puVar18 = (undefined8 *)(*(long *)(lVar21 + (uVar4 / 0x38) * 8) + (uVar4 % 0x38) * 0x48);
          if (puVar18 != puVar16) {
            plVar19 = (long *)(lVar21 + (uVar13 / 0x38) * 8);
            do {
              puVar16[7] = 0;
              puVar16[8] = 0;
              puVar16[5] = 0;
              puVar16[6] = 0;
              puVar16[3] = 0;
              puVar16[4] = 0;
              puVar16[1] = 0;
              puVar16[2] = 0;
              puVar17 = puVar16 + 9;
              *puVar16 = 0;
              if ((long)puVar17 - *plVar19 == 0xfc0) {
                plVar19 = plVar19 + 1;
                puVar17 = (undefined8 *)*plVar19;
              }
              puVar16 = puVar17;
            } while (puVar18 != puVar17);
          }
        }
        FUN_02604e3c(local_120,1);
        *(undefined4 *)(plVar20 + 0x2f) = 0;
        plVar20[0x30] = plVar20[0x30] & 0xfffffffffffffff8;
        *(undefined4 *)(plVar20 + 0xe) = 5;
        if (local_120 == (long *)0x0) goto LAB_026bfa2c;
      }
      lVar21 = local_120[0xb];
      piVar2 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_120 + 0x20))(local_120);
      }
    }
  }
  else {
    (**(code **)(*local_160 + 0x10))(&local_120);
    local_98 = (long *)0x0;
    pcStack_90 = (char *)0x0;
    FUN_0087f944(&local_98,&local_120);
    plVar20 = local_120;
    if (local_120 != (long *)0x0) {
      plVar19 = local_120 + 1;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_68 = (long *)*plVar20;
        FUN_02a44274(lVar21 + 0xd8,&local_68);
      }
    }
    if (local_98 == (long *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = *local_98;
    }
    FUN_018fcbb8(plVar22,lVar21);
    plVar20 = local_98;
    if (local_98 != (long *)0x0) {
      plVar19 = local_98 + 1;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_120 = (long *)*plVar20;
        FUN_02a44274(lVar21 + 0xd8,&local_120);
      }
    }
    if (local_160 == (long *)0x0) goto LAB_026bfa20;
    lVar21 = local_160[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 != 0) goto LAB_026bfa20;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*local_160 + 0x20))();
    if (*(long *)(param_1 + 0xf8) != 0) goto LAB_026bfe00;
LAB_026bfa28:
    local_120 = (long *)0x0;
  }
LAB_026bfa2c:
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar21 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar21;
  plVar20 = *(long **)(*(long *)(lVar21 + 0x50) + 0x30);
  if (plVar20 != (long *)0x0) {
    lVar21 = plVar20[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_026c02a4;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar21 = FUN_01467b34(plVar20[0x99],"View_Top");
  if (lVar21 != 0) {
    lVar21 = *(long *)(lVar21 + 0x3f30);
    if (lVar21 != 0) {
      *(ulong *)(lVar21 + 0x28) = *(ulong *)(lVar21 + 0x28) & 0xfffffffffffffffb;
    }
    lVar21 = FUN_01467b34(plVar20[0x99],"View_Top");
    if (lVar21 != 0) {
      lVar21 = *(long *)(lVar21 + 0x3f30);
      if (lVar21 != 0) {
        *(ulong *)(lVar21 + 0x28) = *(ulong *)(lVar21 + 0x28) & 0xfffffffffffffff7;
      }
      FUN_014698d0(plVar20);
      lVar21 = FUN_01467f18(plVar20[0x99],"ItemChangeView");
      if (lVar21 != 0) {
        *(ulong *)(lVar21 + 0x708) = *(ulong *)(lVar21 + 0x708) & 0xfffffffffffffffe;
        FUN_0257a184();
        FUN_0257a418(lVar21);
        if (*(int *)(lVar21 + 0x5ac) == 0) {
          FUN_02577d38(lVar21);
        }
        else {
          FUN_02578a10(lVar21);
        }
        FUN_02579328(lVar21);
        if (((*PTR_DAT_04379c28 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379c28);
        }
        lVar21 = *(long *)PTR_DAT_04379c30;
        *(long *)PTR_DAT_04379c38 = lVar21;
        if (lVar21 != 0) {
          local_98 = (long *)0xb05463bc15122ebb;
          pcStack_90 = "SET_STATE_RIDE_NONE";
          local_88 = 0x13;
          local_80 = (long *)0x0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_120 = (long *)0x0;
          local_118 = (code *)0x0;
          FUN_02913338(lVar21,&local_98,&local_120,0,0,0);
          pcVar10 = local_118;
          if (local_118 == (code *)0x0) {
            local_118 = (code *)0x0;
          }
          else {
            local_110 = 0;
            uStack_108 = 0;
            local_120 = (long *)0x0;
            local_118 = (code *)0x0;
            (*pcVar10)(&local_100);
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
        }
        lVar21 = plVar20[0xb];
        piVar2 = (int *)(lVar21 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        lVar21 = plVar22[0xb];
        piVar2 = (int *)(lVar21 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
        if (local_150 != (long *)0x0) {
          lVar21 = local_150[0xb];
          piVar2 = (int *)(lVar21 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        if (local_148 != (long *)0x0) {
          lVar21 = local_148[0xb];
          piVar2 = (int *)(lVar21 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_148 + 0x20))();
          }
        }
        return;
      }
    }
  }
LAB_026c02a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


