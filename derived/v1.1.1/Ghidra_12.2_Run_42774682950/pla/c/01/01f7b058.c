/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7b058; name: FUN_01f7b058
 */


void FUN_01f7b058(int *param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  ushort *puVar22;
  ushort *puVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined4 extraout_s0;
  float fVar28;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar29;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0 [2];
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar12 = PTR_DAT_0437a0f0;
  puVar11 = PTR_DAT_0437a0e8;
  puVar10 = PTR_DAT_043794d0;
  lVar25 = *param_2;
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
    return;
  }
  piVar18 = (int *)(lVar25 + 0xc);
  iVar15 = *(int *)(lVar25 + 0xc);
LAB_01f7b0e0:
  plVar27 = *(long **)(lVar25 + 0x10);
  if (((*puVar11 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar11), iVar16 != 0)) {
    if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
      uVar26 = FUN_0087f8f0();
      *(undefined8 *)PTR_DAT_043794d8 = uVar26;
      __cxa_guard_release(puVar10);
    }
    *(undefined **)puVar12 = PTR_DAT_043794d8;
    __cxa_guard_release(puVar11);
  }
  while( true ) {
    if (plVar27 == (long *)0x0) {
      return;
    }
    if (plVar27 == (long *)puVar12) break;
    plVar27 = (long *)*plVar27;
  }
  iVar16 = *piVar18;
  if (iVar16 == iVar15) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
    if (bVar8) {
      *piVar18 = iVar15 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      lVar25 = *(long *)(lVar25 + 0x18);
      if (lVar25 == 0) {
        return;
      }
      plVar27 = (long *)(lVar25 + -0x50);
      FUN_01847290(&local_70,plVar27);
      local_78 = *(undefined8 *)(param_3 + 0x28);
      uVar26 = *(undefined8 *)(param_3 + 8);
      uVar4 = *(uint *)(param_3 + 0x50);
      local_80 = *(undefined8 *)(param_3 + 0x20);
      FUN_009a7ff4((int)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20),
                   *(undefined8 *)(param_3 + 0x30),(int)*(undefined8 *)(param_3 + 0x38));
      local_90 = CONCAT44(extraout_var,extraout_s0);
      uStack_88 = extraout_var_00;
      FUN_01f81cbc(&local_98,local_70,uVar26);
      if (local_98 == (long *)0x0) goto joined_r0x01f7b628;
      uVar14 = FUN_01adccd4();
      if (uVar4 == uVar14) goto joined_r0x01f7b188;
      puVar2 = (uint *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + (0xc - (long)*param_1)));
      puVar3 = (uint *)((long)puVar2 + (ulong)uVar4 * 4 + (ulong)*puVar2 + 4);
      puVar2 = (uint *)((long)puVar2 + (ulong)uVar14 * 4 + (ulong)*puVar2 + 4);
      piVar18 = (int *)((long)puVar3 + (ulong)*puVar3);
      piVar19 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar22 = (ushort *)((long)piVar18 - (long)*piVar18);
      uVar5 = *puVar22;
      if (uVar5 < 0x13) {
        piVar20 = (int *)0x0;
      }
      else {
        piVar20 = (int *)0x0;
        if ((ulong)puVar22[9] != 0) {
          puVar2 = (uint *)((long)piVar18 + (ulong)puVar22[9]);
          piVar20 = (int *)((long)puVar2 + (ulong)*puVar2);
        }
      }
      puVar23 = (ushort *)((long)piVar19 - (long)*piVar19);
      uVar6 = *puVar23;
      if (uVar6 < 0x13) {
        piVar21 = (int *)0x0;
        if (0x14 < uVar5) goto LAB_01f7b290;
LAB_01f7b644:
        piVar18 = (int *)0x0;
        if (uVar6 < 0x15) goto LAB_01f7b650;
LAB_01f7b2ac:
        if ((ulong)puVar23[10] == 0) goto LAB_01f7b650;
        puVar2 = (uint *)((long)piVar19 + (ulong)puVar23[10]);
        piVar19 = (int *)((long)puVar2 + (ulong)*puVar2);
      }
      else {
        piVar21 = (int *)0x0;
        if ((ulong)puVar23[9] != 0) {
          puVar2 = (uint *)((long)piVar19 + (ulong)puVar23[9]);
          piVar21 = (int *)((long)puVar2 + (ulong)*puVar2);
        }
        if (uVar5 < 0x15) goto LAB_01f7b644;
LAB_01f7b290:
        if ((ulong)puVar22[10] == 0) goto LAB_01f7b644;
        puVar2 = (uint *)((long)piVar18 + (ulong)puVar22[10]);
        piVar18 = (int *)((long)puVar2 + (ulong)*puVar2);
        if (0x14 < uVar6) goto LAB_01f7b2ac;
LAB_01f7b650:
        piVar19 = (int *)0x0;
      }
      puVar22 = (ushort *)((long)piVar20 - (long)*piVar20);
      fVar28 = 0.0;
      fVar29 = 0.0;
      uVar5 = *puVar22;
      if (4 < uVar5) {
        fVar29 = 0.0;
        if ((ulong)puVar22[2] != 0) {
          fVar29 = *(float *)((long)piVar20 + (ulong)puVar22[2]);
        }
      }
      puVar23 = (ushort *)((long)piVar21 - (long)*piVar21);
      uVar6 = *puVar23;
      if ((4 < uVar6) && ((ulong)puVar23[2] != 0)) {
        fVar28 = *(float *)((long)piVar21 + (ulong)puVar23[2]);
      }
      if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
        fVar28 = 0.0;
        fVar29 = 0.0;
        if (6 < uVar5) {
          fVar29 = 0.0;
          if ((ulong)puVar22[3] != 0) {
            fVar29 = *(float *)((long)piVar20 + (ulong)puVar22[3]);
          }
        }
        if ((6 < uVar6) && ((ulong)puVar23[3] != 0)) {
          fVar28 = *(float *)((long)piVar21 + (ulong)puVar23[3]);
        }
        if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
          fVar28 = 0.0;
          fVar29 = 0.0;
          if (8 < uVar5) {
            fVar29 = 0.0;
            if ((ulong)puVar22[4] != 0) {
              fVar29 = *(float *)((long)piVar20 + (ulong)puVar22[4]);
            }
          }
          if ((8 < uVar6) && ((ulong)puVar23[4] != 0)) {
            fVar28 = *(float *)((long)piVar21 + (ulong)puVar23[4]);
          }
          if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
            puVar22 = (ushort *)((long)piVar18 - (long)*piVar18);
            fVar28 = 0.0;
            fVar29 = 0.0;
            uVar5 = *puVar22;
            if (4 < uVar5) {
              fVar29 = 0.0;
              if ((ulong)puVar22[2] != 0) {
                fVar29 = *(float *)((long)piVar18 + (ulong)puVar22[2]);
              }
            }
            puVar23 = (ushort *)((long)piVar19 - (long)*piVar19);
            uVar6 = *puVar23;
            if ((4 < uVar6) && ((ulong)puVar23[2] != 0)) {
              fVar28 = *(float *)((long)piVar19 + (ulong)puVar23[2]);
            }
            if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
              fVar28 = 0.0;
              fVar29 = 0.0;
              if (6 < uVar5) {
                fVar29 = 0.0;
                if ((ulong)puVar22[3] != 0) {
                  fVar29 = *(float *)((long)piVar18 + (ulong)puVar22[3]);
                }
              }
              if ((6 < uVar6) && ((ulong)puVar23[3] != 0)) {
                fVar28 = *(float *)((long)piVar19 + (ulong)puVar23[3]);
              }
              if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
                fVar28 = 0.0;
                fVar29 = 0.0;
                if (8 < uVar5) {
                  fVar29 = 0.0;
                  if ((ulong)puVar22[4] != 0) {
                    fVar29 = *(float *)((long)piVar18 + (ulong)puVar22[4]);
                  }
                }
                if ((8 < uVar6) && ((ulong)puVar23[4] != 0)) {
                  fVar28 = *(float *)((long)piVar19 + (ulong)puVar23[4]);
                }
                if (ABS(fVar29 - fVar28) <= 1.1920929e-07) {
                  FUN_01adce9c(local_98,param_1,uVar4);
                  goto LAB_01f7b3b8;
                }
              }
            }
          }
        }
      }
      FUN_01adce9c(local_98,param_1,(ulong)uVar4);
      FUN_01adc23c(local_b0,local_98);
      if (local_b0[0] == (undefined8 *)0x0) {
        local_a0 = (long *)0x0;
      }
      else {
        FUN_00bd915c(&local_a0);
        puVar13 = local_b0[0];
        if (local_b0[0] != (undefined8 *)0x0) {
          piVar18 = (int *)(local_b0[0] + 1);
          do {
            iVar15 = *piVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 + -1 == 0) {
            local_b0[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_68 = *puVar13;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
          }
        }
      }
      if (local_a0 != (long *)0x0) {
        if ((*(byte *)(local_98 + 0xe2) & 1) == 0) {
          (**(code **)(*local_98 + 0xf0))(local_98,0);
          FUN_01a89bd4(0x40a00000,local_a0,&local_80,&local_90);
        }
        else {
          (**(code **)(*local_98 + 0xf0))(local_98,1);
          FUN_01a83770(local_a0,&local_80,&local_90);
        }
        FUN_01adccf4(local_b0,local_98);
        puVar13 = local_b0[0];
        puVar12 = PTR_DAT_0437a258;
        puVar11 = PTR_DAT_0437a250;
        if (local_b0[0] != (undefined8 *)0x0) {
          if (*(int *)((long)local_b0[0] + 0xc) == 0) {
LAB_01f7b844:
            plVar24 = (long *)0x0;
            puVar9 = local_b0[0];
          }
          else {
            piVar18 = (int *)((long)local_b0[0] + 0xc);
            iVar15 = *(int *)((long)local_b0[0] + 0xc);
            while( true ) {
              plVar24 = (long *)puVar13[2];
              if (((*puVar11 & 1) != 0) || (iVar16 = __cxa_guard_acquire(puVar11), iVar16 == 0)) {
                puVar9 = local_b0[0];
                if (plVar24 != (long *)0x0) goto LAB_01f7b7f8;
                break;
              }
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar16 != 0)) {
                if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
                  uVar26 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar26;
                  __cxa_guard_release(puVar10);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar12 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar11);
              puVar9 = local_b0[0];
              if (plVar24 == (long *)0x0) break;
LAB_01f7b7f8:
              while (puVar9 = local_b0[0], plVar24 != (long *)puVar12) {
                plVar24 = (long *)*plVar24;
                if (plVar24 == (long *)0x0) {
                  plVar24 = (long *)0x0;
                  goto joined_r0x01f7b83c;
                }
              }
              iVar16 = *piVar18;
              if (iVar16 == iVar15) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar8) {
                  *piVar18 = iVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') {
                  lVar17 = puVar13[3];
                  plVar24 = (long *)0x0;
                  if (lVar17 != 0) {
                    plVar24 = (long *)(lVar17 + -0x50);
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar15 = iVar16;
              if (iVar16 == 0) goto LAB_01f7b844;
            }
          }
joined_r0x01f7b83c:
          local_b0[0] = puVar9;
          if (puVar9 != (undefined8 *)0x0) {
            piVar18 = (int *)(puVar9 + 1);
            do {
              iVar15 = *piVar18;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = iVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar15 + -1 == 0) {
              puVar9[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_68 = *puVar9;
              FUN_02a44274(lVar17 + 0xd8,&local_68);
            }
          }
          if (plVar24 != (long *)0x0) {
            FUN_0183d4c8(plVar24);
            lVar17 = plVar24[0xb];
            piVar18 = (int *)(lVar17 + 0xc);
            do {
              iVar15 = *piVar18;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = iVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
          }
        }
        if (local_a0 != (long *)0x0) {
          lVar17 = local_a0[0xb];
          piVar18 = (int *)(lVar17 + 0xc);
          do {
            iVar15 = *piVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
      }
LAB_01f7b3b8:
      plVar24 = local_98;
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      FUN_00b645bc(&local_c0,param_2);
      FUN_01add544(plVar24,&local_c0);
      plVar24 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar1 = local_c0 + 1;
        do {
          iVar15 = (int)*plVar1 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar15;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_b0[0] = (undefined8 *)*plVar24;
          FUN_02a44274(lVar17 + 0xd8,local_b0);
        }
      }
      FUN_01addd54(local_98,1);
joined_r0x01f7b188:
      if (local_98 != (long *)0x0) {
        lVar17 = local_98[0xb];
        piVar18 = (int *)(lVar17 + 0xc);
        do {
          iVar15 = *piVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
joined_r0x01f7b628:
      if (local_70 != (long *)0x0) {
        lVar17 = local_70[0xb];
        piVar18 = (int *)(lVar17 + 0xc);
        do {
          iVar15 = *piVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
      lVar25 = *(long *)(lVar25 + 8);
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        iVar15 = *piVar18;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar8) {
          *piVar18 = iVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar27 + 0x20))(plVar27);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar15 = iVar16;
  if (iVar16 == 0) {
    return;
  }
  goto LAB_01f7b0e0;
}


