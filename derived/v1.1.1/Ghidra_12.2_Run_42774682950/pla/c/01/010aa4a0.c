/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aa4a0; name: FUN_010aa4a0
 */


long FUN_010aa4a0(long param_1,long param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x4b00);
  uVar4 = param_2 << 0x20 | (param_3 & 0xffff) << 0x10;
  uVar1 = uVar4 | param_4;
  uVar3 = uVar1;
  if (param_4 == 1) {
    if (uVar2 == 0) goto LAB_010aa678;
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar6 = uVar2 - 1 & uVar1;
    }
    else {
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar1 / uVar2;
        }
        uVar6 = uVar1 - uVar6 * uVar2;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x4af8) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar5[1] == uVar1) {
            uVar3 = uVar1;
            if (plVar5[2] == uVar1) break;
          }
          else {
            uVar3 = uVar4;
            if ((plVar5[1] & uVar2 - 1) != uVar6) break;
          }
          plVar5 = (long *)*plVar5;
          uVar3 = uVar4;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar5[1];
          if (uVar7 == uVar1) {
            uVar3 = uVar1;
            if (plVar5[2] == uVar1) break;
          }
          else {
            if (uVar2 <= uVar7) {
              uVar3 = 0;
              if (uVar2 != 0) {
                uVar3 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar3 * uVar2;
            }
            uVar3 = uVar4;
            if (uVar7 != uVar6) break;
          }
          plVar5 = (long *)*plVar5;
          uVar3 = uVar4;
        } while (plVar5 != (long *)0x0);
      }
      goto joined_r0x010aa674;
    }
    if (1 < uVar3) goto LAB_010aa6a8;
LAB_010aa4fc:
    uVar1 = uVar4 & uVar2 - 1;
  }
  else {
joined_r0x010aa674:
    uVar4 = uVar3;
    if (uVar2 == 0) goto LAB_010aa678;
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) goto LAB_010aa4fc;
LAB_010aa6a8:
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar4 / uVar2;
      }
      uVar1 = uVar4 - uVar1 * uVar2;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x4af8) + uVar1 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    if (uVar3 < 2) {
      do {
        if (plVar5[1] == uVar4) {
          if (plVar5[2] == uVar4) {
LAB_010aa554:
            return plVar5[3];
          }
        }
        else if ((plVar5[1] & uVar2 - 1) != uVar1) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar3 = plVar5[1];
        if (uVar3 == uVar4) {
          if (plVar5[2] == uVar4) goto LAB_010aa554;
        }
        else {
          if (uVar2 <= uVar3) {
            uVar6 = 0;
            if (uVar2 != 0) {
              uVar6 = uVar3 / uVar2;
            }
            uVar3 = uVar3 - uVar6 * uVar2;
          }
          if (uVar3 != uVar1) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_010aa678:
  return *(long *)(*(long *)(param_1 + 0x4b28) + 0x18);
}


