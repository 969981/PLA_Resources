/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f82900; name: FUN_01f82900
 */


void FUN_01f82900(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  char *local_78;
  undefined8 local_70;
  ulong local_68;
  
  lVar13 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  lVar13 = *(long *)(lVar13 + 8);
  uVar16 = *(uint *)(param_1 + 0x314);
  bVar1 = 0 < *(int *)(param_1 + 0x304);
  uVar20 = (uint)bVar1;
  *(uint *)(param_1 + 0x318) = uVar20;
  *(float *)(param_1 + 0x31c) = (float)((double)lVar13 / 1000000000.0);
  if (uVar16 == 0) {
    puVar18 = (undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x30c) * 0x18 + 0x270);
  }
  else if (uVar16 == 1) {
    puVar18 = (undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x30c) * 0x18 + 0x2b8);
  }
  else {
    puVar18 = (undefined8 *)(param_1 + 0x270);
  }
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar13 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar13;
  if ((lVar13 == 0) ||
     (plVar17 = *(long **)(*(long *)(lVar13 + 0x50) + 0x30), plVar17 == (long *)0x0))
  goto LAB_01f82a1c;
  lVar13 = plVar17[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
    *(undefined8 *)(lVar13 + 0x10) = uVar14;
  }
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar21 = (uint)bVar1;
  if (*(int *)(param_1 + 0x308) == 0) {
    if ((*(char *)(param_1 + 0x32c) == '\0') &&
       (uVar15 = FUN_01f83584(param_1,puVar18,1), (uVar15 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x308) = 1;
      *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x318);
      if (uVar16 != uVar21) {
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
    }
  }
  else {
    switch(*(int *)(param_1 + 0x308)) {
    case 1:
      lVar13 = *(long *)(*(long *)(param_1 + 600) + 0x58);
      if ((lVar13 == 0) || (local_80 = *(long **)(lVar13 + 0x68), local_80 == (long *)0x0)) {
        local_80 = (long *)0x0;
        bVar1 = true;
      }
      else {
        plVar19 = local_80 + 10;
        do {
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar1) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar1) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar1 = false;
      }
      plVar19 = local_80;
      local_78 = (char *)*puVar18;
      local_68 = local_68 & 0xffffffffffffff00;
      local_70 = CONCAT44(1,(uint)(*(int *)((long)puVar18 + 0xc) != 0));
      uVar10 = FUN_0146a2f8(plVar17,&local_80,0xffffffff);
      *(undefined4 *)(param_1 + 0x310) = uVar10;
      FUN_0146a220(plVar17,uVar10);
      *(undefined4 *)(param_1 + 0x308) = 2;
      *(undefined4 *)(param_1 + 800) = 0;
      lVar13 = param_1 + (long)*(int *)(puVar18 + 1) * 0x20;
      if ((*(char *)(lVar13 + 0x208) == '\0') &&
         (FUN_00bf5c04(&local_90,lVar13 + 0x1f8), local_90 != (long *)0x0)) {
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_00ac3fa4(&local_a8,local_90 + 0x49);
        FUN_0099c748(&local_98,&local_a8);
        plVar23 = local_a8;
        if (local_a8 != (long *)0x0) {
          plVar22 = local_a8 + 1;
          do {
            iVar11 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *(int *)plVar22 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_88 = (long *)*plVar23;
            FUN_02a44274(lVar13 + 0xd8,&local_88);
          }
        }
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_01a2bf84(&local_a8,local_98 + 0xb9);
        plVar23 = local_a8;
        puVar7 = PTR_DAT_0437a3d0;
        puVar6 = PTR_DAT_0437a3c8;
        if (local_a8 != (long *)0x0) {
          if (*(int *)((long)local_a8 + 0xc) != 0) {
            piVar2 = (int *)((long)local_a8 + 0xc);
            iVar11 = *(int *)((long)local_a8 + 0xc);
            do {
              plVar22 = (long *)plVar23[2];
              if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                if (((*PTR_DAT_043795d8 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043795d8);
                }
                *(undefined **)puVar7 = PTR_DAT_043795e0;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar22 == (long *)0x0) goto LAB_01f832f4;
                if (plVar22 == (long *)puVar7) break;
                plVar22 = (long *)*plVar22;
              }
              iVar12 = *piVar2;
              if (iVar12 == iVar11) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar11 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  lVar13 = plVar23[3];
                  plVar23 = (long *)0x0;
                  plVar22 = local_a8;
                  if (lVar13 != 0) {
                    plVar23 = (long *)(lVar13 + -0x50);
                  }
                  goto joined_r0x01f83214;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar12;
            } while (iVar12 != 0);
          }
LAB_01f832f4:
          plVar23 = (long *)0x0;
          plVar22 = local_a8;
joined_r0x01f83214:
          local_a8 = plVar22;
          if (plVar22 != (long *)0x0) {
            plVar3 = plVar22 + 1;
            do {
              iVar11 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 == 0) {
              plVar22[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = (long *)*plVar22;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
            }
          }
          if (plVar23 != (long *)0x0) {
            lVar13 = FUN_01f84008(plVar23 + 10);
            if (lVar13 != 0) {
              FUN_01baf99c();
            }
            lVar13 = plVar23[0xb];
            piVar2 = (int *)(lVar13 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar23 + 0x20))(plVar23);
            }
          }
        }
        if (local_98 != (long *)0x0) {
          lVar13 = local_98[0xb];
          piVar2 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_98 + 0x20))();
          }
        }
        if (local_90 != (long *)0x0) {
          lVar13 = local_90[0xb];
          piVar2 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
      }
      if (local_80 != (long *)0x0) {
        plVar23 = local_80 + 10;
        do {
          iVar11 = (int)*plVar23 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar5) {
            *(int *)plVar23 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (!bVar1) {
        plVar23 = plVar19 + 10;
        do {
          iVar11 = (int)*plVar23 + -1;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar1) {
            *(int *)plVar23 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
      break;
    case 2:
      FUN_01f8416c(param_1,puVar18);
      fVar24 = *(float *)(param_1 + 0x31c) + *(float *)(param_1 + 800);
      *(float *)(param_1 + 800) = fVar24;
      if (*(float *)(puVar18 + 2) <= fVar24) {
        *(undefined4 *)(param_1 + 800) = 0;
      }
      else {
        uVar15 = FUN_01f83584(param_1,puVar18,0);
        if ((uVar16 == uVar21) && ((uVar15 & 1) != 0)) break;
      }
      *(undefined4 *)(param_1 + 0x308) = 3;
      break;
    case 3:
      lVar13 = FUN_0146a220(plVar17,*(undefined4 *)(param_1 + 0x310));
      if (*(char *)(lVar13 + 0x5ab) != '\0') {
        plVar19 = *(long **)(lVar13 + 0x2c8);
        if (plVar19 != (long *)0x0) {
          plVar23 = plVar19 + 10;
          do {
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar1) {
              *(int *)plVar23 = (int)*plVar23 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_80 = (long *)0x994cd76cf26dfc40;
        local_78 = "anime_wake";
        local_70 = 10;
        local_68 = 0;
        FUN_0283b430(plVar19,&local_80);
        local_80 = (long *)0x4a0f571a28d293b4;
        local_78 = "anime_close";
        local_70 = 0xb;
        local_68 = 0;
        FUN_0283b1e8(plVar19,&local_80);
        *(undefined1 *)(lVar13 + 0x5ab) = 0;
        if (plVar19 != (long *)0x0) {
          plVar23 = plVar19 + 10;
          do {
            iVar11 = (int)*plVar23 + -1;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar1) {
              *(int *)plVar23 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      FUN_01f8416c(param_1,puVar18);
      *(undefined4 *)(param_1 + 0x308) = 4;
      *(undefined4 *)(param_1 + 800) = 0;
      lVar13 = param_1 + (long)*(int *)(puVar18 + 1) * 0x20;
      if ((*(char *)(lVar13 + 0x208) == '\0') &&
         (FUN_00bf5c04(&local_88,lVar13 + 0x1f8), local_88 != (long *)0x0)) {
        local_80 = (long *)0x0;
        local_78 = (char *)0x0;
        FUN_00ac3fa4(&local_80,local_88 + 0x49);
        FUN_0099c748(&local_90,&local_80);
        plVar19 = local_80;
        if (local_80 != (long *)0x0) {
          plVar23 = local_80 + 1;
          do {
            iVar11 = (int)*plVar23 + -1;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar1) {
              *(int *)plVar23 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            local_80[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_a8 = (long *)*plVar19;
            FUN_02a44274(lVar13 + 0xd8,&local_a8);
          }
        }
        local_80 = (long *)0x0;
        local_78 = (char *)0x0;
        FUN_01a2bf84(&local_80,local_90 + 0xb9);
        plVar19 = local_80;
        puVar9 = PTR_DAT_0437a3d0;
        puVar8 = PTR_DAT_0437a3c8;
        puVar7 = PTR_DAT_043795e0;
        puVar6 = PTR_DAT_043794d0;
        if (local_80 != (long *)0x0) {
          if (*(int *)((long)local_80 + 0xc) != 0) {
            piVar2 = (int *)((long)local_80 + 0xc);
            iVar11 = *(int *)((long)local_80 + 0xc);
            do {
              plVar23 = (long *)plVar19[2];
              if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                if (((*PTR_DAT_043795d8 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
                  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(puVar6);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043795d8);
                }
                *(undefined **)puVar9 = puVar7;
                __cxa_guard_release(puVar8);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_01f83538;
                if (plVar23 == (long *)puVar9) break;
                plVar23 = (long *)*plVar23;
              }
              iVar12 = *piVar2;
              if (iVar12 == iVar11) {
                cVar4 = '\x01';
                bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar1) {
                  *piVar2 = iVar11 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  lVar13 = plVar19[3];
                  plVar19 = (long *)0x0;
                  plVar23 = local_80;
                  if (lVar13 != 0) {
                    plVar19 = (long *)(lVar13 + -0x50);
                  }
                  goto joined_r0x01f8340c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar12;
            } while (iVar12 != 0);
          }
LAB_01f83538:
          plVar19 = (long *)0x0;
          plVar23 = local_80;
joined_r0x01f8340c:
          local_80 = plVar23;
          if (plVar23 != (long *)0x0) {
            plVar22 = plVar23 + 1;
            do {
              iVar11 = (int)*plVar22 + -1;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar1) {
                *(int *)plVar22 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 == 0) {
              plVar23[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_a8 = (long *)*plVar23;
              FUN_02a44274(lVar13 + 0xd8,&local_a8);
            }
          }
          if (plVar19 != (long *)0x0) {
            lVar13 = FUN_01f84008(plVar19 + 10);
            if (lVar13 != 0) {
              FUN_01bafa60();
            }
            lVar13 = plVar19[0xb];
            piVar2 = (int *)(lVar13 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar1) {
                *piVar2 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
          }
        }
        if (local_90 != (long *)0x0) {
          lVar13 = local_90[0xb];
          piVar2 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar1) {
              *piVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
        if (local_88 != (long *)0x0) {
          lVar13 = local_88[0xb];
          piVar2 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar1) {
              *piVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      break;
    case 4:
      uVar14 = FUN_0146a220(plVar17,*(undefined4 *)(param_1 + 0x310));
      FUN_01f8416c(param_1,puVar18);
      uVar15 = FUN_01444be8(uVar14);
      if ((uVar15 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x308) = 5;
      }
      break;
    case 5:
      fVar24 = *(float *)(param_1 + 0x31c) + *(float *)(param_1 + 800);
      *(float *)(param_1 + 800) = fVar24;
      if (*(float *)((long)puVar18 + 0x14) <= fVar24) {
        *(undefined4 *)(param_1 + 800) = 0;
        *(undefined4 *)(param_1 + 0x308) = 6;
      }
      uVar15 = FUN_01f83584(param_1,puVar18,0);
      if ((uVar16 != uVar20) || ((uVar15 & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x308) = 0;
      }
      break;
    case 6:
      lVar13 = (long)*(int *)(param_1 + 0x30c) + 1;
      uVar16 = (uint)lVar13;
      *(uint *)(param_1 + 0x30c) = uVar16;
      if ((2 < uVar16) ||
         (*(undefined1 **)(param_1 + lVar13 * 0x18 + 0x270) == &DAT_cbf29ce484222645)) {
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
      if ((*(int *)(param_1 + 0x300) < 1) && (*(int *)(param_1 + 0x304) < 1)) {
        *(undefined4 *)(param_1 + 0x324) = 0;
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
      *(undefined4 *)(param_1 + 0x308) = 0;
    }
  }
  lVar13 = plVar17[0xb];
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    iVar11 = *piVar2;
    cVar4 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar1) {
      *piVar2 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
LAB_01f82a1c:
  if ((*(int *)(param_1 + 0x300) < 1) && (*(int *)(param_1 + 0x304) < 1)) {
    *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) - *(float *)(param_1 + 0x31c);
  }
  return;
}


