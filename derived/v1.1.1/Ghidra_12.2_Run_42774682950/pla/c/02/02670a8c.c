/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02670a8c; name: FUN_02670a8c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02670a8c(long *param_1,char *param_2)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int *piVar3;
  char cVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  ulong *puVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float local_170;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  ulong *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  ulong uStack_e8;
  long *local_d8;
  long *local_d0;
  ulong uStack_c8;
  undefined8 *local_b8 [2];
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  lVar18 = (long)*(int *)((long)param_1 + 0x59c) * 0x18;
  local_90 = *(undefined8 *)(&DAT_04265bd0 + lVar18);
  puStack_88 = (&PTR_s_odoshishi_04265bd8)[(long)*(int *)((long)param_1 + 0x59c) * 3];
  local_80 = *(undefined8 *)(&DAT_04265be0 + lVar18);
  local_78 = (long *)0x0;
  FUN_00cf9b38(param_1 + 0xbd,param_2 + 0x40);
  if (*(long *)(param_2 + 0x40) == 0) {
    uVar27 = 0;
    local_98 = (long *)0x0;
    goto joined_r0x02670af8;
  }
  FUN_00cfac20(&local_98);
  if (local_98 != (long *)0x0) {
    local_130 = (ulong *)0x0;
    uStack_128 = (char *)0x0;
    FUN_00ac3fa4(&local_130,local_98 + 0x49);
    FUN_0099c748(&local_a0,&local_130);
    puVar8 = local_130;
    if (local_130 != (ulong *)0x0) {
      puVar29 = local_130 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_d0 = (long *)*puVar8;
        FUN_02a44274(lVar18 + 0xd8,&local_d0);
      }
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*param_1 + 0x178))(param_1);
      if (param_1[0xc2] == 0) {
        local_d0 = (long *)0x0;
      }
      else {
        FUN_0095deb8(&local_d0);
        if (local_d0 != (long *)0x0) {
          local_130 = (ulong *)((ulong)local_130 & 0xffffffffffffff00);
          uStack_128 = (char *)((ulong)uStack_128 & 0xffffffffffff0000);
          if (*param_2 != '\0') {
            if (*(long *)(param_2 + 0x50) == 0) {
              local_f0 = (long *)0x0;
              local_130 = (ulong *)CONCAT44(_DAT_0000059c,(undefined4)local_130);
              local_130 = (ulong *)CONCAT71(local_130._1_7_,1);
            }
            else {
              FUN_00959eac(&local_f0);
              local_130 = (ulong *)CONCAT44(*(undefined4 *)((long)local_f0 + 0x59c),
                                            (undefined4)local_130);
              local_130 = (ulong *)CONCAT71(local_130._1_7_,1);
              if (local_f0 != (long *)0x0) {
                lVar18 = local_f0[0xb];
                piVar3 = (int *)(lVar18 + 0xc);
                do {
                  iVar16 = *piVar3;
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar13) {
                    *piVar3 = iVar16 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_f0 + 0x20))();
                }
              }
            }
          }
          uStack_128._0_2_ = CONCAT11(param_2[8],param_2[3]);
          FUN_0263f494(local_d0,&local_130);
          if (local_d0 != (long *)0x0) {
            lVar18 = local_d0[0xb];
            piVar3 = (int *)(lVar18 + 0xc);
            do {
              iVar16 = *piVar3;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_d0 + 0x20))();
            }
          }
        }
      }
      local_130 = (ulong *)0x0;
      uStack_128 = (char *)0x0;
      FUN_00ac3fa4(&local_130,param_1 + 0x49);
      if (local_130 == (ulong *)0x0) {
        local_a8 = (long *)0x0;
LAB_02670bfc:
        if (local_a8 == (long *)0x0) goto LAB_026711ec;
LAB_02670c04:
        plVar28 = local_a8;
        FUN_01aef8b8(local_b8,local_98);
        FUN_02679aa8(plVar28,local_b8);
        if (local_b8[0] != (undefined8 *)0x0) {
          piVar3 = (int *)(local_b8[0] + 1);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            local_b8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_130 = (ulong *)*local_b8[0];
            FUN_02a44274(lVar18 + 0xd8,&local_130);
          }
        }
        local_130 = (ulong *)0x0;
        uStack_128 = (char *)0x0;
        FUN_01a2bf84(&local_130,local_a8 + 0xb9);
        if (local_130 == (ulong *)0x0) {
          local_70[0] = (long *)0x0;
          plVar28 = local_70[0];
        }
        else {
          FUN_01bfc61c(local_70);
          puVar8 = local_130;
          plVar28 = local_70[0];
          if (local_130 != (ulong *)0x0) {
            puVar29 = local_130 + 1;
            do {
              iVar16 = (int)*puVar29 + -1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
              if (bVar13) {
                *(int *)puVar29 = iVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_d0 = (long *)*puVar8;
              FUN_02a44274(lVar18 + 0xd8,&local_d0);
              plVar28 = local_70[0];
            }
          }
        }
        local_70[0] = plVar28;
        if (plVar28 != (long *)0x0) {
          uVar31 = *(undefined4 *)((long)param_1 + 0x59c);
          local_f0 = (long *)0x0;
          uStack_e8 = 0;
          FUN_01a2bf84(&local_f0,local_a0 + 0xb9);
          if (local_f0 == (long *)0x0) {
            local_d8 = (long *)0x0;
          }
          else {
            FUN_009cf990(&local_d8);
          }
          local_130 = (undefined8 *)0x0;
          uStack_128 = (char *)0x0;
          FUN_008802f0(&local_130,local_d8 + 0xb);
          local_d0 = (long *)0x0;
          uStack_c8 = 0;
          FUN_02623098(&local_d0,&local_130);
          puVar12 = local_130;
          if (local_130 != (undefined8 *)0x0) {
            piVar3 = (int *)(local_130 + 1);
            do {
              iVar16 = *piVar3;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_100 = (ulong *)*puVar12;
              FUN_02a44274(lVar18 + 0xd8,&local_100);
            }
          }
          (**(code **)(*plVar28 + 0x3d8))(plVar28,uVar31,&local_d0);
          plVar28 = local_d0;
          if (local_d0 != (long *)0x0) {
            plVar2 = local_d0 + 1;
            do {
              iVar16 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar13) {
                *(int *)plVar2 = iVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 == 0) {
              local_d0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_130 = (ulong *)*plVar28;
              FUN_02a44274(lVar18 + 0xd8,&local_130);
            }
          }
          plVar28 = local_f0;
          if (local_d8 != (long *)0x0) {
            lVar18 = local_d8[0xb];
            piVar3 = (int *)(lVar18 + 0xc);
            do {
              iVar16 = *piVar3;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_d8 + 0x20))();
              plVar28 = local_f0;
            }
          }
          local_f0 = plVar28;
          if (plVar28 != (long *)0x0) {
            plVar2 = plVar28 + 1;
            do {
              iVar16 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar13) {
                *(int *)plVar2 = iVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 == 0) {
              plVar28[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_130 = (ulong *)*plVar28;
              FUN_02a44274(lVar18 + 0xd8,&local_130);
            }
          }
          (**(code **)(*local_70[0] + 0x168))(*(undefined4 *)(param_2 + 0x20));
          if (local_70[0] != (long *)0x0) {
            lVar18 = local_70[0][0xb];
            piVar3 = (int *)(lVar18 + 0xc);
            do {
              iVar16 = *piVar3;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_70[0] + 0x20))();
            }
          }
        }
        local_130 = (ulong *)0x0;
        uStack_128 = (char *)0x0;
        FUN_01a9e67c(&local_130,local_a8 + 0xc3);
        if (local_130 == (ulong *)0x0) {
          local_f0 = (long *)0x0;
        }
        else {
          FUN_01aa5214(&local_f0);
          puVar8 = local_130;
          if (local_130 != (ulong *)0x0) {
            puVar29 = local_130 + 1;
            do {
              iVar16 = (int)*puVar29 + -1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
              if (bVar13) {
                *(int *)puVar29 = iVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_d0 = (long *)*puVar8;
              FUN_02a44274(lVar18 + 0xd8,&local_d0);
            }
          }
        }
        if ((local_f0 != (long *)0x0) &&
           ((**(code **)(*local_f0 + 0xf0))(), local_f0 != (long *)0x0)) {
          lVar18 = local_f0[0xb];
          piVar3 = (int *)(lVar18 + 0xc);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
        }
        (**(code **)(*local_a8 + 0x1f8))(local_a8,*(undefined4 *)(param_2 + 0x24));
        FUN_01a87278(local_a8);
        (**(code **)(*local_a8 + 0x100))(local_a8,PTR_DAT_0437a330);
        (**(code **)(*local_a8 + 0x1f0))(local_a8,0);
        FUN_01a874f4(local_a8);
        FUN_01a87684(local_a8);
        FUN_01a8b7b8(local_a8);
        FUN_01a9af98(local_a8);
        pauVar1 = (undefined1 (*) [16])(param_2 + 0x30);
        uStack_158 = *(undefined8 *)(param_2 + 0x38);
        local_160 = *(ulong *)*pauVar1;
        auVar33 = *pauVar1;
        auVar7 = *pauVar1;
        if (*(long *)(param_2 + 0x50) == 0) {
          local_130 = (ulong *)0x0;
LAB_02670f54:
          cVar4 = param_2[4];
        }
        else {
          FUN_00959eac(&local_130);
          if (local_130 == (ulong *)0x0) goto LAB_02670f54;
          fVar30 = (float)(local_160 >> 0x20);
          bVar13 = false;
          bVar14 = true;
          bVar15 = false;
          if (*(int *)((long)local_130 + 0x59c) == 3) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar30)) {
              bVar13 = fVar30 < 0.0;
              bVar14 = fVar30 == 0.0;
              bVar15 = false;
            }
          }
          iVar16 = -(uint)(!bVar14 && bVar13 == bVar15);
          auVar32._4_4_ = iVar16;
          auVar32._0_4_ = iVar16;
          auVar32._8_4_ = iVar16;
          auVar32._12_4_ = iVar16;
          uVar20 = local_130[0xb];
          piVar3 = (int *)(uVar20 + 0xc);
          auVar6._8_4_ = (int)uStack_158;
          auVar6._0_8_ = local_160 & 0xffffffff;
          auVar6._12_4_ = (int)((ulong)uStack_158 >> 0x20);
          auVar33 = auVar33 ^ (auVar7 ^ auVar6) & auVar32;
          uStack_158 = auVar33._8_8_;
          local_160 = auVar33._0_8_;
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 != 0) goto LAB_02670f54;
          *(undefined8 *)(uVar20 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
          cVar4 = param_2[4];
        }
        fVar30 = (float)((ulong)uStack_158 >> 0x20);
        if (cVar4 != '\0') {
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar18;
          puVar21 = *(undefined1 **)(lVar18 + 0x60);
          local_170 = 0.0;
          if (puVar21 != (undefined1 *)0x0) {
            uVar20 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              puVar22 = (undefined1 *)((ulong)(puVar21 + -1) & 0x7f1d939d8653868);
            }
            else if (&DAT_7f1d939d8653868 < puVar21) {
              puVar22 = &DAT_7f1d939d8653868;
            }
            else {
              uVar23 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar23 = 0x7f1d939d8653868 / (ulong)puVar21;
              }
              puVar22 = &DAT_7f1d939d8653868 + -(uVar23 * (long)puVar21);
            }
            plVar28 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar22 * 8);
            if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
              if (uVar20 < 2) {
                do {
                  if ((undefined1 *)plVar28[1] == &DAT_7f1d939d8653868) {
                    if ((undefined1 *)plVar28[2] == &DAT_7f1d939d8653868) goto LAB_0267279c;
                  }
                  else if ((undefined1 *)((ulong)plVar28[1] & (ulong)(puVar21 + -1)) != puVar22)
                  break;
                  plVar28 = (long *)*plVar28;
                } while (plVar28 != (long *)0x0);
              }
              else {
                do {
                  puVar25 = (undefined1 *)plVar28[1];
                  if (puVar25 == &DAT_7f1d939d8653868) {
                    if ((undefined1 *)plVar28[2] == &DAT_7f1d939d8653868) goto LAB_0267279c;
                  }
                  else {
                    if (puVar21 <= puVar25) {
                      uVar20 = 0;
                      if (puVar21 != (undefined1 *)0x0) {
                        uVar20 = (ulong)puVar25 / (ulong)puVar21;
                      }
                      puVar25 = puVar25 + -(uVar20 * (long)puVar21);
                    }
                    if (puVar25 != puVar22) break;
                  }
                  plVar28 = (long *)*plVar28;
                } while (plVar28 != (long *)0x0);
              }
            }
          }
          goto LAB_02672900;
        }
        if (*(int *)((long)param_1 + 0x59c) == 2) {
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar18;
          puVar21 = *(undefined1 **)(lVar18 + 0x60);
          local_170 = 0.0;
          if (puVar21 != (undefined1 *)0x0) {
            uVar20 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              puVar22 = (undefined1 *)((ulong)(puVar21 + -1) & 0x7f1d939d8653868);
            }
            else if (&DAT_7f1d939d8653868 < puVar21) {
              puVar22 = &DAT_7f1d939d8653868;
            }
            else {
              uVar23 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar23 = 0x7f1d939d8653868 / (ulong)puVar21;
              }
              puVar22 = &DAT_7f1d939d8653868 + -(uVar23 * (long)puVar21);
            }
            local_170 = 0.0;
            plVar28 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar22 * 8);
            if (plVar28 != (long *)0x0) {
              plVar28 = (long *)*plVar28;
              local_170 = 0.0;
              if (plVar28 != (long *)0x0) {
                if (uVar20 < 2) {
                  do {
                    if ((undefined1 *)plVar28[1] == &DAT_7f1d939d8653868) {
                      if ((undefined1 *)plVar28[2] == &DAT_7f1d939d8653868) goto LAB_026718ec;
                    }
                    else if ((undefined1 *)((ulong)plVar28[1] & (ulong)(puVar21 + -1)) != puVar22)
                    break;
                    plVar28 = (long *)*plVar28;
                  } while (plVar28 != (long *)0x0);
                }
                else {
                  do {
                    puVar25 = (undefined1 *)plVar28[1];
                    if (puVar25 == &DAT_7f1d939d8653868) {
                      if ((undefined1 *)plVar28[2] == &DAT_7f1d939d8653868) goto LAB_026718ec;
                    }
                    else {
                      if (puVar21 <= puVar25) {
                        uVar20 = 0;
                        if (puVar21 != (undefined1 *)0x0) {
                          uVar20 = (ulong)puVar25 / (ulong)puVar21;
                        }
                        puVar25 = puVar25 + -(uVar20 * (long)puVar21);
                      }
                      if (puVar25 != puVar22) break;
                    }
                    plVar28 = (long *)*plVar28;
                  } while (plVar28 != (long *)0x0);
                }
                local_170 = 0.0;
              }
            }
          }
          goto LAB_02671a60;
        }
        goto LAB_02670f68;
      }
      FUN_0095a0ac(&local_a8);
      puVar8 = local_130;
      if (local_130 == (ulong *)0x0) goto LAB_02670bfc;
      puVar29 = local_130 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 != 0) goto LAB_02670bfc;
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_d0 = (long *)*puVar8;
      FUN_02a44274(lVar18 + 0xd8,&local_d0);
      if (local_a8 != (long *)0x0) goto LAB_02670c04;
      goto LAB_026711ec;
    }
    uVar27 = 0;
    goto joined_r0x02671718;
  }
  uVar27 = 0;
  if (local_78 == (long *)0x0) {
    return 0;
  }
  goto LAB_02670afc;
