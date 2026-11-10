/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096c558; name: FUN_0096c558
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096c558(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  code *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *local_88;
  undefined8 local_80;
  long *local_78 [2];
  long *local_68;
  
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar19 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar19;
  if ((*(int *)(*(long *)(lVar19 + 0x50) + 0x2aa0) != 0) &&
     (plVar16 = *(long **)(*(long *)(lVar19 + 0x50) + 0x2aa8), plVar16 != (long *)0x0)) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      (**(code **)(*plVar16 + 0x10))(local_78,plVar16);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_009636f0(&local_88,local_78);
      plVar2 = local_78[0];
      puVar9 = PTR_DAT_043794a8;
      puVar8 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_04379498;
      if (local_78[0] != (long *)0x0) {
        plVar13 = local_78[0] + 1;
        do {
          iVar11 = (int)*plVar13 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_78[0][2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)puVar8;
          *(long *)puVar9 = lVar17;
          local_68 = (long *)*plVar2;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
        }
      }
      if ((local_88 != (long *)0x0) &&
         (puVar18 = (undefined8 *)local_88[3], puVar18 != (undefined8 *)0x0)) {
        plVar13 = (long *)(**(code **)*puVar18)(puVar18);
        puVar6 = PTR_DAT_04379fa8;
        plVar2 = local_88;
        if (((*PTR_DAT_04379fa0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379fa0), puVar10 = PTR_DAT_04379c98,
           puVar6 = PTR_DAT_04379fa8, plVar2 = local_88, iVar11 != 0)) {
          if (((*PTR_DAT_04379ca8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar11 != 0)) {
            uVar12 = FUN_009311a8();
            *(undefined8 *)puVar10 = uVar12;
            __cxa_guard_release(PTR_DAT_04379ca8);
          }
          puVar6 = PTR_DAT_04379fa8;
          *(undefined **)PTR_DAT_04379fa8 = puVar10;
          __cxa_guard_release(PTR_DAT_04379fa0);
          plVar2 = local_88;
        }
        for (; local_88 = plVar2, plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)puVar6) {
            if (plVar2 != (long *)0x0) {
              plVar13 = plVar2 + 1;
              do {
                iVar11 = (int)*plVar13 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *(int *)plVar13 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                plVar2[2] = 0;
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)puVar8;
                *(long *)puVar9 = lVar17;
                local_78[0] = (long *)*plVar2;
                FUN_02a44274(lVar17 + 0xd8,local_78);
              }
            }
            lVar17 = plVar16[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
            (**(code **)(puVar18[-10] + 0x10))(local_78,puVar18 + -10);
            local_88 = (long *)0x0;
            local_80 = 0;
            FUN_0096dddc(&local_88,local_78);
            plVar16 = local_78[0];
            if (local_78[0] != (long *)0x0) {
              plVar2 = local_78[0] + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                local_78[0][2] = 0;
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)puVar8;
                *(long *)puVar9 = lVar17;
                local_68 = (long *)*plVar16;
                FUN_02a44274(lVar17 + 0xd8,&local_68);
              }
            }
            do {
              uVar12 = local_80;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(&local_80,0x10);
              if (bVar5) {
                local_80 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (((*puVar7 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar9 = uVar14;
            FUN_02a44e0c(&local_68,uVar14,uVar12);
            plVar16 = local_88;
            local_88 = (long *)0x0;
            if (plVar16 != (long *)0x0) {
              plVar2 = plVar16 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                plVar16[2] = 0;
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)puVar8;
                *(long *)puVar9 = lVar17;
                local_78[0] = (long *)*plVar16;
                FUN_02a44274(lVar17 + 0xd8,local_78);
              }
            }
            puVar18 = *(undefined8 **)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x68) = 0;
            if (local_68 == (long *)0x0) {
              if (puVar18 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar18 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 == 1) {
                  puVar18[2] = 0;
                  if (((*puVar7 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)puVar8;
                  *(long *)puVar9 = lVar17;
                  local_78[0] = (long *)*puVar18;
                  FUN_02a44274(lVar17 + 0xd8,local_78);
                }
              }
              uVar12 = 0;
            }
            else {
              plVar16 = local_68;
              if (puVar18 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar18 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar18[2] = 0;
                  if (((*puVar7 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)puVar8;
                  *(long *)puVar9 = lVar17;
                  local_78[0] = (long *)*puVar18;
                  FUN_02a44274(lVar17 + 0xd8,local_78);
                }
                plVar16 = local_68;
              }
              local_68 = (long *)0x0;
              *(long **)(param_1 + 0x68) = plVar16;
            }
            plVar16 = local_68;
            *(undefined8 *)(param_1 + 0x70) = uVar12;
            if (local_68 != (long *)0x0) {
              plVar2 = local_68 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                local_68[2] = 0;
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)puVar8;
                *(long *)puVar9 = lVar17;
                local_78[0] = (long *)*plVar16;
                FUN_02a44274(lVar17 + 0xd8,local_78);
              }
            }
            plVar16 = local_88;
            if (local_88 != (long *)0x0) {
              plVar2 = local_88 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                local_88[2] = 0;
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)puVar8;
                *(long *)puVar9 = lVar17;
                local_78[0] = (long *)*plVar16;
                FUN_02a44274(lVar17 + 0xd8,local_78);
              }
            }
            lVar19 = *(long *)(lVar19 + 0x50);
            plVar16 = *(long **)(lVar19 + 0x2aa8);
            if (plVar16 == (long *)0x0) {
LAB_0096c994:
              lVar19 = *(long *)(param_1 + 0x68);
            }
            else {
              lVar17 = plVar16[0xb];
              if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) break;
              iVar11 = *(int *)(lVar19 + 0x2aa0);
              if (*(long *)(lVar17 + 0x10) == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                *(undefined8 *)(lVar17 + 0x10) = uVar12;
              }
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 3) {
                *(undefined4 *)(lVar19 + 0x2aa0) = 4;
                lVar19 = *(long *)(lVar19 + 0x2aa8);
                if (*(int *)(lVar19 + 0x4c0) == 5) {
                  *(undefined4 *)(lVar19 + 0x4c0) = 3;
                  *(undefined4 *)(lVar19 + 0x4d4) = 0;
                }
              }
              lVar19 = plVar16[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 != 0) goto LAB_0096c994;
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
              lVar19 = *(long *)(param_1 + 0x68);
            }
            if (lVar19 == 0) {
              local_78[0] = (long *)0x0;
            }
            else {
              FUN_0096e42c(local_78);
            }
            plVar2 = local_78[0];
            local_78[0][0xd3] = param_2[1];
            local_78[0][0xd2] = *param_2;
            pcVar15 = (code *)local_78[0][0xd5];
            plVar16 = local_78[0] + 0xd4;
            if (pcVar15 != (code *)0x0) {
              local_78[0][0xd6] = 0;
              local_78[0][0xd7] = 0;
              *plVar16 = 0;
              local_78[0][0xd5] = 0;
              (*pcVar15)(local_78[0] + 0xd8);
            }
            if ((code *)param_2[4] != (code *)0x0) {
              (*(code *)param_2[4])(param_2 + 6,plVar2 + 0xd8);
              lVar19 = param_2[2];
              lVar17 = param_2[3];
              lVar3 = param_2[5];
              plVar2[0xd6] = param_2[4];
              plVar2[0xd7] = lVar3;
              *plVar16 = lVar19;
              plVar2[0xd5] = lVar17;
            }
            pcVar15 = (code *)plVar2[0xe5];
            if (pcVar15 != (code *)0x0) {
              plVar2[0xe6] = 0;
              plVar2[0xe7] = 0;
              plVar2[0xe4] = 0;
              plVar2[0xe5] = 0;
              (*pcVar15)(plVar2 + 0xe8);
            }
            if ((code *)param_2[0x14] != (code *)0x0) {
              (*(code *)param_2[0x14])(param_2 + 0x16,plVar2 + 0xe8);
              lVar19 = param_2[0x12];
              lVar17 = param_2[0x13];
              lVar3 = param_2[0x15];
              plVar2[0xe6] = param_2[0x14];
              plVar2[0xe7] = lVar3;
              plVar2[0xe4] = lVar19;
              plVar2[0xe5] = lVar17;
            }
            pcVar15 = (code *)plVar2[0xf5];
            if (pcVar15 != (code *)0x0) {
              plVar2[0xf6] = 0;
              plVar2[0xf7] = 0;
              plVar2[0xf4] = 0;
              plVar2[0xf5] = 0;
              (*pcVar15)(plVar2 + 0xf8);
            }
            if ((code *)param_2[0x24] != (code *)0x0) {
              (*(code *)param_2[0x24])(param_2 + 0x26,plVar2 + 0xf8);
              lVar19 = param_2[0x22];
              lVar17 = param_2[0x23];
              lVar3 = param_2[0x25];
              plVar2[0xf6] = param_2[0x24];
              plVar2[0xf7] = lVar3;
              plVar2[0xf4] = lVar19;
              plVar2[0xf5] = lVar17;
            }
            if (local_78[0] == (long *)0x0) {
LAB_0096caa4:
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_0096caac;
LAB_0096cc34:
              FUN_0096e42c(local_78);
              lVar19 = param_1 + 0x78;
              local_78[0][0x104] = lVar19;
              if (local_78[0] == (long *)0x0) goto LAB_0096cabc;
              lVar19 = local_78[0][0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 != 0) goto LAB_0096cabc;
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_78[0] + 0x20))();
              lVar19 = extraout_x8;
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_0096cac4;
LAB_0096cc80:
              FUN_0096e42c(local_78);
              lVar19 = extraout_x8_00;
              if (*(long *)(param_1 + 0x58) != 0) goto LAB_0096cad4;
