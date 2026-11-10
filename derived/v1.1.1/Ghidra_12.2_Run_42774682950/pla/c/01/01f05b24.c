/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f05b24; name: FUN_01f05b24
 */


void FUN_01f05b24(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_88;
  undefined8 uStack_80;
  long *local_78 [2];
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar12 = *(long **)(lVar11 + 200);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01f05f30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((long *)plVar12[0xe] == (long *)0x0) {
    local_88 = (long *)0x0;
    uStack_80 = 0;
    local_78[0] = (long *)0x0;
    *param_1 = 0;
    plVar13 = local_88;
  }
  else {
    (**(code **)(*(long *)plVar12[0xe] + 0x10))(local_78);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00d8a364(&local_88,local_78);
    plVar13 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      plVar10 = local_78[0] + 1;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *plVar13;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    if (local_88 == (long *)0x0) {
      local_78[0] = (long *)0x0;
    }
    else {
      FUN_01968634(local_78);
      puVar6 = PTR_DAT_0437b1d8;
      puVar5 = PTR_DAT_043794d8;
      puVar4 = PTR_DAT_043794d0;
      plVar13 = local_78[0];
joined_r0x01f05dd8:
      local_78[0] = plVar13;
      if (plVar13 != (long *)0x0) {
        while( true ) {
          plVar13 = local_78[0];
          puVar9 = (undefined8 *)(**(code **)local_78[0][10])(local_78[0] + 10);
          if (((DAT_043d46b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d46b8), iVar7 != 0))
          {
            if (((*PTR_DAT_0437b1d0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b1d0), iVar7 != 0)) {
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                uVar8 = FUN_0087f8f0();
                *(undefined8 *)puVar5 = uVar8;
                __cxa_guard_release(puVar4);
              }
              *(undefined **)puVar6 = puVar5;
              __cxa_guard_release(PTR_DAT_0437b1d0);
            }
            DAT_043d46b0 = puVar6;
            __cxa_guard_release(&DAT_043d46b8);
          }
          for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
            if ((undefined **)puVar9 == &DAT_043d46b0) {
              *param_1 = plVar13;
              lVar11 = plVar13[0xb];
              if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
                if (*(long *)(lVar11 + 0x10) == 0) {
                  uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                  *(undefined8 *)(lVar11 + 0x10) = uVar8;
                }
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                plVar13 = local_88;
                if (local_78[0] != (long *)0x0) {
                  lVar11 = local_78[0][0xb];
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar7 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar7 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar7 + -1 == 0) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*local_78[0] + 0x20))();
                    plVar13 = local_88;
                  }
                }
                goto joined_r0x01f05cf8;
              }
              goto LAB_01f05f30;
            }
          }
          plVar13 = (long *)local_78[0][0xd];
          plVar10 = local_78[0];
          if (plVar13 != (long *)0x0) {
            lVar11 = plVar13[0xb];
            if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01f05f30;
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar8;
            }
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar10 = local_78[0];
          }
          local_78[0] = (long *)0x0;
          if (plVar10 == (long *)0x0) break;
          lVar11 = plVar10[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
          local_78[0] = plVar13;
          if (plVar13 == (long *)0x0) goto LAB_01f05cf0;
        }
        goto joined_r0x01f05dd8;
      }
    }
LAB_01f05cf0:
    *param_1 = 0;
    plVar13 = local_88;
  }
joined_r0x01f05cf8:
  local_88 = plVar13;
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 1;
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      plVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_78[0] = (long *)*plVar13;
      FUN_02a44274(lVar11 + 0xd8,local_78);
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


