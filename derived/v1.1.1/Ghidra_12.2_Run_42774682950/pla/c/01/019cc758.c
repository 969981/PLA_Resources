/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019cc758; name: FUN_019cc758
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_019cc758(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  plVar16 = (long *)PTR_DAT_043794a8;
  plVar19 = (long *)PTR_DAT_043794a0;
  pbVar17 = PTR_DAT_04379498;
  local_80 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  plVar14 = *(long **)(param_2 + 0x1d8);
  if (plVar14 != (long *)0x0) {
    lVar18 = plVar14[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_019cd0bc;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_008802f0(&local_78,plVar14 + 0xb);
    local_a8 = (long *)0x0;
    uStack_a0 = 0;
    FUN_0198b848(&local_a8,&local_78);
    puVar15 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
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
        local_78[2] = 0;
        if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *plVar19;
        *plVar16 = lVar18;
        local_68 = (undefined8 *)*puVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    FUN_0198d4c0(&local_98,&local_a8);
    plVar3 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar2 = local_a8 + 1;
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
        local_a8[2] = 0;
        if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *plVar19;
        *plVar16 = lVar18;
        local_78 = (undefined8 *)*plVar3;
        FUN_02a44274(lVar18 + 0xd8,&local_78);
      }
    }
    lVar18 = plVar14[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
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
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_019d08dc(&local_78,param_2 + 0x1c0);
  puVar15 = local_78;
  puVar9 = PTR_DAT_0437c670;
  puVar8 = PTR_DAT_0437c668;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar10 = *(int *)((long)local_78 + 0xc);
      do {
        plVar19 = (long *)puVar15[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_019cd130;
          if (plVar19 == (long *)puVar9) break;
          plVar19 = (long *)*plVar19;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar18 = puVar15[3];
            plVar14 = (long *)0x0;
            puVar15 = local_78;
            if (lVar18 != 0) {
              plVar14 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x019cce74;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_019cd130:
    plVar14 = (long *)0x0;
    puVar15 = local_78;
joined_r0x019cce74:
    local_78 = puVar15;
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
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
        puVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_a8 = (long *)*puVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_a8);
      }
    }
    plVar19 = (long *)PTR_DAT_043794a0;
    plVar16 = (long *)PTR_DAT_043794a8;
    pbVar17 = PTR_DAT_04379498;
    if (plVar14 != (long *)0x0) {
      plVar19 = (long *)plVar14[0xe];
      if (plVar19 != (long *)0x0) {
        lVar18 = plVar19[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_019cd0bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_0199c694(&local_b0,plVar19);
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x10))(&local_78);
          local_a8 = (long *)0x0;
          uStack_a0 = 0;
          FUN_019b46f8(&local_a8,&local_78);
          puVar15 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
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
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_68 = (undefined8 *)*puVar15;
              FUN_02a44274(lVar18 + 0xd8,&local_68);
            }
          }
          FUN_019b4d04(&local_88,&local_a8);
          plVar16 = local_a8;
          if (local_a8 != (long *)0x0) {
            plVar3 = local_a8 + 1;
            do {
              iVar10 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 == 0) {
              local_a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_78 = (undefined8 *)*plVar16;
              FUN_02a44274(lVar18 + 0xd8,&local_78);
            }
          }
          if (local_b0 != (long *)0x0) {
            lVar18 = local_b0[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
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
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_b0 + 0x20))();
            }
          }
        }
        lVar18 = plVar19[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
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
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      lVar18 = plVar14[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar16 = (long *)PTR_DAT_043794a8;
        plVar19 = (long *)PTR_DAT_043794a0;
        pbVar17 = PTR_DAT_04379498;
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  lVar18 = *(long *)(param_2 + 0x2f0);
  FUN_019bf5b0(lVar18 + 0x68,&local_98);
  FUN_0192aa1c(lVar18 + 0x78,&local_88);
  (**(code **)(**(long **)(param_2 + 0x2f0) + 0x10))(&local_78);
  *param_1 = 0;
  param_1[1] = 0;
  do {
    uVar12 = local_70;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_70,0x10);
    if (bVar5) {
      local_70 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar18 = *plVar19;
  *plVar16 = lVar18;
  FUN_02a44e0c(&local_68,lVar18,uVar12);
  puVar15 = local_78;
  local_78 = (undefined8 *)0x0;
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
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
      puVar15[2] = 0;
      if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *plVar19;
      *plVar16 = lVar18;
      local_a8 = (long *)*puVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_a8);
    }
  }
  puVar15 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 1) {
        puVar15[2] = 0;
        if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *plVar19;
        *plVar16 = lVar18;
        local_a8 = (long *)*puVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_a8);
      }
    }
    uVar12 = 0;
  }
  else {
    puVar13 = local_68;
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
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
        puVar15[2] = 0;
        if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *plVar19;
        *plVar16 = lVar18;
        local_a8 = (long *)*puVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_a8);
      }
      puVar13 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    *param_1 = puVar13;
  }
  puVar15 = local_68;
  param_1[1] = uVar12;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
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
      local_68[2] = 0;
      if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *plVar19;
      *plVar16 = lVar18;
      local_a8 = (long *)*puVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_a8);
    }
  }
  puVar15 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
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
      local_78[2] = 0;
      if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *plVar19;
      *plVar16 = lVar18;
      local_a8 = (long *)*puVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_a8);
    }
  }
  puVar15 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
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
      local_88[2] = 0;
      if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *plVar19;
      *plVar16 = lVar18;
      local_78 = (undefined8 *)*puVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  puVar15 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
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
      local_98[2] = 0;
      if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *plVar19;
      *plVar16 = lVar18;
      local_78 = (undefined8 *)*puVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_78);
    }
  }
  return;
}


