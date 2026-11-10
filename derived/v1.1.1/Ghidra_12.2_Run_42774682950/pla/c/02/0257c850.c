/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257c850; name: FUN_0257c850
 */


void FUN_0257c850(long param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if ((*(byte *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6 + 5) & 1) == 0)
  {
    uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6);
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar9 = *(long **)(lVar8 + 0x280);
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_010db560(plVar9,uVar2,1,0xffffffff);
    uVar7 = FUN_010db6a4(plVar9,uVar2,1,0xffffffff);
    if (((uVar7 & 1) == 0) &&
       ((*(long *)(param_1 + 0x5c8) - *(long *)(param_1 + 0x5c0) >> 1) * -0x5555555555555555 - 1U ==
        (ulong)*(uint *)(param_1 + 0x6f8))) {
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0257c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x20))(plVar9);
        return;
      }
    }
  }
  return;
}


