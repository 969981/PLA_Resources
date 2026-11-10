/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa09b8; name: FUN_01fa09b8
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_01fa09b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
            undefined8 param_9,undefined8 param_10)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  long lStack_78;
  long *local_68;
  
  puVar13 = &DAT_cbf29ce484222645;
  FUN_01f9c89c(&local_80);
  puVar4 = local_80;
  puVar7 = PTR_DAT_04380750;
  puVar6 = PTR_DAT_04380748;
  puVar5 = PTR_DAT_043794d0;
  if (local_80 == (undefined8 *)0x0) {
    return puVar13;
  }
  if (*(int *)((long)local_80 + 0xc) != 0) {
    piVar1 = (int *)((long)local_80 + 0xc);
    iVar9 = *(int *)((long)local_80 + 0xc);
    do {
      plVar14 = (long *)puVar4[2];
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01fa0e80;
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = puVar4[3];
          plVar14 = (long *)0x0;
          puVar4 = local_80;
          if (lVar12 != 0) {
            plVar14 = (long *)(lVar12 + -0x50);
          }
          goto joined_r0x01fa0ad0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01fa0e80:
  plVar14 = (long *)0x0;
  puVar4 = local_80;
joined_r0x01fa0ad0:
  local_80 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = (long *)*puVar4;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (plVar14 == (long *)0x0) {
    return puVar13;
  }
  FUN_00bf702c(&local_88,plVar14,1,*param_4);
  if (local_88 == (long *)0x0) goto LAB_01fa0d20;
  if ((param_8 & 1) == 0) {
    plVar10 = (long *)0x0;
LAB_01fa0c1c:
    local_80 = (undefined8 *)0x0;
    lStack_78 = 0;
    FUN_00956dac(&local_68,local_88 + 0x35);
    if (local_68 != (long *)0x0) {
      lStack_78 = local_68[0x1b];
      local_80 = (undefined8 *)local_68[0x1a];
      lVar12 = local_68[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    local_98 = plVar10;
    if (plVar10 == (long *)0x0) {
      puVar13 = (undefined1 *)
                FUN_01fa0424(param_1,param_2,param_3,&local_80,param_6,param_7,param_9,param_10,
                             param_5,&local_98);
    }
    else {
      lVar12 = plVar10[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01fa10a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
      puVar13 = (undefined1 *)
                FUN_01fa0424(param_1,param_2,param_3,&local_80,param_6,param_7,param_9,param_10,
                             param_5,&local_98);
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  else {
    FUN_01a73650(&local_80);
    FUN_00956dac(&local_90,&local_80);
    puVar4 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = (long *)*puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (local_90 != (long *)0x0) {
      plVar10 = (long *)FUN_00b13c20(local_90 + 0x1e,&local_80);
      if (plVar10 == (long *)0x0) {
        FUN_01fa1160(&local_80);
        puVar4 = local_80;
        puVar7 = PTR_DAT_0437a0f0;
        puVar6 = PTR_DAT_0437a0e8;
        puVar5 = PTR_DAT_043794d0;
        if (local_80 != (undefined8 *)0x0) {
          if (*(int *)((long)local_80 + 0xc) != 0) {
            piVar1 = (int *)((long)local_80 + 0xc);
            iVar9 = *(int *)((long)local_80 + 0xc);
            do {
              plVar15 = (long *)puVar4[2];
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar7 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar15 == (long *)0x0) goto LAB_01fa1114;
                if (plVar15 == (long *)puVar7) break;
                plVar15 = (long *)*plVar15;
              }
              iVar8 = *piVar1;
              if (iVar8 == iVar9) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar12 = puVar4[3];
                  plVar15 = (long *)0x0;
                  puVar4 = local_80;
                  if (lVar12 != 0) {
                    plVar15 = (long *)(lVar12 + -0x50);
                  }
                  goto joined_r0x01fa0fa8;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar9 = iVar8;
            } while (iVar8 != 0);
          }
LAB_01fa1114:
          plVar15 = (long *)0x0;
          puVar4 = local_80;
joined_r0x01fa0fa8:
          local_80 = puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar4 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              puVar4[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = (long *)*puVar4;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          if (plVar15 != (long *)0x0) {
            local_80 = (undefined8 *)plVar15[0x12];
            lStack_78 = plVar15[0x13];
            plVar10 = (long *)FUN_00bd8988(local_90,local_90[1],&local_80);
            if (plVar10 != (long *)0x0) {
              lVar12 = plVar10[0xb];
              if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01fa10a0;
              if (*(long *)(lVar12 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
            lVar12 = plVar15[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
        }
      }
      else {
        lVar12 = plVar10[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01fa10a0;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
      if (local_90 != (long *)0x0) {
        lVar12 = local_90[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
      if (plVar10 != (long *)0x0) goto LAB_01fa0c1c;
    }
  }
  if (local_88 != (long *)0x0) {
    lVar12 = local_88[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
LAB_01fa0d20:
  lVar12 = plVar14[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return puVar13;
}


