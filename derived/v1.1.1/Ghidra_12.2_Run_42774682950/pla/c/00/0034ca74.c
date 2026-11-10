/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034ca74; name: FUN_0034ca74
 */


void FUN_0034ca74(long param_1,long *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar7 = (undefined4 *)param_2[1];
    if ((undefined4 *)param_2[2] <= puVar7) {
      pvVar4 = (void *)*param_2;
      lVar6 = (long)puVar7 - (long)pvVar4 >> 2;
      uVar13 = lVar6 + 1;
      if (uVar13 >> 0x3e != 0) goto LAB_0034ccdc;
      lVar11 = param_2[2] - (long)pvVar4;
      if ((ulong)(lVar11 >> 2) < 0x1fffffffffffffff) {
        uVar12 = lVar11 >> 1;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (uVar13 != 0) goto LAB_0034cb8c;
        lVar11 = 0;
      }
      else {
        uVar13 = 0x3fffffffffffffff;
LAB_0034cb8c:
        lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 2);
        pvVar4 = (void *)*param_2;
        puVar7 = (undefined4 *)param_2[1];
      }
      uVar10 = 5;
      goto LAB_0034cba4;
    }
    *puVar7 = 5;
    param_2[1] = (long)(puVar7 + 1);
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_0034cab8;
LAB_0034cbf0:
    plVar8 = (long *)(lVar6 + 0x40);
  }
  else {
    FUN_0034c314(*(long *)(param_1 + 0x18),param_2);
    puVar7 = (undefined4 *)param_2[1];
    if (puVar7 < (undefined4 *)param_2[2]) {
      *puVar7 = 4;
      param_2[1] = (long)(puVar7 + 1);
      lVar6 = *(long *)(param_1 + 0x18);
    }
    else {
      pvVar4 = (void *)*param_2;
      lVar6 = (long)puVar7 - (long)pvVar4 >> 2;
      uVar13 = lVar6 + 1;
      if (uVar13 >> 0x3e != 0) goto LAB_0034ccdc;
      lVar11 = param_2[2] - (long)pvVar4;
      if ((ulong)(lVar11 >> 2) < 0x1fffffffffffffff) {
        uVar12 = lVar11 >> 1;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (uVar13 != 0) goto LAB_0034cb6c;
        lVar11 = 0;
      }
      else {
        uVar13 = 0x3fffffffffffffff;
LAB_0034cb6c:
        lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 2);
        pvVar4 = (void *)*param_2;
        puVar7 = (undefined4 *)param_2[1];
      }
      uVar10 = 4;
LAB_0034cba4:
      puVar1 = (undefined4 *)(lVar11 + lVar6 * 4);
      sVar5 = (long)puVar7 - (long)pvVar4;
      *puVar1 = uVar10;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)puVar1 - sVar5),pvVar4,sVar5);
        pvVar4 = (void *)*param_2;
      }
      *param_2 = (long)((long)puVar1 - sVar5);
      param_2[1] = (long)(puVar1 + 1);
      param_2[2] = lVar11 + uVar13 * 4;
      if (pvVar4 != (void *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      lVar6 = *(long *)(param_1 + 0x18);
    }
    if (lVar6 != 0) goto LAB_0034cbf0;
LAB_0034cab8:
    plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x70);
  }
  iVar3 = (int)((ulong)(param_1 - *plVar8) >> 4) * -0x33333333;
  piVar9 = (int *)param_2[1];
  if (piVar9 < (int *)param_2[2]) {
    *piVar9 = iVar3;
    param_2[1] = (long)(piVar9 + 1);
    return;
  }
  pvVar4 = (void *)*param_2;
  lVar6 = (long)piVar9 - (long)pvVar4 >> 2;
  uVar13 = lVar6 + 1;
  if (uVar13 >> 0x3e != 0) {
LAB_0034ccdc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_2[2] - (long)pvVar4;
  if ((ulong)(lVar11 >> 2) < 0x1fffffffffffffff) {
    uVar12 = lVar11 >> 1;
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
      goto LAB_0034cc7c;
    }
  }
  else {
    uVar13 = 0x3fffffffffffffff;
  }
  lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 2);
  pvVar4 = (void *)*param_2;
  piVar9 = (int *)param_2[1];
LAB_0034cc7c:
  piVar2 = (int *)(lVar11 + lVar6 * 4);
  sVar5 = (long)piVar9 - (long)pvVar4;
  *piVar2 = iVar3;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)piVar2 - sVar5),pvVar4,sVar5);
    pvVar4 = (void *)*param_2;
  }
  *param_2 = (long)((long)piVar2 - sVar5);
  param_2[1] = (long)(piVar2 + 1);
  param_2[2] = lVar11 + uVar13 * 4;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


