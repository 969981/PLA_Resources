/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b22998; name: FUN_00b22998
 */


long * FUN_00b22998(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_0093b6f4(param_1,uVar4);
    uVar6 = param_1[1];
  }
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar5 = uVar6 - 1 & param_2;
  }
  else {
    uVar5 = param_2;
    if (uVar6 <= param_2) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = param_2 / uVar6;
      }
      uVar5 = param_2 - uVar5 * uVar6;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar5 * 8);
  if (plVar7 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*param_3 != 0) {
      plVar1 = (long *)(*param_3 + 0x58);
    }
    if (uVar4 < 2) {
      bVar9 = 0;
LAB_00b22a58:
      do {
        bVar8 = bVar9;
        plVar3 = plVar7;
        plVar7 = (long *)*plVar3;
        if (plVar7 == (long *)0x0) {
          return plVar3;
        }
        if ((plVar7[1] & uVar6 - 1) != uVar5) {
          return plVar3;
        }
        if (plVar7[1] == param_2) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar7[2] != 0) {
            plVar2 = (long *)(plVar7[2] + 0x58);
          }
          bVar9 = bVar8 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_00b22a58;
        }
        else {
          bVar9 = bVar8;
        }
      } while ((bool)(bVar8 ^ 1));
    }
    else {
      bVar9 = 0;
LAB_00b22b38:
      do {
        bVar8 = bVar9;
        plVar3 = plVar7;
        plVar7 = (long *)*plVar3;
        if (plVar7 == (long *)0x0) {
          return plVar3;
        }
        uVar10 = plVar7[1];
        uVar4 = uVar10;
        if (uVar6 <= uVar10) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar10 / uVar6;
          }
          uVar4 = uVar10 - uVar4 * uVar6;
        }
        if (uVar4 != uVar5) {
          return plVar3;
        }
        if (uVar10 == param_2) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar7[2] != 0) {
            plVar2 = (long *)(plVar7[2] + 0x58);
          }
          bVar9 = bVar8 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_00b22b38;
        }
        else {
          bVar9 = bVar8;
        }
      } while ((bool)(bVar8 ^ 1));
    }
  }
  return plVar3;
}


