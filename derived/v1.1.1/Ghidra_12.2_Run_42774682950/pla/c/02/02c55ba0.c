/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c55ba0; name: FUN_02c55ba0
 */


undefined2 FUN_02c55ba0(long param_1,ushort param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 8);
  bVar2 = 0x389 < (int)uVar1 || 0x1b < uVar3;
  if (bVar2) {
LAB_02c55c08:
    uVar8 = 0;
    lVar5 = *DAT_04400660;
    if (DAT_04400660[1] - lVar5 >> 3 == 0) goto LAB_02c55cf0;
  }
  else {
    lVar5 = *(&DAT_04400660)[(ulong)uVar1 * 4];
    uVar7 = (&DAT_04400660)[(ulong)uVar1 * 4][1] - lVar5 >> 3;
    if ((uVar7 <= uVar3) || (*(long *)(lVar5 + uVar3 * 8) == 0)) goto LAB_02c55c08;
    uVar8 = uVar3;
    if (uVar7 <= uVar3) goto LAB_02c55cf0;
  }
  piVar6 = *(int **)(lVar5 + uVar8 * 8);
  puVar4 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
  if (*(byte *)((long)puVar4 + (ulong)*puVar4) <= param_2) {
    return 0;
  }
  if (bVar2) {
LAB_02c55c78:
    uVar3 = 0;
    lVar5 = *DAT_04400660;
    uVar7 = DAT_04400660[1] - lVar5 >> 3;
  }
  else {
    lVar5 = *(&DAT_04400660)[(ulong)uVar1 * 4];
    uVar7 = (&DAT_04400660)[(ulong)uVar1 * 4][1] - lVar5 >> 3;
    if ((uVar7 <= uVar3) || (*(long *)(lVar5 + uVar3 * 8) == 0)) goto LAB_02c55c78;
  }
  if (uVar3 < uVar7) {
    piVar6 = *(int **)(lVar5 + uVar3 * 8);
    puVar4 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
    puVar4 = (uint *)((long)puVar4 + (ulong)param_2 * 4 + (ulong)*puVar4 + 4);
    piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar3 == 0)) {
      return 0;
    }
    return *(undefined2 *)((long)piVar6 + uVar3);
  }
LAB_02c55cf0:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


