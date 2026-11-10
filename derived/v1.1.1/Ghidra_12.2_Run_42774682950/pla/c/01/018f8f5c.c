/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f8f5c; name: FUN_018f8f5c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018f8f5c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *local_68;
  long *local_58;
  
  if (*(long *)(param_2 + 0xd0) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_01901be0(&local_58);
    plVar18 = local_58;
    if (local_58 != (long *)0x0) {
      uVar10 = FUN_01a4a984(local_58);
      lVar15 = plVar18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
      if ((uVar10 & 1) != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        pbVar14 = PTR_DAT_04379498;
        uVar13 = *(undefined8 *)(param_2 + 0xd8);
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        plVar16 = (long *)PTR_DAT_043794a8;
        plVar18 = (long *)PTR_DAT_043794a0;
        uVar11 = *(undefined8 *)PTR_DAT_043794a0;
        *(undefined8 *)PTR_DAT_043794a8 = uVar11;
        FUN_02a44e0c(&local_68,uVar11,uVar13);
        puVar17 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (local_68 == (undefined8 *)0x0) {
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 == 1) {
              puVar17[2] = 0;
              if (((*pbVar14 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *plVar18;
              *plVar16 = lVar15;
              local_58 = (long *)*puVar17;
              FUN_02a44274(lVar15 + 0xd8,&local_58);
            }
          }
          uVar13 = 0;
        }
        else {
          puVar12 = local_68;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              puVar17[2] = 0;
              if (((*pbVar14 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *plVar18;
              *plVar16 = lVar15;
              local_58 = (long *)*puVar17;
              FUN_02a44274(lVar15 + 0xd8,&local_58);
            }
            puVar12 = local_68;
          }
          local_68 = (undefined8 *)0x0;
          *param_1 = puVar12;
        }
        param_1[1] = uVar13;
        if (local_68 == (undefined8 *)0x0) {
          return;
        }
        piVar1 = (int *)(local_68 + 1);
        do {
          bVar7 = *piVar1 + -1 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_018f9068;
      }
    }
  }
  puVar6 = PTR_DAT_0437a1f0;
  puVar5 = PTR_DAT_0437a1e8;
  puVar4 = PTR_DAT_0437a1e0;
  lVar15 = *(long *)(param_2 + 0xe0);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar8 = *(int *)(lVar15 + 0xc);
    do {
      plVar18 = *(long **)(lVar15 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        FUN_01900910();
        *(undefined **)puVar6 = puVar5;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_018f8f98;
        if (plVar18 == (long *)puVar6) break;
        plVar18 = (long *)*plVar18;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_018f9470;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          plVar18 = (long *)(lVar15 + -0x50);
          uVar10 = FUN_01a4a984(plVar18);
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
          if ((uVar10 & 1) != 0) {
            *param_1 = 0;
            param_1[1] = 0;
            pbVar14 = PTR_DAT_04379498;
            uVar13 = *(undefined8 *)(param_2 + 0xe8);
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            plVar16 = (long *)PTR_DAT_043794a8;
            plVar18 = (long *)PTR_DAT_043794a0;
            uVar11 = *(undefined8 *)PTR_DAT_043794a0;
            *(undefined8 *)PTR_DAT_043794a8 = uVar11;
            FUN_02a44e0c(&local_68,uVar11,uVar13);
            puVar17 = (undefined8 *)*param_1;
            *param_1 = 0;
            if (local_68 == (undefined8 *)0x0) {
              if (puVar17 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar17 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 == 1) {
                  puVar17[2] = 0;
                  if (((*pbVar14 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *plVar18;
                  *plVar16 = lVar15;
                  local_58 = (long *)*puVar17;
                  FUN_02a44274(lVar15 + 0xd8,&local_58);
                }
              }
              uVar13 = 0;
            }
            else {
              puVar12 = local_68;
              if (puVar17 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar17 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  puVar17[2] = 0;
                  if (((*pbVar14 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *plVar18;
                  *plVar16 = lVar15;
                  local_58 = (long *)*puVar17;
                  FUN_02a44274(lVar15 + 0xd8,&local_58);
                }
                puVar12 = local_68;
              }
              local_68 = (undefined8 *)0x0;
              *param_1 = puVar12;
            }
            param_1[1] = uVar13;
            if (local_68 == (undefined8 *)0x0) {
              return;
            }
            piVar1 = (int *)(local_68 + 1);
            do {
              bVar7 = *piVar1 + -1 == 0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_018f9068;
          }
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018f9470:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_018f8f98:
  uVar10 = FUN_018f978c(param_2);
  if ((uVar10 & 1) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01900fa0(param_1,param_2 + 0xf0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  pbVar14 = PTR_DAT_04379498;
  uVar13 = *(undefined8 *)(param_2 + 200);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  plVar16 = (long *)PTR_DAT_043794a8;
  plVar18 = (long *)PTR_DAT_043794a0;
  uVar11 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar11;
  FUN_02a44e0c(&local_68,uVar11,uVar13);
  puVar17 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar17 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        puVar17[2] = 0;
        if (((*pbVar14 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar18;
        *plVar16 = lVar15;
        local_58 = (long *)*puVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    uVar13 = 0;
  }
  else {
    puVar12 = local_68;
    if (puVar17 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar17[2] = 0;
        if (((*pbVar14 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar18;
        *plVar16 = lVar15;
        local_58 = (long *)*puVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
      puVar12 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    *param_1 = puVar12;
  }
  param_1[1] = uVar13;
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
  piVar1 = (int *)(local_68 + 1);
  do {
    bVar7 = *piVar1 + -1 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018f9068:
  puVar17 = local_68;
  if (bVar7) {
    local_68[2] = 0;
    if (((*pbVar14 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar15 = *plVar18;
    *plVar16 = lVar15;
    local_58 = (long *)*puVar17;
    FUN_02a44274(lVar15 + 0xd8,&local_58);
  }
  return;
}


