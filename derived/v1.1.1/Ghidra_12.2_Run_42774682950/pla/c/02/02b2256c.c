/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2256c; name: FUN_02b2256c
 */


undefined8 FUN_02b2256c(long param_1,long param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar2 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + (uVar2 / 0x12) * 8) +
                   (uVar2 % 0x12) * 0xd8);
  uVar2 = *(ulong *)(lVar7 + (long)*(int *)(param_2 + 4) * 0x1b0 + 0xe0);
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar3 = *param_3;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar7 + (long)*(int *)(param_2 + 4) * 0x1b0 + 0xd8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (plVar6[2] == uVar3) {
LAB_02b226b8:
              param_4[1] = plVar6[7];
              *param_4 = plVar6[6];
              return 1;
            }
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar5) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_02b226b8;
          }
          else {
            if (uVar2 <= uVar4) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar4 / uVar2;
              }
              uVar4 = uVar4 - uVar1 * uVar2;
            }
            if (uVar4 != uVar5) {
              return 0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return 0;
}


