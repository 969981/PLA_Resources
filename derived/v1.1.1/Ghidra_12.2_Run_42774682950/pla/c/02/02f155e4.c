/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f155e4; name: FUN_02f155e4
 */


/* WARNING: Removing unreachable block (ram,0x02f156e4) */

undefined8 FUN_02f155e4(undefined4 param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  size_t __n;
  int iVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 *__dest;
  uint uVar15;
  void *__s;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 auStack_460 [127];
  undefined4 uStack_64;
  
  lVar5 = -((-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2) + 0xf &
           0xfffffffffffffff0);
  puVar10 = (uint *)((long)auStack_460 + lVar5 + 0x400);
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar18 = 0;
  uVar16 = (ulong)param_3;
  uVar15 = 0;
  do {
    uVar7 = FUN_02f2601c(*(undefined8 *)(DAT_0440ae00 + (ulong)(param_2 + (int)uVar18) * 8),param_1)
    ;
    lVar12 = DAT_0440ae00;
    puVar10[uVar18] = uVar7;
    uVar18 = uVar18 + 1;
    if (uVar7 <= uVar15) {
      uVar7 = uVar15;
    }
    uVar15 = uVar7;
  } while (uVar16 != uVar18);
  if (uVar7 == 0) {
    return 0;
  }
  __dest = (undefined8 *)((long)puVar10 - ((long)(int)param_3 * 8 + 0xfU & 0xfffffffffffffff0));
  memcpy(__dest,(void *)(DAT_0440ae00 + (ulong)param_2 * 8),(long)(int)param_3 * 8);
  uVar15 = uVar7 + 1;
  __n = (ulong)uVar15 * 4;
  uVar18 = __n + 0xf & 0x7fffffff0;
  __s = (void *)((long)__dest - uVar18);
  piVar17 = (int *)((long)__s - uVar18);
  memset(__s,0,__n);
  if (param_3 == 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      puVar1 = puVar10 + lVar9;
      lVar9 = lVar9 + 2;
      uVar3 = puVar1[1];
      lVar13 = (ulong)*puVar1 * 4;
      *(int *)((long)__s + lVar13) = *(int *)((long)__s + lVar13) + 1;
      lVar13 = (ulong)uVar3 * 4;
      *(int *)((long)__s + lVar13) = *(int *)((long)__s + lVar13) + 1;
    } while (uVar16 - (uVar16 & 1) != lVar9);
    if ((param_3 & 1) == 0) goto LAB_02f15760;
  }
  *(int *)((long)__s + (ulong)puVar10[lVar9] * 4) =
       *(int *)((long)__s + (ulong)puVar10[lVar9] * 4) + 1;
LAB_02f15760:
  *piVar17 = 0;
  if (1 < uVar15) {
    if (uVar15 == 2) {
      iVar8 = 0;
      lVar9 = 1;
    }
    else {
      iVar8 = 0;
      piVar14 = (int *)((long)__s + 4);
      lVar9 = 1;
      piVar6 = piVar17;
      do {
        iVar2 = piVar14[-1];
        iVar4 = *piVar14;
        piVar14 = piVar14 + 2;
        lVar9 = lVar9 + 2;
        piVar6[1] = iVar2 + iVar8;
        iVar8 = iVar4 + iVar2 + iVar8;
        piVar6[2] = iVar8;
        piVar6 = piVar6 + 2;
      } while ((ulong)uVar15 - ((ulong)uVar7 & 1) != lVar9);
    }
    if ((uVar7 & 1) != 0) {
      piVar17[lVar9] = *(int *)((long)__s + lVar9 * 4 + -4) + iVar8;
    }
  }
  uVar11 = *__dest;
  iVar8 = piVar17[*puVar10];
  piVar17[*puVar10] = iVar8 + 1;
  *(undefined8 *)(lVar12 + (ulong)(iVar8 + param_2) * 8) = uVar11;
  if (param_3 != 1) {
    lVar12 = uVar16 - 1;
    puVar10 = (uint *)((long)auStack_460 + lVar5 + 0x404);
    do {
      __dest = __dest + 1;
      lVar12 = lVar12 + -1;
      uVar11 = *__dest;
      iVar8 = piVar17[*puVar10];
      piVar17[*puVar10] = iVar8 + 1;
      *(undefined8 *)(DAT_0440ae00 + (ulong)(iVar8 + param_2) * 8) = uVar11;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  return 1;
}


