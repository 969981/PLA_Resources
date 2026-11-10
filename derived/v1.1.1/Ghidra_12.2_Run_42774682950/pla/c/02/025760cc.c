/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025760cc; name: FUN_025760cc
 */


void FUN_025760cc(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_0425d618;
  param_1[9] = &PTR_LAB_0425d6b8;
  param_1[10] = &PTR_LAB_0425d700;
  if (param_1[0xec] != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar6 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar6;
    if ((lVar6 != 0) && (plVar7 = *(long **)(lVar6 + 0xd0), plVar7 != (long *)0x0)) {
      plVar1 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar7 = (long *)plVar7[0xb];
      }
      else {
        plVar7 = (long *)plVar7[0xb];
      }
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        (**(code **)(*(long *)param_1[0xec] + 0x10))(local_40);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        FUN_017e7b8c(&local_50,local_40);
        puVar8 = local_40[0];
        if (local_40[0] != (undefined8 *)0x0) {
          piVar2 = (int *)(local_40[0] + 1);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            local_40[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar6 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar6;
            local_28 = *puVar8;
            FUN_02a44274(lVar6 + 0xd8,&local_28);
          }
        }
        FUN_02c59398(plVar7,&local_50);
        puVar8 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_50 + 1);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            local_50[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar6 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar6;
            local_40[0] = (undefined8 *)*puVar8;
            FUN_02a44274(lVar6 + 0xd8,local_40);
          }
        }
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = (long *)param_1[0xec];
    param_1[0xec] = 0;
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
  }
  plVar7 = (long *)param_1[0xeb];
  param_1[0xeb] = 0;
  if (plVar7 == (long *)0x0) {
LAB_025762cc:
    plVar7 = (long *)param_1[0xec];
    if (plVar7 == (long *)0x0) goto LAB_025762f0;
LAB_025762d4:
    lVar6 = plVar7[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_025762f0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0xeb];
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_025762cc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = (long *)param_1[0xec];
    if (plVar7 != (long *)0x0) goto LAB_025762d4;
LAB_025762f0:
    plVar7 = (long *)param_1[0xeb];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      puVar8 = (undefined8 *)param_1[0xe6];
      goto joined_r0x02576314;
    }
  }
  puVar8 = (undefined8 *)param_1[0xe6];
joined_r0x02576314:
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 1);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_40[0] = (undefined8 *)*puVar8;
      FUN_02a44274(lVar6 + 0xd8,local_40);
    }
  }
  if ((long *)param_1[0xe5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe5] + 0x20))();
  }
  FUN_0257d788(param_1 + 0xc6);
  FUN_0257d8b0(param_1 + 0xbf);
  FUN_0257d8b0(param_1 + 0xb8);
  FUN_00d415d4(param_1);
  return;
}


