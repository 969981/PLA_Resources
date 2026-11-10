/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005603a8; name: FUN_005603a8
 */


/* WARNING: Removing unreachable block (ram,0x00560900) */

void FUN_005603a8(ulong *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  __tree_node_base *p_Var5;
  size_t sVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined4 uVar19;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  lVar13 = param_1[4] + 1;
  if (param_1[4] == 0xffffffffffffffff) {
    puVar7 = (ulong *)0x0;
    puVar17 = (ulong *)param_1[2];
    if (puVar17 == param_1 + 3) goto LAB_00560440;
LAB_005603f4:
    puVar3 = PTR_LAB_04373088;
    puVar2 = PTR_FUN_04373078;
    puVar16 = param_1 + 3;
    if (*(int *)((long)puVar17 + 0x1c) == 0) {
      uVar14 = (int)puVar17[4] + 1;
      puVar7 = (ulong *)puVar17[1];
      if ((ulong *)puVar17[1] == (ulong *)0x0) {
        puVar7 = puVar17 + 2;
        puVar11 = (ulong *)*puVar7;
        if ((ulong *)*puVar11 != puVar17) {
          do {
            uVar9 = *puVar7;
            puVar7 = (ulong *)(uVar9 + 0x10);
            puVar11 = (ulong *)*puVar7;
          } while (*(ulong *)*puVar7 != uVar9);
        }
      }
      else {
        do {
          puVar11 = puVar7;
          puVar7 = (ulong *)*puVar11;
        } while (puVar7 != (ulong *)0x0);
      }
    }
    else {
      uVar14 = 0;
      puVar11 = puVar17;
    }
    puVar7 = local_70;
    local_78 = local_70;
    if (puVar11 != puVar16) {
      uVar9 = (ulong)(*(int *)((long)puVar11 + 0x1c) - 1);
      if (local_68 <= local_70) goto LAB_00560564;
LAB_00560538:
      *puVar7 = (ulong)uVar14 | uVar9 << 0x20;
      puVar7 = local_70 + 1;
      uVar14 = (int)puVar11[4] + 1;
      puVar17 = (ulong *)puVar11[1];
      puVar18 = puVar11;
      local_70 = puVar7;
      if ((ulong *)puVar11[1] != (ulong *)0x0) goto LAB_00560610;
LAB_00560620:
      puVar17 = puVar18 + 2;
      puVar11 = (ulong *)*puVar17;
      puVar7 = local_70;
      if ((ulong *)*puVar11 != puVar18) {
        do {
          uVar9 = *puVar17;
          puVar17 = (ulong *)(uVar9 + 0x10);
          puVar11 = (ulong *)*puVar17;
          if (*puVar11 == uVar9) goto LAB_0056064c;
        } while( true );
      }
      if (puVar11 != puVar16) {
        do {
          uVar9 = (ulong)(*(int *)((long)puVar11 + 0x1c) - 1);
          if (puVar7 < local_68) goto LAB_00560538;
LAB_00560564:
          lVar13 = (long)puVar7 - (long)local_78 >> 3;
          uVar10 = lVar13 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 005608f8 to 005608ff has its CatchHandler @ 00560930 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
            uVar8 = (long)local_68 - (long)local_78 >> 2;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (uVar10 != 0) goto LAB_005605a4;
            lVar4 = 0;
          }
          else {
            uVar10 = 0x1fffffffffffffff;
LAB_005605a4:
            lVar4 = FUN_002e2e80(puVar2,uVar10 << 3);
          }
          puVar15 = (ulong *)(lVar4 + lVar13 * 8);
          local_68 = (ulong *)(lVar4 + uVar10 * 8);
          puVar7 = puVar15 + 1;
          *puVar15 = (ulong)uVar14 | uVar9 << 0x20;
          sVar6 = (long)local_70 - (long)local_78;
          puVar15 = (ulong *)((long)puVar15 - sVar6);
          if (0 < (long)sVar6) {
            memcpy(puVar15,local_78,sVar6);
          }
          if (local_78 != (ulong *)0x0) {
            FUN_002e2ea0(puVar3,local_78);
          }
          uVar14 = (int)puVar11[4] + 1;
          puVar17 = (ulong *)puVar11[1];
          puVar18 = puVar11;
          local_78 = puVar15;
          local_70 = puVar7;
          if ((ulong *)puVar11[1] == (ulong *)0x0) goto LAB_00560620;
LAB_00560610:
          do {
            puVar11 = puVar17;
            puVar17 = (ulong *)*puVar11;
          } while ((ulong *)*puVar11 != (ulong *)0x0);
LAB_0056064c:
          if (puVar11 == puVar16) break;
        } while( true );
      }
    }
    puVar17 = local_78;
    if (0x10ffff < (int)uVar14) goto LAB_00560760;
    if (puVar7 < local_68) {
      uVar9 = (ulong)uVar14 | 0x10ffff00000000;
LAB_0056069c:
      *puVar7 = uVar9;
      puVar7 = local_70 + 1;
      puVar17 = local_78;
      local_70 = puVar7;
      goto LAB_00560760;
    }
    lVar13 = (long)puVar7 - (long)local_78 >> 3;
    uVar9 = lVar13 + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00560908 to 0056090f has its CatchHandler @ 00560910 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
      uVar10 = (long)local_68 - (long)local_78 >> 2;
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (uVar9 != 0) goto LAB_005606f4;
      lVar4 = 0;
    }
    else {
      uVar9 = 0x1fffffffffffffff;
LAB_005606f4:
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar9 << 3);
    }
    puVar17 = (ulong *)(lVar4 + lVar13 * 8);
    *puVar17 = (ulong)uVar14 | 0x10ffff00000000;
  }
  else {
    local_70 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,lVar13 * 8);
    puVar7 = local_70 + lVar13;
    puVar17 = (ulong *)param_1[2];
    local_68 = puVar7;
    if (puVar17 != param_1 + 3) goto LAB_005603f4;
