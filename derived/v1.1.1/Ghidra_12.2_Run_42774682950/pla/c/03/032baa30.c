/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032baa30; name: FUN_032baa30
 */


void FUN_032baa30(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar7 = *param_2;
  uVar2 = *param_4;
  bVar1 = uVar2 < uVar7;
  puVar3 = param_1 + 0xb;
  *param_1 = (uint)bVar1;
  puVar4 = param_1 + 6;
  *(uint **)puVar4 = param_2;
  puVar5 = param_1 + 8;
  *(uint **)puVar5 = param_4;
  puVar6 = param_1 + 10;
  *puVar6 = param_3;
  *puVar3 = param_5;
  puVar8 = puVar5;
  if (uVar7 <= uVar2) {
    puVar8 = puVar4;
  }
  puVar8 = *(uint **)puVar8;
  if (uVar7 <= uVar2) {
    param_2 = param_4;
  }
  *(uint **)(param_1 + 2) = puVar8;
  *(uint **)(param_1 + 4) = param_2;
  while( true ) {
    uVar7 = (uint)bVar1;
    if (*param_2 < puVar8[4]) {
      do {
        if (-1 < (int)(param_2[5] - puVar8[1] | puVar8[5] - param_2[1] | puVar8[6] - param_2[2] |
                      param_2[6] - puVar8[2])) {
          *(uint **)(param_1 + 2) = puVar8;
          *(uint **)(param_1 + 4) = param_2;
          *param_1 = uVar7;
          return;
        }
        param_2 = param_2 + 8;
      } while (*param_2 < puVar8[4]);
    }
    puVar8 = puVar5;
    if (uVar7 == 0) {
      puVar8 = puVar4;
    }
    *(long *)puVar8 = *(long *)puVar8 + 0x20;
    puVar8 = puVar3;
    if (uVar7 == 0) {
      puVar8 = puVar6;
    }
    *puVar8 = *puVar8 - 1;
    if ((int)*puVar6 < 1) break;
    puVar9 = *(uint **)puVar4;
    puVar10 = *(uint **)puVar5;
    puVar8 = puVar10;
    param_2 = puVar9;
    if (*puVar9 <= *puVar10) {
      puVar8 = puVar9;
      param_2 = puVar10;
    }
    bVar1 = *puVar10 < *puVar9;
    if ((int)*puVar3 < 1) {
      return;
    }
  }
  return;
}


