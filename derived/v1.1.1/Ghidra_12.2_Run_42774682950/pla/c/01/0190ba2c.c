/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190ba2c; name: FUN_0190ba2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190ba2c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_018c8968(&local_78);
    plVar8 = local_78;
    if (local_78 != (long *)0x0) {
      plVar10 = local_78 + 0xb;
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_008802f0(&local_78,plVar10);
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      FUN_01685098(&local_90,&local_78);
      plVar10 = local_78;
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 1;
        do {
          iVar6 = (int)*plVar13 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_68 = *plVar10;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      if (local_90 == (undefined8 *)0x0) {
        local_80 = (long *)0x0;
      }
      else {
        FUN_018c8968(&local_80);
      }
      FUN_01908748(param_1 + 0xb8,&local_80);
      puVar5 = local_90;
      if (local_80 != (long *)0x0) {
        lVar9 = local_80[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
          puVar5 = local_90;
        }
      }
      local_90 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_78 = (long *)*puVar5;
          FUN_02a44274(lVar9 + 0xd8,&local_78);
        }
      }
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  if (((*PTR_DAT_0437e418 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e418);
  }
  lVar9 = *(long *)PTR_DAT_0437e420;
  *(long *)PTR_DAT_0437f2f0 = lVar9;
  if (lVar9 != 0) {
    *(ulong *)(lVar9 + 0x60) = *(ulong *)(lVar9 + 0x60) & 0xffffffffffffffdf;
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x78);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0190bad8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0190bad8:
  plVar8 = *(long **)(param_1 + 0xd0);
  plVar10 = *(long **)(param_1 + 0xd8);
  if (plVar8 != plVar10) {
    do {
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_01914fe0(&local_78);
        plVar13 = local_78;
        if (local_78 != (long *)0x0) {
          local_98 = *(long **)(param_1 + 0xb0);
          if (local_98 != (long *)0x0) {
            plVar11 = local_98 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = (int)*plVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          (**(code **)(*local_78 + 0x10))(&local_78,local_78);
          local_90 = (undefined8 *)0x0;
          uStack_88 = 0;
          FUN_019135dc(&local_90,&local_78);
          plVar11 = local_78;
          if (local_78 != (long *)0x0) {
            plVar12 = local_78 + 1;
            do {
              iVar6 = (int)*plVar12 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *(int *)plVar12 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_68 = *plVar11;
              FUN_02a44274(lVar9 + 0xd8,&local_68);
            }
          }
          if (local_90 == (undefined8 *)0x0) {
            local_a0 = (long *)0x0;
          }
          else {
            FUN_01914fe0(&local_a0);
          }
          FUN_01908528(param_1 + 0xb8,&local_98,&local_a0);
          puVar5 = local_90;
          if (local_a0 != (long *)0x0) {
            lVar9 = local_a0[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_a0 + 0x20))();
              puVar5 = local_90;
            }
          }
          local_90 = puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              puVar5[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_78 = (long *)*puVar5;
              FUN_02a44274(lVar9 + 0xd8,&local_78);
            }
          }
          if (local_98 != (long *)0x0) {
            plVar11 = local_98 + 10;
            do {
              iVar6 = (int)*plVar11 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_98 + 0x10))();
            }
          }
          lVar9 = plVar13[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
          }
        }
      }
      lVar9 = *plVar8;
      if ((*(ulong *)(param_1 + 200) & 0x17) == 0) {
        if ((((uint)*(ulong *)(param_1 + 200) >> 3 & 1) != 0) && (*(int *)(lVar9 + 0x1c0) != 2)) {
          *(undefined4 *)(lVar9 + 0x1c0) = 1;
        }
      }
      else if (*(int *)(lVar9 + 0x1c0) != 2) {
        *(undefined4 *)(lVar9 + 0x1c0) = 2;
      }
      plVar13 = (long *)*plVar8;
      local_a8 = plVar13;
      if (plVar13 == (long *)0x0) {
        FUN_0190c338(param_1,&local_a8);
      }
      else {
        lVar9 = plVar13[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0190c280;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_0190c338(param_1,&local_a8);
        lVar9 = plVar13[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar10);
    plVar10 = *(long **)(param_1 + 0xd0);
    plVar13 = *(long **)(param_1 + 0xd8);
    plVar8 = plVar10;
    if (plVar10 != plVar13) {
      do {
        plVar8 = (long *)*plVar10;
        iVar6 = _DAT_000000f0;
        if (plVar8 != (long *)0x0) {
          lVar9 = plVar8[0xb];
          if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0190c280;
          if (*(long *)(lVar9 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
            *(undefined8 *)(lVar9 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          iVar6 = (int)plVar8[0x1e];
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
        }
        plVar8 = plVar10;
        if (iVar6 == 0x13) break;
        plVar10 = plVar10 + 1;
        plVar8 = plVar13;
      } while (plVar10 != plVar13);
      plVar10 = plVar8;
      if (plVar13 != plVar8) {
        while (plVar10 = plVar10 + 1, plVar10 != plVar13) {
          plVar11 = (long *)*plVar10;
          iVar6 = _DAT_000000f0;
          if (plVar11 != (long *)0x0) {
            lVar9 = plVar11[0xb];
            if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0190c280:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar9 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
              *(undefined8 *)(lVar9 + 0x10) = uVar7;
            }
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar9 = plVar11[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            iVar6 = (int)plVar11[0x1e];
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar11 + 0x20))(plVar11);
            }
          }
          if (iVar6 != 0x13) {
            plVar11 = (long *)*plVar8;
            *plVar8 = 0;
            if (plVar11 != (long *)0x0) {
              lVar9 = plVar11[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))();
              }
            }
            lVar9 = *plVar10;
            *plVar10 = 0;
            *plVar8 = lVar9;
            plVar8 = plVar8 + 1;
          }
        }
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0xd8);
  if ((long)plVar10 - (long)plVar8 != 0) {
    plVar13 = (long *)((long)plVar8 + ((long)plVar10 - (long)plVar8));
    plVar11 = plVar8;
    if (plVar13 != plVar10) {
      do {
        plVar8 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar8 != (long *)0x0) {
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        lVar9 = *plVar13;
        plVar12 = plVar13 + 1;
        *plVar13 = 0;
        plVar8 = plVar11 + 1;
        *plVar11 = lVar9;
        plVar13 = plVar12;
        plVar11 = plVar8;
      } while (plVar12 != plVar10);
      plVar10 = *(long **)(param_1 + 0xd8);
    }
    while (plVar10 != plVar8) {
      plVar10 = plVar10 + -1;
      plVar13 = (long *)*plVar10;
      if (plVar13 != (long *)0x0) {
        lVar9 = plVar13[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
    }
    *(long **)(param_1 + 0xd8) = plVar8;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


