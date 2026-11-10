/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01505bac; name: FUN_01505bac
 */


void FUN_01505bac(long param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  long lVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int local_80;
  undefined1 local_7c;
  undefined1 auStack_78 [8];
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  lVar13 = *(long *)(*(long *)(param_1 + 0x630) + 0xb0);
  if (lVar13 != 0) {
    *(long *)(*(long *)(param_1 + 0x630) + 0xb0) = lVar13 - ((lVar13 << 3) >> 3);
  }
  uVar5 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  uVar4 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  uVar6 = FUN_02c5fb2c(*(undefined8 *)(param_1 + 0x5b8));
  lVar13 = *(long *)(param_1 + 0x5b0);
  if (*(int *)(lVar13 + 0xc60) == 0) {
    return;
  }
  iVar2 = 0;
  uVar18 = 0;
  if (*(int *)(lVar13 + 0xc60) != 0) goto LAB_01505ca8;
LAB_01505e90:
  iVar1 = 0;
  do {
    local_70 = &PTR_LAB_0428ac88;
    local_68 = uVar5;
    local_64 = uVar4;
    uVar10 = FUN_02c54eb8(&local_70,iVar1 - 1U & 0xffff);
    if ((uVar10 & 1) != 0) {
      if (uVar18 < *(uint *)(*(long *)(param_1 + 0x5b0) + 0xc60)) {
        iVar16 = *(int *)(*(long *)(param_1 + 0x5b0) + uVar18 * 0xc + 0x60);
      }
      else {
        iVar16 = 0;
      }
      iVar7 = FUN_02c6dc28(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
      if ((int)uVar5 < 0x38a && uVar4 < 0x1c) {
        lVar13 = *(&DAT_04400660)[(ulong)uVar5 * 4];
        uVar10 = (&DAT_04400660)[(ulong)uVar5 * 4][1] - lVar13 >> 3;
        if ((uVar10 <= uVar4) || (*(long *)(lVar13 + (ulong)uVar4 * 8) == 0)) goto LAB_01505d34;
        uVar14 = uVar4;
      }
      else {
LAB_01505d34:
        uVar14 = 0;
        lVar13 = *DAT_04400660;
        uVar10 = DAT_04400660[1] - lVar13 >> 3;
      }
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      piVar11 = *(int **)(lVar13 + (ulong)uVar14 * 8);
      puVar3 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (10 - (long)*piVar11)));
      uVar15 = (uint)*(byte *)((long)puVar3 + (ulong)*puVar3);
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          local_70 = &PTR_LAB_0428acc8;
          local_68 = uVar5;
          local_64 = uVar4;
          iVar8 = FUN_02c55e48(&local_70,uVar17);
          local_70 = &PTR_LAB_0428acc8;
          local_68 = uVar5;
          local_64 = uVar4;
          uVar9 = FUN_02c55ba0(&local_70,uVar17);
          if ((iVar8 == iVar16) && ((uVar9 & 0xffff) <= uVar6)) goto LAB_01505c8c;
          uVar17 = uVar17 + 1;
        } while (uVar15 != uVar17);
      }
      if (iVar7 != iVar16) {
        lVar13 = param_1 + (long)iVar2 * 0x10;
        *(int *)(lVar13 + 0x63c) = iVar16;
        *(uint *)(lVar13 + 0x640) = iVar1 - 1U;
        if (uVar18 < *(uint *)(*(long *)(param_1 + 0x5b0) + 0xc60)) {
          uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x5b0) + uVar18 * 0xc + 0x68);
        }
        else {
          uVar12 = 0;
        }
        lVar13 = param_1 + (long)iVar2 * 0x10;
        *(undefined4 *)(lVar13 + 0x644) = uVar12;
        *(undefined4 *)(lVar13 + 0x648) = 0;
        lVar13 = *(long *)(param_1 + 0x630);
        local_7c = 0;
        uVar10 = *(ulong *)(lVar13 + 0xb0);
        local_80 = iVar2;
        if (uVar10 < *(ulong *)(lVar13 + 0xb8)) {
          FUN_011d216c(lVar13 + 0x88,*(long *)(lVar13 + 0xa8) + uVar10 * 8,&local_80);
          *(long *)(lVar13 + 0xb0) = *(long *)(lVar13 + 0xb0) + 1;
        }
        else {
          local_70 = (undefined **)(*(long *)(lVar13 + 0xa8) + uVar10 * 8);
          FUN_011d20a4(auStack_78,lVar13 + 0x88,&local_70,1,&local_80);
        }
        iVar2 = iVar2 + 1;
      }
    }
LAB_01505c8c:
    lVar13 = *(long *)(param_1 + 0x5b0);
    uVar18 = uVar18 + 1;
    if (*(uint *)(lVar13 + 0xc60) <= uVar18) {
      return;
    }
    if (*(uint *)(lVar13 + 0xc60) <= uVar18) goto LAB_01505e90;
LAB_01505ca8:
    iVar1 = *(int *)(lVar13 + uVar18 * 0xc + 100);
  } while( true );
}


