/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c622ac; name: FUN_02c622ac
 */


undefined8 FUN_02c622ac(long param_1,uint *param_2,undefined4 *param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  uVar4 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar4 < 0x38a && uVar3 < 0x1c) {
    lVar8 = *(&DAT_04400660)[(ulong)uVar4 * 4];
    uVar10 = (&DAT_04400660)[(ulong)uVar4 * 4][1] - lVar8 >> 3;
    if ((uVar3 < uVar10) && (*(long *)(lVar8 + (ulong)uVar3 * 8) != 0)) {
      uVar11 = uVar3;
      goto LAB_02c62358;
    }
  }
  uVar11 = 0;
  lVar8 = *DAT_04400660;
  uVar10 = DAT_04400660[1] - lVar8 >> 3;
LAB_02c62358:
  if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar9 = *(int **)(lVar8 + (ulong)uVar11 * 8);
  puVar1 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (10 - (long)*piVar9)));
  bVar2 = *(byte *)((long)puVar1 + (ulong)*puVar1);
  uVar12 = *param_2;
  if (uVar12 < bVar2) {
    if (param_4 == 0) {
      do {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar4;
        local_64 = uVar3;
        uVar5 = FUN_02c55e48(&local_70,uVar12);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar4;
        local_64 = uVar3;
        iVar6 = FUN_02c559a8(&local_70,uVar12);
        if (iVar6 == 0) goto LAB_02c62490;
        uVar12 = uVar12 + 1;
      } while (bVar2 != uVar12);
    }
    else {
      do {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar4;
        local_64 = uVar3;
        uVar5 = FUN_02c55e48(&local_70,uVar12);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar4;
        local_64 = uVar3;
        iVar6 = FUN_02c559a8(&local_70,uVar12);
        if ((iVar6 == 0) && (uVar10 = FUN_02c61bc4(param_4,uVar5), (uVar10 & 1) == 0)) {
          uVar10 = FUN_02c61bc4(param_4,uVar5);
          if (((uVar10 & 1) == 0) && (*(uint *)(param_4 + 0x104) < 0x41)) {
            *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x104) * 4) = uVar5;
            *(int *)(param_4 + 0x104) = *(int *)(param_4 + 0x104) + 1;
          }
LAB_02c62490:
          *param_3 = uVar5;
          *param_2 = uVar12 + 1;
          uVar7 = FUN_02c6087c(param_1,uVar5);
          return uVar7;
        }
        uVar12 = uVar12 + 1;
      } while (bVar2 != uVar12);
    }
  }
  return 3;
}


