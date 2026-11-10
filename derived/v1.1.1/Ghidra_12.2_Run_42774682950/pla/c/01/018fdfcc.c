/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fdfcc; name: FUN_018fdfcc
 */


undefined1 * FUN_018fdfcc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar7 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x78);
  uVar10 = *(ulong *)(lVar7 + 0x648);
  if (uVar10 != 0) {
    uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar9 = *param_1;
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar9 / uVar10;
    }
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar13 = uVar10 - 1 & uVar9;
    }
    else {
      uVar13 = uVar9;
      if (uVar10 <= uVar9) {
        uVar13 = uVar9 - uVar1 * uVar10;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x640);
    plVar11 = *(long **)(lVar7 + uVar13 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      uVar12 = uVar10 - 1;
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == uVar9) {
            if (plVar11[2] == uVar9) goto LAB_018fe0f8;
          }
          else if ((plVar11[1] & uVar12) != uVar13) {
            return &DAT_ffffffff;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return &DAT_ffffffff;
          }
        } while( true );
      }
      do {
        uVar14 = plVar11[1];
        if (uVar14 == uVar9) {
          if (plVar11[2] == uVar9) goto LAB_018fe0f8;
        }
        else {
          if (uVar10 <= uVar14) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar14 / uVar10;
            }
            uVar14 = uVar14 - uVar2 * uVar10;
          }
          if (uVar14 != uVar13) {
            return &DAT_ffffffff;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return &DAT_ffffffff;
        }
      } while( true );
    }
  }
  return &DAT_ffffffff;
LAB_018fe0f8:
  if (uVar8 < 2) {
    uVar13 = uVar12 & uVar9;
    plVar11 = *(long **)(lVar7 + uVar13 * 8);
  }
  else {
    uVar13 = uVar9;
    if (uVar10 <= uVar9) {
      uVar13 = uVar9 - uVar1 * uVar10;
    }
    plVar11 = *(long **)(lVar7 + uVar13 * 8);
  }
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar8 < 2) {
      do {
        if (plVar11[1] == uVar9) {
          if (plVar11[2] == uVar9) goto LAB_018fe1a4;
        }
        else if ((plVar11[1] & uVar12) != uVar13) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar8 = plVar11[1];
        if (uVar8 == uVar9) {
          if (plVar11[2] == uVar9) {
LAB_018fe1a4:
            return (undefined1 *)(ulong)*(uint *)(plVar11 + 3);
          }
        }
        else {
          if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != uVar13) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  FUN_01902960(0xffffffff);
  if (((*PTR_DAT_04379fc8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379fc8), puVar4 = PTR_DAT_04379fd0,
     puVar3 = PTR_DAT_043794d8, iVar5 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
      uVar6 = FUN_0087f8f0();
      *(undefined8 *)puVar3 = uVar6;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)puVar4 = puVar3;
    __cxa_guard_release(PTR_DAT_04379fc8);
  }
  return PTR_DAT_04379fd0;
}


