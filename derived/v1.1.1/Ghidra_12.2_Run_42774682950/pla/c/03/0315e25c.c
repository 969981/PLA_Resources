/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e25c; name: FUN_0315e25c
 */


void FUN_0315e25c(long param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  puVar8 = (uint *)(param_1 + 0x5c);
  uVar5 = *puVar8;
  uVar3 = *(uint *)(param_1 + 0x58);
  uVar2 = uVar3 + param_2;
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar2) {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar5 = *puVar8;
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar7 = uVar2;
    if ((int)uVar2 <= (int)uVar5) {
      uVar7 = uVar5;
    }
    uVar9 = FUN_032bd1d4(PTR_PTR_0434a080,uVar7,2,uVar9,uVar3,puVar8);
    uVar7 = *(uint *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    uVar5 = uVar2 - uVar7;
    if (uVar5 == 0 || (int)uVar2 < (int)uVar7) {
LAB_0315e398:
      if ((int)uVar5 < 0 == SBORROW4(uVar2,uVar7)) {
        return;
      }
      *(uint *)(param_1 + 0x58) = uVar2;
      return;
    }
  }
  else {
    uVar5 = uVar2 - uVar3;
    uVar7 = uVar3;
    if (uVar5 == 0 || (int)uVar2 < (int)uVar3) goto LAB_0315e398;
  }
  *(uint *)(param_1 + 0x58) = uVar2;
  uVar4 = DAT_04434b68;
  puVar1 = (undefined2 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar7 * 2);
  uVar5 = uVar5 & 3;
  if (2 < uVar2 + ~uVar7) {
    param_2 = ((uVar7 + uVar5) - uVar3) - param_2;
    puVar6 = puVar1;
    do {
      puVar1 = puVar6 + 4;
      *puVar6 = uVar4;
      param_2 = param_2 + 4;
      puVar6[1] = uVar4;
      puVar6[2] = uVar4;
      puVar6[3] = uVar4;
      puVar6 = puVar1;
    } while (param_2 != 0);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar1 = uVar4;
    puVar1 = puVar1 + 1;
  }
  return;
}


