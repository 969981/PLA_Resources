/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00586c10; name: FUN_00586c10
 */


void FUN_00586c10(ulong *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    pvVar2 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar2 || (long)__src - (long)pvVar2 == 0) {
      lVar1 = (long)param_1[3] - (long)pvVar2;
      uVar8 = (lVar1 >> 4) * 0x5555555555555556;
      if (lVar1 == 0) {
        uVar8 = 1;
      }
      uVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar8 * 0x30);
      puVar10 = (undefined8 *)(uVar5 + (uVar8 >> 2) * 0x30);
      puVar4 = (undefined8 *)param_1[2];
      puVar7 = puVar10;
      for (puVar3 = (undefined8 *)param_1[1]; puVar3 != puVar4; puVar3 = puVar3 + 6) {
        uVar12 = puVar3[1];
        uVar11 = *puVar3;
        uVar13 = puVar3[2];
        uVar15 = puVar3[5];
        uVar14 = puVar3[4];
        puVar7[3] = puVar3[3];
        puVar7[2] = uVar13;
        puVar7[5] = uVar15;
        puVar7[4] = uVar14;
        puVar7[1] = uVar12;
        *puVar7 = uVar11;
        puVar7 = puVar7 + 6;
      }
      uVar6 = *param_1;
      *param_1 = uVar5;
      param_1[1] = (ulong)puVar10;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar5 + uVar8 * 0x30;
      if (uVar6 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar9 = ((long)__src - (long)pvVar2 >> 4) * -0x5555555555555555;
      lVar1 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar1 = lVar9 + 1;
      }
      __n = (long)puVar7 - (long)__src;
      pvVar2 = (void *)((long)__src + (lVar1 >> 1) * -0x30);
      if (__n != 0) {
        memmove(pvVar2,__src,__n);
        __src = (void *)param_1[1];
      }
      puVar7 = (undefined8 *)((long)pvVar2 + ((long)__n >> 4) * 0x10);
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -0x30);
      param_1[2] = (ulong)puVar7;
    }
  }
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[2] = 0x7b2;
  *(undefined4 *)(puVar7 + 3) = 0x101;
  *(undefined1 *)((long)puVar7 + 0x1c) = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[4] = 0x7b2;
  *(undefined4 *)(puVar7 + 5) = 0x101;
  *(undefined1 *)((long)puVar7 + 0x2c) = 0;
  param_1[2] = param_1[2] + 0x30;
  return;
}


