/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01253da0; name: FUN_01253da0
 */


bool FUN_01253da0(undefined1 param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar9 = (ulong)param_2;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar8 = *(long **)(lVar7 + 0x2c8);
  if (plVar8 == (long *)0x0) {
LAB_01253f78:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = plVar8[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_01253f78;
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar6 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  switch(param_1) {
  case 0:
    if (param_2 < 200) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x68);
LAB_01253e58:
      bVar3 = cVar6 != '\0';
      goto LAB_01253e60;
    }
    break;
  case 1:
    if (param_2 < 200) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x130);
      goto LAB_01253e58;
    }
    break;
  case 2:
    if (param_2 < 200) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x1f8);
      goto LAB_01253e58;
    }
    break;
  case 3:
    if (param_2 < 100) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x2c0);
      goto LAB_01253e58;
    }
    break;
  case 4:
    if (param_2 < 4) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x324);
      goto LAB_01253e58;
    }
    break;
  case 5:
    if (param_2 < 200) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x328);
      goto LAB_01253e58;
    }
    break;
  case 6:
    if (param_2 < 100) {
      cVar6 = *(char *)((long)plVar8 + uVar9 + 0x3f0);
      goto LAB_01253e58;
    }
  }
  bVar3 = false;
LAB_01253e60:
  lVar7 = plVar8[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar4 = *piVar1;
    cVar6 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar4 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return bVar3;
}


