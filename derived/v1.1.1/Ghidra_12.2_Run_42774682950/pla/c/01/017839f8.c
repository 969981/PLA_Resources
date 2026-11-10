/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017839f8; name: FUN_017839f8
 */


void FUN_017839f8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 local_30 [16];
  
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (FUN_00ac64cc(local_30), uVar5 = local_30._0_8_, (long *)local_30._0_8_ != (long *)0x0)) {
    auVar9 = FUN_01782528(param_1,*(undefined4 *)(param_1 + 0x188));
    FUN_0181bb88(local_30._0_8_,local_30);
    local_30 = auVar9;
    if ((*PTR_DAT_04379678 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379678);
      if (iVar6 != 0) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
    }
    lVar7 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar7;
    plVar8 = *(long **)(lVar7 + 0xd0);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00d853bc(local_30,plVar8);
    FUN_02587234(local_30._0_8_);
    if ((long *)local_30._0_8_ != (long *)0x0) {
      plVar1 = (long *)(local_30._0_8_ + 0x50);
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*(long *)local_30._0_8_ + 0x10))();
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    lVar7 = *(long *)(uVar5 + 0x58);
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*(long *)uVar5 + 0x20))(uVar5);
    }
  }
  return;
}


