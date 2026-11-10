/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c0b7c; name: FUN_025c0b7c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_025c0b7c(long param_1,long *param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_b0;
  undefined8 *local_a8 [2];
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (*param_2 == 0) {
    return;
  }
  FUN_00959eac(&local_70);
  if (local_70 == (long *)0x0) {
    return;
  }
  FUN_0267081c();
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,local_70 + 0x49);
  plVar5 = local_80;
  puVar11 = PTR_DAT_04379e90;
  puVar10 = PTR_DAT_04379e88;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d0;
  if (local_80 == (long *)0x0) goto joined_r0x025c0df4;
  if (*(int *)((long)local_80 + 0xc) != 0) {
    piVar1 = (int *)((long)local_80 + 0xc);
    iVar12 = *(int *)((long)local_80 + 0xc);
    do {
      plVar18 = (long *)plVar5[2];
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_025c0d44;
        if (plVar18 == (long *)puVar11) break;
        plVar18 = (long *)*plVar18;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = plVar5[3];
          plVar5 = (long *)0x0;
          plVar18 = local_80;
          if (lVar15 != 0) {
            plVar5 = (long *)(lVar15 + -0x50);
          }
          goto joined_r0x025c0ccc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_025c0d44:
  plVar5 = (long *)0x0;
  plVar18 = local_80;
joined_r0x025c0ccc:
  local_80 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 1;
    do {
      iVar12 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_a8[0] = (undefined8 *)*plVar18;
      FUN_02a44274(lVar15 + 0xd8,local_a8);
    }
  }
  if (plVar5 == (long *)0x0) goto joined_r0x025c0df4;
  FUN_01a8b908(&local_80,plVar5);
  plVar18 = local_80;
  puVar10 = PTR_DAT_04379e80;
  if (local_80 != (long *)0x0) {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar12 = *(int *)((long)local_80 + 0xc);
      do {
        plVar17 = (long *)plVar18[2];
        if (((*PTR_DAT_04379e78 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar13 != 0)) {
          uVar14 = FUN_0095a420();
          *(undefined8 *)puVar10 = uVar14;
          __cxa_guard_release(PTR_DAT_04379e78);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_025c0ecc;
          if (plVar17 == (long *)puVar10) break;
          plVar17 = (long *)*plVar17;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = plVar18[3];
            local_b0 = (long *)0x0;
            plVar18 = local_80;
            if (lVar15 != 0) {
              local_b0 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x025c0ef4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_025c0ecc:
    local_b0 = (long *)0x0;
    plVar18 = local_80;
joined_r0x025c0ef4:
    local_80 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        plVar18[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_a8[0] = (undefined8 *)*plVar18;
        FUN_02a44274(lVar15 + 0xd8,local_a8);
      }
    }
    if (local_b0 != (long *)0x0) {
      FUN_00aae1c0(&local_80,local_b0);
      if (local_80 != (long *)0x0) {
        if (*(int *)((long)local_80 + 0xc) != 0) {
          local_98 = (long *)0x0;
          uStack_90 = 0;
          FUN_00b1b5bc(&local_98,&local_80);
          FUN_00ae62b0(&local_88,&local_98);
          plVar18 = local_98;
          if (local_98 != (long *)0x0) {
            plVar17 = local_98 + 1;
            do {
              iVar12 = (int)*plVar17 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 == 0) {
              local_98[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_a8[0] = (undefined8 *)*plVar18;
              FUN_02a44274(lVar15 + 0xd8,local_a8);
            }
          }
          iVar12 = FUN_0267081c(local_70);
          param_1 = param_1 + (long)iVar12 * 0x128;
          pcVar2 = (char *)(param_1 + 0x380);
          cVar3 = *pcVar2;
joined_r0x025c1084:
          if (((cVar3 != '\0') && (lVar15 = *(long *)(pcVar2 + 0x28), lVar15 != 0)) &&
             (*(int *)(lVar15 + 0xc) != 0)) {
            piVar1 = (int *)(lVar15 + 0xc);
            iVar12 = *(int *)(lVar15 + 0xc);
            do {
              plVar18 = *(long **)(lVar15 + 0x10);
              if (((*PTR_DAT_0437a878 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a878), iVar13 != 0)) {
                if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)puVar9 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar8);
                }
                *(undefined **)PTR_DAT_0437a880 = puVar9;
                __cxa_guard_release(PTR_DAT_0437a878);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_025c1088;
                if (plVar18 == (long *)PTR_DAT_0437a880) break;
                plVar18 = (long *)*plVar18;
              }
              iVar13 = *piVar1;
              if (iVar13 == iVar12) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar15 = *(long *)(lVar15 + 0x18);
                  if (lVar15 != 0) {
                    FUN_00d81874(local_a8);
                    puVar6 = local_a8[0];
                    if (local_a8[0] == (undefined8 *)0x0) goto LAB_025c1338;
                    if (*(int *)((long)local_a8[0] + 0xc) == 0) goto LAB_025c1244;
                    piVar1 = (int *)((long)local_a8[0] + 0xc);
                    iVar12 = *(int *)((long)local_a8[0] + 0xc);
                    goto LAB_025c11bc;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar13;
            } while (iVar13 != 0);
          }
          goto LAB_025c1088;
        }
        goto LAB_025c1398;
      }
      goto LAB_025c1430;
    }
  }
LAB_025c0dc0:
  lVar15 = plVar5[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
joined_r0x025c0df4:
  if (local_70 != (long *)0x0) {
    lVar15 = local_70[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
LAB_025c11bc:
  do {
    plVar18 = (long *)puVar6[2];
    if (((*PTR_DAT_0437b4b0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437b4b0), iVar13 != 0)) {
      uVar14 = FUN_00ad3750();
      *(undefined8 *)PTR_DAT_0437b4b8 = uVar14;
      __cxa_guard_release(PTR_DAT_0437b4b0);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_025c1244;
      if (plVar18 == (long *)PTR_DAT_0437b4b8) break;
      plVar18 = (long *)*plVar18;
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar16 = puVar6[3];
        plVar18 = (long *)0x0;
        puVar6 = local_a8[0];
        if (lVar16 != 0) {
          plVar18 = (long *)(lVar16 + -0x50);
        }
        goto joined_r0x025c1268;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar13;
  } while (iVar13 != 0);
LAB_025c1244:
  plVar18 = (long *)0x0;
  puVar6 = local_a8[0];
joined_r0x025c1268:
  local_a8[0] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *puVar6;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if (plVar18 != (long *)0x0) {
    FUN_02a4afa8(plVar18);
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
LAB_025c1338:
  lVar16 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
  }
LAB_025c1088:
  pcVar2 = pcVar2 + 0x48;
  if (pcVar2 == (char *)(param_1 + 0x4a0)) goto LAB_025c136c;
  cVar3 = *pcVar2;
  goto joined_r0x025c1084;
LAB_025c136c:
  if (local_88 != (long *)0x0) {
    plVar18 = local_88 + 10;
    do {
      iVar12 = (int)*plVar18 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
LAB_025c1398:
  plVar18 = local_80;
  if (local_80 != (long *)0x0) {
    plVar17 = local_80 + 1;
    do {
      iVar12 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_a8[0] = (undefined8 *)*plVar18;
      FUN_02a44274(lVar15 + 0xd8,local_a8);
    }
  }
LAB_025c1430:
  lVar15 = local_b0[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*local_b0 + 0x20))();
  }
  goto LAB_025c0dc0;
}


