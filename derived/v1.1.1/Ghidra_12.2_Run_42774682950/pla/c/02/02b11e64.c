/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b11e64; name: FUN_02b11e64
 */


long FUN_02b11e64(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar5 = *(ulong *)(param_1 + 0xa0);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar5 <= uVar3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar3 / uVar5;
        }
        uVar7 = uVar3 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_02b11f60;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar3) {
            if (plVar8[2] == uVar3) {
LAB_02b11f60:
              lVar4 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)plVar8[6] * 0x20);
              lVar1 = 0;
              if (*(char *)(lVar4 + 0xd0) != '\0') {
                lVar1 = lVar4;
              }
              return lVar1;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return 0;
}


