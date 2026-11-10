/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aace4; name: FUN_010aace4
 */


long * FUN_010aace4(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (((param_3 & 1) != 0) && (uVar5 = *(ulong *)(param_1 + 0x4e40), uVar5 != 0)) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar5 <= param_2) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = param_2 / uVar5;
        }
        uVar6 = param_2 - uVar6 * uVar5;
      }
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x4e38) + uVar6 * 8);
    if ((puVar4 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar4, plVar3 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == param_2) {
            if (plVar3[2] == param_2) goto LAB_010aae78;
          }
          else if ((plVar3[1] & uVar5 - 1) != uVar6) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == param_2) {
            if (plVar3[2] == param_2) goto LAB_010aae78;
          }
          else {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != uVar6) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x4dd8);
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar5 <= param_2) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = param_2 / uVar5;
        }
        uVar6 = param_2 - uVar6 * uVar5;
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x4dd0) + uVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == param_2) {
            if (plVar3[2] == param_2) goto LAB_010aae78;
          }
          else if ((plVar3[1] & uVar5 - 1) != uVar6) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == param_2) {
            if (plVar3[2] == param_2) goto LAB_010aae78;
          }
          else {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != uVar6) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x4e00);
LAB_010aae78:
  return plVar3 + 3;
}


