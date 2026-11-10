/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e47e0; name: FUN_002e47e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_002e47e0(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  void *__base;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined8 *unaff_x26;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  __base = (void *)FUN_002ebd50(*param_1 << 3);
  uVar5 = *param_1;
  if (uVar5 == 0) goto LAB_002e487c;
  puVar3 = param_1 + 1;
  if ((uVar5 < 8) ||
     ((__base < (void *)((long)param_1 + 9U) && (puVar3 < (ulong *)((long)__base + uVar5 * 8 + -8)))
     )) {
    uVar6 = 0;
LAB_002e4840:
    lVar7 = uVar6 << 5;
    do {
      lVar11 = *puVar3 + lVar7;
      lVar7 = lVar7 + 0x20;
      *(long *)((long)__base + uVar6 * 8) = lVar11;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  else {
    uVar2 = *puVar3;
    uVar6 = uVar5 & 0xfffffffffffffff8;
    plVar8 = (long *)((long)__base + 0x20);
    uVar9 = uVar6;
    lVar7 = _DAT_03888e90;
    lVar11 = _UNK_03888e98;
    do {
      lVar12 = lVar7 * 0x20;
      lVar14 = lVar11 * 0x20;
      lVar7 = lVar7 + 8;
      lVar11 = lVar11 + 8;
      uVar9 = uVar9 - 8;
      lVar13 = lVar12 + uVar2;
      lVar15 = lVar14 + uVar2;
      plVar8[-3] = uVar2 + lVar14;
      plVar8[-4] = uVar2 + lVar12;
      plVar8[-1] = lVar15 + 0x40;
      plVar8[-2] = lVar13 + 0x40;
      plVar8[1] = lVar15 + 0x80;
      *plVar8 = lVar13 + 0x80;
      plVar8[3] = lVar15 + 0xc0;
      plVar8[2] = lVar13 + 0xc0;
      plVar8 = plVar8 + 8;
    } while (uVar9 != 0);
    if (uVar5 != uVar6) goto LAB_002e4840;
  }
  if (1 < uVar5) {
    qsort(__base,uVar5,8,(__compar_fn_t)&LAB_002e49d0);
  }
LAB_002e487c:
  puVar3 = (ulong *)FUN_002ebd50(0x10);
  uVar5 = *param_1;
  *puVar3 = uVar5;
  uVar5 = FUN_002ebd50(uVar5 << 5);
  puVar3[1] = uVar5;
  if (*param_1 != 0) {
    lVar7 = 0;
    uVar5 = 0;
    do {
      piVar10 = *(int **)((long)__base + uVar5 * 8);
      iVar1 = *piVar10;
      uVar4 = FUN_002ec2d0(*(undefined8 *)(piVar10 + 2));
      if (iVar1 == 2) {
        unaff_x26 = *(undefined8 **)(piVar10 + 6);
        unaff_x22 = (*(code *)*unaff_x26)(*(undefined8 *)(piVar10 + 4));
      }
      else if (iVar1 == 1) {
        unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)(uint)piVar10[4];
      }
      else if (iVar1 == 0) {
        unaff_x22 = FUN_002ec2d0(*(undefined8 *)(piVar10 + 4));
      }
      piVar10 = (int *)(puVar3[1] + lVar7);
      lVar7 = lVar7 + 0x20;
      *piVar10 = iVar1;
      *(undefined8 *)(piVar10 + 2) = uVar4;
      *(ulong *)(piVar10 + 4) = unaff_x22;
      *(undefined8 **)(piVar10 + 6) = unaff_x26;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_1);
  }
  free(__base);
  return puVar3;
}


