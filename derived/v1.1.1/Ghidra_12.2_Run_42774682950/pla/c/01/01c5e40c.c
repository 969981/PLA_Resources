/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5e40c; name: FUN_01c5e40c
 */


void FUN_01c5e40c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *local_48 [2];
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_01839b24(&local_30,param_1 + 0x360);
  if (local_30 == (long *)0x0) {
LAB_01c5e530:
    bVar3 = false;
  }
  else {
    FUN_02be88ac(local_48,local_30,0);
    FUN_00ab5ae0(&local_38,local_48);
    if (local_48[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48[0] + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *local_48[0];
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (local_38 == (long *)0x0) goto LAB_01c5e530;
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    lVar7 = local_38[0xf];
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
    if ((char)lVar7 == '\0') goto LAB_01c5e530;
    bVar3 = true;
  }
  if (local_30 != (long *)0x0) {
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
      if (bVar3) {
        return;
      }
      goto LAB_01c5e504;
    }
  }
  if (bVar3) {
    return;
  }
LAB_01c5e504:
  *(undefined4 *)(param_1 + 0x294) = 5;
  return;
}