LAB_0267279c:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar28[0x21];
    local_170 = 0.0;
    if (uVar20 != 0) {
      uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar20 - 1 & 0x6b7a6bf115eeb4e6;
      }
      else if (uVar20 < 0x6b7a6bf115eeb4e7) {
        uVar24 = 0;
        if (uVar20 != 0) {
          uVar24 = 0x6b7a6bf115eeb4e6 / uVar20;
        }
        uVar24 = 0x6b7a6bf115eeb4e6 - uVar24 * uVar20;
      }
      else {
        uVar24 = 0x6b7a6bf115eeb4e6;
      }
      plVar26 = *(long **)(plVar28[0x20] + uVar24 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar26[1] == 0x6b7a6bf115eeb4e6) {
              if (plVar26[2] == 0x6b7a6bf115eeb4e6) goto LAB_026728e4;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar24) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar26[1];
            if (uVar23 == 0x6b7a6bf115eeb4e6) {
              if (plVar26[2] == 0x6b7a6bf115eeb4e6) goto LAB_026728e4;
            }
            else {
              if (uVar20 <= uVar23) {
                uVar5 = 0;
                if (uVar20 != 0) {
                  uVar5 = uVar23 / uVar20;
                }
                uVar23 = uVar23 - uVar5 * uVar20;
              }
              if (uVar23 != uVar24) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026728ec;
  }
  goto LAB_02672900;
