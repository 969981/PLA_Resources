/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae7758; name: FUN_02ae7758
 */


long * FUN_02ae7758(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar8 = *param_2;
  *param_2 = 0;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_008802f0(&local_38,lVar8 + 0x58);
    local_48 = (long *)0x0;
    uStack_40 = 0;
    FUN_02ae7cbc(&local_48,&local_38);
    puVar5 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    plVar7 = local_48;
    lVar8 = 0;
    if (local_48 != (long *)0x0) {
      lVar8 = *local_48;
    }
    param_1[1] = lVar8;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = (undefined8 *)*plVar7;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
  }
  return param_1;
}