LAB_00560440:
    local_78 = local_70;
    if (local_70 < puVar7) {
      uVar9 = 0x10ffff00000000;
      puVar7 = local_70;
      goto LAB_0056069c;
    }
    if ((ulong)((long)puVar7 - (long)local_70 >> 3) < 0xfffffffffffffff) {
      lVar4 = (long)puVar7 - (long)local_70 >> 2;
      lVar13 = 1;
      if (lVar4 != 0) {
        lVar13 = lVar4;
      }
      if (lVar13 != 0) goto LAB_005604b4;
      puVar17 = (ulong *)0x0;
    }
    else {
      lVar13 = 0x1fffffffffffffff;
LAB_005604b4:
      puVar17 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,lVar13 << 3);
    }
    *puVar17 = 0x10ffff00000000;
  }
  puVar7 = puVar17 + 1;
  sVar6 = (long)local_70 - (long)local_78;
  puVar17 = (ulong *)((long)puVar17 - sVar6);
  if (0 < (long)sVar6) {
    memcpy(puVar17,local_78,sVar6);
  }
  local_70 = puVar7;
  if (local_78 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78);
  }
LAB_00560760:
  local_78 = puVar17;
  puVar17 = param_1 + 3;
  puVar16 = param_1 + 2;
  FUN_00560e20(puVar16,*puVar17);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (ulong)puVar17;
  puVar2 = PTR_FUN_04373078;
  if (puVar7 != local_78) {
    uVar9 = 0;
    puVar11 = local_78;
LAB_00560800:
    puVar18 = puVar17;
    puVar15 = puVar17;
LAB_00560808:
    uVar10 = *puVar15;
    while( true ) {
      if (uVar10 == 0) {
        p_Var5 = (__tree_node_base *)FUN_002e2e80(puVar2,0x28);
        *(ulong *)(p_Var5 + 0x1c) = *puVar11;
        *(ulong **)(p_Var5 + 0x10) = puVar18;
        *(undefined8 *)p_Var5 = 0;
        *(undefined8 *)(p_Var5 + 8) = 0;
        *puVar15 = (ulong)p_Var5;
        if (*(ulong *)*puVar16 != 0) {
          *puVar16 = *(ulong *)*puVar16;
          p_Var5 = (__tree_node_base *)*puVar15;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)param_1[3],p_Var5);
        param_1[4] = param_1[4] + 1;
        puVar7 = local_70;
      }
      uVar9 = uVar9 + 1;
      if ((ulong)((long)puVar7 - (long)local_78 >> 3) <= uVar9) break;
      puVar18 = (ulong *)*puVar17;
      puVar11 = local_78 + uVar9;
      if (puVar18 == (ulong *)0x0) goto LAB_00560800;
      iVar1 = *(int *)((long)puVar18 + 0x1c);
      puVar15 = param_1 + 3;
      while( true ) {
        while (iVar1 <= *(int *)((long)puVar11 + 4)) {
          if ((int)*puVar11 <= (int)puVar18[4]) goto LAB_00560808;
          puVar15 = puVar18 + 1;
          puVar12 = (ulong *)*puVar15;
          if (puVar12 == (ulong *)0x0) goto LAB_00560808;
          puVar18 = puVar12;
          iVar1 = *(int *)((long)puVar12 + 0x1c);
        }
        puVar12 = (ulong *)*puVar18;
        puVar15 = puVar18;
        if (puVar12 == (ulong *)0x0) break;
        iVar1 = *(int *)((long)puVar12 + 0x1c);
        puVar18 = puVar12;
      }
      uVar10 = *puVar18;
    }
  }
  uVar9 = *param_1;
  uVar19 = CONCAT13(~(byte)(uVar9 >> 0x18),
                    CONCAT12(~(byte)(uVar9 >> 0x10),CONCAT11(~(byte)(uVar9 >> 8),~(byte)uVar9)));
  *(int *)(param_1 + 1) = 0x110000 - (int)param_1[1];
  *param_1 = CONCAT44((int)(CONCAT17(~(byte)(uVar9 >> 0x38),
                                     CONCAT16(~(byte)(uVar9 >> 0x30),
                                              CONCAT15(~(byte)(uVar9 >> 0x28),
                                                       CONCAT14(~(byte)(uVar9 >> 0x20),uVar19)))) >>
                           0x20),uVar19) & 0x3ffffff03ffffff;
  if (local_78 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


