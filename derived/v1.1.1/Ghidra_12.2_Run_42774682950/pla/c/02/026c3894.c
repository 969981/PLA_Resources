/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c3894; name: FUN_026c3894
 */


undefined4 FUN_026c3894(void)

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
  long *plVar11;
  undefined4 uVar12;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  uVar6 = *(ulong *)(lVar9 + 0x60);
  if (uVar6 == 0) {
    return 0;
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar8 = uVar6 - 1 & 0x1929428f92436020;
  }
  else if (uVar6 < 0x1929428f92436021) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = 0x1929428f92436020 / uVar6;
    }
    uVar8 = 0x1929428f92436020 - uVar8 * uVar6;
  }
  else {
    uVar8 = 0x1929428f92436020;
  }
  plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + uVar8 * 8);
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (uVar7 < 2) {
    do {
      if (plVar10[1] == 0x1929428f92436020) {
        if (plVar10[2] == 0x1929428f92436020) goto LAB_026c3960;
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
    if (uVar7 == 0x1929428f92436020) {
      if (plVar10[2] == 0x1929428f92436020) goto LAB_026c3960;
    }
    else {
      if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      if (uVar7 != uVar8) {
        return 0;
      }
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_026c3aa4:
  uVar12 = (undefined4)plVar11[6];
  goto LAB_026c3aa8;
LAB_026c3960:
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
  uVar6 = plVar10[0x21];
  uVar12 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0xf3356e78752a097e;
    }
    else if (uVar6 < 0xf3356e78752a097f) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0xf3356e78752a097e / uVar6;
      }
      uVar8 = 0xf3356e78752a097e - uVar8 * uVar6;
    }
    else {
      uVar8 = 0xf3356e78752a097e;
    }
    plVar11 = *(long **)(plVar10[0x20] + uVar8 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar11[1] == 0xf3356e78752a097e) {
            if (plVar11[2] == -0xcca91878ad5f682) goto LAB_026c3aa4;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar8) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (uVar7 == 0xf3356e78752a097e) {
            if (plVar11[2] == -0xcca91878ad5f682) goto LAB_026c3aa4;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_026c3aa8:
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
  }
  return uVar12;
}


