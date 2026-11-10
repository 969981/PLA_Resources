/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786f44; name: FUN_02786f44
 */


bool FUN_02786f44(void)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  char local_30 [8];
  long local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar9 = *(long **)(lVar7 + 0x2a8);
  if (plVar9 == (long *)0x0) {
    bVar10 = false;
  }
  else {
    lVar7 = plVar9[0xb];
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
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0275d180(local_30);
    if (local_30[0] == '\0') {
      bVar10 = false;
    }
    else {
      lVar7 = FUN_0110b86c(plVar9);
      uVar8 = (local_28 - lVar7) * 1000000000;
      uVar2 = ((long)uVar8 >> 0x20) * 0x26d694b3 + ((uVar8 & 0xfffffe00) * 0x26d694b3 >> 0x20);
      bVar10 = 0x1517f < ((long)(((long)uVar8 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                                ((uVar8 & 0xfffffe00) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20))
                         >> 0x1a) - ((long)uVar8 >> 0x3f);
      if (local_30[0] != '\0') {
        local_30[0] = '\0';
      }
    }
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return bVar10;
}


