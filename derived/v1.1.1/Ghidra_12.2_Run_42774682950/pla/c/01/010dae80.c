/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dae80; name: FUN_010dae80
 */


int FUN_010dae80(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 == 0) {
    return 1;
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar7 - 1 & 0xf11db8bc397f5c46;
  }
  else if (uVar7 < 0xf11db8bc397f5c47) {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = 0xf11db8bc397f5c46 / uVar7;
    }
    uVar9 = 0xf11db8bc397f5c46 - uVar9 * uVar7;
  }
  else {
    uVar9 = 0xf11db8bc397f5c46;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  if (uVar8 < 2) {
    do {
      if (plVar11[1] == 0xf11db8bc397f5c46) {
        if (plVar11[2] == -0xee24743c680a3ba) goto LAB_010daf48;
      }
      else if ((plVar11[1] & uVar7 - 1) != uVar9) {
        return 1;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 1;
      }
    } while( true );
  }
  do {
    uVar8 = plVar11[1];
    if (uVar8 == 0xf11db8bc397f5c46) {
      if (plVar11[2] == -0xee24743c680a3ba) goto LAB_010daf48;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar5 * uVar7;
      }
      if (uVar8 != uVar9) {
        return 1;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 1;
    }
  } while( true );
LAB_010db090:
  iVar6 = (int)plVar12[6];
  goto LAB_010db094;
LAB_010daf48:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x14];
  if (uVar7 == 0) {
    iVar6 = 0;
  }
  else {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x559cb1ec8ebb1e07;
    }
    else if (uVar7 < 0x559cb1ec8ebb1e08) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x559cb1ec8ebb1e07 / uVar7;
      }
      uVar9 = 0x559cb1ec8ebb1e07 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x559cb1ec8ebb1e07;
    }
    plVar12 = *(long **)(plVar11[0x13] + uVar9 * 8);
    if (plVar12 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        iVar6 = 0;
      }
      else if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x559cb1ec8ebb1e07) {
            if (plVar12[2] == 0x559cb1ec8ebb1e07) goto LAB_010db090;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) {
            iVar6 = 0;
            break;
          }
          plVar12 = (long *)*plVar12;
          iVar6 = 0;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x559cb1ec8ebb1e07) {
            if (plVar12[2] == 0x559cb1ec8ebb1e07) goto LAB_010db090;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar5 * uVar7;
            }
            if (uVar8 != uVar9) {
              iVar6 = 0;
              goto LAB_010db094;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        iVar6 = 0;
      }
    }
  }
LAB_010db094:
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  if (iVar6 == 0) {
    return 1;
  }
  return iVar6;
}


