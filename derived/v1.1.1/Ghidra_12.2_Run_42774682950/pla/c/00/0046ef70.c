/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046ef70; name: FUN_0046ef70
 */


void FUN_0046ef70(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint7 uVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint7 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  
  uStack_a8 = param_2[param_3 * 0x10 + -7];
  local_b0 = param_2[param_3 * 0x10 + -8];
  uStack_98 = param_2[param_3 * 0x10 + -5];
  local_a0 = param_2[param_3 * 0x10 + -6];
  uStack_88 = param_2[param_3 * 0x10 + -3];
  local_90 = param_2[param_3 * 0x10 + -4];
  uStack_78 = param_2[param_3 * 0x10 + -1];
  local_80 = param_2[param_3 * 0x10 + -2];
  if (param_3 * 2 != 0) {
    uVar22 = 0;
    do {
      uVar34 = param_2[1];
      uVar28 = *param_2;
      iVar12 = -8;
      uVar23 = CONCAT13((byte)((ulong)local_b0 >> 0x18) ^ (byte)((ulong)uVar28 >> 0x18),
                        CONCAT12((byte)((ulong)local_b0 >> 0x10) ^ (byte)((ulong)uVar28 >> 0x10),
                                 CONCAT11((byte)((ulong)local_b0 >> 8) ^ (byte)((ulong)uVar28 >> 8),
                                          (byte)local_b0 ^ (byte)uVar28)));
      uVar29 = CONCAT13((byte)((ulong)uStack_a8 >> 0x18) ^ (byte)((ulong)uVar34 >> 0x18),
                        CONCAT12((byte)((ulong)uStack_a8 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10),
                                 CONCAT11((byte)((ulong)uStack_a8 >> 8) ^ (byte)((ulong)uVar34 >> 8)
                                          ,(byte)uStack_a8 ^ (byte)uVar34)));
      uVar37 = param_2[3];
      uVar35 = param_2[2];
      iVar24 = CONCAT13((byte)((ulong)local_a0 >> 0x18) ^ (byte)((ulong)uVar35 >> 0x18),
                        CONCAT12((byte)((ulong)local_a0 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                 CONCAT11((byte)((ulong)local_a0 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                          (byte)local_a0 ^ (byte)uVar35)));
      uVar27 = CONCAT16((byte)((ulong)local_a0 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                        CONCAT15((byte)((ulong)local_a0 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                 CONCAT14((byte)((ulong)local_a0 >> 0x20) ^
                                          (byte)((ulong)uVar35 >> 0x20),iVar24)));
      uVar30 = CONCAT13((byte)((ulong)uStack_98 >> 0x18) ^ (byte)((ulong)uVar37 >> 0x18),
                        CONCAT12((byte)((ulong)uStack_98 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10),
                                 CONCAT11((byte)((ulong)uStack_98 >> 8) ^ (byte)((ulong)uVar37 >> 8)
                                          ,(byte)uStack_98 ^ (byte)uVar37)));
      uVar38 = param_2[5];
      uVar36 = param_2[4];
      uVar40 = param_2[7];
      uVar39 = param_2[6];
      uVar25 = CONCAT13((byte)((ulong)local_90 >> 0x18) ^ (byte)((ulong)uVar36 >> 0x18),
                        CONCAT12((byte)((ulong)local_90 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                 CONCAT11((byte)((ulong)local_90 >> 8) ^ (byte)((ulong)uVar36 >> 8),
                                          (byte)local_90 ^ (byte)uVar36)));
      uVar31 = CONCAT13((byte)((ulong)uStack_88 >> 0x18) ^ (byte)((ulong)uVar38 >> 0x18),
                        CONCAT12((byte)((ulong)uStack_88 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                 CONCAT11((byte)((ulong)uStack_88 >> 8) ^ (byte)((ulong)uVar38 >> 8)
                                          ,(byte)uStack_88 ^ (byte)uVar38)));
      uStack_6c = (uint)(CONCAT17((byte)((ulong)local_b0 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                  CONCAT16((byte)((ulong)local_b0 >> 0x30) ^
                                           (byte)((ulong)uVar28 >> 0x30),
                                           CONCAT15((byte)((ulong)local_b0 >> 0x28) ^
                                                    (byte)((ulong)uVar28 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_b0 >> 0x20) ^
                                                             (byte)((ulong)uVar28 >> 0x20),uVar23)))
                                 ) >> 0x20);
      uVar5 = uStack_6c;
      uVar26 = CONCAT13((byte)((ulong)local_80 >> 0x18) ^ (byte)((ulong)uVar39 >> 0x18),
                        CONCAT12((byte)((ulong)local_80 >> 0x10) ^ (byte)((ulong)uVar39 >> 0x10),
                                 CONCAT11((byte)((ulong)local_80 >> 8) ^ (byte)((ulong)uVar39 >> 8),
                                          (byte)local_80 ^ (byte)uVar39)));
      iVar32 = CONCAT13((byte)((ulong)uStack_78 >> 0x18) ^ (byte)((ulong)uVar40 >> 0x18),
                        CONCAT12((byte)((ulong)uStack_78 >> 0x10) ^ (byte)((ulong)uVar40 >> 0x10),
                                 CONCAT11((byte)((ulong)uStack_78 >> 8) ^ (byte)((ulong)uVar40 >> 8)
                                          ,(byte)uStack_78 ^ (byte)uVar40)));
      uVar33 = CONCAT16((byte)((ulong)uStack_78 >> 0x30) ^ (byte)((ulong)uVar40 >> 0x30),
                        CONCAT15((byte)((ulong)uStack_78 >> 0x28) ^ (byte)((ulong)uVar40 >> 0x28),
                                 CONCAT14((byte)((ulong)uStack_78 >> 0x20) ^
                                          (byte)((ulong)uVar40 >> 0x20),iVar32)));
      uVar11 = (ulong)uVar27 & 0xffffffff;
      uStack_5c = (uint)(CONCAT17((byte)((ulong)local_a0 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                  uVar27) >> 0x20);
      uVar6 = uStack_5c;
      uStack_54 = (uint)(CONCAT17((byte)((ulong)uStack_98 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                  CONCAT16((byte)((ulong)uStack_98 >> 0x30) ^
                                           (byte)((ulong)uVar37 >> 0x30),
                                           CONCAT15((byte)((ulong)uStack_98 >> 0x28) ^
                                                    (byte)((ulong)uVar37 >> 0x28),
                                                    CONCAT14((byte)((ulong)uStack_98 >> 0x20) ^
                                                             (byte)((ulong)uVar37 >> 0x20),uVar30)))
                                 ) >> 0x20);
      uStack_64 = (uint)(CONCAT17((byte)((ulong)uStack_a8 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                  CONCAT16((byte)((ulong)uStack_a8 >> 0x30) ^
                                           (byte)((ulong)uVar34 >> 0x30),
                                           CONCAT15((byte)((ulong)uStack_a8 >> 0x28) ^
                                                    (byte)((ulong)uVar34 >> 0x28),
                                                    CONCAT14((byte)((ulong)uStack_a8 >> 0x20) ^
                                                             (byte)((ulong)uVar34 >> 0x20),uVar29)))
                                 ) >> 0x20);
      uStack_3c = (uint)(CONCAT17((byte)((ulong)local_80 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                                  CONCAT16((byte)((ulong)local_80 >> 0x30) ^
                                           (byte)((ulong)uVar39 >> 0x30),
                                           CONCAT15((byte)((ulong)local_80 >> 0x28) ^
                                                    (byte)((ulong)uVar39 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_80 >> 0x20) ^
                                                             (byte)((ulong)uVar39 >> 0x20),uVar26)))
                                 ) >> 0x20);
      uStack_4c = (uint)(CONCAT17((byte)((ulong)local_90 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                  CONCAT16((byte)((ulong)local_90 >> 0x30) ^
                                           (byte)((ulong)uVar36 >> 0x30),
                                           CONCAT15((byte)((ulong)local_90 >> 0x28) ^
                                                    (byte)((ulong)uVar36 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_90 >> 0x20) ^
                                                             (byte)((ulong)uVar36 >> 0x20),uVar25)))
                                 ) >> 0x20);
      uVar7 = uStack_4c;
      uStack_44 = (uint)(CONCAT17((byte)((ulong)uStack_88 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                  CONCAT16((byte)((ulong)uStack_88 >> 0x30) ^
                                           (byte)((ulong)uVar38 >> 0x30),
                                           CONCAT15((byte)((ulong)uStack_88 >> 0x28) ^
                                                    (byte)((ulong)uVar38 >> 0x28),
                                                    CONCAT14((byte)((ulong)uStack_88 >> 0x20) ^
                                                             (byte)((ulong)uVar38 >> 0x20),uVar31)))
                                 ) >> 0x20);
      uVar10 = (ulong)uVar33 & 0xffffffff;
      uStack_34 = (uint)(CONCAT17((byte)((ulong)uStack_78 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                                  uVar33) >> 0x20);
      uVar19 = uVar23;
      uVar16 = uVar30;
      uVar20 = uStack_54;
      uVar8 = uVar29;
      uVar13 = uVar26;
      uVar15 = uStack_3c;
      uVar17 = uVar25;
      uVar18 = uVar31;
      uVar14 = uStack_44;
      uVar21 = uStack_34;
      uVar9 = uStack_64;
      do {
        uVar3 = (uint)uVar11 ^ (uVar19 + uVar13 >> 0x19 | (uVar19 + uVar13) * 0x80);
        uStack_4c = uStack_4c ^ (uStack_5c + uStack_6c >> 0x19 | (uStack_5c + uStack_6c) * 0x80);
        uVar4 = (uint)uVar10 ^ (uVar18 + uVar16 >> 0x19 | (uVar18 + uVar16) * 0x80);
        uVar9 = uVar9 ^ (uVar21 + uVar14 >> 0x19 | (uVar21 + uVar14) * 0x80);
        uVar17 = uVar17 ^ (uVar3 + uVar19 >> 0x17 | (uVar3 + uVar19) * 0x200);
        uVar15 = uVar15 ^ (uStack_4c + uStack_5c >> 0x17 | (uStack_4c + uStack_5c) * 0x200);
        uVar8 = uVar8 ^ (uVar4 + uVar18 >> 0x17 | (uVar4 + uVar18) * 0x200);
        uVar20 = uVar20 ^ (uVar9 + uVar21 >> 0x17 | (uVar9 + uVar21) * 0x200);
        uVar13 = uVar13 ^ (uVar17 + uVar3 >> 0x13 | (uVar17 + uVar3) * 0x2000);
        uStack_6c = uStack_6c ^ (uVar15 + uStack_4c >> 0x13 | (uVar15 + uStack_4c) * 0x2000);
        uVar16 = uVar16 ^ (uVar8 + uVar4 >> 0x13 | (uVar8 + uVar4) * 0x2000);
        uVar14 = uVar14 ^ (uVar20 + uVar9 >> 0x13 | (uVar20 + uVar9) * 0x2000);
        uVar1 = uVar13 + uVar17;
        uVar19 = uVar19 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uStack_6c + uVar15;
        uStack_5c = uStack_5c ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar16 + uVar8;
        uVar18 = uVar18 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar14 + uVar20;
        uVar21 = uVar21 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_6c = uStack_6c ^ (uVar19 + uVar9 >> 0x19 | (uVar19 + uVar9) * 0x80);
        uVar16 = uVar16 ^ (uStack_5c + uVar3 >> 0x19 | (uStack_5c + uVar3) * 0x80);
        uVar8 = uVar8 ^ (uStack_6c + uVar19 >> 0x17 | (uStack_6c + uVar19) * 0x200);
        uVar20 = uVar20 ^ (uVar16 + uStack_5c >> 0x17 | (uVar16 + uStack_5c) * 0x200);
        uVar9 = uVar9 ^ (uVar8 + uStack_6c >> 0x13 | (uVar8 + uStack_6c) * 0x2000);
        uVar3 = uVar3 ^ (uVar20 + uVar16 >> 0x13 | (uVar20 + uVar16) * 0x2000);
        uVar11 = (ulong)uVar3;
        uVar19 = uVar19 ^ (uVar9 + uVar8 >> 0xe | (uVar9 + uVar8) * 0x40000);
        uStack_5c = uStack_5c ^ (uVar3 + uVar20 >> 0xe | (uVar3 + uVar20) * 0x40000);
        uVar14 = uVar14 ^ (uVar18 + uStack_4c >> 0x19 | (uVar18 + uStack_4c) * 0x80);
        uVar17 = uVar17 ^ (uVar14 + uVar18 >> 0x17 | (uVar14 + uVar18) * 0x200);
        uStack_4c = uStack_4c ^ (uVar17 + uVar14 >> 0x13 | (uVar17 + uVar14) * 0x2000);
        uVar18 = uVar18 ^ (uStack_4c + uVar17 >> 0xe | (uStack_4c + uVar17) * 0x40000);
        uVar13 = uVar13 ^ (uVar21 + uVar4 >> 0x19 | (uVar21 + uVar4) * 0x80);
        uVar15 = uVar15 ^ (uVar13 + uVar21 >> 0x17 | (uVar13 + uVar21) * 0x200);
        uVar4 = uVar4 ^ (uVar15 + uVar13 >> 0x13 | (uVar15 + uVar13) * 0x2000);
        uVar10 = (ulong)uVar4;
        uVar21 = uVar21 ^ (uVar4 + uVar15 >> 0xe | (uVar4 + uVar15) * 0x40000);
        iVar12 = iVar12 + 2;
      } while (iVar12 != 0);
      _local_70 = CONCAT44(uStack_6c,uVar19);
      local_b0 = CONCAT44(uVar5 + uStack_6c,uVar23 + uVar19);
      uStack_a8 = CONCAT44(uStack_64 + uVar9,uVar29 + uVar8);
      _local_60 = CONCAT44(uStack_5c,uVar3);
      local_a0 = CONCAT44(uVar6 + uStack_5c,iVar24 + uVar3);
      _local_50 = CONCAT44(uStack_4c,uVar17);
      uStack_98 = CONCAT44(uStack_54 + uVar20,uVar30 + uVar16);
      _uStack_68 = CONCAT44(uVar9,uVar8);
      local_90 = CONCAT44(uVar7 + uStack_4c,uVar25 + uVar17);
      uStack_88 = CONCAT44(uStack_44 + uVar14,uVar31 + uVar18);
      local_80 = CONCAT44(uStack_3c + uVar15,uVar26 + uVar13);
      param_2 = param_2 + 8;
      iVar12 = uStack_34 + uVar21;
      _local_40 = CONCAT44(uVar15,uVar13);
      _uStack_48 = CONCAT44(uVar14,uVar18);
      _local_58 = CONCAT44(uVar20,uVar16);
      _local_38 = CONCAT44(uVar21,uVar4);
      uStack_78 = CONCAT44(iVar12,iVar32 + uVar4);
      FUN_004006a0(&local_70,0x40);
      uVar10 = uVar22 & 1;
      uVar11 = uVar22 >> 1;
      uVar22 = uVar22 + 1;
      puVar2 = (undefined8 *)(param_1 + (uVar10 * param_3 + uVar11) * 0x40);
      puVar2[5] = uStack_88;
      puVar2[4] = local_90;
      puVar2[7] = uStack_78;
      puVar2[6] = local_80;
      puVar2[1] = uStack_a8;
      *puVar2 = local_b0;
      puVar2[3] = uStack_98;
      puVar2[2] = local_a0;
    } while (uVar22 != param_3 * 2);
  }
  FUN_004006a0(&local_b0,0x40);
  return;
}


