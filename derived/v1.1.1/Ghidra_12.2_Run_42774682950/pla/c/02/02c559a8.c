/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c559a8; name: FUN_02c559a8
 */


int FUN_02c559a8(long param_1,ushort param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0xc);
  uVar6 = (ulong)*(uint *)(param_1 + 8);
  bVar3 = 0x389 < (int)*(uint *)(param_1 + 8) || 0x1b < uVar4;
  if (bVar3) {
LAB_02c55a10:
    uVar10 = 0;
    lVar7 = *DAT_04400660;
    if (DAT_04400660[1] - lVar7 >> 3 == 0) goto LAB_02c55b9c;
  }
  else {
    lVar7 = *(&DAT_04400660)[uVar6 * 4];
    uVar9 = (&DAT_04400660)[uVar6 * 4][1] - lVar7 >> 3;
    if ((uVar9 <= uVar4) || (*(long *)(lVar7 + uVar4 * 8) == 0)) goto LAB_02c55a10;
    uVar10 = uVar4;
    if (uVar9 <= uVar4) goto LAB_02c55b9c;
  }
  piVar8 = *(int **)(lVar7 + uVar10 * 8);
  puVar5 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (10 - (long)*piVar8)));
  if (*(byte *)((long)puVar5 + (ulong)*puVar5) <= param_2) {
    return 2;
  }
  if (bVar3) {
LAB_02c55aa0:
    uVar10 = 0;
    lVar7 = *DAT_04400660;
    if (DAT_04400660[1] - lVar7 >> 3 == 0) goto LAB_02c55b9c;
  }
  else {
    lVar7 = *(&DAT_04400660)[uVar6 * 4];
    uVar9 = (&DAT_04400660)[uVar6 * 4][1] - lVar7 >> 3;
    if ((uVar9 <= uVar4) || (*(long *)(lVar7 + uVar4 * 8) == 0)) goto LAB_02c55aa0;
    uVar10 = uVar4;
    if (uVar9 <= uVar4) goto LAB_02c55b9c;
  }
  piVar8 = *(int **)(lVar7 + uVar10 * 8);
  puVar5 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (10 - (long)*piVar8)));
  if (*(byte *)((long)puVar5 + (ulong)*puVar5) <= param_2) {
    return 0;
  }
  if (bVar3) {
LAB_02c55b10:
    uVar4 = 0;
    lVar7 = *DAT_04400660;
    uVar6 = DAT_04400660[1] - lVar7 >> 3;
  }
  else {
    lVar7 = *(&DAT_04400660)[uVar6 * 4];
    uVar6 = (&DAT_04400660)[uVar6 * 4][1] - lVar7 >> 3;
    if ((uVar6 <= uVar4) || (*(long *)(lVar7 + uVar4 * 8) == 0)) goto LAB_02c55b10;
  }
  if (uVar4 < uVar6) {
    piVar8 = *(int **)(lVar7 + uVar4 * 8);
    puVar5 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (10 - (long)*piVar8)));
    puVar5 = (uint *)((long)puVar5 + (ulong)param_2 * 4 + (ulong)*puVar5 + 4);
    piVar8 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar4 == 0)) {
      return 0;
    }
    sVar1 = *(short *)((long)piVar8 + uVar4);
    iVar2 = (uint)(sVar1 != 0) << 1;
    if (sVar1 == 1) {
      iVar2 = 1;
    }
    return iVar2;
  }
LAB_02c55b9c:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


