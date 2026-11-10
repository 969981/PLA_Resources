/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192c878; name: FUN_0192c878
 */


void FUN_0192c878(long *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar3 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar3;
  lVar3 = *(long *)(lVar3 + 0x78);
  uVar5 = *(ulong *)(lVar3 + 0x768);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *param_3;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(lVar3 + 0x760) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_0192c9b0;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) {
LAB_0192c9b0:
              *param_1 = plVar8[3];
              return;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


