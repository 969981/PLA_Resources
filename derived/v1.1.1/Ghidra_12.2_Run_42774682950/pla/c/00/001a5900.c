/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a5900; name: FUN_001a5900
 */


void FUN_001a5900(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  long lVar26;
  float fVar29;
  undefined8 uVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 uStack_144;
  long local_140;
  byte *local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  int local_110;
  byte *local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  int local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0 [6];
  undefined8 local_68;
  
  puVar16 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar15 = param_2[1];
    lVar2 = param_3 + 0x240;
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    lVar3 = param_3 + 0x1c0;
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    uVar32 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    lVar4 = param_3 + 0x200;
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar25 = NEON_fmax(uVar32,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar24 = (float)((ulong)uVar25 >> 0x20);
    local_a0[0] = CONCAT44(fVar24 * fVar24,(float)uVar25 * (float)uVar25);
    FUN_0333e220(lVar2,&local_100,&local_160);
    iVar17 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,&local_160,local_a0,auStack_c0
                         );
    if (iVar17 != 0) {
      auVar28 = *(undefined1 (*) [16])(puVar16 + 0x1e0);
      auVar31 = NEON_ext(auVar28,auVar28,8,1);
      uVar25 = *(undefined8 *)PTR_PTR_04372408;
      auVar28 = NEON_ext(auVar31,auVar28,8,1);
      bVar7 = local_d8[3];
joined_r0x001a59f4:
      do {
        if ((bVar7 & 1) == 0) goto LAB_001a5d7c;
        while( true ) {
          local_140._0_4_ = local_e0 + 1;
          local_130 = (float)local_100;
          fStack_12c = (float)((ulong)local_100 >> 0x20);
          fStack_128 = (float)lStack_f8;
          local_110 = local_e0 + (local_d8[3] & 0xfe);
          local_138 = (byte *)((long)param_1 + (long)(int)local_140 * 4 + *param_1);
          local_108 = (byte *)((long)param_1 + (long)local_110 * 4 + *param_1);
          fVar24 = ((float)local_f0 - local_130) * auVar28._0_4_;
          fVar29 = (local_f0._4_4_ - fStack_12c) * auVar28._4_4_;
          fVar30 = ((float)lStack_e8 - fStack_128) * auVar28._8_4_;
          bVar9 = *local_138 >> 4;
          bVar10 = local_138[1] >> 4;
          bVar7 = local_138[1] & 0xf;
          bVar11 = *local_138 & 0xf;
          bVar5 = local_138[2] & 0xf;
          bVar8 = local_138[2] >> 4;
          local_160 = (float)(byte)(bVar9 * bVar9) * fVar24 + local_130;
          fStack_15c = (float)(byte)(bVar10 * bVar10) * fVar29 + fStack_12c;
          uStack_154 = 0;
          fStack_158 = (float)(byte)(bVar8 * bVar8) * fVar30 + fStack_128;
          local_150 = (float)local_f0 - (float)(byte)(bVar11 * bVar11) * fVar24;
          uStack_144 = 0;
          fStack_14c = local_f0._4_4_ - (float)(byte)(bVar7 * bVar7) * fVar29;
          bVar7 = *local_108 >> 4;
          local_148 = (float)lStack_e8 - (float)(byte)(bVar5 * bVar5) * fVar30;
          bVar11 = local_108[1] >> 4;
          local_130 = local_130 + (float)(byte)(bVar7 * bVar7) * fVar24;
          bVar8 = local_108[2] >> 4;
          bVar7 = local_108[2] & 0xf;
          uStack_114 = 0;
          fStack_12c = (float)(byte)(bVar11 * bVar11) * fVar29 + fStack_12c;
          bVar11 = *local_108 & 0xf;
          bVar5 = local_108[1] & 0xf;
          uStack_124 = 0;
          fStack_128 = (float)(byte)(bVar8 * bVar8) * fVar30 + fStack_128;
          local_120 = (float)local_f0 - (float)(byte)(bVar11 * bVar11) * fVar24;
          fStack_11c = local_f0._4_4_ - (float)(byte)(bVar5 * bVar5) * fVar29;
          fStack_118 = (float)lStack_e8 - (float)(byte)(bVar7 * bVar7) * fVar30;
          uVar27 = NEON_fmax(uVar32,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
          fVar24 = (float)((ulong)uVar27 >> 0x20);
          local_68 = CONCAT44(fVar24 * fVar24,(float)uVar27 * (float)uVar27);
          FUN_0333e220(lVar2,&local_160,local_a0);
          FUN_0333e220(lVar2,&local_130,auStack_c0);
          iVar17 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,local_a0,&local_68,
                                &uStack_c8);
          iVar18 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,auStack_c0,&local_68,
                                &local_d0);
          bVar7 = iVar17 != 0 | (iVar18 != 0) << 1;
          if (bVar7 == 3) break;
          if (bVar7 == 2) {
            local_100 = CONCAT44(fStack_12c,local_130);
            auVar31._8_4_ = fStack_128;
            auVar31._0_8_ = local_100;
            auVar31._12_4_ = uStack_124;
            local_f0 = CONCAT44(fStack_11c,local_120);
            auVar14._8_4_ = fStack_118;
            auVar14._0_8_ = local_f0;
            auVar14._12_4_ = uStack_114;
            lStack_f8 = auVar31._8_8_;
            lStack_e8 = auVar14._8_8_;
            bVar7 = local_108[3];
            local_e0 = local_110;
            local_d8 = local_108;
            goto joined_r0x001a59f4;
          }
          if (bVar7 == 1) {
            local_100 = CONCAT44(fStack_15c,local_160);
            auVar12._8_4_ = fStack_158;
            auVar12._0_8_ = local_100;
            auVar12._12_4_ = uStack_154;
            local_f0 = CONCAT44(fStack_14c,local_150);
            auVar13._8_4_ = local_148;
            auVar13._0_8_ = local_f0;
            auVar13._12_4_ = uStack_144;
            lStack_f8 = auVar12._8_8_;
            lStack_e8 = auVar13._8_8_;
            bVar7 = local_138[3];
            local_e0 = (int)local_140;
            local_d8 = local_138;
            goto joined_r0x001a59f4;
          }
          while( true ) {
            if ((int)param_2[1] <= (int)lVar15) {
              return;
            }
            iVar17 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar17;
            plVar20 = (long *)(*param_2 + (long)iVar17 * 0x30);
            local_e0 = (int)plVar20[4];
            local_d8 = (byte *)((long)param_1 + (long)(int)plVar20[4] * 4 + *param_1);
            local_100 = *plVar20;
            lStack_f8 = plVar20[1];
            lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar20 + 2),8);
            local_f0 = SUB168(*(undefined1 (*) [16])(plVar20 + 2),0);
            if ((local_d8[3] & 1) != 0) break;
LAB_001a5d7c:
            FUN_001a2520(param_3,&local_100);
          }
        }
        fVar24 = (float)local_d0;
        fVar29 = (float)uStack_c8;
        *(uint *)(param_3 + 0x1b4) = (uint)(fVar24 < fVar29);
        iVar17 = (int)param_2[1];
        uVar19 = *(uint *)((long)param_2 + 0xc);
        uVar22 = (ulong)(fVar24 >= fVar29);
        uVar1 = iVar17 + 1;
        if (iVar17 < (int)(uVar19 & 0x3fffffff)) {
          lVar23 = *param_2;
        }
        else {
          lVar23 = *param_2;
          if (0x3ffffffe < iVar17) {
            FUN_032bd0a8(uVar1);
            uVar19 = *(uint *)((long)param_2 + 0xc);
          }
          uVar19 = (uVar19 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar19) {
            uVar19 = 0x3fffffff;
          }
          uVar6 = uVar1;
          if ((int)uVar1 <= (int)uVar19) {
            uVar6 = uVar19;
          }
          lVar23 = FUN_032bd1d4(uVar25,uVar6,0x30,lVar23,iVar17,(uint *)((long)param_2 + 0xc));
          *param_2 = lVar23;
          iVar17 = (int)param_2[1];
        }
        *(uint *)(param_2 + 1) = uVar1;
        lVar26 = (&local_140)[uVar22 * 6 + -4];
        plVar20 = (long *)(lVar23 + (long)iVar17 * 0x30);
        uVar21 = (ulong)(fVar24 < fVar29);
        plVar20[1] = (&local_140)[uVar22 * 6 + -3];
        *plVar20 = lVar26;
        lVar23 = (&local_140)[uVar22 * 6 + -2];
        plVar20[3] = (&local_140)[uVar22 * 6 + -1];
        plVar20[2] = lVar23;
        *(int *)(plVar20 + 4) = (int)(&local_140)[uVar22 * 6];
        local_e0 = (int)(&local_140)[uVar21 * 6];
        lStack_f8 = (&local_140)[uVar21 * 6 + -3];
        local_100 = (&local_140)[uVar21 * 6 + -4];
        lStack_e8 = (&local_140)[uVar21 * 6 + -1];
        local_f0 = (&local_140)[uVar21 * 6 + -2];
        local_d8 = (byte *)(&local_140)[uVar21 * 6 + 1];
        bVar7 = local_d8[3];
      } while( true );
    }
  }
  return;
}


