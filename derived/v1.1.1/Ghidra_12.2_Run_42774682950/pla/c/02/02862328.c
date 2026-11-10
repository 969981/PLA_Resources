/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02862328; name: FUN_02862328
 */


void FUN_02862328(long param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long *local_68 [2];
  long *local_58;
  long local_48;
  
  plVar6 = DAT_043ef5b0;
  if (DAT_043ef5b0 != (long *)0x0) {
    plVar11 = DAT_043ef5b0 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar11 = *(long **)(lVar10 + 0xc0);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_02862848:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_48 = plVar11[0x18];
  local_58 = (long *)(local_48 + plVar11[0x19] * 8);
  FUN_0286c430(local_68,&local_48,&local_58);
  if (local_68[0] != (long *)(plVar11[0x18] + plVar11[0x19] * 8)) {
    plVar13 = (long *)*local_68[0];
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar7 != 0)) {
      uVar8 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar8;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02862438:
      if (puVar9 != (undefined8 *)PTR_DAT_0437c680) goto LAB_028627a0;
      lVar10 = plVar13[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02862848;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar12 = plVar13;
      } while (cVar4 != '\0');
LAB_0286247c:
      if (plVar12 != (long *)0x0) {
        plVar13 = (long *)plVar12[0x1a];
        if (plVar13 == (long *)0x0) goto joined_r0x02862568;
        lVar10 = plVar13[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02862848;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
        }
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((param_2 & 1) == 0) {
          FUN_019cc758(local_68,plVar13);
          if (local_68[0] == (long *)0x0) {
            local_58 = (long *)0x0;
          }
          else {
            FUN_0151986c(&local_58);
            if (local_68[0] != (long *)0x0) {
              plVar3 = local_68[0] + 1;
              do {
                iVar7 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 == 0) {
                local_68[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_48 = *local_68[0];
                FUN_02a44274(lVar10 + 0xd8,&local_48);
              }
            }
          }
          if ((local_58 != (long *)0x0) && (FUN_019bf0f4(), local_58 != (long *)0x0)) {
            lVar10 = local_58[0xb];
            piVar2 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_02862548;
          }
        }
        else {
          FUN_019cc758(local_68,plVar13);
          if (local_68[0] == (long *)0x0) {
            local_58 = (long *)0x0;
          }
          else {
            FUN_0151986c(&local_58);
            if (local_68[0] != (long *)0x0) {
              plVar3 = local_68[0] + 1;
              do {
                iVar7 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 == 0) {
                local_68[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_48 = *local_68[0];
                FUN_02a44274(lVar10 + 0xd8,&local_48);
              }
            }
          }
          if ((local_58 != (long *)0x0) && (FUN_019befe4(), local_58 != (long *)0x0)) {
            lVar10 = local_58[0xb];
            piVar2 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_02862548:
            if (iVar7 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
        lVar10 = plVar13[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
        goto joined_r0x02862568;
      }
      goto LAB_02862838;
    }
  }
  plVar12 = (long *)0x0;
LAB_02862838:
  FUN_02b21610(plVar6);
joined_r0x02862568:
  if (((param_2 & 1) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x2f68) + 0x278) -
               *(long *)(*(long *)(param_1 + 0x2f68) + 0x270), lVar10 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x2f90);
    uVar14 = 1;
    do {
      FUN_02b18f84(uVar8,param_1 + 0x2f60,uVar14 - 1);
      uVar1 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar1 < (ulong)((lVar10 >> 4) * -0x79435e50d79435e5));
  }
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
LAB_028627a0:
  puVar9 = (undefined8 *)*puVar9;
  plVar12 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_0286247c;
  goto LAB_02862438;
}


