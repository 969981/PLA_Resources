/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00493af0; name: FUN_00493af0
 */


void FUN_00493af0(long param_1,undefined1 (*param_2) [16],int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint5 uVar7;
  uint uVar9;
  undefined1 auVar8 [16];
  uint uVar10;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar11 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int iStack_24;
  
  local_88 = *(undefined8 *)(param_2[1] + 8);
  local_90 = *(undefined8 *)param_2[1];
  local_68 = *(undefined8 *)(param_2[3] + 8);
  uStack_70 = *(undefined8 *)param_2[3];
  uStack_78 = SUB168(param_2[2],8);
  local_80 = SUB168(param_2[2],0);
  uStack_98 = SUB168(*param_2,8);
  local_a0 = SUB168(*param_2,0);
  FUN_00493ce0(&local_a0);
  if (param_3 == 0) {
    auVar8._8_8_ = uStack_70;
    auVar8._0_8_ = uStack_78;
    uVar10 = (int)uStack_78 << 1;
    iVar12 = (int)((ulong)uStack_78 >> 0x20) << 1;
    uVar13 = (int)uStack_70 << 1;
    uVar9 = (uint)((ulong)uStack_70 >> 0x20);
    iVar14 = uVar9 << 1;
    iStack_24 = (local_68._4_4_ & 0x7ffffff) * 2 + ((uint)local_68 >> 0x1b & 0xf);
    local_60 = local_68._4_4_ >> 0x1b & 0xf;
    iStack_44 = (local_88._4_4_ & 0x7ffffff) * 2 + ((uint)local_88 >> 0x1b & 0xf);
    uVar6 = local_60 + (int)local_80 * 2;
    auVar11 = NEON_ext(ZEXT416(local_80._4_4_),ZEXT416(local_80._4_4_),4,1);
    iStack_4c = (local_90._4_4_ & 0x7ffffff) * 2 + ((uint)local_90 >> 0x1b & 0xf);
    local_28 = ((uint)local_68 & 0x7ffffff) * 2 + (uVar9 >> 0x1b & 0xf);
    auVar8 = NEON_ext(auVar11,auVar8,0xc,1);
    iStack_3c = (local_80._4_4_ & 0x7ffffff) * 2 + (uVar6 >> 0x1c);
    local_40 = (uVar6 & 0xfffffff) + (local_88._4_4_ >> 0x1b & 0xf);
    local_48 = ((uint)local_88 & 0x7ffffff) * 2 + (local_90._4_4_ >> 0x1b & 0xf);
    local_50 = ((uint)local_90 & 0x7ffffff) * 2 + (uStack_98._4_4_ >> 0x1b & 0xf);
    local_54 = (uStack_98._4_4_ & 0x7ffffff) * 2 + ((uint)uStack_98 >> 0x1b & 0xf);
    uVar7 = CONCAT14(auVar8[7] >> 3,(uint)(auVar8[3] >> 3 & 0xf)) & 0xfffffffff;
    local_58 = ((uint)uStack_98 & 0x7ffffff) * 2 + (local_a0._4_4_ >> 0x1b & 0xf);
    auVar11._0_8_ =
         CONCAT44(((uint)(CONCAT17((char)((uint)iVar12 >> 0x18),
                                   CONCAT16((char)((uint)iVar12 >> 0x10),
                                            CONCAT15((char)((uint)iVar12 >> 8),
                                                     CONCAT14((char)iVar12,uVar10)))) >> 0x20) &
                  0xffffffe) + (uint)(byte)(uVar7 >> 0x20),(uVar10 & 0xfffffff) + (int)uVar7);
    auVar11._8_4_ = (uVar13 & 0xfffffff) + (uint)(auVar8[0xb] >> 3 & 0xf);
    auVar11._12_4_ =
         ((uint)(CONCAT17((char)((uint)iVar14 >> 0x18),
                          CONCAT16((char)((uint)iVar14 >> 0x10),
                                   CONCAT15((char)((uint)iVar14 >> 8),CONCAT14((char)iVar14,uVar13))
                                  )) >> 0x20) & 0xffffffe) + (uint)(auVar8[0xf] >> 3 & 0xf);
    local_5c = (local_a0._4_4_ & 0x7ffffff) * 2 + ((uint)local_a0 >> 0x1b & 0xf);
    local_60 = local_60 + ((uint)local_a0 & 0x7ffffff) * 2;
    uStack_30 = auVar11._8_8_;
    local_38 = auVar11._0_8_;
    FUN_00493ce0(&local_60);
    if ((local_60 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("gf_hibit(red) == 0","external/openssl/crypto/ec/curve448/f_generic.c",0x1f,
                    "nnopenssl_gf_serialize");
    }
  }
  lVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  do {
    if ((uint)uVar5 < 8) {
      uVar1 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulong)((uint)uVar5 + 0x1c);
      uVar4 = (ulong)*(uint *)((long)&local_a0 + uVar1 * 4) << uVar2 | uVar4;
    }
    do {
      *(char *)(param_1 + lVar3) = (char)uVar4;
      lVar3 = lVar3 + 1;
      uVar5 = (ulong)((int)uVar5 - 8);
      uVar4 = uVar4 >> 8;
      if (lVar3 == 0x38) {
        return;
      }
    } while (0xf < uVar6);
  } while( true );
}


