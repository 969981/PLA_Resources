/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786460; name: FUN_02786460
 */


ulong FUN_02786460(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0x228), plVar9 != (long *)0x0)) {
    uVar10 = plVar9[0xb];
    if (*(undefined8 **)(uVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(uVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(uVar10 + 0x18))();
      *(undefined8 *)(uVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(uVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_28 = 0x83a5c2c347334812;
    uVar7 = FUN_010f4ccc(plVar9,&local_28);
    if ((uVar7 & 1) == 0) {
      local_28 = 0x83a94dc347366a1a;
      uVar7 = FUN_010f4ccc(plVar9,&local_28);
      if ((uVar7 & 1) != 0) {
        uVar10 = 2;
        goto LAB_02786504;
      }
      local_28 = 0x83a94bc3473666b4;
      uVar7 = FUN_010f4ccc(plVar9,&local_28);
      if ((uVar7 & 1) != 0) {
        uVar10 = 1;
        goto LAB_02786504;
      }
      bVar3 = false;
    }
    else {
      uVar10 = 3;
LAB_02786504:
      bVar3 = true;
    }
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (bVar3) goto LAB_0278652c;
  }
  uVar10 = 0;
LAB_0278652c:
  return uVar10 & 0xffffffff;
}


