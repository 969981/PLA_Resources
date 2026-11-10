/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d2d41c; name: FUN_02d2d41c
 */


void FUN_02d2d41c(long *param_1)

{
  int *piVar1;
  long *plVar2;
  ThreadType *pTVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  long *local_c8;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c));
  if (((int)param_1[0xe] != 0) || (param_1[0x12] == 0)) goto LAB_02d2d454;
  iVar8 = (int)param_1[0xf];
  if (iVar8 == 2) {
    local_f0 = param_1;
    plVar9 = (long *)FUN_02d2e8bc(param_1[1],&local_f0);
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar10;
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
    plVar17 = (long *)FUN_013b2b18();
    lVar16 = *plVar17;
    *(long *)PTR_DAT_0437b480 = lVar16;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    FUN_008802f0(&local_f0,param_1 + 0xb);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_02d2cb88(&local_70,&local_f0);
    plVar17 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar18 = local_f0 + 1;
      do {
        iVar8 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_110 = (long *)*plVar17;
        FUN_02a44274(lVar13 + 0xd8,&local_110);
      }
    }
    puVar11 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)param_1[0x10];
      plVar17 = (long *)0x0;
LAB_02d2dd94:
      bVar5 = true;
    }
    else {
      if (*(int *)((long)local_70 + 0xc) != 0) {
        piVar1 = (int *)((long)local_70 + 0xc);
        iVar8 = *(int *)((long)local_70 + 0xc);
        do {
          puVar15 = (undefined8 *)puVar11[2];
          if (((DAT_04408cd0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04408cd0), iVar7 != 0))
          {
            DAT_04408cc8 = FUN_013b21d0();
            __cxa_guard_release(&DAT_04408cd0);
          }
          while( true ) {
            if (puVar15 == (undefined8 *)0x0) goto LAB_02d2d978;
            if (puVar15 == &DAT_04408cc8) break;
            puVar15 = (undefined8 *)*puVar15;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar13 = puVar11[3];
              plVar17 = (long *)0x0;
              puVar11 = local_70;
              if (lVar13 != 0) {
                plVar17 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x02d2e0a4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_02d2d978:
      plVar17 = (long *)0x0;
      puVar11 = local_70;
joined_r0x02d2e0a4:
      local_70 = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          puVar11[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_f0 = (long *)*puVar11;
          FUN_02a44274(lVar13 + 0xd8,&local_f0);
        }
      }
      puVar11 = (undefined8 *)param_1[0x10];
      if (plVar17 == (long *)0x0) goto LAB_02d2dd94;
      lVar13 = plVar17[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar5 = false;
    }
    if (plVar9 != (long *)0x0) {
      lVar13 = plVar9[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar16 + 0x108));
    local_70 = puVar11;
    FUN_013b507c(&local_f0,*(undefined8 *)(lVar16 + 8),&local_70);
    if (local_f0 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else if (*(ulong *)(lVar16 + 0xf8) < *(ulong *)(lVar16 + 0x100)) {
      *(undefined1 *)(local_f0 + 0x60) = 0;
      *(undefined1 *)((long)local_f0 + 0x301) = 0;
      *(undefined1 *)((long)local_f0 + 0x302) = 0;
      pTVar3 = (ThreadType *)(local_f0 + 0x20);
      nn::os::CreateThread
                (pTVar3,(_func_void_void_ptr *)&LAB_02a4971c,local_f0,(void *)local_f0[0x58],
                 local_f0[0x5f],0x10);
      nn::os::SetThreadCoreMask(pTVar3,-1,7);
      nn::os::SetThreadName(pTVar3,"RequestThread");
      nn::os::StartThread(pTVar3);
      plVar18 = local_f0;
      pcVar14 = (code *)local_f0[0x83];
      if (pcVar14 != (code *)0x0) {
        local_f0[0x84] = 0;
        local_f0[0x85] = 0;
        local_f0[0x82] = 0;
        local_f0[0x83] = 0;
        (*pcVar14)(local_f0 + 0x86);
      }
      plVar18[0x86] = (long)plVar17;
      if (!bVar5) {
        lVar13 = plVar17[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar18[0x87] = (long)plVar9;
      if (plVar9 != (long *)0x0) {
        lVar13 = plVar9[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar18[0x82] = (long)&LAB_02d2f9dc;
      plVar18[0x83] = (long)&LAB_02d2fb88;
      plVar18[0x84] = (long)&LAB_02d2fc20;
      plVar18[0x85] = (long)&LAB_02d2fce8;
      FUN_013b5640(lVar16 + 0xd0,&local_f0);
      plVar18 = local_f0;
      if (local_f0 != (long *)0x0) {
        lVar13 = local_f0[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02d2e354:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (local_f0 != (long *)0x0) goto LAB_02d2df9c;
      }
    }
    else {
      plVar18 = (long *)0x0;
LAB_02d2df9c:
      lVar13 = local_f0[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))(local_f0);
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar16 + 0x108));
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    if (!bVar5) {
      lVar16 = plVar17[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      lVar16 = plVar17[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    if (plVar9 == (long *)0x0) goto LAB_02d2d454;
    lVar16 = plVar9[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar6 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else if (iVar8 == 1) {
    local_f0 = param_1;
    plVar9 = (long *)FUN_02d2e8bc(param_1[1],&local_f0);
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar10;
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
    puVar11 = (undefined8 *)FUN_013b2b18();
    uVar10 = *puVar11;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    *(undefined8 *)PTR_DAT_0437b480 = uVar10;
    FUN_008802f0(&local_f0,param_1 + 0xb);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_02d2cb88(&local_70,&local_f0);
    plVar17 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar18 = local_f0 + 1;
      do {
        iVar8 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_110 = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_110);
      }
    }
    puVar11 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
LAB_02d2daa0:
      bVar5 = true;
    }
    else {
      if (*(int *)((long)local_70 + 0xc) != 0) {
        piVar1 = (int *)((long)local_70 + 0xc);
        iVar8 = *(int *)((long)local_70 + 0xc);
        do {
          puVar15 = (undefined8 *)puVar11[2];
          if (((DAT_04408cd0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04408cd0), iVar7 != 0))
          {
            DAT_04408cc8 = FUN_013b21d0();
            __cxa_guard_release(&DAT_04408cd0);
          }
          while( true ) {
            if (puVar15 == (undefined8 *)0x0) goto LAB_02d2d718;
            if (puVar15 == &DAT_04408cc8) break;
            puVar15 = (undefined8 *)*puVar15;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar16 = puVar11[3];
              plVar17 = (long *)0x0;
              puVar11 = local_70;
              if (lVar16 != 0) {
                plVar17 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x02d2e088;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_02d2d718:
      plVar17 = (long *)0x0;
      puVar11 = local_70;
joined_r0x02d2e088:
      local_70 = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          puVar11[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_f0 = (long *)*puVar11;
          FUN_02a44274(lVar16 + 0xd8,&local_f0);
        }
      }
      if (plVar17 == (long *)0x0) goto LAB_02d2daa0;
      lVar16 = plVar17[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
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
      bVar5 = false;
    }
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    local_d0 = plVar17;
    if (!bVar5) {
      lVar16 = plVar17[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_c8 = plVar9;
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_f0 = (long *)&LAB_02d2f374;
    local_e8 = FUN_02d2f4b4;
    local_e0 = &LAB_02d2f54c;
    puStack_d8 = &LAB_02d2f614;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_008802f0(&local_70,param_1 + 0xb);
    local_110 = (long *)0x0;
    uStack_108 = 0;
    FUN_02d2cb88(&local_110,&local_70);
    puVar11 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_58 = *puVar11;
        FUN_02a44274(lVar16 + 0xd8,&local_58);
      }
    }
    local_100 = (long *)0x0;
    uStack_f8 = 0;
    FUN_02d2f6dc(&local_100,&local_110);
    FUN_013b385c(uVar10,&local_f0,&local_100);
    plVar18 = local_100;
    if (local_100 != (long *)0x0) {
      plVar2 = local_100 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_70 = (undefined8 *)*plVar18;
        FUN_02a44274(lVar16 + 0xd8,&local_70);
      }
    }
    plVar18 = local_110;
    if (local_110 != (long *)0x0) {
      plVar2 = local_110 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_70 = (undefined8 *)*plVar18;
        FUN_02a44274(lVar16 + 0xd8,&local_70);
      }
    }
    pcVar14 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar14)(&local_d0);
    }
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    if (!bVar5) {
      lVar16 = plVar17[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      lVar16 = plVar17[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    if (plVar9 == (long *)0x0) goto LAB_02d2d454;
    lVar16 = plVar9[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar6 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (iVar8 != 0) goto LAB_02d2d454;
    local_f0 = param_1;
    plVar9 = (long *)FUN_02d2e8bc(param_1[1],&local_f0);
    if (plVar9 == (long *)0x0) {
      local_f0 = (long *)0x0;
    }
    else {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar10;
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
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar10;
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
      lVar16 = plVar9[0xb];
      local_f0 = plVar9;
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d2e354;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar10;
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
    (*(code *)param_1[0x12])(param_1 + 0x16,&local_f0);
    if (local_f0 != (long *)0x0) {
      lVar16 = local_f0[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    if (plVar9 == (long *)0x0) goto LAB_02d2d454;
    lVar16 = plVar9[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    lVar16 = plVar9[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar6 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (bVar6) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
LAB_02d2d454:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c));
  return;
}


