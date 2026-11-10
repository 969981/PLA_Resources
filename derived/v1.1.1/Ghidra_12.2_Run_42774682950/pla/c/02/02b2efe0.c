/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2efe0; name: FUN_02b2efe0
 */


void FUN_02b2efe0(undefined1 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)(param_2 + 0x68);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_3;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar6 = uVar3 - 1 & uVar2;
    }
    else {
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar2 / uVar3;
        }
        uVar6 = uVar2 - uVar6 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(param_2 + 0x60) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar5[1] == uVar2) {
            if (plVar5[2] == uVar2) {
LAB_02b2f0f0:
              *param_1 = 0;
              if ((char)plVar5[6] == '\0') {
                return;
              }
              *(long *)(param_1 + 8) = plVar5[7];
              *(long *)(param_1 + 0x10) = plVar5[8];
              *(long *)(param_1 + 0x18) = plVar5[9];
              plVar5 = (long *)plVar5[10];
              *(long **)(param_1 + 0x20) = plVar5;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x18))();
              }
              *param_1 = 1;
              return;
            }
          }
          else if ((plVar5[1] & uVar3 - 1) != uVar6) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar5[1];
          if (uVar4 == uVar2) {
            if (plVar5[2] == uVar2) goto LAB_02b2f0f0;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar6) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


