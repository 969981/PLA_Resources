/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318f32c; name: FUN_0318f32c
 */


void FUN_0318f32c(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar4 = PTR_PTR_0434a080;
  uVar7 = *(uint *)(param_1 + 0xfc);
  iVar10 = *(int *)(param_1 + 0xf8);
  uVar2 = iVar10 + param_3;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar2) {
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar7 = *(uint *)(param_1 + 0xfc);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar3 = uVar2;
    if ((int)uVar2 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    lVar5 = FUN_032bd1d4(puVar4,uVar3,0x10,uVar6,iVar10);
    *(long *)(param_1 + 0xf0) = lVar5;
  }
  else {
    lVar5 = *(long *)(param_1 + 0xf0);
  }
  if (0 < (int)param_3) {
    puVar9 = (undefined8 *)(lVar5 + (long)iVar10 * 0x10);
    if (param_3 != 1) {
      iVar10 = (param_3 & 1) - param_3;
      puVar8 = puVar9;
      do {
        puVar8[1] = param_2[1];
        *puVar8 = *param_2;
        puVar8[3] = param_2[3];
        puVar1 = param_2 + 2;
        puVar9 = puVar8 + 4;
        param_2 = param_2 + 4;
        iVar10 = iVar10 + 2;
        puVar8[2] = *puVar1;
        puVar8 = puVar9;
      } while (iVar10 != 0);
    }
    if ((param_3 & 1) != 0) {
      puVar9[1] = param_2[1];
      *puVar9 = *param_2;
    }
  }
  *(uint *)(param_1 + 0xf8) = uVar2;
  return;
}