LAB_0096cc94:
              plVar16 = (long *)0x0;
              local_88 = (long *)0x0;
            }
            else {
              lVar19 = local_78[0][0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 != 0) goto LAB_0096caa4;
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_78[0] + 0x20))();
              if (*(long *)(param_1 + 0x68) != 0) goto LAB_0096cc34;
LAB_0096caac:
              lVar19 = param_1 + 0x78;
              local_78[0] = (long *)0x0;
              _DAT_00000820 = lVar19;
LAB_0096cabc:
              if (*(long *)(param_1 + 0x68) != 0) goto LAB_0096cc80;
LAB_0096cac4:
              local_78[0] = (long *)0x0;
              if (*(long *)(param_1 + 0x58) == 0) goto LAB_0096cc94;
LAB_0096cad4:
              plVar16 = local_78[0];
              FUN_00931034(&local_88);
              lVar17 = local_88[0xd1];
              FUN_00931034(&local_68,*(undefined8 *)(param_1 + 0x58));
              lVar19 = local_68[0xd4];
              plVar16[0x105] = lVar17;
              plVar16[0x106] = lVar19;
              if (local_68 == (long *)0x0) goto joined_r0x0096ccac;
              lVar19 = local_68[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar16 = local_68;
              if (iVar11 + -1 != 0) goto joined_r0x0096ccac;
            }
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))();
joined_r0x0096ccac:
            if (local_88 != (long *)0x0) {
              lVar19 = local_88[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_88 + 0x20))();
              }
            }
            if (local_78[0] != (long *)0x0) {
              lVar19 = local_78[0][0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_78[0] + 0x20))();
              }
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


