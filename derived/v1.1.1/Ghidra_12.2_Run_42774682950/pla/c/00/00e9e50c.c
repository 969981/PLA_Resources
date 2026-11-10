/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e9e50c; name: FUN_00e9e50c
 */


bool FUN_00e9e50c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar8 = *(ulong *)(lVar10 + 0x60);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_1;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar12 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar12 = uVar7;
    }
    else {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar7 / uVar8;
      }
      uVar12 = uVar7 - uVar12 * uVar8;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar12 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_00e9e5cc;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar12) {
            return false;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return false;
          }
        } while( true );
      }
      do {
        uVar9 = plVar11[1];
        if (uVar9 == uVar7) {
          if (plVar11[2] == uVar7) goto LAB_00e9e5cc;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar4 * uVar8;
          }
          if (uVar9 != uVar12) {
            return false;
          }
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return false;
LAB_00e9e670:
  bVar5 = (char)plVar13[6] != '\0';
  goto LAB_00e9e67c;
LAB_00e9e5cc:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return false;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x62];
  if (uVar8 == 0) {
    bVar5 = false;
  }
  else {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar12 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar12 = uVar7;
    }
    else {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar7 / uVar8;
      }
      uVar12 = uVar7 - uVar12 * uVar8;
    }
    plVar13 = *(long **)(plVar11[0x61] + uVar12 * 8);
    if (plVar13 == (long *)0x0) {
      bVar5 = false;
    }
    else {
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        bVar5 = false;
      }
      else if (uVar9 < 2) {
        do {
          if (plVar13[1] == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_00e9e670;
          }
          else if ((plVar13[1] & uVar8 - 1) != uVar12) {
            bVar5 = false;
            break;
          }
          plVar13 = (long *)*plVar13;
          bVar5 = false;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_00e9e670;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar12) {
              bVar5 = false;
              break;
            }
          }
          plVar13 = (long *)*plVar13;
          bVar5 = false;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_00e9e67c:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))();
    return bVar5;
  }
  return bVar5;
}


