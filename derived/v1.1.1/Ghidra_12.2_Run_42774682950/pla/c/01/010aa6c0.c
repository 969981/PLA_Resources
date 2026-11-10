/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aa6c0; name: FUN_010aa6c0
 */


long FUN_010aa6c0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = *(ulong *)(param_1 + 0x4b00);
  if (uVar2 != 0) {
    uVar6 = param_2 << 0x20 | (param_3 & 0xffff) << 0x10;
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar8 = uVar2 - 1 & uVar6;
    }
    else if (uVar6 < uVar2) {
      uVar8 = uVar6;
    }
    else {
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar6 / uVar2;
      }
      uVar8 = uVar6 - uVar8 * uVar2;
    }
    lVar7 = *(long *)(param_1 + 0x4af8);
    plVar4 = *(long **)(lVar7 + uVar8 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar6) {
            if (plVar4[2] == uVar6) goto LAB_010aa764;
          }
          else if ((plVar4[1] & uVar2 - 1) != uVar8) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar4[1];
          if (uVar9 == uVar6) {
            if (plVar4[2] == uVar6) goto LAB_010aa764;
          }
          else {
            if (uVar2 <= uVar9) {
              uVar10 = 0;
              if (uVar2 != 0) {
                uVar10 = uVar9 / uVar2;
              }
              uVar9 = uVar9 - uVar10 * uVar2;
            }
            if (uVar9 != uVar8) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    uVar8 = uVar6 | 1;
    if (uVar3 < 2) {
      uVar9 = uVar2 - 1 & uVar8;
      puVar5 = *(undefined8 **)(lVar7 + uVar9 * 8);
    }
    else if (uVar8 < uVar2) {
      puVar5 = *(undefined8 **)(lVar7 + uVar8 * 8);
      uVar9 = uVar8;
    }
    else {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar8 / uVar2;
      }
      uVar9 = uVar8 - uVar9 * uVar2;
      puVar5 = *(undefined8 **)(lVar7 + uVar9 * 8);
    }
    if ((puVar5 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar5, plVar4 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar8) {
            if (plVar4[2] == uVar8) goto LAB_010aa764;
          }
          else if ((plVar4[1] & uVar2 - 1) != uVar9) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar4[1];
          if (uVar10 == uVar8) {
            if (plVar4[2] == uVar8) goto LAB_010aa764;
          }
          else {
            if (uVar2 <= uVar10) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar10 / uVar2;
              }
              uVar10 = uVar10 - uVar1 * uVar2;
            }
            if (uVar10 != uVar9) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    uVar6 = uVar6 | 2;
    if (uVar3 < 2) {
      uVar8 = uVar2 - 1 & uVar6;
      puVar5 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    else if (uVar6 < uVar2) {
      puVar5 = *(undefined8 **)(lVar7 + uVar6 * 8);
      uVar8 = uVar6;
    }
    else {
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar6 / uVar2;
      }
      uVar8 = uVar6 - uVar8 * uVar2;
      puVar5 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    if ((puVar5 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar5, plVar4 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar6) {
            if (plVar4[2] == uVar6) {
LAB_010aa764:
              return plVar4[3];
            }
          }
          else if ((plVar4[1] & uVar2 - 1) != uVar8) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar4[1];
          if (uVar3 == uVar6) {
            if (plVar4[2] == uVar6) goto LAB_010aa764;
          }
          else {
            if (uVar2 <= uVar3) {
              uVar9 = 0;
              if (uVar2 != 0) {
                uVar9 = uVar3 / uVar2;
              }
              uVar3 = uVar3 - uVar9 * uVar2;
            }
            if (uVar3 != uVar8) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return *(long *)(*(long *)(param_1 + 0x4b28) + 0x18);
}


