/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167839c; name: FUN_0167839c
 */


void FUN_0167839c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_28;
  
  plVar1 = param_2 + 1;
  do {
    lVar8 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar5 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar5;
  FUN_02a44e0c(&local_28,uVar5,lVar8);
  lVar6 = *param_2;
  *param_2 = 0;
  if (lVar6 != 0) {
    FUN_02a43934();
  }
  lVar6 = *param_1;
  *param_1 = 0;
  if (local_28 == 0) {
    if (lVar6 != 0) {
      FUN_02a43934();
    }
    lVar8 = 0;
  }
  else {
    lVar7 = local_28;
    if (lVar6 != 0) {
      FUN_02a43934();
      lVar7 = local_28;
    }
    local_28 = 0;
    *param_1 = lVar7;
  }
  param_1[1] = lVar8;
  if (local_28 != 0) {
    FUN_02a43934();
  }
  return;
}


