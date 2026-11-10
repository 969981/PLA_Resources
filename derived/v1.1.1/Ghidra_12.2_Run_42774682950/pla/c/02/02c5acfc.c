/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5acfc; name: FUN_02c5acfc
 */


void FUN_02c5acfc(long param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ushort uVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  
  lVar9 = *(long *)(param_1 + 0x98);
  bVar1 = *(char *)(lVar9 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar9 = *(long *)(param_1 + 0x98);
  }
  uVar5 = FUN_02c6849c(lVar9);
  uVar4 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (uVar5 == 0) goto LAB_02c5ae14;
  bVar3 = (uVar5 | 1) != 0x38b;
  uVar10 = 0;
  if ((int)uVar5 < 0x38a && bVar3) {
    uVar10 = uVar4;
  }
  if (uVar10 < 0x1c) {
    uVar13 = 0;
    if ((int)uVar5 < 0x38a && bVar3) {
      uVar13 = (ulong)uVar5;
    }
    lVar9 = *(&DAT_043f23a0)[uVar13 * 4];
    uVar13 = (&DAT_043f23a0)[uVar13 * 4][1] - lVar9 >> 3;
    if ((uVar13 <= uVar10) || (*(long *)(lVar9 + (ulong)uVar10 * 8) == 0)) goto LAB_02c5adb4;
  }
  else {
LAB_02c5adb4:
    uVar10 = 0;
    lVar9 = *DAT_043f23a0;
    uVar13 = DAT_043f23a0[1] - lVar9 >> 3;
  }
  if (uVar13 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar11 = *(int **)(lVar9 + (ulong)uVar10 * 8);
  if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 9) ||
      (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4], uVar13 == 0)) ||
     (*(char *)((long)piVar11 + uVar13) == '\0')) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x98) + 0x10);
    *(ushort *)(lVar9 + 4) = *(ushort *)(lVar9 + 4) | 4;
  }
LAB_02c5ae14:
  iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  iVar7 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
  uVar5 = 2;
  if (iVar6 == 0) {
    uVar5 = 1;
  }
  uVar15 = (uint)(iVar6 != 0);
  uVar2 = uVar15;
  if (iVar7 != 0) {
    uVar2 = uVar5;
  }
  iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
  if (iVar6 != 0) {
    uVar2 = uVar2 + 1;
  }
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
  if (iVar8 != 0) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 != 0) {
    iVar14 = 0;
    do {
      uVar13 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),iVar14);
      lVar9 = (&DAT_0428af30)[(uVar13 & 0xffffffff) * 6];
      if (lVar9 == 0) {
        plVar12 = &DAT_0428af30;
      }
      else {
        plVar12 = &DAT_0428af30;
        if (*(char *)(lVar9 + 0x1e1) != '\0') {
          plVar12 = &DAT_0428af30 + (uVar13 & 0xffffffff) * 6;
        }
      }
      piVar11 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
      if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
          (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar13 == 0)) ||
         (*(char *)((long)piVar11 + uVar13) == '\0')) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x98) + 0x10);
        *(ushort *)(lVar9 + 4) = *(ushort *)(lVar9 + 4) | 4;
      }
      iVar14 = iVar14 + 1;
    } while (uVar15 + (iVar6 != 0) + (uint)(iVar8 != 0) + (uint)(iVar7 != 0) != iVar14);
  }
  if (!(bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0')) {
    return;
  }
  FUN_02c66640();
  return;
}


