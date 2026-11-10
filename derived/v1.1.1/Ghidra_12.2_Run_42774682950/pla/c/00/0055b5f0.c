/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b5f0; name: FUN_0055b5f0
 */


void FUN_0055b5f0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)param_1[2];
  uVar4 = (long)puVar8 - (long)puVar9 >> 3;
  if ((long)puVar8 - (long)puVar9 == 0) {
    param_1[5] = 0;
  }
  else {
    uVar6 = param_1[4];
    plVar5 = (long *)((long)puVar9 + (uVar6 >> 5 & 0x7fffffffffffff8));
    uVar2 = param_1[5] + uVar6;
    lVar7 = *plVar5 + (uVar6 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar9 + (uVar2 >> 5 & 0x7fffffffffffff8)) + (uVar2 & 0xff) * 0x10;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 0x10, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_0055b668;
      }
    }
LAB_0055b668:
    param_1[5] = 0;
    puVar3 = PTR_LAB_04373088;
    if (2 < uVar4) {
      do {
        FUN_002e2ea0(puVar3,*puVar9);
        puVar8 = (undefined8 *)param_1[2];
        puVar9 = (undefined8 *)(param_1[1] + 8);
        uVar4 = (long)puVar8 - (long)puVar9 >> 3;
        param_1[1] = (long)puVar9;
      } while (2 < uVar4);
    }
  }
  if (uVar4 == 1) {
    lVar7 = 0x80;
  }
  else {
    if (uVar4 != 2) goto LAB_0055b6e0;
    lVar7 = 0x100;
  }
  param_1[4] = lVar7;
LAB_0055b6e0:
  puVar3 = PTR_LAB_04373088;
  if (puVar9 != puVar8) {
    do {
      puVar10 = puVar9 + 1;
      FUN_002e2ea0(puVar3,*puVar9);
      puVar9 = puVar10;
    } while (puVar8 != puVar10);
    lVar7 = param_1[2] - param_1[1];
    if (lVar7 != 0) {
      param_1[2] = param_1[2] + (lVar7 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


