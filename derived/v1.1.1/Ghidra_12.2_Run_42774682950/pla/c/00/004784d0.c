/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004784d0; name: FUN_004784d0
 */


undefined8 FUN_004784d0(undefined8 *param_1,void *param_2,size_t param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte local_70 [15];
  byte abStack_61 [33];
  ulong local_40;
  long lStack_38;
  undefined1 local_30 [16];
  
  uVar8 = 0xffffffff;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    lVar7 = -param_3;
    abStack_61[0] = 0;
    memcpy(abStack_61 + lVar7 + 1,param_2,param_3);
    abStack_61[lVar7] = abStack_61[lVar7] | 1;
    local_40 = (ulong)(byte)((int)param_4 << 4);
    lStack_38 = ((ulong)abStack_61[0] & 0xc0) << 0x38;
    (*(code *)*param_1)(&local_40,local_30,param_1[2]);
    uVar8 = 1;
    puVar9 = (undefined8 *)((ulong)(abStack_61 + 1) | (ulong)(abStack_61[0] >> 3) & 7);
    bVar13 = *(byte *)((long)puVar9 + 0xf);
    uVar11 = (ulong)abStack_61[0] & 7;
    iVar10 = (int)uVar11;
    uVar4 = 8 - iVar10;
    bVar3 = bVar13 << uVar11;
    *(byte *)((long)param_1 + 0x9f) = bVar3;
    bVar1 = *(byte *)((long)puVar9 + 0xe);
    *(byte *)((long)param_1 + 0x9e) = bVar1 << uVar11 | bVar13 >> (ulong)(uVar4 & 0x1f);
    bVar13 = *(byte *)((long)puVar9 + 0xd);
    *(byte *)((long)param_1 + 0x9d) = bVar13 << uVar11 | bVar1 >> (ulong)(uVar4 & 0x1f);
    bVar1 = *(byte *)((long)puVar9 + 0xc);
    *(byte *)((long)param_1 + 0x9c) = bVar1 << uVar11 | bVar13 >> (ulong)(uVar4 & 0x1f);
    bVar13 = *(byte *)((long)puVar9 + 0xb);
    *(byte *)((long)param_1 + 0x9b) = bVar13 << uVar11 | bVar1 >> (ulong)(uVar4 & 0x1f);
    bVar1 = *(byte *)((long)puVar9 + 10);
    *(byte *)((long)param_1 + 0x9a) = bVar1 << uVar11 | bVar13 >> (ulong)(uVar4 & 0x1f);
    bVar13 = *(byte *)((long)puVar9 + 9);
    *(byte *)((long)param_1 + 0x99) = bVar13 << uVar11 | bVar1 >> (ulong)(uVar4 & 0x1f);
    cVar2 = *(char *)(puVar9 + 1);
    *(byte *)(param_1 + 0x13) = cVar2 << uVar11 | bVar13 >> (ulong)(uVar4 & 0x1f);
    uVar16 = *puVar9;
    uVar12 = (undefined1)((ulong)uVar16 >> 8);
    bVar13 = (byte)((ulong)uVar16 >> 0x28);
    uVar14 = (undefined1)((ulong)uVar16 >> 0x30);
    uVar15 = (undefined1)((ulong)uVar16 >> 0x38);
    auVar19._1_3_ = 0;
    auVar19[0] = (byte)((ulong)uVar16 >> 0x20);
    auVar19[4] = bVar13;
    auVar19._5_3_ = 0;
    auVar19[8] = uVar14;
    auVar19._9_3_ = 0;
    auVar19[0xc] = uVar15;
    auVar19._13_3_ = 0;
    auVar17._6_2_ = 0;
    auVar17._0_6_ =
         (uint6)CONCAT14(uVar12,(uint)CONCAT12(uVar12,(ushort)(byte)uVar16)) & 0xffff0000ffff;
    auVar17[8] = (char)((ulong)uVar16 >> 0x10);
    auVar17._9_3_ = 0;
    auVar17[0xc] = (char)((ulong)uVar16 >> 0x18);
    auVar17._13_3_ = 0;
    auVar20._1_3_ = 0;
    auVar20[0] = bVar13;
    auVar20[4] = uVar14;
    auVar20._5_3_ = 0;
    auVar20[8] = uVar15;
    auVar20._9_3_ = 0;
    auVar21 = NEON_ext(auVar17,auVar19,4,1);
    auVar20[0xc] = cVar2;
    auVar20._13_3_ = 0;
    auVar18._4_4_ = -uVar4;
    auVar18._0_4_ = -uVar4;
    auVar18._8_4_ = -uVar4;
    auVar18._12_4_ = -uVar4;
    auVar22 = NEON_ushl(auVar21,auVar18,4);
    auVar21._4_4_ = -uVar4;
    auVar21._0_4_ = -uVar4;
    auVar21._8_4_ = -uVar4;
    auVar21._12_4_ = -uVar4;
    auVar20 = NEON_ushl(auVar20,auVar21,4);
    auVar5._4_4_ = iVar10;
    auVar5._0_4_ = iVar10;
    auVar5._8_4_ = iVar10;
    auVar5._12_4_ = iVar10;
    auVar18 = NEON_ushl(auVar17,auVar5,4);
    auVar6._4_4_ = iVar10;
    auVar6._0_4_ = iVar10;
    auVar6._8_4_ = iVar10;
    auVar6._12_4_ = iVar10;
    auVar21 = NEON_ushl(auVar19,auVar6,4);
    param_1[0x12] =
         CONCAT17(auVar21[0xc] | auVar20[0xc],
                  CONCAT16(auVar21[8] | auVar20[8],
                           CONCAT15(auVar21[4] | auVar20[4],
                                    CONCAT14(auVar21[0] | auVar20[0],
                                             CONCAT13(auVar18[0xc] | auVar22[0xc],
                                                      CONCAT12(auVar18[8] | auVar22[8],
                                                               CONCAT11(auVar18[4] | auVar22[4],
                                                                        auVar18[0] | auVar22[0])))))
                          ));
    *(byte *)((long)param_1 + 0x9f) =
         bVar3 | (byte)((0xff << (ulong)(uVar4 & 0x1f) & (uint)*(byte *)(puVar9 + 2)) >>
                       (ulong)(uVar4 & 0x1f));
  }
  return uVar8;
}


