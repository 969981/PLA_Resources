/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027884b0; name: FUN_027884b0
 */


uint FUN_027884b0(void)

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
    bVar3 = *(short *)((long)plVar8 + 0xce) != 0;
    uVar7 = 2;
    if (!bVar3) {
      uVar7 = 1;
    }
    uVar9 = (uint)bVar3;
    if (*(short *)((long)plVar8 + 0xbd6) != 0) {
      uVar9 = uVar7;
    }
    if (*(short *)((long)plVar8 + 0x16de) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x21e6) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x2cee) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x37f6) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x42fe) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x4e06) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x590e) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x6416) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x6f1e) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x7a26) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x852e) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x9036) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0x9b3e) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0xa646) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0xb14e) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0xbc56) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (*(short *)((long)plVar8 + 0xc75e) != 0) {
      uVar9 = uVar9 + 1;
    }
    lVar6 = plVar8[0xb];
    if (*(short *)((long)plVar8 + 0xd266) != 0) {
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


