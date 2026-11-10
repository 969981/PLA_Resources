/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e5180; name: FUN_002e5180
 */


void FUN_002e5180(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  byte bVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *puStack_68;
  
  puVar4 = PTR_LAB_043737d8;
  if (param_2 == (ulong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_90 = (ulong *)0x0;
    local_88 = (ulong *)0x0;
    local_98 = (ulong *)0x0;
    if (*param_2 != 0) {
      uVar14 = 0;
      puVar16 = PTR_LAB_04373088;
      do {
        uVar18 = 0xaaaaaaaaaaaaaaa;
        uVar9 = param_2[1];
        uStack_a8 = 0;
        local_a0 = (undefined1 *)0x0;
        local_b0 = 0;
        iVar1 = *(int *)(uVar9 + uVar14 * 0x20);
        if (iVar1 == 0) {
          lVar10 = uVar9 + uVar14 * 0x20;
          local_80 = *(undefined8 *)(lVar10 + 8);
          puStack_78 = puVar4;
          local_70 = *(ulong *)(lVar10 + 0x10);
          puStack_68 = puVar4;
                    /* try { // try from 002e52a8 to 002e52bf has its CatchHandler @ 002e56e0 */
          FUN_002e6390(&local_c8,"%s=%s",5,&local_80,2);
LAB_002e52c0:
          if ((local_b0 & 1) != 0) {
            *local_a0 = 0;
            uStack_a8 = 0;
            if ((local_b0 & 1) != 0) {
              FUN_002e2ea0(puVar16,local_a0);
            }
          }
          local_a0 = local_b8;
          uStack_a8 = uStack_c0;
          local_b0 = local_c8;
          if (local_90 == local_88) goto LAB_002e5310;
LAB_002e53c8:
          puVar17 = local_90;
          puVar5 = local_a0;
          uVar18 = uStack_a8;
          *local_90 = 0;
          local_90[1] = 0;
          local_90[2] = 0;
          if ((local_b0 & 1) == 0) {
            local_90[2] = (ulong)local_a0;
            local_90[1] = uStack_a8;
            *local_90 = local_b0;
          }
          else {
            if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_a8 < 0x17) {
              pbVar15 = (byte *)((long)local_90 + 1);
              *(byte *)local_90 = (byte)((int)uStack_a8 << 1);
              if (uStack_a8 != 0) goto LAB_002e5470;
            }
            else {
              uVar9 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
              pbVar15 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
              puVar17[2] = (ulong)pbVar15;
              puVar16 = PTR_LAB_04373088;
              *puVar17 = uVar9 | 1;
              puVar17[1] = uVar18;
LAB_002e5470:
              memcpy(pbVar15,puVar5,uVar18);
            }
            pbVar15[uVar18] = 0;
          }
          local_90 = local_90 + 3;
        }
        else {
          if (iVar1 == 2) {
            lVar10 = uVar9 + uVar14 * 0x20;
            local_80 = *(undefined8 *)(lVar10 + 8);
            puStack_78 = puVar4;
            local_70 = *(ulong *)(lVar10 + 0x10);
            puStack_68 = PTR_LAB_043737e8;
                    /* try { // try from 002e5274 to 002e528f has its CatchHandler @ 002e56e4 */
            FUN_002e6390(&local_c8,"%s=%p",5,&local_80,2);
            goto LAB_002e52c0;
          }
          if (iVar1 == 1) {
            lVar10 = uVar9 + uVar14 * 0x20;
            local_80 = *(undefined8 *)(lVar10 + 8);
            puStack_78 = puVar4;
            local_70 = (ulong)*(uint *)(lVar10 + 0x10);
            puStack_68 = PTR_FUN_043737e0;
                    /* try { // try from 002e5238 to 002e5253 has its CatchHandler @ 002e56e8 */
            FUN_002e6390(&local_c8,"%s=%d",5,&local_80,2);
            goto LAB_002e52c0;
          }
                    /* try { // try from 002e53a8 to 002e53bb has its CatchHandler @ 002e56ec */
          FUN_00291910(&local_b0,"arg with unknown type",0x15);
          if (local_90 != local_88) goto LAB_002e53c8;
LAB_002e5310:
          lVar10 = (long)local_90 - (long)local_98 >> 3;
          uVar9 = lVar10 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* try { // try from 002e5690 to 002e569f has its CatchHandler @ 002e56cc */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = (long)local_88 - (long)local_98 >> 3;
          if ((ulong)(lVar11 * -0x5555555555555555) < 0x555555555555555) {
            uVar12 = lVar11 * 0x5555555555555556;
            uVar18 = uVar9;
            if (uVar9 <= uVar12) {
              uVar18 = uVar12;
            }
            if (uVar18 != 0) goto LAB_002e5364;
            lVar11 = 0;
          }
          else {
LAB_002e5364:
            lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar18 * 0x18);
          }
          puVar5 = local_a0;
          uVar9 = uStack_a8;
          puVar17 = (ulong *)(lVar11 + lVar10 * 8);
          puVar17[2] = 0;
          *puVar17 = 0;
          puVar17[1] = 0;
          if ((local_b0 & 1) == 0) {
            puVar17[2] = (ulong)local_a0;
            puVar17[1] = uStack_a8;
            *puVar17 = local_b0;
          }
          else {
            if (0xffffffffffffffef < uStack_a8) {
                    /* try { // try from 002e56a0 to 002e56a7 has its CatchHandler @ 002e56a8 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_a8 < 0x17) {
              pbVar15 = (byte *)((long)puVar17 + 1);
              *(byte *)puVar17 = (byte)((int)uStack_a8 << 1);
              if (uStack_a8 != 0) goto LAB_002e54e4;
            }
            else {
              uVar12 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
              pbVar15 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
              lVar10 = lVar11 + lVar10 * 8;
              *(ulong *)(lVar10 + 8) = uVar9;
              *(byte **)(lVar10 + 0x10) = pbVar15;
              *puVar17 = uVar12 | 1;
LAB_002e54e4:
              memcpy(pbVar15,puVar5,uVar9);
            }
            pbVar15[uVar9] = 0;
            puVar16 = PTR_LAB_04373088;
          }
          puVar7 = local_98;
          local_88 = (ulong *)(lVar11 + uVar18 * 0x18);
          puVar6 = puVar17 + 3;
          puVar13 = local_90;
          if (local_90 == local_98) {
            local_90 = local_98;
          }
          else {
            do {
              uVar9 = puVar13[-2];
              uVar18 = puVar13[-3];
              puVar17[-1] = puVar13[-1];
              puVar17[-2] = uVar9;
              puVar17[-3] = uVar18;
              puVar13[-3] = 0;
              puVar13[-2] = 0;
              puVar13[-1] = 0;
              puVar13 = puVar13 + -3;
              puVar17 = puVar17 + -3;
            } while (local_98 != puVar13);
          }
          bVar8 = local_90 != local_98;
          local_98 = puVar17;
          if (bVar8) {
            bVar2 = (byte)local_90[-3];
            puVar13 = local_90 + -3;
            puVar17 = local_90;
            while( true ) {
              puVar3 = puVar13;
              local_90 = puVar6;
              if ((bVar2 & 1) != 0) {
                FUN_002e2ea0(puVar16,puVar17[-1]);
              }
              puVar6 = local_90;
              if (puVar7 == puVar3) break;
              bVar2 = (byte)puVar3[-3];
              puVar13 = puVar3 + -3;
              puVar17 = puVar3;
            }
          }
          local_90 = puVar6;
          if (puVar7 != (ulong *)0x0) {
            FUN_002e2ea0(puVar16,puVar7);
          }
        }
        if ((local_b0 & 1) != 0) {
          FUN_002e2ea0(puVar16,local_a0);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *param_2);
    }
                    /* try { // try from 002e55f0 to 002e55ff has its CatchHandler @ 002e56d0 */
    FUN_002e5790(param_1,local_98,local_90,&DAT_0398d5c8,2);
    puVar17 = local_98;
    puVar4 = PTR_LAB_04373088;
    if (local_98 != (ulong *)0x0) {
      if (local_90 != local_98) {
        bVar2 = (byte)local_90[-3];
        puVar7 = local_90 + -3;
        puVar6 = local_90;
        while( true ) {
          puVar13 = puVar7;
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar4,puVar6[-1]);
          }
          if (puVar17 == puVar13) break;
          bVar2 = (byte)puVar13[-3];
          puVar7 = puVar13 + -3;
          puVar6 = puVar13;
        }
      }
      local_90 = puVar17;
      FUN_002e2ea0(PTR_LAB_04373088,local_98);
    }
  }
  return;
}


