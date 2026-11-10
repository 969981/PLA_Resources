/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c61edc; name: FUN_02c61edc
 */


undefined8 FUN_02c61edc(long param_1,ushort param_2,int *param_3,int *param_4,long param_5)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  uVar5 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar5 < 0x38a && uVar3 < 0x1c) {
    lVar11 = *(&DAT_04400660)[(ulong)uVar5 * 4];
    uVar13 = (&DAT_04400660)[(ulong)uVar5 * 4][1] - lVar11 >> 3;
    if ((uVar3 < uVar13) && (*(long *)(lVar11 + (ulong)uVar3 * 8) != 0)) {
      uVar4 = uVar3;
      goto LAB_02c61f8c;
    }
  }
  uVar4 = 0;
  lVar11 = *DAT_04400660;
  uVar13 = DAT_04400660[1] - lVar11 >> 3;
LAB_02c61f8c:
  if (uVar13 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar12 = *(int **)(lVar11 + (ulong)uVar4 * 8);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (10 - (long)*piVar12)));
  bVar2 = *(byte *)((long)puVar1 + (ulong)*puVar1);
  if (bVar2 != 0) {
    param_2 = param_2 & 0xff;
    if (param_5 == 0) {
      iVar14 = 0;
      uVar15 = 0;
      do {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        uVar4 = FUN_02c55ba0(&local_70,uVar15);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        iVar6 = FUN_02c55e48(&local_70,uVar15);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        iVar7 = FUN_02c559a8(&local_70,uVar15);
        if (iVar7 != 1) {
          lVar11 = 3;
          for (piVar12 = &DAT_03a84b24; piVar12[-2] != iVar6; piVar12 = piVar12 + 4) {
            if (lVar11 == 0x3f) {
              uVar8 = 1;
              if (param_2 < uVar4) {
                return 3;
              }
              goto LAB_02c621fc;
            }
            if (piVar12[-1] == iVar6) {
              lVar11 = lVar11 + -2;
              goto LAB_02c621e4;
            }
            if (*piVar12 == iVar6) {
              lVar11 = lVar11 + -1;
              goto LAB_02c621e4;
            }
            if (piVar12[1] == iVar6) goto LAB_02c621e4;
            lVar11 = lVar11 + 4;
          }
          lVar11 = lVar11 + -3;
LAB_02c621e4:
          uVar8 = FUN_02c76514(*(undefined8 *)(param_1 + 0x98),lVar11);
          uVar8 = uVar8 ^ 1;
          if (param_2 < uVar4) {
            return 3;
          }
LAB_02c621fc:
          if (param_2 == uVar4) {
            if (((uVar8 & 1) != 0) && (iVar14 == *param_3)) goto LAB_02c62214;
            iVar14 = iVar14 + 1;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != bVar2);
    }
    else {
      iVar14 = 0;
      uVar15 = 0;
      do {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        uVar4 = FUN_02c55ba0(&local_70,uVar15);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        iVar6 = FUN_02c55e48(&local_70,uVar15);
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar5;
        local_64 = uVar3;
        iVar7 = FUN_02c559a8(&local_70,uVar15);
        if (iVar7 != 1) {
          uVar8 = FUN_02c61bc4(param_5,iVar6);
          uVar8 = uVar8 ^ 1;
          lVar11 = 3;
          for (piVar12 = &DAT_03a84b24; piVar12[-2] != iVar6; piVar12 = piVar12 + 4) {
            if (lVar11 == 0x3f) goto LAB_02c620cc;
            if (piVar12[-1] == iVar6) {
              lVar11 = lVar11 + -2;
              goto LAB_02c620b8;
            }
            if (*piVar12 == iVar6) {
              lVar11 = lVar11 + -1;
              goto LAB_02c620b8;
            }
            if (piVar12[1] == iVar6) goto LAB_02c620b8;
            lVar11 = lVar11 + 4;
          }
          lVar11 = lVar11 + -3;
LAB_02c620b8:
          uVar9 = FUN_02c76514(*(undefined8 *)(param_1 + 0x98),lVar11);
          uVar8 = uVar8 & (uVar9 ^ 1);
LAB_02c620cc:
          if (param_2 < uVar4) {
            return 3;
          }
          if (param_2 == uVar4) {
            if (((uVar8 & 1) != 0) && (iVar14 == *param_3)) {
LAB_02c62214:
              if ((param_5 != 0) &&
                 ((uVar13 = FUN_02c61bc4(param_5,iVar6), (uVar13 & 1) == 0 &&
                  (*(uint *)(param_5 + 0x104) < 0x41)))) {
                *(int *)(param_5 + (ulong)*(uint *)(param_5 + 0x104) * 4) = iVar6;
                *(int *)(param_5 + 0x104) = *(int *)(param_5 + 0x104) + 1;
              }
              *param_4 = iVar6;
              *param_3 = *param_3 + 1;
              uVar10 = FUN_02c6087c(param_1,iVar6);
              return uVar10;
            }
            iVar14 = iVar14 + 1;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != bVar2);
    }
  }
  return 3;
}


