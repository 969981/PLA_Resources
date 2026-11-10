/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d6ef0; name: FUN_018d6ef0
 */


void FUN_018d6ef0(long param_1,ulong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x298);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x290) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == param_2) {
            if (plVar6[2] == param_2) {
LAB_018d6f8c:
              puVar1 = (uint *)(plVar6 + 3);
              if ((param_3 & 1) == 0) {
                *puVar1 = *puVar1 & (param_4 ^ 0xffffffff);
                FUN_01839500();
                return;
              }
              *puVar1 = *puVar1 | param_4;
              FUN_01839500();
              return;
            }
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == param_2) {
            if (plVar6[2] == param_2) goto LAB_018d6f8c;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar2 * uVar3;
            }
            if (uVar4 != uVar5) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}


