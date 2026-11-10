/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c18fac; name: FUN_01c18fac
 */


void FUN_01c18fac(long param_1)

{
  int *piVar1;
  long **pplVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long **pplVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  long **local_a8;
  long **local_a0;
  long **pplStack_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  FUN_00b911c4(&local_70);
  if (local_70 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x200) == 0) {
    local_78 = (long *)0x0;
    goto joined_r0x01c190b0;
  }
  FUN_00c42600(&local_78);
  if (local_78 == (long *)0x0) goto joined_r0x01c190b0;
  FUN_01a73640(&local_a8,local_70);
  pplVar11 = local_a8;
  puVar10 = PTR_DAT_04379e90;
  puVar9 = PTR_DAT_04379e88;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_a8 == (long **)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_a8 + 0xc) != 0) {
      piVar1 = (int *)((long)local_a8 + 0xc);
      iVar13 = *(int *)((long)local_a8 + 0xc);
      do {
        plVar17 = pplVar11[2];
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar15;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_01c191a4;
          if (plVar17 == (long *)puVar10) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar17 = pplVar11[3];
            local_80 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              local_80 = plVar17 + -10;
            }
            goto LAB_01c191c4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01c191a4:
    local_80 = (long *)0x0;
LAB_01c191c4:
    pplVar11 = local_a8;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (local_a8 != (long **)0x0) {
      pplVar2 = local_a8 + 1;
      do {
        iVar13 = *(int *)pplVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
        if (bVar4) {
          *(int *)pplVar2 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        local_a8[2] = (long *)0x0;
        if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_68 = *pplVar11;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    if (local_80 != (long *)0x0) {
      FUN_01a74a30(&local_a8,local_70);
      if (local_a8 == (long **)0x0) {
        local_88 = (long *)0x0;
      }
      else {
        FUN_00ac64cc(&local_88);
        pplVar11 = local_a8;
        if (local_a8 != (long **)0x0) {
          pplVar2 = local_a8 + 1;
          do {
            iVar13 = *(int *)pplVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
            if (bVar4) {
              *(int *)pplVar2 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            local_a8[2] = (long *)0x0;
            if (((*puVar5 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)puVar6;
            *(long *)puVar7 = lVar16;
            local_68 = *pplVar11;
            FUN_02a44274(lVar16 + 0xd8,&local_68);
          }
        }
        if (local_88 != (long *)0x0) {
          uVar14 = FUN_0181aec8();
          if ((uVar14 & 1) != 0) {
            uVar15 = FUN_0181cb34(local_88);
            FUN_0108969c(&local_a8);
            if (local_a8 == (long **)0x0) {
              local_90 = (long *)0x0;
            }
            else {
              FUN_01089924(&local_90);
              pplVar11 = local_a8;
              if (local_a8 != (long **)0x0) {
                pplVar2 = local_a8 + 1;
                do {
                  iVar13 = *(int *)pplVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
                  if (bVar4) {
                    *(int *)pplVar2 = iVar13 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 + -1 == 0) {
                  local_a8[2] = (long *)0x0;
                  if (((*puVar5 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)puVar6;
                  *(long *)puVar7 = lVar16;
                  local_68 = *pplVar11;
                  FUN_02a44274(lVar16 + 0xd8,&local_68);
                }
              }
              if (local_90 != (long *)0x0) {
                uVar14 = FUN_01088420();
                if ((uVar14 & 1) == 0) {
                  local_a8 = &local_78;
                  local_a0 = &local_80;
                  pplStack_98 = &local_70;
                  uVar14 = FUN_01ba021c(local_70);
                  if ((uVar14 & 1) == 0) {
                    uVar14 = FUN_010895ec(uVar15);
                    if ((uVar14 & 1) != 0) {
                      uVar15 = 1;
                      goto LAB_01c19440;
                    }
                  }
                  else {
                    FUN_010892b4(uVar15);
                    fVar18 = (float)FUN_01088458(local_90);
                    if (fVar18 < 1.0) {
                      uVar15 = 0;
LAB_01c19440:
                      FUN_01c194ec(&local_a8,uVar15);
                    }
                  }
                }
                if (local_90 != (long *)0x0) {
                  lVar16 = local_90[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar13 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*local_90 + 0x20))();
                  }
                }
              }
            }
          }
          if (local_88 != (long *)0x0) {
            lVar16 = local_88[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
      }
      if (local_80 != (long *)0x0) {
        lVar16 = local_80[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
  }
  if (local_78 != (long *)0x0) {
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
joined_r0x01c190b0:
  if (local_70 != (long *)0x0) {
    lVar16 = local_70[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


