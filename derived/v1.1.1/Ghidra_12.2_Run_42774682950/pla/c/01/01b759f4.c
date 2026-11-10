/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b759f4; name: FUN_01b759f4
 */


undefined1  [16] FUN_01b759f4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  auVar7._8_8_ = uStack_48;
  auVar7._0_8_ = local_50;
  if ((*(long *)(param_1 + 0x3d0) != 0) && (FUN_01a111e4(&local_28), local_28 != (long *)0x0)) {
    FUN_02be88ac(local_40,local_28,0);
    FUN_00ab5ae0(&local_30,local_40);
    if (local_40[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40[0] + 1);
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
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_18 = *local_40[0];
        FUN_02a44274(lVar6 + 0xd8,&local_18);
      }
    }
    if (local_30 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      auVar7 = FUN_02bdbce0();
      if (local_30 != (long *)0x0) {
        lVar6 = local_30[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 1) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      bVar3 = true;
    }
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    if (bVar3) {
      return auVar7;
    }
  }
  return ZEXT816(0);
}


