/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4fa84; name: FUN_01a4fa84
 */


void FUN_01a4fa84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  puVar1 = (undefined8 *)(param_2 + 0x8c8);
  if ((*(long *)(param_2 + 0x8c8) == 0) || (*(int *)(*(long *)(param_2 + 0x8c8) + 0xc) == 0)) {
    lVar13 = *(long *)(param_2 + 0x8a8);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar2 = (int *)(lVar13 + 0xc);
      iVar8 = *(int *)(lVar13 + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar10 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01a4fafc;
          if (plVar15 == (long *)puVar7) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01a4fbcc;
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + -0x50);
            FUN_00a9ecd4(&local_70,plVar15);
            FUN_009983e4(&local_78,&local_70);
            puVar12 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_70 + 1);
              do {
                iVar8 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                local_70[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_88 = (undefined8 *)*puVar12;
                FUN_02a44274(lVar11 + 0xd8,&local_88);
              }
            }
            if (local_78 == (long *)0x0) {
LAB_01a4fc90:
              bVar4 = false;
            }
            else {
              plVar14 = (long *)local_78[0x49];
              bVar4 = false;
              if (plVar14 != (long *)0x0) {
                lVar11 = plVar14[0xb];
                if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar11 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                  *(undefined8 *)(lVar11 + 0x10) = uVar10;
                }
                piVar2 = (int *)(lVar11 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = *piVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                local_70 = (undefined8 *)0x0;
                uStack_68 = 0;
                FUN_008802f0(&local_70,plVar14 + 0xb);
                local_88 = (undefined8 *)0x0;
                uStack_80 = 0;
                FUN_01a64088(&local_88,&local_70);
                puVar12 = local_70;
                if (local_70 != (undefined8 *)0x0) {
                  piVar2 = (int *)(local_70 + 1);
                  do {
                    iVar8 = *piVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar8 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar8 + -1 == 0) {
                    local_70[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_58 = *puVar12;
                    FUN_02a44274(lVar11 + 0xd8,&local_58);
                  }
                }
                FUN_01a68878(puVar1,&local_88);
                *param_1 = 0;
                param_1[1] = 0;
                FUN_01a68de8(param_1,puVar1);
                puVar12 = local_88;
                if (local_88 != (undefined8 *)0x0) {
                  piVar2 = (int *)(local_88 + 1);
                  do {
                    iVar8 = *piVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar8 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar8 + -1 == 0) {
                    local_88[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_70 = (undefined8 *)*puVar12;
                    FUN_02a44274(lVar11 + 0xd8,&local_70);
                  }
                }
                lVar11 = plVar14[0xb];
                piVar2 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 == 1) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                }
                bVar4 = true;
              }
              if (local_78 != (long *)0x0) {
                lVar11 = local_78[0xb];
                piVar2 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar2;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              if (!bVar4) goto LAB_01a4fc90;
              bVar4 = true;
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar2 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar2;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            if (bVar4) {
              return;
            }
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a4fbcc:
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01a4fafc:
    puVar12 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar12 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_70 = (undefined8 *)*puVar12;
        FUN_02a44274(lVar13 + 0xd8,&local_70);
      }
    }
    *(undefined8 *)(param_2 + 0x8d0) = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a68de8(param_1,puVar1);
  return;
}


