/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c03b14; name: FUN_01c03b14
 */


void FUN_01c03b14(long param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_50 [2];
  long *local_40;
  undefined8 local_38;
  
  FUN_01a55fe8(local_50);
  if (local_50[0] == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00bbaa24(&local_40);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
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
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_38 = *local_50[0];
        FUN_02a44274(lVar5 + 0xd8,&local_38);
      }
    }
  }
  if (((local_40 != (long *)0x0) &&
      ((*(char *)(param_1 + 0x1208) == '\0' ||
       (FUN_028b2914(local_40,(char *)(param_1 + 0x1208),param_2 & 1), local_40 != (long *)0x0))))
     && ((*(char *)(param_1 + 0x1210) == '\0' ||
         (FUN_028b1a78(local_40,(char *)(param_1 + 0x1210),param_3), local_40 != (long *)0x0)))) {
    lVar5 = local_40[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


