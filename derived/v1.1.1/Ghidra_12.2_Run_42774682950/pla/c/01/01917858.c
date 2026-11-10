/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01917858; name: FUN_01917858
 */


undefined4 FUN_01917858(ulong *param_1,ulong *param_2)

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
  uVar7 = *(ulong *)(lVar9 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_1;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar11 = uVar6;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar6 / uVar7;
      }
      uVar11 = uVar6 - uVar11 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + uVar11 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_01917918;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar11) {
            return 0;
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar10[1];
        if (uVar8 == uVar6) {
          if (plVar10[2] == uVar6) goto LAB_01917918;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar11) {
            return 0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return 0;
LAB_01917a58:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01917a5c;
LAB_01917918:
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
  uVar7 = plVar10[0x14];
  if (uVar7 == 0) {
    uVar13 = 0;
  }
  else {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar11 = uVar6;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar6 / uVar7;
      }
      uVar11 = uVar6 - uVar11 * uVar7;
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
      else if (uVar8 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_01917a58;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar11) {
            uVar13 = 0;
            break;
          }
          plVar12 = (long *)*plVar12;
          uVar13 = 0;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_01917a58;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar11) {
              uVar13 = 0;
              goto LAB_01917a5c;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        uVar13 = 0;
      }
    }
  }
LAB_01917a5c:
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


