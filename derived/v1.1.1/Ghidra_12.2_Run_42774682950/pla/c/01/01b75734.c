/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b75734; name: FUN_01b75734
 */


void FUN_01b75734(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_40;
  undefined8 local_38;
  long *local_28;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  FUN_0191c300(&local_40,param_2 + 0x340);
  if (local_40 != (undefined8 *)0x0) {
    FUN_0191cb34(&local_28);
    plVar5 = local_28;
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = (long *)*puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_019225b0(param_1,plVar5,param_3);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
        return;
      }
      return;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  return;
}


