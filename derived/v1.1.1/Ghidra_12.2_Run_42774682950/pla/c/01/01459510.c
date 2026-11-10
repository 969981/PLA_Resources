/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01459510; name: FUN_01459510
 */


bool FUN_01459510(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar13 = *(long **)(lVar8 + 0x228);
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar9 = ((long *)plVar13[0x37])[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xd3f86972d4aa3ac6;
    }
    else if (uVar9 < 0xd3f86972d4aa3ac7) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = 0xd3f86972d4aa3ac6 / uVar9;
      }
      uVar11 = 0xd3f86972d4aa3ac6 - uVar11 * uVar9;
    }
    else {
      uVar11 = 0xd3f86972d4aa3ac6;
    }
    plVar12 = *(long **)(*(long *)plVar13[0x37] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == 0xd3f86972d4aa3ac6) {
            if (plVar12[2] == -0x2c07968d2b55c53a) goto LAB_01459694;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) goto LAB_01459640;
          plVar12 = (long *)*plVar12;
          bVar5 = false;
        } while (plVar12 != (long *)0x0);
        goto joined_r0x014596a0;
      }
      do {
        uVar10 = plVar12[1];
        if (uVar10 == 0xd3f86972d4aa3ac6) {
          if (plVar12[2] == -0x2c07968d2b55c53a) goto LAB_01459694;
        }
        else {
          if (uVar9 <= uVar10) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar4 * uVar9;
          }
          if (uVar10 != uVar11) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
LAB_01459640:
  bVar5 = false;
joined_r0x014596a0:
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return bVar5;
LAB_01459694:
  bVar5 = (char)plVar12[3] != '\0';
  goto joined_r0x014596a0;
}


