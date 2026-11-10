/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292dc4c; name: FUN_0292dc4c
 */


void FUN_0292dc4c(long *param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar4 = param_2[0x12];
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar2 = *param_4;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar4 <= uVar2) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar2 / uVar4;
        }
        uVar7 = uVar2 - uVar7 * uVar4;
      }
    }
    plVar9 = *(long **)(param_2[0x11] + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar9[1] == uVar2) {
            if (plVar9[2] == uVar2) goto LAB_0292de40;
          }
          else if ((plVar9[1] & uVar4 - 1) != uVar7) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar2) {
            if (plVar9[2] == uVar2) goto LAB_0292de40;
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar7) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  uVar4 = param_2[5];
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar2 = *param_3;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar4 <= uVar2) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar2 / uVar4;
        }
        uVar7 = uVar2 - uVar7 * uVar4;
      }
    }
    puVar10 = *(undefined8 **)(param_2[4] + uVar7 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar10, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar9[1] == uVar2) {
            if (plVar9[2] == uVar2) goto LAB_0292de40;
          }
          else if ((plVar9[1] & uVar4 - 1) != uVar7) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar2) {
            if (plVar9[2] == uVar2) goto LAB_0292de40;
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar7) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  lVar3 = *param_2;
  lVar5 = param_2[1];
  lVar8 = param_2[2];
  lVar11 = param_2[3];
LAB_0292de34:
  param_1[2] = lVar8;
  param_1[3] = lVar11;
  *param_1 = lVar3;
  param_1[1] = lVar5;
  return;
LAB_0292de40:
  lVar3 = plVar9[3];
  lVar5 = plVar9[4];
  lVar8 = plVar9[5];
  lVar11 = plVar9[6];
  goto LAB_0292de34;
}


