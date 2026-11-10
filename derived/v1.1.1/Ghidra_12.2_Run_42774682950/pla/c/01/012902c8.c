/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012902c8; name: FUN_012902c8
 */


undefined8 FUN_012902c8(undefined8 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined1 auStack_40 [16];
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (param_1 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)param_1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      param_1 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar8 = *(long **)(lVar7 + 0x280);
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      param_1 = *(undefined8 **)(lVar7 + 0x18);
      if (param_1 == (undefined8 *)0x0) goto LAB_01290508;
      if (*(long *)(lVar7 + 0x10) == 0) {
        param_1 = (undefined8 *)(**(code **)*param_1)();
        *(undefined8 **)(lVar7 + 0x10) = param_1;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_010dac08(param_1,0);
    if (param_3 < uVar5) {
      uVar5 = *(uint *)((long)plVar8 + (ulong)param_3 * 4 + 0x68);
      uVar9 = uVar5 >> 0x10;
    }
    else {
      uVar5 = 0;
      uVar9 = 0;
    }
    if (plVar8 == (long *)0x0) goto LAB_01290384;
    lVar7 = plVar8[0xb];
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
    if (iVar4 + -1 != 0) goto LAB_01290384;
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar8 = *(long **)(lVar7 + 0x238);
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_01290508:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = *(uint *)((long)plVar8 + (ulong)(param_3 + (int)plVar8[0xa6] * 0x1e) * 4 + 0x68);
    lVar7 = plVar8[0xb];
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
    uVar9 = uVar5 >> 0x10;
    if (iVar4 != 1) goto LAB_01290384;
  }
  *(undefined8 *)(lVar7 + 0x18) = 0;
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_01290384:
  FUN_02c4fb44(auStack_40,uVar5 & 0xffff);
  if (((((uVar5 & 0xffff) == 0) || (uVar9 == 0)) ||
      (iVar4 = FUN_02c4fc60(auStack_40,0xc), iVar4 != 0)) ||
     (iVar4 = FUN_02c4fc60(auStack_40,1), iVar4 == 0)) {
    return 0;
  }
  return 1;
}


