/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01908df0; name: FUN_01908df0
 */


undefined4 FUN_01908df0(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar6 = *(ulong *)(lVar10 + 0x60);
  if (uVar6 == 0) {
    return 0;
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar8 = uVar6 - 1 & 0x38a0599f0b969d3a;
  }
  else if (uVar6 < 0x38a0599f0b969d3b) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = 0x38a0599f0b969d3a / uVar6;
    }
    uVar8 = 0x38a0599f0b969d3a - uVar8 * uVar6;
  }
  else {
    uVar8 = 0x38a0599f0b969d3a;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar7 < 2) {
    do {
      if (plVar11[1] == 0x38a0599f0b969d3a) {
        if (plVar11[2] == 0x38a0599f0b969d3a) goto LAB_01908ec0;
      }
      else if ((plVar11[1] & uVar6 - 1) != uVar8) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar7 = plVar11[1];
    if (uVar7 == 0x38a0599f0b969d3a) {
      if (plVar11[2] == 0x38a0599f0b969d3a) goto LAB_01908ec0;
    }
    else {
      if (uVar6 <= uVar7) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar9 * uVar6;
      }
      if (uVar7 != uVar8) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_01908ff8:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01908ffc;
LAB_01908ec0:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
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
  uVar6 = plVar11[0x21];
  uVar13 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar8 = *param_1;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = uVar6 - 1 & uVar8;
    }
    else if (uVar8 < uVar6) {
      uVar9 = uVar8;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar8 / uVar6;
      }
      uVar9 = uVar8 - uVar9 * uVar6;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01908ff8;
          }
          else if ((plVar12[1] & uVar6 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar12[1];
          if (uVar7 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01908ff8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01908ffc:
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
  return uVar13;
}


