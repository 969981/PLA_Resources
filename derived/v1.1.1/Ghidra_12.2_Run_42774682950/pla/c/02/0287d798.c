/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287d798; name: FUN_0287d798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0287d798(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_60 = 0x200;
  uStack_58 = 0x1000001ffffffff;
  local_50 = 0x25;
  local_88 = 1;
  local_28 = 0;
  local_a8 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x68);
  local_98 = 0x3000000;
  uStack_90 = 0;
  local_80 = 0x12c00000;
  uStack_78 = 0xfa00000;
  local_70 = 0x2800000;
  uStack_68 = 0x2000;
  uStack_a0 = 0xf00000;
  local_48 = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_20 = 0x40000001800;
  local_38 = 0x2000000000001;
  local_30 = 0x2000000040000;
  local_18 = 2;
  FUN_02ad6a64(&local_a8);
  local_c8 = 0x867019357c695e84;
  pcStack_c0 = "DirectionalLightColor";
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  uStack_d8 = _UNK_03889a68;
  local_e0 = _DAT_03889a60;
  FUN_02ad6370(&local_c8,&local_e0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  fVar7 = (float)((ulong)DAT_0388a608 >> 0x20);
  fVar6 = (float)DAT_0388a608 + fVar7;
  fVar7 = (float)DAT_0388a608 + fVar7;
  uVar8 = SUB41(fVar7,0);
  uVar9 = (undefined1)((uint)fVar7 >> 8);
  uVar10 = (undefined1)((uint)fVar7 >> 0x10);
  uVar11 = (undefined1)((uint)fVar7 >> 0x18);
  auVar12[4] = uVar8;
  auVar12._0_4_ = fVar6;
  auVar12[5] = uVar9;
  auVar12[6] = uVar10;
  auVar12[7] = uVar11;
  auVar12[8] = SUB41(fVar6,0);
  auVar12[9] = (char)((uint)fVar6 >> 8);
  auVar12[10] = (char)((uint)fVar6 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar6 >> 0x18);
  auVar12[0xc] = uVar8;
  auVar12[0xd] = uVar9;
  auVar12[0xe] = uVar10;
  auVar12[0xf] = uVar11;
  auVar12 = NEON_frsqrte(auVar12,4);
  local_c8 = 0x1f188243fca7b996;
  pcStack_c0 = "DirectionalLightDirection";
  auVar16._0_4_ = auVar12._0_4_ * fVar6;
  auVar16._4_4_ = auVar12._4_4_ * fVar7;
  auVar16._8_4_ = auVar12._8_4_ * fVar6;
  uVar1 = (undefined2)(CONCAT15(uVar9,CONCAT14(uVar8,fVar6)) >> 0x20);
  auVar16._12_4_ = auVar12._12_4_ * (float)CONCAT13(uVar11,CONCAT12(uVar10,uVar1));
  auVar16 = NEON_frsqrts(auVar12,auVar16,4);
  auVar13._0_4_ = auVar12._0_4_ * auVar16._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar16._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar16._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar16._12_4_;
  auVar17._0_4_ = fVar6 * auVar13._0_4_;
  auVar17._4_4_ = fVar7 * auVar13._4_4_;
  auVar17._8_4_ = fVar6 * auVar13._8_4_;
  auVar17._12_4_ = (float)CONCAT13(uVar11,CONCAT12(uVar10,uVar1)) * auVar13._12_4_;
  iVar2 = -(uint)(fVar6 == 0.0);
  iVar3 = -(uint)(fVar7 == 0.0);
  iVar4 = -(uint)(fVar6 == 0.0);
  iVar5 = -(uint)((float)CONCAT13(uVar11,CONCAT12(uVar10,uVar1)) == 0.0);
  auVar12 = NEON_frsqrts(auVar13,auVar17,4);
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  fVar7 = auVar13._0_4_ * auVar12._0_4_ * (float)_DAT_0388a1c0;
  fVar6 = auVar13._4_4_ * auVar12._4_4_ * (float)((ulong)_DAT_0388a1c0 >> 0x20);
  fVar14 = auVar13._8_4_ * auVar12._8_4_ * (float)_UNK_0388a1c8;
  fVar15 = auVar13._12_4_ * auVar12._12_4_ * (float)((ulong)_UNK_0388a1c8 >> 0x20);
  uStack_d8 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                       CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                         CONCAT14(SUB41(fVar15,0) & ~(byte)iVar5,
                                                  CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                           ~(byte)((uint)iVar4 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                    ~(byte)((uint)iVar4 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar14 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar4 >>
                                                                                    8),
                                                                             SUB41(fVar14,0) &
                                                                             ~(byte)iVar4)))))));
  local_e0 = CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                      CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                               CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                        CONCAT14(SUB41(fVar6,0) & ~(byte)iVar3,
                                                 CONCAT13((byte)((uint)fVar7 >> 0x18) &
                                                          ~(byte)((uint)iVar2 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                                   ~(byte)((uint)iVar2 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar7 >> 8)
                                                                            & ~(byte)((uint)iVar2 >>
                                                                                     8),
                                                                            SUB41(fVar7,0) &
                                                                            ~(byte)iVar2)))))));
  FUN_02ad6370(&local_c8,&local_e0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  local_c8 = 0x11c1dbd303f65c89;
  pcStack_c0 = "BgColor";
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  uStack_d8 = _UNK_03889018;
  local_e0 = _DAT_03889010;
  FUN_02ad63b4(&local_c8,&local_e0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


