/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034c8a8; name: FUN_0034c8a8
 */


void FUN_0034c8a8(long param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  
  FUN_0034c314(*(undefined8 *)(param_1 + 0x10));
  piVar8 = (int *)param_2[1];
  piVar10 = (int *)param_2[2];
  if (piVar8 < piVar10) {
    piVar9 = piVar8 + 1;
    *piVar8 = 8;
    param_2[1] = (long)piVar9;
  }
  else {
    pvVar4 = (void *)*param_2;
    lVar7 = (long)piVar8 - (long)pvVar4 >> 2;
    uVar11 = lVar7 + 1;
    if (uVar11 >> 0x3e != 0) goto LAB_0034ca6c;
    if ((ulong)((long)piVar10 - (long)pvVar4 >> 2) < 0x1fffffffffffffff) {
      uVar6 = (long)piVar10 - (long)pvVar4 >> 1;
      if (uVar11 <= uVar6) {
        uVar11 = uVar6;
      }
      if (uVar11 != 0) goto LAB_0034c924;
      lVar3 = 0;
    }
    else {
      uVar11 = 0x3fffffffffffffff;
LAB_0034c924:
      lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 2);
      pvVar4 = (void *)*param_2;
      piVar8 = (int *)param_2[1];
    }
    puVar1 = (undefined4 *)(lVar3 + lVar7 * 4);
    sVar5 = (long)piVar8 - (long)pvVar4;
    piVar10 = (int *)(lVar3 + uVar11 * 4);
    piVar9 = puVar1 + 1;
    *puVar1 = 8;
    if (0 < (long)sVar5) {
      memcpy((void *)((long)puVar1 - sVar5),pvVar4,sVar5);
      pvVar4 = (void *)*param_2;
    }
    *param_2 = (long)((long)puVar1 - sVar5);
    param_2[1] = (long)piVar9;
    param_2[2] = (long)piVar10;
    if (pvVar4 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      piVar9 = (int *)param_2[1];
      piVar10 = (int *)param_2[2];
    }
  }
  iVar2 = (int)((ulong)(param_1 - *(long *)(*(long *)(param_1 + 0x10) + 0x30)) >> 4) * -0x55555555;
  if (piVar9 < piVar10) {
    *piVar9 = iVar2;
    param_2[1] = (long)(piVar9 + 1);
    return;
  }
  pvVar4 = (void *)*param_2;
  lVar7 = (long)piVar9 - (long)pvVar4 >> 2;
  uVar11 = lVar7 + 1;
  if (uVar11 >> 0x3e != 0) {
LAB_0034ca6c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)piVar10 - (long)pvVar4 >> 2) < 0x1fffffffffffffff) {
    uVar6 = (long)piVar10 - (long)pvVar4 >> 1;
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      lVar3 = 0;
      goto LAB_0034ca0c;
    }
  }
  else {
    uVar11 = 0x3fffffffffffffff;
  }
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 2);
  pvVar4 = (void *)*param_2;
  piVar9 = (int *)param_2[1];
LAB_0034ca0c:
  piVar10 = (int *)(lVar3 + lVar7 * 4);
  sVar5 = (long)piVar9 - (long)pvVar4;
  *piVar10 = iVar2;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)piVar10 - sVar5),pvVar4,sVar5);
    pvVar4 = (void *)*param_2;
  }
  *param_2 = (long)((long)piVar10 - sVar5);
  param_2[1] = (long)(piVar10 + 1);
  param_2[2] = lVar3 + uVar11 * 4;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


