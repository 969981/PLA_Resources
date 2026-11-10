/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aee408; name: FUN_00aee408
 */


undefined1  [16] FUN_00aee408(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar16;
  undefined1 auVar15 [16];
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  lVar14 = 0;
  lVar16 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_1;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar12 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar12 = uVar6;
    }
    else {
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = uVar6 / uVar7;
      }
      uVar12 = uVar6 - uVar12 * uVar7;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar12 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == uVar6) {
            if (plVar11[2] == uVar6) goto LAB_00aee4c8;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar12) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == uVar6) {
            if (plVar11[2] == uVar6) goto LAB_00aee4c8;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar12) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_00aee590;
LAB_00aee4c8:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) goto LAB_00aee590;
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x2e];
  plVar9 = (long *)PTR_DAT_0437a330;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar12 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar12 = uVar6;
    }
    else {
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = uVar6 / uVar7;
      }
      uVar12 = uVar6 - uVar12 * uVar7;
    }
    plVar13 = *(long **)(plVar11[0x2d] + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar13[1] == uVar6) {
            if (plVar13[2] == uVar6) goto LAB_00aee574;
          }
          else if ((plVar13[1] & uVar7 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar13[1];
          if (uVar8 == uVar6) {
            if (plVar13[2] == uVar6) goto LAB_00aee574;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_00aee578;
LAB_00aee574:
  plVar9 = plVar13 + 6;
LAB_00aee578:
  lVar16 = plVar9[1];
  lVar14 = *plVar9;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_00aee590:
  auVar15._8_8_ = lVar16;
  auVar15._0_8_ = lVar14;
  return auVar15;
}


