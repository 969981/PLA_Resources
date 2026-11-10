/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d5aa50; name: FUN_02d5aa50
 */


void FUN_02d5aa50(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_18;
  
  puVar6 = (undefined8 *)param_1[4];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_18 = *puVar6;
      FUN_02a44274(lVar7 + 0xd8,&local_18);
    }
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
LAB_02d5aae8:
    plVar5 = (long *)param_1[1];
  }
  else {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_02d5aae8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[1];
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      param_1 = (long *)*param_1;
      goto joined_r0x02d5ab70;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x02d5ab70:
  if (param_1 != (long *)0x0) {
    lVar7 = param_1[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02d5ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}


