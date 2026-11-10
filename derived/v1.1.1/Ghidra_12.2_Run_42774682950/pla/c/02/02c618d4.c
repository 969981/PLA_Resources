/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c618d4; name: FUN_02c618d4
 */


bool FUN_02c618d4(long param_1,int param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  undefined **local_60;
  uint local_58;
  ushort local_54;
  
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar5 = FUN_02c6849c();
    uVar6 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar15 = 1;
    do {
      uVar7 = FUN_02c524b0(uVar5,uVar6,uVar15);
      if (uVar4 < uVar7) break;
      uVar15 = uVar15 + 1;
    } while ((uVar15 & 0xff) < 0x65);
    uVar4 = uVar15 - 1;
    if ((uVar15 & 0xff) < 2) {
      uVar4 = 1;
    }
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar4 = FUN_02c68174();
  }
  if (((int)uVar3 < 0x38a) && (uVar2 < 0x1c)) {
    lVar11 = *(&DAT_04400660)[(ulong)uVar3 * 4];
    uVar13 = (&DAT_04400660)[(ulong)uVar3 * 4][1] - lVar11 >> 3;
    if ((uVar2 < uVar13) && (*(long *)(lVar11 + (ulong)uVar2 * 8) != 0)) {
      uVar14 = uVar2;
      goto LAB_02c619f8;
    }
  }
  lVar11 = *DAT_04400660;
  uVar13 = DAT_04400660[1] - lVar11 >> 3;
  uVar14 = 0;
LAB_02c619f8:
  if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar12 = *(int **)(lVar11 + (ulong)uVar14 * 8);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (10 - (long)*piVar12)));
  uVar15 = (uint)*(byte *)((long)puVar1 + (ulong)*puVar1);
  if (uVar15 != 0) {
    uVar7 = 0;
    do {
      local_60 = &PTR_LAB_0428acc8;
      local_58 = uVar3;
      local_54 = uVar2;
      iVar8 = FUN_02c55e48(&local_60,uVar7);
      if (iVar8 == param_2) {
        local_60 = &PTR_LAB_0428acc8;
        local_58 = uVar3;
        local_54 = uVar2;
        uVar9 = FUN_02c55cf4(&local_60,uVar7);
        if ((uVar9 & 0xffff) <= uVar4) {
          return true;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar15 != uVar7);
  }
  uVar13 = 0;
  do {
    if (((uint)uVar13 & 0xff) < 0x3d) {
      if ((&DAT_03a84b1c)[uVar13] == param_2) {
LAB_02c61a94:
        uVar10 = FUN_02c76880(*(undefined8 *)(param_1 + 0x98),uVar13 & 0xffffffff);
        if ((uVar10 & 1) != 0) {
          return true;
        }
      }
    }
    else if (param_2 == 0) goto LAB_02c61a94;
    uVar13 = uVar13 + 1;
    if (uVar13 == 0x3d) {
      iVar8 = FUN_02c6dc28(*(undefined8 *)(param_1 + 0x98));
      return iVar8 == param_2;
    }
  } while( true );
}


