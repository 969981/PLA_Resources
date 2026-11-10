/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02788e04; name: FUN_02788e04
 */


uint FUN_02788e04(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar8 = *(long **)(lVar6 + 0x2a8);
  if (plVar8 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    lVar6 = plVar8[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = (int)plVar8[0x10] == 2;
    uVar7 = 2;
    if (!bVar3) {
      uVar7 = 1;
    }
    uVar9 = (uint)bVar3;
    if ((int)plVar8[0x171] == 2) {
      uVar9 = uVar7;
    }
    if ((int)plVar8[0x2d2] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x433] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x594] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x6f5] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x856] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x9b7] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0xb18] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0xc79] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0xdda] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0xf3b] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x109c] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x11fd] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x135e] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x14bf] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x1620] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x1781] == 2) {
      uVar9 = uVar9 + 1;
    }
    if ((int)plVar8[0x18e2] == 2) {
      uVar9 = uVar9 + 1;
    }
    lVar6 = plVar8[0xb];
    if ((int)plVar8[0x1a43] == 2) {
      uVar9 = uVar9 + 1;
    }
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return uVar9;
}


