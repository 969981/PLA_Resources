/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b96b00; name: FUN_02b96b00
 */


undefined8 FUN_02b96b00(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *local_38;
  long *plStack_30;
  undefined1 local_28;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar9 = uVar4 - 1 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar4 <= uVar3) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar3 / uVar4;
        }
        uVar9 = uVar3 - uVar9 * uVar4;
      }
    }
    lVar8 = *param_1;
    puVar6 = *(undefined8 **)(lVar8 + uVar9 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (local_38 = (long *)*puVar6, local_38 != (long *)0x0)) {
      uVar7 = uVar4 - 1;
      if (uVar5 < 2) {
        do {
          if (local_38[1] == uVar3) {
            if (local_38[2] == uVar3) goto LAB_02b96c18;
          }
          else if ((local_38[1] & uVar7) != uVar9) {
            return 0;
          }
          local_38 = (long *)*local_38;
        } while (local_38 != (long *)0x0);
      }
      else {
        do {
          uVar10 = local_38[1];
          if (uVar10 == uVar3) {
            if (local_38[2] == uVar3) goto LAB_02b96c18;
          }
          else {
            if (uVar4 <= uVar10) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar10 / uVar4;
              }
              uVar10 = uVar10 - uVar1 * uVar4;
            }
            if (uVar10 != uVar9) {
              return 0;
            }
          }
          local_38 = (long *)*local_38;
        } while (local_38 != (long *)0x0);
      }
    }
  }
  return 0;
LAB_02b96c18:
  if (uVar5 < 2) {
    uVar3 = uVar3 & uVar7;
  }
  else if (uVar4 <= uVar3) {
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar9 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar9 * uVar4;
  }
  plVar2 = *(long **)(lVar8 + uVar3 * 8);
  do {
    plVar11 = plVar2;
    plVar2 = (long *)*plVar11;
  } while ((long *)*plVar11 != local_38);
  if (plVar11 != param_1 + 6) {
    uVar9 = plVar11[1];
    if (uVar5 < 2) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar4 <= uVar9) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar9 / uVar4;
      }
      uVar9 = uVar9 - uVar10 * uVar4;
    }
    if (uVar9 == uVar3) goto LAB_02b96ccc;
  }
  if (*local_38 != 0) {
    uVar9 = *(ulong *)(*local_38 + 8);
    if (uVar5 < 2) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar4 <= uVar9) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar9 / uVar4;
      }
      uVar9 = uVar9 - uVar10 * uVar4;
    }
    if (uVar9 == uVar3) goto LAB_02b96ccc;
  }
  *(undefined8 *)(lVar8 + uVar3 * 8) = 0;
LAB_02b96ccc:
  lVar8 = *local_38;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar5 < 2) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar4 <= uVar9) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar9 / uVar4;
      }
      uVar9 = uVar9 - uVar5 * uVar4;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_1 + uVar9 * 8) = plVar11;
      lVar8 = *local_38;
    }
  }
  *plVar11 = lVar8;
  plStack_30 = param_1 + 7;
  *local_38 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  local_28 = 1;
  FUN_02b96310(&local_38);
  return 1;
}


