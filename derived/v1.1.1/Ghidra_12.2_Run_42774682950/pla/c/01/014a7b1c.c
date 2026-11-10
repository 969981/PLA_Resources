/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a7b1c; name: FUN_014a7b1c
 */


void FUN_014a7b1c(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined2 uVar7;
  long *local_40 [2];
  
  if (param_2 < *(uint *)(*(long *)(param_1 + 0x1650) + 0x260)) {
    uVar7 = *(undefined2 *)(*(long *)(param_1 + 0x1650) + (long)(int)param_2 * 2 + 0x60);
  }
  else {
    uVar7 = 0;
  }
  FUN_02c4fb44(local_40,uVar7);
  iVar4 = FUN_02c4fc60(local_40,0xe);
  if (iVar4 == 2) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_40);
    uVar5 = FUN_010db8e0(local_40[0],uVar7,1);
    if (local_40[0] != (long *)0x0) {
      lVar6 = local_40[0][0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_40[0] + 0x20))();
      }
    }
    uVar5 = uVar5 ^ 1;
  }
  else {
    uVar5 = 1;
  }
  FUN_00d57744(param_1,0,param_2,uVar5 & 1);
  return;
}


