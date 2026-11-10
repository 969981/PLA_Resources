/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d29b0c; name: FUN_00d29b0c
 */


/* WARNING: Removing unreachable block (ram,0x00d29c84) */

long * FUN_00d29b0c(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    FUN_0093b6f4(param_1,uVar6);
    uVar8 = param_1[1];
  }
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar6 < 2) {
    uVar7 = uVar8 - 1 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar8 <= param_2) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = param_2 / uVar8;
      }
      uVar7 = param_2 - uVar7 * uVar8;
    }
  }
  plVar9 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar9 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*param_3 != 0) {
      plVar1 = (long *)(*param_3 + 0x58);
    }
    if (uVar6 < 2) {
      bVar4 = false;
LAB_00d29c1c:
      do {
        bVar3 = bVar4;
        plVar5 = plVar9;
        plVar9 = (long *)*plVar5;
        if (plVar9 == (long *)0x0) {
          return plVar5;
        }
        if ((plVar9[1] & uVar8 - 1) != uVar7) {
          return plVar5;
        }
        bVar4 = bVar3;
        if (plVar9[1] == param_2) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar9[2] != 0) {
            plVar2 = (long *)(plVar9[2] + 0x58);
          }
          bVar4 = (bool)(bVar3 | *plVar2 == *plVar1);
          if (*plVar2 == *plVar1) goto LAB_00d29c1c;
        }
      } while (!bVar3);
    }
    else {
      bVar4 = false;
LAB_00d29cac:
      do {
        bVar3 = bVar4;
        plVar5 = plVar9;
        plVar9 = (long *)*plVar5;
        if (plVar9 == (long *)0x0) {
          return plVar5;
        }
        uVar10 = plVar9[1];
        uVar6 = uVar10;
        if (uVar8 <= uVar10) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = uVar10 / uVar8;
          }
          uVar6 = uVar10 - uVar6 * uVar8;
        }
        if (uVar6 != uVar7) {
          return plVar5;
        }
        bVar4 = bVar3;
        if (uVar10 == param_2) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar9[2] != 0) {
            plVar2 = (long *)(plVar9[2] + 0x58);
          }
          bVar4 = (bool)(bVar3 | *plVar2 == *plVar1);
          if (*plVar2 == *plVar1) goto LAB_00d29cac;
        }
      } while (!bVar3);
    }
  }
  return plVar5;
}


