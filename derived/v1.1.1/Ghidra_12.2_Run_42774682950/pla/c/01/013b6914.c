/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b6914; name: FUN_013b6914
 */


void FUN_013b6914(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined4 local_138 [2];
  long local_130;
  long *local_128;
  long *local_120;
  undefined8 uStack_118;
  long *local_110;
  code *local_108;
  long *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  long *local_80;
  code *local_78;
  long *local_70 [2];
  
  puVar8 = PTR_DAT_0437b480;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar15 = *(long **)(param_1 + 0x130);
  plVar3 = *(long **)(param_1 + 0x138);
  if (plVar15 != plVar3) {
    do {
      local_78 = (code *)*plVar15;
      if (local_78 != (code *)0x0) {
        lVar16 = *(long *)(local_78 + 0x58);
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_013b6f58:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (local_78 == (code *)0x0) goto LAB_013b696c;
        iVar10 = *(int *)(local_78 + 0x68);
        if (iVar10 == 2) {
          FUN_013b1c3c(&local_100,param_1);
          if (local_100 == (long *)0x0) {
            local_70[0] = (long *)0x0;
          }
          else {
            FUN_013b20c8(local_70);
            plVar14 = local_100;
            if (local_100 != (long *)0x0) {
              plVar2 = local_100 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_100[2] = 0;
                if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar6);
                }
                lVar16 = *(long *)puVar7;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_110 = (long *)*plVar14;
                FUN_02a44274(lVar16 + 0xd8,&local_110);
              }
            }
          }
          puVar12 = (undefined8 *)FUN_013b2b18();
          uVar11 = *puVar12;
          *(undefined8 *)puVar8 = uVar11;
          local_138[0] = *(undefined4 *)(local_78 + 0x68);
          local_130 = *(long *)(local_78 + 0x70);
          local_100 = local_70[0];
          if (local_70[0] != (long *)0x0) {
            lVar16 = local_70[0][0xb];
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_013b6f58;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          local_f8 = local_78;
          if (local_78 != (code *)0x0) {
            lVar16 = *(long *)(local_78 + 0x58);
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_013b6f58;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_013b7018(&local_128,uVar11,local_138,&local_100);
          if (local_128 != (long *)0x0) {
            lVar16 = local_128[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_128 + 0x20))();
            }
          }
          if (local_f8 != (code *)0x0) {
            lVar16 = *(long *)(local_f8 + 0x58);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*(long *)local_f8 + 0x20))();
            }
          }
          plVar14 = local_70[0];
          if (local_100 != (long *)0x0) {
            lVar16 = local_100[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
              plVar14 = local_70[0];
            }
          }
          local_70[0] = plVar14;
          if (plVar14 != (long *)0x0) {
            lVar16 = plVar14[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_013b6db4:
            if (iVar10 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))();
            }
          }
joined_r0x013b6dbc:
          if (local_78 == (code *)0x0) goto LAB_013b696c;
        }
        else {
          if (iVar10 == 1) {
            FUN_013b1c3c(&local_100,param_1);
            if (local_100 == (long *)0x0) {
              local_80 = (long *)0x0;
            }
            else {
              FUN_013b20c8(&local_80);
              plVar14 = local_100;
              if (local_100 != (long *)0x0) {
                plVar2 = local_100 + 1;
                do {
                  iVar10 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 == 0) {
                  local_100[2] = 0;
                  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar6);
                  }
                  lVar16 = *(long *)puVar7;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_110 = (long *)*plVar14;
                  FUN_02a44274(lVar16 + 0xd8,&local_110);
                }
              }
            }
            puVar12 = (undefined8 *)FUN_013b2b18();
            uVar11 = *puVar12;
            *(undefined8 *)puVar8 = uVar11;
            local_110 = local_80;
            if (local_80 != (long *)0x0) {
              lVar16 = local_80[0xb];
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_013b6f58;
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar13;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            local_108 = local_78;
            if (local_78 != (code *)0x0) {
              lVar16 = *(long *)(local_78 + 0x58);
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_013b6f58;
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar13;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            local_f0 = 0;
            uStack_e8 = 0;
            local_100 = (long *)0x0;
            local_f8 = (code *)0x0;
            FUN_013b71a8(&local_100,&local_110);
            local_120 = (long *)0x0;
            uStack_118 = 0;
            FUN_013b385c(uVar11,&local_100,&local_120);
            plVar14 = local_120;
            if (local_120 != (long *)0x0) {
              plVar2 = local_120 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_120[2] = 0;
                if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar6);
                }
                lVar16 = *(long *)puVar7;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_70[0] = (long *)*plVar14;
                FUN_02a44274(lVar16 + 0xd8,local_70);
              }
            }
            pcVar9 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = 0;
              uStack_e8 = 0;
              local_100 = (long *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar9)(auStack_e0);
            }
            if (local_108 != (code *)0x0) {
              lVar16 = *(long *)(local_108 + 0x58);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*(long *)local_108 + 0x20))();
              }
            }
            plVar14 = local_80;
            if (local_110 != (long *)0x0) {
              lVar16 = local_110[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_110 + 0x20))();
                plVar14 = local_80;
              }
            }
            local_80 = plVar14;
            if (plVar14 != (long *)0x0) {
              lVar16 = plVar14[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar10 = *piVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_013b6db4;
            }
            goto joined_r0x013b6dbc;
          }
          if (iVar10 == 0) {
            FUN_013b6f70(param_1,&local_78);
            goto joined_r0x013b6dbc;
          }
        }
        lVar16 = *(long *)(local_78 + 0x58);
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*(long *)local_78 + 0x20))();
        }
      }
LAB_013b696c:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar3);
    plVar15 = *(long **)(param_1 + 0x130);
  }
  FUN_013b363c((long *)(param_1 + 0x130),plVar15);
  return;
}


