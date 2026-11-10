/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00509778; name: FUN_00509778
 */


void FUN_00509778(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  puVar2 = PTR_LAB_04373088;
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    puVar8 = param_1 + 1;
    uVar5 = 4;
    if (param_3 < 5) goto LAB_005097b8;
LAB_005097e8:
    uVar12 = uVar3 >> 1;
    uVar3 = param_3;
    if (param_3 <= uVar5 << 1) {
      uVar3 = uVar5 << 1;
    }
    puVar9 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar3 << 3);
    uVar4 = param_3 & 1;
    puVar11 = puVar9;
    uVar5 = param_3;
    if (param_3 != 1) goto LAB_005098b0;
LAB_005098a4:
    lVar6 = 0;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < param_3) goto LAB_005097e8;
LAB_005097b8:
    uVar3 = uVar3 >> 1;
    uVar12 = uVar3 - param_3;
    puVar11 = puVar8;
    if (uVar3 < param_3) {
      uVar12 = 0;
      puVar9 = puVar8 + uVar3;
      uVar5 = param_3 - uVar3;
      puVar8 = (ulong *)0x0;
    }
    else {
      uVar5 = 0;
      puVar9 = (ulong *)0x0;
      puVar8 = puVar8 + param_3;
      uVar3 = param_3;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar4 = *param_2;
      *param_2 = 0;
      puVar10 = (undefined8 *)*puVar11;
      *puVar11 = uVar4;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10);
        FUN_002e2ea0(puVar2,puVar10);
      }
      param_2 = param_2 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar3 = 0;
    puVar11 = (ulong *)0x0;
    if (uVar5 == 0) goto LAB_005098f4;
    uVar4 = uVar5 & 1;
    if (uVar5 == 1) goto LAB_005098a4;
LAB_005098b0:
    lVar6 = 0;
    do {
      uVar7 = *param_2;
      puVar1 = puVar9 + lVar6;
      *param_2 = 0;
      *puVar1 = uVar7;
      uVar7 = param_2[1];
      lVar6 = lVar6 + 2;
      param_2[1] = 0;
      param_2 = param_2 + 2;
      puVar1[1] = uVar7;
    } while (uVar5 - uVar4 != lVar6);
  }
  if (uVar4 != 0) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar9[lVar6] = uVar5;
  }
LAB_005098f4:
  puVar2 = PTR_LAB_04373088;
  if (puVar8 != (ulong *)0x0) {
    if (uVar12 != 0) {
      uVar5 = uVar12;
      do {
        uVar4 = uVar5 - 1;
        puVar10 = (undefined8 *)puVar8[uVar5 - 1];
        puVar8[uVar5 - 1] = 0;
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10);
          FUN_002e2ea0(puVar2,puVar10);
        }
        uVar5 = uVar4;
      } while (uVar4 != 0);
    }
    memset(puVar8,0xab,uVar12 << 3);
  }
  uVar5 = *param_1;
  if (puVar11 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar11;
    param_1[2] = uVar3;
  }
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


