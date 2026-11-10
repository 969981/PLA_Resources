/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02599eb0; name: FUN_02599eb0
 */


int FUN_02599eb0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar8 = *(long **)(lVar7 + 0x278);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar5 = *(int *)((long)plVar8 + 0x164);
  if ((iVar5 == 0) && (iVar5 = (int)plVar8[0x2c], iVar5 == 0)) {
    lVar7 = *param_1;
    if (lVar7 < -0x1c4413fb859baafc) {
      if (lVar7 == -0x1c4417fb859bb1c8) {
        lVar7 = 6;
      }
      else if (lVar7 == -0x1c4415fb859bae62) {
        lVar7 = 4;
      }
      else {
        if (lVar7 != -0x1c4414fb859bacaf) goto LAB_0259a054;
        lVar7 = 5;
      }
    }
    else if (lVar7 < -0x1c4411fb859ba796) {
      if (lVar7 == -0x1c4413fb859baafc) {
        lVar7 = 2;
      }
      else {
        if (lVar7 != -0x1c4412fb859ba949) goto LAB_0259a054;
        lVar7 = 3;
      }
    }
    else if (lVar7 == -0x1c4411fb859ba796) {
      lVar7 = 0;
    }
    else {
      if (lVar7 != -0x1c4410fb859ba5e3) goto LAB_0259a054;
      lVar7 = 1;
    }
    iVar5 = (int)plVar8[lVar7 * 2 + 0x1e];
  }
LAB_0259a054:
  lVar7 = plVar8[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return iVar5;
}


