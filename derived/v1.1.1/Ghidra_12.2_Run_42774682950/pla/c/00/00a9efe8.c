/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a9efe8; name: FUN_00a9efe8
 */


void FUN_00a9efe8(uint param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  long *local_58;
  
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar14 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar14;
  lVar14 = *(long *)(lVar14 + 200);
  uVar4 = *(ulong *)(lVar14 + 0xd8);
  plVar15 = (long *)**(long **)(lVar14 + 0xd0);
  if ((uVar4 & uVar4 - 1) == 0) {
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0);
    } while (*(int *)(plVar15 + 2) != 0);
  }
  else {
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != 0);
    } while ((int)plVar15[2] != 0);
  }
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00a9fb40;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = FUN_009b807c(plVar15 + 0x1e,&local_a0);
  if (lVar14 != 0) {
    local_a0 = (undefined8 *)0x0;
    pcStack_98 = (char *)0x0;
    FUN_00ac3fa4(&local_a0,lVar14 + 0x248);
    FUN_0099c748(&local_58,&local_a0);
    puVar12 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_70[0] = (long *)*puVar12;
        FUN_02a44274(lVar14 + 0xd8,local_70);
      }
    }
    if (local_58 != (long *)0x0) {
      FUN_01a8b3f8(&local_a0);
      puVar12 = local_a0;
      puVar8 = PTR_DAT_0437a558;
      puVar7 = PTR_DAT_0437a550;
      if (local_a0 != (undefined8 *)0x0) {
        if (*(int *)((long)local_a0 + 0xc) != 0) {
          piVar1 = (int *)((long)local_a0 + 0xc);
          iVar10 = *(int *)((long)local_a0 + 0xc);
          do {
            plVar16 = (long *)puVar12[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar11 = FUN_00aa0310();
              *(undefined8 *)puVar8 = uVar11;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_00a9f778;
              if (plVar16 == (long *)puVar8) break;
              plVar16 = (long *)*plVar16;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar10 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar14 = puVar12[3];
                plVar16 = (long *)0x0;
                puVar12 = local_a0;
                if (lVar14 != 0) {
                  plVar16 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x00a9f460;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_00a9f778:
        plVar16 = (long *)0x0;
        puVar12 = local_a0;
joined_r0x00a9f460:
        local_a0 = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            puVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70[0] = (long *)*puVar12;
            FUN_02a44274(lVar14 + 0xd8,local_70);
          }
        }
        if (plVar16 != (long *)0x0) {
          FUN_00a9ecd4(local_70,plVar16);
          FUN_009983e4(&local_78,local_70);
          plVar17 = local_70[0];
          if (local_78 != (long *)0x0) {
            puVar12 = (undefined8 *)FUN_0289f788();
            plVar17 = (long *)*puVar12;
            if (plVar17 != (long *)0x0) {
              lVar14 = plVar17[0xb];
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00a9fb40;
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar11;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if ((param_1 & 1) != 0) {
              local_a0 = (undefined8 *)0xdd8de50c9feac02f;
              pcStack_98 = "damage_loop_action_bool";
              local_90 = 0x17;
              local_88 = (long *)0x0;
              local_80 = (long *)FUN_028aadac(plVar17,plVar17 + 0x23,&local_a0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              FUN_028ab814(plVar17,&local_80,param_2 & 1);
            }
            local_a0 = (undefined8 *)&DAT_40f3c8d161633fe5;
            pcStack_98 = "battle_one_action_int";
            local_90 = 0x15;
            local_88 = (long *)0x0;
            local_80 = (long *)FUN_028aadac(plVar17,plVar17 + 0x15,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a0 = (undefined8 *)&DAT_d7caeaa105946aa0;
            pcStack_98 = "battle_one_action_trigger";
            local_90 = 0x19;
            local_88 = (long *)0x0;
            uVar3 = (param_1 ^ 1) & param_2;
            local_a8 = FUN_028aadac(plVar17,plVar17 + 0x2a,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            uVar13 = 4;
            if ((uVar3 & 1) == 0) {
              uVar13 = 0;
            }
            FUN_028ab494(plVar17,&local_80,uVar13);
            FUN_028abbb4(plVar17,&local_a8,uVar3 & 1);
            if (plVar17 != (long *)0x0) {
              lVar14 = plVar17[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
            }
            plVar17 = local_70[0];
            if (local_78 != (long *)0x0) {
              lVar14 = local_78[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
                plVar17 = local_70[0];
              }
            }
          }
          local_70[0] = plVar17;
          if (plVar17 != (long *)0x0) {
            plVar2 = plVar17 + 1;
            do {
              iVar10 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 == 0) {
              plVar17[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_a0 = (undefined8 *)*plVar17;
              FUN_02a44274(lVar14 + 0xd8,&local_a0);
            }
          }
          lVar14 = plVar16[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
      }
      if (local_58 != (long *)0x0) {
        lVar14 = local_58[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  FUN_00ab0f5c(&local_58);
  lVar14 = FUN_009b807c(local_58 + 0x1e,&local_a0);
  if (lVar14 != 0) {
    local_a0 = (undefined8 *)0x0;
    pcStack_98 = (char *)0x0;
    FUN_00ac3fa4(&local_a0,lVar14 + 0x248);
    FUN_0099c748(&local_78,&local_a0);
    puVar12 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_70[0] = (long *)*puVar12;
        FUN_02a44274(lVar14 + 0xd8,local_70);
      }
    }
    if (local_78 != (long *)0x0) {
      FUN_01a8b3f8(&local_a0);
      puVar12 = local_a0;
      puVar8 = PTR_DAT_0437a558;
      puVar7 = PTR_DAT_0437a550;
      if (local_a0 != (undefined8 *)0x0) {
        if (*(int *)((long)local_a0 + 0xc) != 0) {
          piVar1 = (int *)((long)local_a0 + 0xc);
          iVar10 = *(int *)((long)local_a0 + 0xc);
          do {
            plVar15 = (long *)puVar12[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar11 = FUN_00aa0310();
              *(undefined8 *)puVar8 = uVar11;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_00a9fba0;
              if (plVar15 == (long *)puVar8) break;
              plVar15 = (long *)*plVar15;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar10 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar14 = puVar12[3];
                plVar15 = (long *)0x0;
                puVar12 = local_a0;
                if (lVar14 != 0) {
                  plVar15 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x00a9f870;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_00a9fba0:
        plVar15 = (long *)0x0;
        puVar12 = local_a0;
joined_r0x00a9f870:
        local_a0 = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            puVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70[0] = (long *)*puVar12;
            FUN_02a44274(lVar14 + 0xd8,local_70);
          }
        }
        if (plVar15 != (long *)0x0) {
          FUN_00a9ecd4(local_70,plVar15);
          FUN_009983e4(&local_80,local_70);
          plVar16 = local_70[0];
          if (local_80 != (long *)0x0) {
            puVar12 = (undefined8 *)FUN_0289f788();
            plVar16 = (long *)*puVar12;
            if (plVar16 != (long *)0x0) {
              lVar14 = plVar16[0xb];
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_00a9fb40:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar11;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if ((param_1 & 1) != 0) {
              local_a0 = (undefined8 *)0xdd8de50c9feac02f;
              pcStack_98 = "damage_loop_action_bool";
              local_90 = 0x17;
              local_88 = (long *)0x0;
              local_a8 = FUN_028aadac(plVar16,plVar16 + 0x23,&local_a0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              FUN_028ab814(plVar16,&local_a8,param_2 & 1);
            }
            local_a0 = (undefined8 *)&DAT_40f3c8d161633fe5;
            pcStack_98 = "battle_one_action_int";
            local_90 = 0x15;
            local_88 = (long *)0x0;
            local_a8 = FUN_028aadac(plVar16,plVar16 + 0x15,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a0 = (undefined8 *)&DAT_d7caeaa105946aa0;
            pcStack_98 = "battle_one_action_trigger";
            local_90 = 0x19;
            local_88 = (long *)0x0;
            param_2 = (param_1 ^ 1) & param_2;
            local_b0 = FUN_028aadac(plVar16,plVar16 + 0x2a,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            uVar13 = 4;
            if ((param_2 & 1) == 0) {
              uVar13 = 0;
            }
            FUN_028ab494(plVar16,&local_a8,uVar13);
            FUN_028abbb4(plVar16,&local_b0,param_2 & 1);
            if (plVar16 != (long *)0x0) {
              lVar14 = plVar16[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
            }
            plVar16 = local_70[0];
            if (local_80 != (long *)0x0) {
              lVar14 = local_80[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
                plVar16 = local_70[0];
              }
            }
          }
          local_70[0] = plVar16;
          if (plVar16 != (long *)0x0) {
            plVar17 = plVar16 + 1;
            do {
              iVar10 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 == 0) {
              plVar16[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_a0 = (undefined8 *)*plVar16;
              FUN_02a44274(lVar14 + 0xd8,&local_a0);
            }
          }
          lVar14 = plVar15[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
      }
      if (local_78 != (long *)0x0) {
        lVar14 = local_78[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
  }
  if (local_58 != (long *)0x0) {
    lVar14 = local_58[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


