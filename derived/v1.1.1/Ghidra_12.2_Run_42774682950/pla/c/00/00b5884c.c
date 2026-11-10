/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5884c; name: FUN_00b5884c
 */


/* WARNING: Removing unreachable block (ram,0x00b590f8) */
/* WARNING: Removing unreachable block (ram,0x00b59dd8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00b5884c(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  param_1[7] = 0;
  puVar6 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar11 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar16 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_041d5640;
  param_1[1] = lVar16;
  param_1[9] = (long)&PTR_LAB_041d5678;
  plVar14 = param_1 + 0xb;
  *plVar14 = 0;
  param_1[0xc] = 0;
  FUN_008c4b3c(plVar14,param_2);
  lVar12 = *(long *)(param_2 + 0x10);
  param_1[0xd] = lVar12;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_0095e898(param_1 + 0xe,param_2 + 0x18);
  lVar12 = *(long *)(param_2 + 0x28);
  param_1[0x10] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00b5b330;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar12 = *(long *)(param_2 + 0x30);
  param_1[0x11] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00b5b330;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar12 = *(long *)(param_2 + 0x38);
  param_1[0x12] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00b5b330:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  memset(param_1 + 0x2c,0,0x150);
  FUN_00956dac(&local_90,plVar14);
  if (local_90 == (long *)0x0) {
LAB_00b59e48:
    lVar12 = param_1[0xe];
    pbVar4 = PTR_DAT_043794d0;
    puVar24 = (undefined8 *)PTR_DAT_043794d8;
    pbVar5 = PTR_DAT_043796e0;
    puVar20 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    plVar14 = (long *)FUN_0095992c(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_009cca14(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00ac3ca4(param_1 + 0x2c,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_009c2598(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00ac4a8c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00ac4d8c(param_1 + 0x2e,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    lVar12 = FUN_009aff90(local_90 + 0x1e,&local_78);
    if (lVar12 != 0) {
      local_78 = (long *)0x0;
      local_70 = 0;
      FUN_008802f0(&local_78,lVar12 + 0x58);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00880560(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      local_78 = (long *)0x0;
      local_70 = 0;
      FUN_00b5f91c(&local_78,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b5fc1c(param_1 + 0x30,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_88 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_88);
        }
      }
    }
    plVar14 = (long *)FUN_009b807c(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00b5ff1c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b6021c(param_1 + 0x32,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_0095934c(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_009cc414(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b6051c(param_1 + 0x34,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar19 = local_90;
    plVar14 = local_90 + 0x21;
    lVar16 = *plVar14;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar16) {
      bVar3 = false;
    }
    else {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0xfc));
            while (*plVar14 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = lVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00b58dbc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00b58dbc:
      bVar3 = true;
    }
    lVar12 = nn::os::GetCurrentThread();
    plVar14 = plVar19 + 0x24;
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x114));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar12;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00b58e08;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = lVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00b58e08:
    plVar14 = (long *)plVar19[0x34];
    plVar23 = (long *)plVar19[0x35];
    if (plVar14 == plVar23) {
LAB_00b58e3c:
      plVar14 = (long *)plVar19[0x2d];
      plVar23 = (long *)plVar19[0x2e];
      if (plVar14 == plVar23) {
LAB_00b58e70:
        lVar12 = 0;
      }
      else {
        do {
          uVar15 = FUN_00b65e44(plVar14);
          if ((uVar15 & 1) != 0) goto LAB_00b58e64;
          plVar14 = plVar14 + 1;
        } while (plVar23 != plVar14);
        plVar14 = plVar23;
LAB_00b58e64:
        if (plVar14 == (long *)plVar19[0x2e]) goto LAB_00b58e70;
        lVar12 = 0;
        if (*plVar14 != 0) {
          lVar12 = *plVar14 + -0x48;
        }
      }
      bVar9 = lVar12 == 0;
    }
    else {
      do {
        uVar15 = FUN_00b65e44(plVar14);
        if ((uVar15 & 1) != 0) goto LAB_00b58e30;
        plVar14 = plVar14 + 1;
      } while (plVar23 != plVar14);
      plVar14 = plVar23;
LAB_00b58e30:
      if ((plVar14 == (long *)plVar19[0x35]) || (*plVar14 == 0)) goto LAB_00b58e3c;
      bVar9 = false;
      lVar12 = *plVar14 + -0x48;
    }
    plVar19[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x114));
    if (bVar3) {
      plVar19[0x21] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0xfc));
    }
    if (bVar9) {
      lVar12 = nn::os::GetCurrentThread();
      plVar14 = plVar19 + 0x28;
      do {
        lVar16 = *plVar14;
        lVar21 = plVar19[0x29];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar16;
          plVar19[0x29] = lVar21;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        while ((lVar16 != 0 && (lVar12 != lVar16))) {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x134));
          do {
            lVar16 = *plVar14;
            lVar21 = plVar19[0x29];
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar16;
              plVar19[0x29] = lVar21;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        while( true ) {
          if (*plVar14 != lVar16 || plVar19[0x29] != lVar21) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16;
            *(long *)((long)plVar19 + 0x144) = lVar21 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar23 = plVar19 + 0x2c;
            lVar16 = *plVar23;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar16) {
              lVar12 = nn::os::GetCurrentThread();
              goto LAB_00b58f38;
            }
            bVar3 = false;
            goto LAB_00b59068;
          }
        }
        ClearExclusiveLocal();
        lVar16 = *plVar14;
        lVar21 = plVar19[0x29];
      } while( true );
    }
LAB_00b59140:
    if (lVar12 != 0) {
      local_78 = (long *)0x0;
      local_70 = 0;
      FUN_008802f0(&local_78,lVar12 + 0x58);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00880560(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      puVar6 = PTR_DAT_04379498;
      local_78 = (long *)0x0;
      local_70 = 0;
      do {
        lVar12 = local_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_80,0x10);
        if (bVar3) {
          local_80 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      uVar13 = *(undefined8 *)PTR_DAT_043794a0;
      *(undefined8 *)PTR_DAT_043794a8 = uVar13;
      FUN_02a44e0c(&local_68,uVar13,lVar12);
      plVar14 = local_88;
      local_88 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_78;
      local_78 = (long *)0x0;
      if (local_68 == (long *)0x0) {
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            lVar12 = *plVar19;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar12 == 1) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar12 + 0xd8,&local_a0);
          }
        }
        lVar12 = 0;
      }
      else {
        plVar19 = local_68;
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            iVar11 = (int)*plVar19 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar16 + 0xd8,&local_a0);
          }
          plVar19 = local_68;
        }
        local_68 = (long *)0x0;
        local_78 = plVar19;
      }
      plVar14 = local_68;
      local_70 = lVar12;
      if (local_68 != (long *)0x0) {
        plVar19 = local_68 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_68[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      do {
        lVar12 = local_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_70,0x10);
        if (bVar3) {
          local_70 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar13;
      FUN_02a44e0c(&local_a0,uVar13,lVar12);
      plVar14 = local_78;
      local_78 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_88 = (long *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      puVar24 = (undefined8 *)param_1[0x4a];
      param_1[0x4a] = 0;
      if (local_a0 == (undefined8 *)0x0) {
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 1) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_88 = (long *)*puVar24;
            FUN_02a44274(lVar12 + 0xd8,&local_88);
          }
        }
        lVar12 = 0;
      }
      else {
        puVar20 = local_a0;
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_88 = (long *)*puVar24;
            FUN_02a44274(lVar16 + 0xd8,&local_88);
          }
          puVar20 = local_a0;
        }
        local_a0 = (undefined8 *)0x0;
        param_1[0x4a] = (long)puVar20;
      }
      puVar24 = local_a0;
      param_1[0x4b] = lVar12;
      if (local_a0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a0 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          local_a0[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_88 = (long *)*puVar24;
          FUN_02a44274(lVar12 + 0xd8,&local_88);
        }
      }
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_88 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_88);
        }
      }
    }
    plVar14 = (long *)FUN_008a7e50(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00946790(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b6081c(param_1 + 0x36,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_009bac40(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00b60b1c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b60e1c(param_1 + 0x38,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_00b660c4(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00b6111c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b6141c(param_1 + 0x3a,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_00b6657c(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00b6171c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b61a1c(param_1 + 0x52,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_00b669c8(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00b61d1c(&local_88,&local_78);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      FUN_00b6201c(param_1 + 0x54,&local_88);
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar14 = (long *)FUN_009b09f8(local_90 + 0x1e,&local_78);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_78);
      puVar6 = PTR_DAT_04379498;
      local_88 = (long *)0x0;
      local_80 = 0;
      do {
        lVar12 = local_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_70,0x10);
        if (bVar3) {
          local_70 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      uVar13 = *(undefined8 *)PTR_DAT_043794a0;
      *(undefined8 *)PTR_DAT_043794a8 = uVar13;
      FUN_02a44e0c(&local_68,uVar13,lVar12);
      plVar14 = local_78;
      local_78 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_88;
      local_88 = (long *)0x0;
      if (local_68 == (long *)0x0) {
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            lVar12 = *plVar19;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar12 == 1) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar12 + 0xd8,&local_a0);
          }
        }
        lVar12 = 0;
      }
      else {
        plVar19 = local_68;
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            iVar11 = (int)*plVar19 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar16 + 0xd8,&local_a0);
          }
          plVar19 = local_68;
        }
        local_68 = (long *)0x0;
        local_88 = plVar19;
      }
      plVar14 = local_68;
      local_80 = lVar12;
      if (local_68 != (long *)0x0) {
        plVar19 = local_68 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_68[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      do {
        lVar12 = local_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_80,0x10);
        if (bVar3) {
          local_80 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar13;
      FUN_02a44e0c(&local_a0,uVar13,lVar12);
      plVar14 = local_88;
      local_88 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_78);
        }
      }
      puVar24 = (undefined8 *)param_1[0x4e];
      param_1[0x4e] = 0;
      if (local_a0 == (undefined8 *)0x0) {
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 1) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_78 = (long *)*puVar24;
            FUN_02a44274(lVar12 + 0xd8,&local_78);
          }
        }
        lVar12 = 0;
      }
      else {
        puVar20 = local_a0;
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_78 = (long *)*puVar24;
            FUN_02a44274(lVar16 + 0xd8,&local_78);
          }
          puVar20 = local_a0;
        }
        local_a0 = (undefined8 *)0x0;
        param_1[0x4e] = (long)puVar20;
      }
      puVar24 = local_a0;
      param_1[0x4f] = lVar12;
      if (local_a0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a0 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          local_a0[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_78 = (long *)*puVar24;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    plVar19 = local_90;
    plVar14 = local_90 + 0x21;
    lVar16 = *plVar14;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar16) {
      bVar3 = false;
    }
    else {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0xfc));
            while (*plVar14 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = lVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00b59308;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00b59308:
      bVar3 = true;
    }
    lVar12 = nn::os::GetCurrentThread();
    plVar14 = plVar19 + 0x24;
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x114));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar12;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00b59354;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = lVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00b59354:
    plVar14 = (long *)plVar19[0x34];
    plVar23 = (long *)plVar19[0x35];
    if (plVar14 == plVar23) {
LAB_00b59388:
      plVar14 = (long *)plVar19[0x2d];
      plVar23 = (long *)plVar19[0x2e];
      if (plVar14 == plVar23) {
LAB_00b593bc:
        plVar23 = (long *)0x0;
      }
      else {
        do {
          uVar15 = FUN_00b66e14(plVar14);
          if ((uVar15 & 1) != 0) goto LAB_00b593b0;
          plVar14 = plVar14 + 1;
        } while (plVar23 != plVar14);
        plVar14 = plVar23;
LAB_00b593b0:
        if (plVar14 == (long *)plVar19[0x2e]) goto LAB_00b593bc;
        plVar23 = (long *)0x0;
        if (*plVar14 != 0) {
          plVar23 = (long *)(*plVar14 + -0x48);
        }
      }
      bVar9 = plVar23 == (long *)0x0;
    }
    else {
      do {
        uVar15 = FUN_00b66e14(plVar14);
        if ((uVar15 & 1) != 0) goto LAB_00b5937c;
        plVar14 = plVar14 + 1;
      } while (plVar23 != plVar14);
      plVar14 = plVar23;
LAB_00b5937c:
      if ((plVar14 == (long *)plVar19[0x35]) || (*plVar14 == 0)) goto LAB_00b59388;
      bVar9 = false;
      plVar23 = (long *)(*plVar14 + -0x48);
    }
    plVar19[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x114));
    if (bVar3) {
      plVar19[0x21] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0xfc));
    }
    if (bVar9) {
      lVar12 = nn::os::GetCurrentThread();
      plVar14 = plVar19 + 0x28;
      do {
        lVar16 = *plVar14;
        lVar21 = plVar19[0x29];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar16;
          plVar19[0x29] = lVar21;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        while ((lVar16 != 0 && (lVar12 != lVar16))) {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x134));
          do {
            lVar16 = *plVar14;
            lVar21 = plVar19[0x29];
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar16;
              plVar19[0x29] = lVar21;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        while( true ) {
          if (*plVar14 != lVar16 || plVar19[0x29] != lVar21) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16;
            *(long *)((long)plVar19 + 0x144) = lVar21 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar23 = plVar19 + 0x2c;
            lVar16 = *plVar23;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar16) {
              lVar12 = nn::os::GetCurrentThread();
              goto LAB_00b59484;
            }
            bVar3 = false;
            goto LAB_00b59d48;
          }
        }
        ClearExclusiveLocal();
        lVar16 = *plVar14;
        lVar21 = plVar19[0x29];
      } while( true );
    }
LAB_00b59e20:
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(&local_78,plVar23);
      puVar6 = PTR_DAT_04379498;
      local_88 = (long *)0x0;
      local_80 = 0;
      do {
        lVar12 = local_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_70,0x10);
        if (bVar3) {
          local_70 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      uVar13 = *(undefined8 *)PTR_DAT_043794a0;
      *(undefined8 *)PTR_DAT_043794a8 = uVar13;
      FUN_02a44e0c(&local_68,uVar13,lVar12);
      plVar14 = local_78;
      local_78 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_88;
      local_88 = (long *)0x0;
      if (local_68 == (long *)0x0) {
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            lVar12 = *plVar19;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar12 == 1) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar12 + 0xd8,&local_a0);
          }
        }
        lVar12 = 0;
      }
      else {
        plVar19 = local_68;
        if (plVar14 != (long *)0x0) {
          plVar19 = plVar14 + 1;
          do {
            iVar11 = (int)*plVar19 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *(int *)plVar19 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            plVar14[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_a0 = (undefined8 *)*plVar14;
            FUN_02a44274(lVar16 + 0xd8,&local_a0);
          }
          plVar19 = local_68;
        }
        local_68 = (long *)0x0;
        local_88 = plVar19;
      }
      plVar14 = local_68;
      local_80 = lVar12;
      if (local_68 != (long *)0x0) {
        plVar19 = local_68 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_68[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        plVar19 = local_78 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_a0 = (undefined8 *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_a0);
        }
      }
      do {
        lVar12 = local_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_80,0x10);
        if (bVar3) {
          local_80 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar13;
      FUN_02a44e0c(&local_a0,uVar13,lVar12);
      plVar14 = local_88;
      local_88 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar19 = plVar14 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_78);
        }
      }
      puVar24 = (undefined8 *)param_1[0x50];
      param_1[0x50] = 0;
      if (local_a0 == (undefined8 *)0x0) {
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 1) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_78 = (long *)*puVar24;
            FUN_02a44274(lVar12 + 0xd8,&local_78);
          }
        }
        lVar12 = 0;
      }
      else {
        puVar20 = local_a0;
        if (puVar24 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar24 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar24[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_78 = (long *)*puVar24;
            FUN_02a44274(lVar16 + 0xd8,&local_78);
          }
          puVar20 = local_a0;
        }
        local_a0 = (undefined8 *)0x0;
        param_1[0x50] = (long)puVar20;
      }
      puVar24 = local_a0;
      param_1[0x51] = lVar12;
      if (local_a0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a0 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          local_a0[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_78 = (long *)*puVar24;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
      plVar14 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 1;
        do {
          iVar11 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_78 = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_78);
        }
      }
    }
    if (local_90 == (long *)0x0) goto LAB_00b59e48;
    lVar12 = local_90[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 != 0) goto LAB_00b59e48;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_90 + 0x20))();
    lVar12 = param_1[0xe];
    pbVar4 = PTR_DAT_043794d0;
    puVar24 = (undefined8 *)PTR_DAT_043794d8;
    pbVar5 = PTR_DAT_043796e0;
    puVar20 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043794d8 = (undefined *)puVar24;
  PTR_DAT_043796e0 = pbVar5;
  PTR_DAT_043796e8 = (undefined *)puVar20;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar11 = *(int *)(lVar12 + 0xc);
      do {
        puVar26 = *(undefined8 **)(lVar12 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
          if (((*pbVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar4), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *puVar24 = uVar13;
            __cxa_guard_release(pbVar4);
          }
          *puVar20 = puVar24;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          if (puVar26 == (undefined8 *)0x0) goto LAB_00b5b6d4;
          if (puVar26 == puVar20) break;
          puVar26 = (undefined8 *)*puVar26;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_00b5b5f4;
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar14 = (long *)(lVar12 + -0x50);
          if (lVar12 != 0) {
            FUN_0199c3e8(&local_78,plVar14);
            FUN_00b6231c(param_1 + 0x3c,&local_78);
            plVar19 = local_78;
            if (local_78 != (long *)0x0) {
              plVar23 = local_78 + 1;
              do {
                iVar11 = (int)*plVar23 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar3) {
                  *(int *)plVar23 = iVar11;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 == 0) {
                local_78[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_88 = (long *)*plVar19;
                FUN_02a44274(lVar16 + 0xd8,&local_88);
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            lVar12 = param_1[0xe];
            goto joined_r0x00b5b704;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_00b5b5f4:
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00b5b6d4:
    lVar12 = param_1[0xe];
joined_r0x00b5b704:
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar11 = *(int *)(lVar12 + 0xc);
      do {
        puVar26 = *(undefined8 **)(lVar12 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
          if (((*pbVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar4), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *puVar24 = uVar13;
            __cxa_guard_release(pbVar4);
          }
          *puVar20 = puVar24;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          if (puVar26 == (undefined8 *)0x0) goto LAB_00b59e50;
          if (puVar26 == puVar20) break;
          puVar26 = (undefined8 *)*puVar26;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            plVar14 = (long *)(lVar12 + -0x50);
            if (lVar12 != 0) {
              FUN_0199c220(&local_88,plVar14);
              if (local_88 == (long *)0x0) goto LAB_00b5b810;
              uVar15 = FUN_02a43a8c();
              plVar23 = local_88;
              puVar6 = PTR_DAT_0437a0e8;
              plVar19 = local_88;
              if ((uVar15 & 1) != 0) goto joined_r0x00b5bb60;
              if (local_88 == (long *)0x0) goto LAB_00b5b810;
              if (*(int *)((long)local_88 + 0xc) == 0) goto joined_r0x00b5bb60;
              piVar1 = (int *)((long)local_88 + 0xc);
              iVar11 = *(int *)((long)local_88 + 0xc);
              goto LAB_00b5b8c4;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
  }
  goto LAB_00b59e50;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar3) {
      *plVar23 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00b58f38:
    if (*plVar23 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x154));
        while (*plVar23 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar3) {
            *plVar23 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b59064;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b59064:
  bVar3 = true;
LAB_00b59068:
  plVar23 = (long *)plVar19[0x3b];
  plVar25 = (long *)plVar19[0x3c];
  if (plVar23 != plVar25) {
    do {
      uVar15 = FUN_00b65e44(plVar23);
      if ((uVar15 & 1) != 0) goto LAB_00b59090;
      plVar23 = plVar23 + 1;
    } while (plVar25 != plVar23);
    plVar23 = plVar25;
LAB_00b59090:
    if (plVar23 != (long *)plVar19[0x3c]) {
      lVar12 = 0;
      if (*plVar23 != 0) {
        lVar12 = *plVar23 + -0x48;
      }
      goto joined_r0x00b590a0;
    }
  }
  lVar12 = 0;
joined_r0x00b590a0:
  if (bVar3) {
    plVar19[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x154));
  }
  do {
    lVar16 = *plVar14;
    lVar21 = plVar19[0x29];
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar16;
      plVar19[0x29] = lVar21;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b590c4:
  lVar17 = *plVar14;
  lVar22 = plVar19[0x29];
  if (lVar17 == lVar16 && lVar22 == lVar21) goto code_r0x00b590d8;
  ClearExclusiveLocal();
  do {
    do {
      lVar16 = *plVar14;
      if (lVar16 != lVar17 || plVar19[0x29] != lVar22) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b59104;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar17;
        *(long *)((long)plVar19 + 0x144) = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b59104:
    lVar17 = lVar16;
    lVar22 = plVar19[0x29];
  } while (!bVar3);
LAB_00b59138:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x134));
  goto LAB_00b59140;
code_r0x00b590d8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar3) {
    *plVar14 = lVar16;
    *(long *)((long)plVar19 + 0x144) = lVar21 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00b59138;
  goto LAB_00b590c4;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar3) {
      *plVar23 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00b59484:
    if (*plVar23 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x154));
        while (*plVar23 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar3) {
            *plVar23 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b59d44;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b59d44:
  bVar3 = true;
LAB_00b59d48:
  plVar25 = (long *)plVar19[0x3b];
  plVar23 = (long *)plVar19[0x3c];
  if (plVar25 != plVar23) {
    do {
      uVar15 = FUN_00b66e14(plVar25);
      if ((uVar15 & 1) != 0) goto LAB_00b59d70;
      plVar25 = plVar25 + 1;
    } while (plVar23 != plVar25);
    plVar25 = plVar23;
LAB_00b59d70:
    if (plVar25 != (long *)plVar19[0x3c]) {
      plVar23 = (long *)0x0;
      if (*plVar25 != 0) {
        plVar23 = (long *)(*plVar25 + -0x48);
      }
      goto joined_r0x00b59d80;
    }
  }
  plVar23 = (long *)0x0;
joined_r0x00b59d80:
  if (bVar3) {
    plVar19[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x154));
  }
  do {
    lVar12 = *plVar14;
    lVar16 = plVar19[0x29];
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar12;
      plVar19[0x29] = lVar16;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b59da4:
  lVar21 = *plVar14;
  lVar17 = plVar19[0x29];
  if (lVar21 == lVar12 && lVar17 == lVar16) goto code_r0x00b59db8;
  ClearExclusiveLocal();
  do {
    do {
      lVar12 = *plVar14;
      if (lVar12 != lVar21 || plVar19[0x29] != lVar17) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b59de4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar21;
        *(long *)((long)plVar19 + 0x144) = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b59de4:
    lVar21 = lVar12;
    lVar17 = plVar19[0x29];
  } while (!bVar3);
LAB_00b59e18:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x134));
  goto LAB_00b59e20;
code_r0x00b59db8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar3) {
    *plVar14 = lVar12;
    *(long *)((long)plVar19 + 0x144) = lVar16 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00b59e18;
  goto LAB_00b59da4;
LAB_00b5b8c4:
  do {
    plVar25 = (long *)plVar23[2];
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      if (((*pbVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar4), iVar10 != 0)) {
        uVar13 = FUN_0087f8f0();
        *puVar24 = uVar13;
        __cxa_guard_release(pbVar4);
      }
      *(undefined8 **)PTR_DAT_0437a0f0 = puVar24;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      plVar19 = local_88;
      if (plVar25 == (long *)0x0) goto joined_r0x00b5bb60;
      if (plVar25 == (long *)PTR_DAT_0437a0f0) break;
      plVar25 = (long *)*plVar25;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar16 = plVar23[3];
        if (lVar16 != 0) {
          plVar23 = (long *)(lVar16 + -0x50);
          (**(code **)(*plVar23 + 0x18))(&local_78,plVar23);
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_00b6261c(&local_a0,&local_78);
          plVar19 = local_78;
          if (local_78 != (long *)0x0) {
            plVar25 = local_78 + 1;
            do {
              iVar11 = (int)*plVar25 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar3) {
                *(int *)plVar25 = iVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_68 = (long *)*plVar19;
              FUN_02a44274(lVar21 + 0xd8,&local_68);
            }
          }
          FUN_009ae564(param_1 + 0x3e,&local_a0);
          puVar24 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_a0 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_78 = (long *)*puVar24;
              FUN_02a44274(lVar21 + 0xd8,&local_78);
            }
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar19 = local_88;
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar23 + 0x20))(plVar23);
            plVar19 = local_88;
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
joined_r0x00b5bb60:
  local_88 = plVar19;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      iVar11 = (int)*plVar23 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
      plVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_78 = (long *)*plVar19;
      FUN_02a44274(lVar16 + 0xd8,&local_78);
    }
  }
LAB_00b5b810:
  lVar12 = *(long *)(lVar12 + 8);
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    pcVar18 = (code *)param_1[0x1d];
    goto joined_r0x00b5b844;
  }
LAB_00b59e50:
  pcVar18 = (code *)param_1[0x1d];
joined_r0x00b5b844:
  if (pcVar18 != (code *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    (*pcVar18)(param_1 + 0x20);
  }
  param_1[0x1c] = (long)&LAB_00b66f3c;
  param_1[0x1d] = (long)&LAB_00b675d0;
  param_1[0x1e] = (long)&LAB_00b67ffc;
  param_1[0x1f] = (long)&LAB_00b68008;
  param_1[0x20] = (long)param_1;
  return;
}


