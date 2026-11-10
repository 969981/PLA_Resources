/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cff20; name: FUN_018cff20
 */


undefined4 FUN_018cff20(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  uVar6 = *(ulong *)(lVar9 + 0x60);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0xdce7509aa9809ac6;
    }
    else if (uVar6 < 0xdce7509aa9809ac7) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0xdce7509aa9809ac6 / uVar6;
      }
      uVar8 = 0xdce7509aa9809ac6 - uVar8 * uVar6;
    }
    else {
      uVar8 = 0xdce7509aa9809ac6;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == 0xdce7509aa9809ac6) {
            if (plVar10[2] == -0x2318af65567f653a) goto LAB_018cffe8;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) {
            return 0;
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar7 = plVar10[1];
        if (uVar7 == 0xdce7509aa9809ac6) {
          if (plVar10[2] == -0x2318af65567f653a) goto LAB_018cffe8;
        }
        else {
          if (uVar6 <= uVar7) {
            uVar11 = 0;
            if (uVar6 != 0) {
              uVar11 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar11 * uVar6;
          }
          if (uVar7 != uVar8) {
            return 0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return 0;
LAB_018d0128:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_018d012c;
LAB_018cffe8:
  plVar10 = (long *)plVar10[3];
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar10 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = plVar10[0x14];
  if (uVar6 == 0) {
    uVar13 = 0;
  }
  else {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar11 = uVar6 - 1 & uVar8;
    }
    else if (uVar8 < uVar6) {
      uVar11 = uVar8;
    }
    else {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar8 / uVar6;
      }
      uVar11 = uVar8 - uVar11 * uVar6;
    }
    plVar12 = *(long **)(plVar10[0x13] + uVar11 * 8);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        uVar13 = 0;
      }
      else if (uVar7 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_018d0128;
          }
          else if ((plVar12[1] & uVar6 - 1) != uVar11) {
            uVar13 = 0;
            break;
          }
          plVar12 = (long *)*plVar12;
          uVar13 = 0;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar12[1];
          if (uVar7 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_018d0128;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar11) {
              uVar13 = 0;
              goto LAB_018d012c;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        uVar13 = 0;
      }
    }
  }
LAB_018d012c:
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
    (**(code **)(*plVar10 + 0x10))();
    return uVar13;
  }
  return uVar13;
}


