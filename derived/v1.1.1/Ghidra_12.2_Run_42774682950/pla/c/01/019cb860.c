/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019cb860; name: FUN_019cb860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019cb860(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar6 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar6;
  lVar7 = _DAT_00000148;
  lVar9 = _DAT_00000138;
  plVar8 = *(long **)(lVar6 + 0xc0);
  if (plVar8 == (long *)0x0) {
    param_1[1] = _DAT_00000140;
    param_1[2] = lVar7;
    *param_1 = lVar9;
    lVar6 = _DAT_00000168;
    lVar7 = _DAT_00000158;
    lVar9 = _DAT_00000150;
    param_1[5] = _DAT_00000160;
    param_1[6] = lVar6;
    param_1[3] = lVar9;
    param_1[4] = lVar7;
  }
  else {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar8[0x27];
    lVar7 = plVar8[0x29];
    param_1[1] = plVar8[0x28];
    param_1[2] = lVar7;
    *param_1 = lVar9;
    lVar9 = plVar8[0x2a];
    lVar7 = plVar8[0x2b];
    lVar6 = plVar8[0x2d];
    param_1[5] = plVar8[0x2c];
    param_1[6] = lVar6;
    param_1[3] = lVar9;
    param_1[4] = lVar7;
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x019cb944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8);
      return;
    }
  }
  return;
}


