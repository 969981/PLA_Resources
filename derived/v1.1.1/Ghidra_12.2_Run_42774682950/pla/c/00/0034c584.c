/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034c584; name: FUN_0034c584
 */


void FUN_0034c584(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  long *plVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  
  if (*(char *)(param_1 + 0x43) == '\0') {
    FUN_0034c314(*(undefined8 *)(param_1 + 0x50),param_2);
    puVar8 = (undefined4 *)param_2[1];
    if ((undefined4 *)param_2[2] <= puVar8) {
      pvVar4 = (void *)*param_2;
      lVar13 = (long)puVar8 - (long)pvVar4 >> 2;
      uVar14 = lVar13 + 1;
      if (uVar14 >> 0x3e != 0) goto LAB_0034c8a0;
      lVar10 = param_2[2] - (long)pvVar4;
      if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar10 >> 1;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        if (uVar14 != 0) goto LAB_0034c814;
        lVar10 = 0;
      }
      else {
        uVar14 = 0x3fffffffffffffff;
LAB_0034c814:
        lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 2);
        pvVar4 = (void *)*param_2;
        puVar8 = (undefined4 *)param_2[1];
      }
      puVar12 = (undefined4 *)(lVar10 + lVar13 * 4);
      uVar9 = 2;
      goto LAB_0034c854;
    }
    *puVar8 = 2;
    param_2[1] = (long)(puVar8 + 1);
    cVar2 = *(char *)(param_1 + 0x43);
joined_r0x0034c604:
    if (cVar2 == '\0') goto LAB_0034c5d0;
LAB_0034c608:
    if (*(long *)(param_1 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_1 + 0x28) + 0x80);
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 0x60) + 0x50);
    }
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 < (undefined4 *)param_2[2]) {
        *puVar8 = 7;
        param_2[1] = (long)(puVar8 + 1);
        cVar2 = *(char *)(param_1 + 0x43);
        goto joined_r0x0034c604;
      }
      pvVar4 = (void *)*param_2;
      lVar13 = (long)puVar8 - (long)pvVar4 >> 2;
      uVar14 = lVar13 + 1;
      if (uVar14 >> 0x3e != 0) goto LAB_0034c8a0;
      lVar10 = param_2[2] - (long)pvVar4;
      if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar10 >> 1;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        if (uVar14 != 0) goto LAB_0034c838;
        lVar10 = 0;
      }
      else {
        uVar14 = 0x3fffffffffffffff;
LAB_0034c838:
        lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 2);
        pvVar4 = (void *)*param_2;
        puVar8 = (undefined4 *)param_2[1];
      }
      puVar12 = (undefined4 *)(lVar10 + lVar13 * 4);
      uVar9 = 7;
LAB_0034c854:
      sVar5 = (long)puVar8 - (long)pvVar4;
      *puVar12 = uVar9;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)puVar12 - sVar5),pvVar4,sVar5);
        pvVar4 = (void *)*param_2;
      }
      *param_2 = (long)((long)puVar12 - sVar5);
      param_2[1] = (long)(puVar12 + 1);
      param_2[2] = lVar10 + uVar14 * 4;
      if (pvVar4 != (void *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      cVar2 = *(char *)(param_1 + 0x43);
    }
    else {
      FUN_0034c314(*(long *)(param_1 + 0x60),param_2);
      puVar8 = (undefined4 *)param_2[1];
      if ((undefined4 *)param_2[2] <= puVar8) {
        pvVar4 = (void *)*param_2;
        lVar13 = (long)puVar8 - (long)pvVar4 >> 2;
        uVar14 = lVar13 + 1;
        if (uVar14 >> 0x3e != 0) goto LAB_0034c8a0;
        lVar10 = param_2[2] - (long)pvVar4;
        if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar10 >> 1;
          if (uVar14 <= uVar11) {
            uVar14 = uVar11;
          }
          if (uVar14 != 0) goto LAB_0034c7f0;
          lVar10 = 0;
        }
        else {
          uVar14 = 0x3fffffffffffffff;
LAB_0034c7f0:
          lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 2);
          pvVar4 = (void *)*param_2;
          puVar8 = (undefined4 *)param_2[1];
        }
        puVar12 = (undefined4 *)(lVar10 + lVar13 * 4);
        uVar9 = 6;
        goto LAB_0034c854;
      }
      *puVar8 = 6;
      param_2[1] = (long)(puVar8 + 1);
      cVar2 = *(char *)(param_1 + 0x43);
    }
    if (cVar2 != '\0') goto LAB_0034c608;
LAB_0034c5d0:
    plVar6 = (long *)(*(long *)(param_1 + 0x50) + 0x28);
  }
  iVar3 = (int)((ulong)(param_1 - *plVar6) >> 3) * 0x286bca1b;
  piVar7 = (int *)param_2[1];
  if (piVar7 < (int *)param_2[2]) {
    *piVar7 = iVar3;
    param_2[1] = (long)(piVar7 + 1);
    return;
  }
  pvVar4 = (void *)*param_2;
  lVar13 = (long)piVar7 - (long)pvVar4 >> 2;
  uVar14 = lVar13 + 1;
  if (uVar14 >> 0x3e != 0) {
LAB_0034c8a0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_2[2] - (long)pvVar4;
  if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
    uVar11 = lVar10 >> 1;
    if (uVar14 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 == 0) {
      lVar10 = 0;
      goto LAB_0034c6cc;
    }
  }
  else {
    uVar14 = 0x3fffffffffffffff;
  }
  lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 2);
  pvVar4 = (void *)*param_2;
  piVar7 = (int *)param_2[1];
LAB_0034c6cc:
  piVar1 = (int *)(lVar10 + lVar13 * 4);
  sVar5 = (long)piVar7 - (long)pvVar4;
  *piVar1 = iVar3;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)piVar1 - sVar5),pvVar4,sVar5);
    pvVar4 = (void *)*param_2;
  }
  *param_2 = (long)((long)piVar1 - sVar5);
  param_2[1] = (long)(piVar1 + 1);
  param_2[2] = lVar10 + uVar14 * 4;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