LAB_026728e4:
  local_170 = *(float *)(plVar26 + 6);
LAB_026728ec:
  do {
    iVar16 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *(int *)plVar2 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_02672900:
  uStack_128 = (char *)CONCAT44(fVar30 * local_170,(float)uStack_158 * local_170);
  local_130 = (ulong *)CONCAT44((float)(local_160 >> 0x20) * local_170,(float)local_160 * local_170)
  ;
  (**(code **)(*local_a8 + 0x100))(local_a8,&local_130);
  pcVar19 = *(code **)(*local_a8 + 0x200);
  fVar30 = -1.0;
  if (local_130._4_4_ != 0.0) {
    fVar30 = local_130._4_4_;
  }
  goto LAB_02670f78;
LAB_026718ec:
  plVar28 = (long *)plVar28[3];
  local_170 = 0.0;
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar28[0x21];
    local_170 = 0.0;
    if (uVar20 != 0) {
      uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar20 - 1 & 0x5d60752e5fc96da1;
      }
      else if (uVar20 < 0x5d60752e5fc96da2) {
        uVar24 = 0;
        if (uVar20 != 0) {
          uVar24 = 0x5d60752e5fc96da1 / uVar20;
        }
        uVar24 = 0x5d60752e5fc96da1 - uVar24 * uVar20;
      }
      else {
        uVar24 = 0x5d60752e5fc96da1;
      }
      plVar26 = *(long **)(plVar28[0x20] + uVar24 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar26[1] == 0x5d60752e5fc96da1) {
              if (plVar26[2] == 0x5d60752e5fc96da1) goto LAB_02671a44;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar24) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar26[1];
            if (uVar23 == 0x5d60752e5fc96da1) {
              if (plVar26[2] == 0x5d60752e5fc96da1) goto LAB_02671a44;
            }
            else {
              if (uVar20 <= uVar23) {
                uVar5 = 0;
                if (uVar20 != 0) {
                  uVar5 = uVar23 / uVar20;
                }
                uVar23 = uVar23 - uVar5 * uVar20;
              }
              if (uVar23 != uVar24) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_02671a4c;
  }
  goto LAB_02671a60;
LAB_02671a44:
  local_170 = *(float *)(plVar26 + 6);
LAB_02671a4c:
  do {
    iVar16 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *(int *)plVar2 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_02671a60:
  uStack_128 = (char *)CONCAT44(fVar30 * local_170,(float)uStack_158 * local_170);
  local_130 = (ulong *)(ulong)(uint)((float)local_160 * local_170);
  (**(code **)(*local_a8 + 0x100))(local_a8,&local_130);
LAB_02670f68:
  pcVar19 = *(code **)(*local_a8 + 0x200);
  fVar30 = 0.0;
LAB_02670f78:
  (*pcVar19)(fVar30);
  if (param_2[8] == '\0') {
    FUN_00956dac(&local_130,local_98 + 0x35);
    uStack_c8 = local_130[0x1b];
    local_d0 = (long *)local_130[0x1a];
    if (local_130 != (ulong *)0x0) {
      uVar20 = local_130[0xb];
      piVar3 = (int *)(uVar20 + 0xc);
      do {
        iVar16 = *piVar3;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(uVar20 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
      }
    }
  }
  else {
    uStack_c8 = *(ulong *)(param_2 + 0x18);
    local_d0 = *(long **)(param_2 + 0x10);
  }
  FUN_00956dac(&local_130,local_98 + 0x35);
  uStack_e8 = local_130[0x19];
  local_f0 = (long *)local_130[0x18];
  if (local_130 == (ulong *)0x0) {
LAB_02670ffc:
    if (param_2[0xd0] == '\0') goto LAB_02671004;
LAB_02671e14:
    uStack_e8 = *(ulong *)(param_2 + 0xe8);
    local_f0 = *(long **)(param_2 + 0xe0);
    if (param_2[1] == '\0') goto LAB_0267100c;
LAB_02671e2c:
    uVar31 = FUN_01009820((int)*(undefined8 *)(param_2 + 0x90));
    local_d0 = *(long **)(param_2 + 0x80);
    uStack_c8 = *(ulong *)(param_2 + 0x88);
    FUN_009a7ff4(uVar31,ZEXT816(0),0);
    uStack_e8 = CONCAT44(extraout_var_01,extraout_var_00);
    local_f0 = (long *)CONCAT44(extraout_var,extraout_s0);
  }
  else {
    uVar20 = local_130[0xb];
    piVar3 = (int *)(uVar20 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 != 0) goto LAB_02670ffc;
    *(undefined8 *)(uVar20 + 0x18) = 0;
    (**(code **)(*local_130 + 0x20))();
    if (param_2[0xd0] != '\0') goto LAB_02671e14;
LAB_02671004:
    if (param_2[1] != '\0') goto LAB_02671e2c;
LAB_0267100c:
    if (*param_2 != '\0') {
      if (*(long *)(param_2 + 0x50) == 0) {
        local_130 = (ulong *)0x0;
      }
      else {
        FUN_00959eac(&local_130);
      }
      FUN_00956dac(&local_100,local_130 + 0x35);
      uStack_c8 = local_100[0x1b];
      local_d0 = (long *)local_100[0x1a];
      if (local_100 == (ulong *)0x0) {
LAB_0267179c:
        cVar4 = param_2[0xd0];
      }
      else {
        uVar20 = local_100[0xb];
        piVar3 = (int *)(uVar20 + 0xc);
        do {
          iVar16 = *piVar3;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 != 0) goto LAB_0267179c;
        *(undefined8 *)(uVar20 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
        cVar4 = param_2[0xd0];
      }
      if (cVar4 == '\0') {
        FUN_00956dac(&local_100,local_130 + 0x35);
        uStack_e8 = local_100[0x19];
        local_f0 = (long *)local_100[0x18];
        if (local_100 != (ulong *)0x0) {
          uVar20 = local_100[0xb];
          piVar3 = (int *)(uVar20 + 0xc);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(uVar20 + 0x18) = 0;
            (**(code **)(*local_100 + 0x20))();
          }
        }
      }
      if (local_130 != (ulong *)0x0) {
        uVar20 = local_130[0xb];
        piVar3 = (int *)(uVar20 + 0xc);
        do {
          iVar16 = *piVar3;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(uVar20 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
        }
      }
    }
  }
  FUN_00956dac(&local_130,local_a8 + 0x35);
  *(undefined1 *)(local_130 + 0x1c) = 1;
  local_130[0x1a] = (ulong)local_d0;
  local_130[0x1b] = uStack_c8;
  if (local_130 != (ulong *)0x0) {
    uVar20 = local_130[0xb];
    piVar3 = (int *)(uVar20 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(uVar20 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  FUN_00956dac(&local_130,local_a8 + 0x35);
  local_130[0x18] = (ulong)local_f0;
  local_130[0x19] = uStack_e8;
  *(undefined1 *)(local_130 + 0x1c) = 1;
  if (local_130 != (ulong *)0x0) {
    uVar20 = local_130[0xb];
    piVar3 = (int *)(uVar20 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(uVar20 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  FUN_01a83770(local_a8,&local_d0,&local_f0);
  if (*(long *)(param_2 + 0x50) == 0) {
    local_d8 = (long *)0x0;
LAB_026710b4:
    plVar28 = local_a8;
    (**(code **)(*local_a0 + 0x10))(&local_130);
    local_100 = (ulong *)0x0;
    uStack_f8 = 0;
    FUN_009cca14(&local_100,&local_130);
    puVar8 = local_130;
    if (local_130 != (ulong *)0x0) {
      puVar29 = local_130 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_70[0] = (long *)*puVar8;
        FUN_02a44274(lVar18 + 0xd8,local_70);
      }
    }
    FUN_02679900(plVar28,&local_100);
    puVar8 = local_100;
    if (local_100 != (ulong *)0x0) {
      puVar29 = local_100 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_130 = (ulong *)*puVar8;
        FUN_02a44274(lVar18 + 0xd8,&local_130);
      }
    }
  }
  else {
    FUN_00959eac(&local_d8);
    plVar28 = local_a8;
    if (local_d8 == (long *)0x0) goto LAB_026710b4;
    if (*(int *)((long)param_1 + 0x59c) == 3) {
      FUN_01a8ac20(local_a8);
    }
    else {
      local_130 = (ulong *)0x0;
      uStack_128 = (char *)0x0;
      FUN_00ac3fa4(&local_130,local_d8 + 0x49);
      FUN_02679900(plVar28,&local_130);
      puVar8 = local_130;
      if (local_130 != (ulong *)0x0) {
        puVar29 = local_130 + 1;
        do {
          iVar16 = (int)*puVar29 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar13) {
            *(int *)puVar29 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_100 = (ulong *)*puVar8;
          FUN_02a44274(lVar18 + 0xd8,&local_100);
        }
      }
    }
    if (*(int *)((long)local_d8 + 0x59c) == 3) {
      FUN_01a8ac20(local_a8);
    }
  }
  if (local_d8 != (long *)0x0) {
    lVar18 = local_d8[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_d8 + 0x20))();
    }
  }
  if (local_a8 != (long *)0x0) {
    lVar18 = local_a8[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
LAB_026711ec:
  local_130 = (ulong *)0x0;
  uStack_128 = (char *)0x0;
  FUN_00d828bc(&local_130,local_98 + 0xcb);
  puVar8 = local_130;
  puVar11 = PTR_DAT_0437a880;
  puVar10 = PTR_DAT_0437a878;
  puVar9 = PTR_DAT_043795e0;
  plVar28 = (long *)0x0;
  if (local_130 != (ulong *)0x0) {
    if (*(int *)((long)local_130 + 0xc) != 0) {
      piVar3 = (int *)((long)local_130 + 0xc);
      iVar16 = *(int *)((long)local_130 + 0xc);
      do {
        puVar29 = (ulong *)puVar8[2];
        if (((*puVar10 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar10), iVar17 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar17 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar17 != 0)) {
              uVar27 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar27;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (puVar29 == (ulong *)0x0) goto LAB_02672584;
          if (puVar29 == (ulong *)puVar11) break;
          puVar29 = (ulong *)*puVar29;
        }
        iVar17 = *piVar3;
        if (iVar17 == iVar16) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar20 = puVar8[3];
            plVar28 = (long *)0x0;
            puVar8 = local_130;
            if (uVar20 != 0) {
              plVar28 = (long *)(uVar20 - 0x50);
            }
            goto joined_r0x02672ad0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar17;
      } while (iVar17 != 0);
    }
LAB_02672584:
    plVar28 = (long *)0x0;
    puVar8 = local_130;
joined_r0x02672ad0:
    local_130 = puVar8;
    if (puVar8 != (ulong *)0x0) {
      puVar29 = puVar8 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        puVar8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_d0 = (long *)*puVar8;
        FUN_02a44274(lVar18 + 0xd8,&local_d0);
      }
    }
  }
  FUN_01a73650(&local_130,param_1);
  FUN_00956dac(&local_f0,&local_130);
  puVar8 = local_130;
  if (local_130 != (ulong *)0x0) {
    puVar29 = local_130 + 1;
    do {
      iVar16 = (int)*puVar29 + -1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
      if (bVar13) {
        *(int *)puVar29 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_d0 = (long *)*puVar8;
      FUN_02a44274(lVar18 + 0xd8,&local_d0);
    }
  }
  if ((plVar28 != (long *)0x0) && (local_f0 != (long *)0x0)) {
    local_130 = (ulong *)0x0;
    uStack_128 = (char *)0x0;
    FUN_00ac3fa4(&local_130,param_1 + 0x49);
    FUN_0099c748(&local_100,&local_130);
    puVar8 = local_130;
    if (local_130 != (ulong *)0x0) {
      puVar29 = local_130 + 1;
      do {
        iVar16 = (int)*puVar29 + -1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar13) {
          *(int *)puVar29 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_d0 = (long *)*puVar8;
        FUN_02a44274(lVar18 + 0xd8,&local_d0);
      }
    }
    if (local_100 == (ulong *)0x0) {
      FUN_00956dac(local_70,param_1 + 0x35);
      (**(code **)(*local_70[0] + 0x18))(&local_130);
      local_150 = (undefined8 *)0x0;
      uStack_148 = 0;
      FUN_0087f944(&local_150,&local_130);
      puVar8 = local_130;
      if (local_130 != (ulong *)0x0) {
        puVar29 = local_130 + 1;
        do {
          iVar16 = (int)*puVar29 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar13) {
            *(int *)puVar29 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_d0 = (long *)*puVar8;
          FUN_02a44274(lVar18 + 0xd8,&local_d0);
        }
      }
      FUN_00d804f8(plVar28,&local_150,1);
      puVar12 = local_150;
      if (local_150 != (undefined8 *)0x0) {
        piVar3 = (int *)(local_150 + 1);
        do {
          iVar16 = *piVar3;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          local_150[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_130 = (ulong *)*puVar12;
          FUN_02a44274(lVar18 + 0xd8,&local_130);
        }
      }
      if (local_70[0] != (long *)0x0) {
        lVar18 = local_70[0][0xb];
        piVar3 = (int *)(lVar18 + 0xc);
        do {
          iVar16 = *piVar3 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x02671bd0;
      }
    }
    else {
      FUN_01a9b800(&local_130);
      FUN_00956dac(local_70,&local_130);
      puVar8 = local_130;
      if (local_130 != (ulong *)0x0) {
        puVar29 = local_130 + 1;
        do {
          iVar16 = (int)*puVar29 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar13) {
            *(int *)puVar29 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_d0 = (long *)*puVar8;
          FUN_02a44274(lVar18 + 0xd8,&local_d0);
        }
      }
      if (local_70[0] == (long *)0x0) {
        FUN_00956dac(&local_a8,param_1 + 0x35);
        (**(code **)(*local_a8 + 0x18))(&local_130);
        local_140 = (undefined8 *)0x0;
        uStack_138 = 0;
        FUN_0087f944(&local_140,&local_130);
        puVar8 = local_130;
        if (local_130 != (ulong *)0x0) {
          puVar29 = local_130 + 1;
          do {
            iVar16 = (int)*puVar29 + -1;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
            if (bVar13) {
              *(int *)puVar29 = iVar16;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 == 0) {
            local_130[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_d0 = (long *)*puVar8;
            FUN_02a44274(lVar18 + 0xd8,&local_d0);
          }
        }
        FUN_00d804f8(plVar28,&local_140,1);
        puVar12 = local_140;
        if (local_140 != (undefined8 *)0x0) {
          piVar3 = (int *)(local_140 + 1);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            local_140[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_130 = (ulong *)*puVar12;
            FUN_02a44274(lVar18 + 0xd8,&local_130);
          }
        }
        if (local_a8 != (long *)0x0) {
          lVar18 = local_a8[0xb];
          piVar3 = (int *)(lVar18 + 0xc);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
      }
      else {
        (**(code **)(*local_70[0] + 0x18))(&local_130);
        local_110 = (undefined8 *)0x0;
        uStack_108 = 0;
        FUN_0087f944(&local_110,&local_130);
        puVar8 = local_130;
        if (local_130 != (ulong *)0x0) {
          puVar29 = local_130 + 1;
          do {
            iVar16 = (int)*puVar29 + -1;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
            if (bVar13) {
              *(int *)puVar29 = iVar16;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 == 0) {
            local_130[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_d0 = (long *)*puVar8;
            FUN_02a44274(lVar18 + 0xd8,&local_d0);
          }
        }
        local_130 = (ulong *)&DAT_592c1862f926d877;
        uStack_128 = "player_attach_joint_name";
        local_120 = 0x18;
        local_118 = (long *)0x0;
        FUN_00bef9ac(&local_d0,&local_90,&local_130);
        FUN_00d81760(plVar28,&local_110,&local_d0,0);
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_118 != (long *)0x0) {
          (**(code **)(*local_118 + 0x20))();
        }
        puVar12 = local_110;
        if (local_110 != (undefined8 *)0x0) {
          piVar3 = (int *)(local_110 + 1);
          do {
            iVar16 = *piVar3;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            local_110[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_130 = (ulong *)*puVar12;
            FUN_02a44274(lVar18 + 0xd8,&local_130);
          }
        }
      }
      if (local_70[0] != (long *)0x0) {
        lVar18 = local_70[0][0xb];
        piVar3 = (int *)(lVar18 + 0xc);
        do {
          iVar16 = *piVar3 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
joined_r0x02671bd0:
        if (iVar16 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
    }
    if (local_100 != (ulong *)0x0) {
      uVar20 = local_100[0xb];
      piVar3 = (int *)(uVar20 + 0xc);
      do {
        iVar16 = *piVar3;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(uVar20 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
    FUN_00956dac(&local_130,plVar28 + 0x35);
    *(undefined1 *)(local_130 + 0x1c) = 1;
    local_130[0x1a] = 0;
    local_130[0x1b] = 0;
    if (local_130 != (ulong *)0x0) {
      uVar20 = local_130[0xb];
      piVar3 = (int *)(uVar20 + 0xc);
      do {
        iVar16 = *piVar3;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(uVar20 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
      }
    }
    FUN_00956dac(&local_130,plVar28 + 0x35);
    uVar20 = *(ulong *)PTR_DAT_04379570;
    uVar23 = *(ulong *)(PTR_DAT_04379570 + 8);
    *(undefined1 *)(local_130 + 0x1c) = 1;
    local_130[0x18] = uVar20;
    local_130[0x19] = uVar23;
    if (local_130 != (ulong *)0x0) {
      uVar20 = local_130[0xb];
      piVar3 = (int *)(uVar20 + 0xc);
      do {
        iVar16 = *piVar3;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(uVar20 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
      }
    }
  }
  FUN_016c24d0(&local_130,param_1 + 0xc6);
  if ((local_130 != (ulong *)0x0) && (FUN_015916d0(local_130,0,0x10,0), local_130 != (ulong *)0x0))
  {
    uVar20 = local_130[0xb];
    piVar3 = (int *)(uVar20 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(uVar20 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  *(undefined2 *)(param_1 + 0xcc) = 1;
  if (param_1[0xca] == 0) {
    local_130 = (ulong *)0x0;
LAB_02671608:
    cVar4 = param_2[8];
  }
  else {
    FUN_02675010(&local_130);
    puVar8 = local_130;
    if (local_130 == (ulong *)0x0) goto LAB_02671608;
    FUN_0264792c(local_130);
    uVar20 = puVar8[0xb];
    piVar3 = (int *)(uVar20 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 != 0) goto LAB_02671608;
    *(undefined8 *)(uVar20 + 0x18) = 0;
    (**(code **)(*puVar8 + 0x20))(puVar8);
    cVar4 = param_2[8];
  }
  if (cVar4 == '\0') {
    if (param_1[200] == 0) {
      local_130 = (ulong *)0x0;
    }
    else {
      FUN_01b04bc8(&local_130);
      if ((local_130 != (ulong *)0x0) && (FUN_02634828(local_130,1), local_130 != (ulong *)0x0)) {
        uVar20 = local_130[0xb];
        piVar3 = (int *)(uVar20 + 0xc);
        do {
          iVar16 = *piVar3;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(uVar20 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
        }
      }
    }
    FUN_01a74a50(&local_130,param_1);
    if (local_130 == (ulong *)0x0) {
      local_100 = (ulong *)0x0;
    }
    else {
      FUN_00bd9360(&local_100);
      puVar8 = local_130;
      if (local_130 != (ulong *)0x0) {
        puVar29 = local_130 + 1;
        do {
          iVar16 = (int)*puVar29 + -1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar13) {
            *(int *)puVar29 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_d0 = (long *)*puVar8;
          FUN_02a44274(lVar18 + 0xd8,&local_d0);
        }
      }
    }
    if (local_100 != (ulong *)0x0) {
      lVar18 = (long)*(int *)((long)param_1 + 0x59c) * 0x18;
      local_130 = *(ulong **)(&DAT_04265c48 + lVar18);
      uStack_128 = (&PTR_s_PLAY_PM_RIDE_SHINING_RUNNING_THR_04265c50)
                   [(long)*(int *)((long)param_1 + 0x59c) * 3];
      local_120 = *(undefined8 *)(&DAT_04265c58 + lVar18);
      local_118 = (long *)0x0;
      FUN_0290b66c(local_100,&local_130,0);
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_100 != (ulong *)0x0) {
        uVar20 = local_100[0xb];
        piVar3 = (int *)(uVar20 + 0xc);
        do {
          iVar16 = *piVar3;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(uVar20 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
    }
  }
  if (local_f0 != (long *)0x0) {
    lVar18 = local_f0[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar18 = plVar28[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar18 = local_a0[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 1) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  uVar27 = 1;
joined_r0x02671718:
  if (local_98 != (long *)0x0) {
    lVar18 = local_98[0xb];
    piVar3 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar3;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x02670af8:
  if (local_78 != (long *)0x0) {
LAB_02670afc:
    (**(code **)(*local_78 + 0x20))();
  }
  return uVar27;
}


