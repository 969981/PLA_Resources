/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01985944; name: FUN_01985944
 */


void FUN_01985944(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_278;
  undefined8 *local_270;
  undefined8 uStack_268;
  undefined8 local_260 [2];
  long *local_250 [2];
  long *local_240 [14];
  undefined1 local_1d0 [8] [16];
  long local_150 [2];
  long *local_140;
  long local_138;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  long *local_70 [2];
  
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379618), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
  FUN_00ae4f84(&local_140);
  plVar13 = local_140;
  puVar6 = PTR_DAT_04379638;
  puVar5 = PTR_DAT_04379630;
  plVar14 = (long *)PTR_DAT_043794a0;
  plVar16 = (long *)PTR_DAT_043794a8;
  if (local_140 != (long *)0x0) {
    if (*(int *)((long)local_140 + 0xc) != 0) {
      piVar1 = (int *)((long)local_140 + 0xc);
      iVar9 = *(int *)((long)local_140 + 0xc);
      do {
        plVar14 = (long *)plVar13[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_008b2784();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01987e24;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = plVar13[3];
            plVar13 = (long *)0x0;
            plVar14 = local_140;
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01987e48;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01987e24:
    plVar13 = (long *)0x0;
    plVar14 = local_140;
joined_r0x01987e48:
    local_140 = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar16 = plVar14 + 1;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1d0[0]._0_8_ = *plVar14;
        FUN_02a44274(lVar11 + 0xd8,local_1d0);
      }
    }
    plVar14 = (long *)PTR_DAT_043794a0;
    plVar16 = (long *)PTR_DAT_043794a8;
    if (plVar13 != (long *)0x0) {
      FUN_00b234ec(plVar13);
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar16 = (long *)PTR_DAT_043794a8;
        plVar14 = (long *)PTR_DAT_043794a0;
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  FUN_019cc02c(local_260,*(undefined8 *)(param_1 + 0x480));
  FUN_01934508(&local_140,local_260[0]);
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x488) + 0x70) + 0x218);
  plVar13 = (long *)PTR_DAT_04379c88;
  if (lVar11 != 0) {
    plVar13 = (long *)(lVar11 + 0x58);
  }
  local_140[0xd] = *plVar13;
  if (local_140 != (long *)0x0) {
    lVar11 = local_140[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  lVar11 = *(long *)(param_1 + 0x490);
  local_270 = (undefined8 *)0x0;
  uStack_268 = 0;
  FUN_01933b30(&local_270,local_260);
  FUN_01933b30(lVar11 + 0x138,&local_270);
  puVar7 = local_270;
  if (local_270 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_270 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_270[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *plVar14;
      *plVar16 = lVar11;
      local_140 = (long *)*puVar7;
      FUN_02a44274(lVar11 + 0xd8,&local_140);
    }
  }
  if (*(char *)(param_1 + 0x469) != '\0') {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar13 = *(long **)(lVar11 + 0x228);
    if (plVar13 == (long *)0x0) {
      FUN_010f6124(0);
      FUN_010f5eb0(0);
    }
    else {
      lVar11 = plVar13[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_010f6124(plVar13);
      FUN_010f5eb0(plVar13);
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  plVar13 = (long *)(param_1 + 0x490);
  (**(code **)(*(long *)*plVar13 + 0x10))(&local_140);
  local_1d0[0]._0_8_ = (undefined8 *)0x0;
  local_1d0[0]._8_8_ = 0;
  FUN_0109c02c(local_1d0,&local_140);
  plVar15 = local_140;
  if (local_140 != (long *)0x0) {
    plVar17 = local_140 + 1;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *plVar14;
      *plVar16 = lVar11;
      local_240[0] = (long *)*plVar15;
      FUN_02a44274(lVar11 + 0xd8,local_240);
    }
  }
  FUN_0095e898(&DAT_043d4720,local_1d0);
  uVar10 = local_1d0[0]._0_8_;
  if ((undefined8 *)local_1d0[0]._0_8_ != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0[0]._0_8_ + 8);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(local_1d0[0]._0_8_ + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *plVar14;
      *plVar16 = lVar11;
      local_140 = *(long **)uVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_140);
    }
  }
  local_278 = (long *)*plVar13;
  lVar11 = local_278[0x18];
  if (local_278 != (long *)0x0) {
    lVar12 = local_278[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01e28e10(lVar11,&local_278);
  if (local_278 != (long *)0x0) {
    lVar11 = local_278[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_278 + 0x20))();
    }
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x490) + 0xc0);
  *(undefined1 *)(*(long *)(lVar11 + 0x78) + 0x161) = 1;
  *(undefined1 *)(*(long *)(lVar11 + 0x80) + 0x161) = 1;
  local_1d0[0] = FUN_01846fb4(*(undefined8 *)(*(long *)(param_1 + 0x490) + 0xb8));
  FUN_019cbdec(*(undefined8 *)(param_1 + 0x480),local_1d0);
  plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x490) + 0xc0) + 0x78);
  if (plVar14 == (long *)0x0) {
    FUN_0198aa34(local_250,0);
  }
  else {
    lVar11 = plVar14[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0198aa34(local_250,plVar14);
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  plVar16 = local_250[0];
  lVar11 = nn::os::GetCurrentThread();
  plVar14 = plVar16 + 0x41;
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01985d68;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01985d68:
  plVar14 = *(long **)(*(long *)(param_1 + 0x480) + 0x80);
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar15 = plVar14;
  if ((long *)plVar14[0x3a] != (long *)0x0) {
    plVar15 = (long *)plVar14[0x3a];
  }
  plVar17 = plVar14;
  if ((long *)plVar14[0x3b] != (long *)0x0) {
    plVar17 = (long *)plVar14[0x3b];
  }
  if (plVar15 != plVar17) {
    FUN_02a70230(plVar16);
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    FUN_02a70468(plVar16,0,local_1d0[0]._0_8_);
    plVar14 = *(long **)(*(long *)(*plVar13 + 0xc0) + 0x80);
    if (plVar14 == (long *)0x0) {
      FUN_0198aa34(&local_140,0);
    }
    else {
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0198aa34(&local_140,plVar14);
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    plVar15 = local_140;
    lVar11 = nn::os::GetCurrentThread();
    plVar14 = plVar15 + 0x41;
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x1fc));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01985eb8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01985eb8:
    plVar14 = *(long **)(*(long *)(param_1 + 0x480) + 0x80);
    if (plVar14 != (long *)0x0) {
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar17 = plVar14;
    if ((long *)plVar14[0x3a] != (long *)0x0) {
      plVar17 = (long *)plVar14[0x3a];
    }
    plVar18 = plVar14;
    if ((long *)plVar14[0x3b] != (long *)0x0) {
      plVar18 = (long *)plVar14[0x3b];
    }
    if (plVar17 != plVar18) {
      FUN_02a70230(plVar15);
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      FUN_02a70468(plVar15,0,local_250[0]);
      plVar15[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x1fc));
      if (local_140 != (long *)0x0) {
        lVar11 = local_140[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_140 + 0x20))();
        }
      }
      FUN_019cb860(&local_140,*(undefined8 *)(param_1 + 0x480));
      plVar14 = *(long **)(*(long *)(param_1 + 0x480) + 0x70);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01986018;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01986018:
      plVar15 = *(long **)(*(long *)(*plVar13 + 0xd0) + 0x100);
      if (plVar15 != (long *)0x0) {
        lVar11 = plVar15[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar17 = plVar15 + 0x41;
      do {
        if (*plVar17 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x1fc));
            while (*plVar17 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *plVar17 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_019860a8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_019860a8:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,plVar15);
      FUN_02a70468(plVar15,0,local_110);
      plVar17 = *(long **)(*(long *)(*plVar13 + 0xb0) + 0x4e8);
      if (plVar17 != (long *)0x0) {
        lVar11 = plVar17[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar18 = plVar17 + 0x41;
      do {
        if (*plVar18 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *plVar18 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01986168;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01986168:
      FUN_02a70468(plVar17,plVar14,0);
      FUN_02a70468(plVar17,0,local_110);
      plVar18 = *(long **)(*(long *)(*plVar13 + 0x2d8) + 0x70);
      if (plVar18 != (long *)0x0) {
        lVar11 = plVar18[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar19 = plVar18 + 0x41;
      do {
        if (*plVar19 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar18 + 0x1fc));
            while (*plVar19 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar4) {
                *plVar19 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01986218;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01986218:
      FUN_02a70468(plVar18,plVar15,0);
      FUN_02a70468(plVar18,0,local_110);
      plVar19 = *(long **)(*(long *)(*plVar13 + 0x2a0) + 0x80);
      if (plVar19 != (long *)0x0) {
        lVar11 = plVar19[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar2 = plVar19 + 0x41;
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x1fc));
            while (*plVar2 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_019862c8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_019862c8:
      FUN_02a70468(plVar19,plVar18,0);
      FUN_02a70468(plVar19,0,local_110);
      plVar19[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x1fc));
      if (plVar19 != (long *)0x0) {
        lVar11 = plVar19[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      plVar18[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar18 + 0x1fc));
      if (plVar18 != (long *)0x0) {
        lVar11 = plVar18[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
      }
      plVar17[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
      if (plVar17 != (long *)0x0) {
        lVar11 = plVar17[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      plVar15[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x1fc));
      if (plVar15 != (long *)0x0) {
        lVar11 = plVar15[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
      }
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x1c8) + 0xa0);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0198647c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0198647c:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,local_110);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x288) + 0x70);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0198655c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0198655c:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,local_110);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x2c0) + 0xf0);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0198663c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0198663c:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,local_110);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x110) + 0xe8);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0198671c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0198671c:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,local_110);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x2a8) + 0x80);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar15 = plVar14 + 0x41;
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_019867fc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_019867fc:
      FUN_02a70468(plVar14,local_118,0);
      FUN_02a70468(plVar14,0,local_110);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      FUN_0199f9a0(local_240,*plVar13);
      if (local_240[0] == (long *)0x0) {
        local_70[0] = (long *)0x0;
      }
      else {
        FUN_0198e030(local_70);
        plVar14 = local_240[0];
        if (local_240[0] != (long *)0x0) {
          plVar15 = local_240[0] + 1;
          do {
            iVar9 = (int)*plVar15 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *(int *)plVar15 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 == 0) {
            local_240[0][2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar9 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_150[0] = *plVar14;
            FUN_02a44274(lVar11 + 0xd8,local_150);
          }
        }
      }
      if (local_70[0] != (long *)0x0) {
        if (*(long *)(local_70[0][0xe] + 0x318) == 0) {
          lVar11 = 0;
          local_240[0] = (long *)0x0;
        }
        else {
          FUN_00da9c7c(local_240);
          if (local_240[0] == (long *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar12 = local_240[0][0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            lVar11 = local_240[0][0xd];
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_240[0] + 0x20))();
            }
          }
        }
        lVar12 = nn::os::GetCurrentThread();
        plVar14 = (long *)(lVar11 + 0x208);
        do {
          if (*plVar14 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
              while (*plVar14 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar4) {
                  *plVar14 = lVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_019868c8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_019868c8:
        lVar12 = local_138;
        if (*(long *)(local_138 + 0x1d0) != 0) {
          lVar12 = *(long *)(local_138 + 0x1d0);
        }
        if (*(long *)(local_138 + 0x1d8) != 0) {
          local_138 = *(long *)(local_138 + 0x1d8);
        }
        if (lVar12 == local_138) goto LAB_01989fc8;
        FUN_02a70230(lVar11);
        *(undefined8 *)(lVar11 + 0x208) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
        if (local_70[0] != (long *)0x0) {
          lVar11 = local_70[0][0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar13 + 0x108) + 0x78);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01989fc8;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar13 = plVar14 + 0x41;
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_019869b4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_019869b4:
      FUN_02a70468(plVar14,local_110,0);
      FUN_02a70468(plVar14,0,local_128);
      plVar14[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x1fc));
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      plVar16[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
      if (local_250[0] != (long *)0x0) {
        lVar11 = local_250[0][0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_250[0] + 0x20))();
        }
      }
      plVar14 = *(long **)(param_1 + 8);
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar5 = PTR_DAT_04379528;
        if (iVar9 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0x240,0x10);
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0xb8))(plVar14);
                    /* WARNING: Subroutine does not return */
        FUN_008a93d8(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8();
    }
  }
LAB_01989fc8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


