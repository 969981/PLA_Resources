/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ab7dc; name: FUN_010ab7dc
 */


long FUN_010ab7dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = FUN_010a4d60();
  uVar4 = *(ulong *)(param_1 + 0x4a98);
  if (uVar4 != 0) {
    uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar5 = uVar4 - 1 & uVar2;
    }
    else if (uVar2 < uVar4) {
      uVar5 = uVar2;
    }
    else {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar2 / uVar4;
      }
      uVar5 = uVar2 - uVar5 * uVar4;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x4a90) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (1 < uVar3) {
        do {
          uVar3 = plVar6[1];
          if (uVar3 == uVar2) {
            if (plVar6[2] == uVar2) goto LAB_010ab8e8;
          }
          else {
            if (uVar4 <= uVar3) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar3 / uVar4;
              }
              uVar3 = uVar3 - uVar1 * uVar4;
            }
            if (uVar3 != uVar5) {
              return 0;
            }
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (plVar6[1] == uVar2) {
          if (plVar6[2] == uVar2) {
LAB_010ab8e8:
            return plVar6[3];
          }
        }
        else if ((plVar6[1] & uVar4 - 1) != uVar5) {
          return 0;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}


