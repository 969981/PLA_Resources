/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033721bc; name: FUN_033721bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_033721bc(long param_1)

{
  double *pdVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  double dVar24;
  double dVar25;
  undefined8 local_c0 [2];
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  uVar4 = _UNK_03889708;
  uVar6 = _DAT_03889700;
  lVar9 = (long)*(int *)(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar10 = lVar9 * 0x40 + -0x20;
    do {
      pdVar1 = (double *)(*(long *)(param_1 + 0x30) + lVar10);
      local_80 = (long)pdVar1[-4] >> 0xe;
      lStack_78 = (long)pdVar1[-3] >> 0xe;
      uVar11 = SUB168(*(undefined1 (*) [16])(pdVar1 + -2),0);
      local_70 = (long)uVar11 >> 0xe;
      uVar8 = SUB168(*(undefined1 (*) [16])(pdVar1 + -2),8);
      lStack_68 = (long)uVar8 >> 0xe;
      lVar9 = lVar9 + -1;
      FUN_0337258c(&local_a0,&local_80);
      local_b0 = uVar11 >> 10 & 1;
      uVar7 = -local_b0;
      uVar8 = uVar7 ^ uVar8;
      local_b0 = uVar8 + local_b0;
      local_a8 = ((uVar7 ^ (long)(uVar11 << 0x35) >> 0x35) + ((uVar11 & 0x7ff) >> 10)) -
                 (ulong)(uVar8 < uVar7);
      FUN_033725d0(&local_a0,local_c0);
      uVar12 = NEON_sminp(local_c0[0],local_c0[0],4);
      uVar12 = NEON_smin(uVar12,CONCAT44((int)local_c0[1],(int)local_c0[1]),4);
      iVar5 = FUN_03372dd0(&local_b0,2);
      uVar2 = (int)uVar12 - 0xf;
      if ((int)(iVar5 - 0x36U) <= (int)uVar2) {
        uVar2 = iVar5 - 0x36U;
      }
      auVar13._8_8_ = lStack_98;
      auVar13._0_8_ = local_a0;
      auVar15[8] = uStack_88;
      auVar15._0_8_ = lStack_90;
      auVar14._8_8_ = (long)(int)uVar2;
      auVar14._0_8_ = (long)(int)uVar2;
      auVar13 = NEON_sshl(auVar13,auVar14,8);
      auVar15[9] = (char)uStack_87;
      auVar15[10] = (char)((uint7)uStack_87 >> 8);
      auVar15[0xb] = (char)((uint7)uStack_87 >> 0x10);
      auVar15[0xc] = (char)((uint7)uStack_87 >> 0x18);
      auVar15[0xd] = (char)((uint7)uStack_87 >> 0x20);
      auVar15[0xe] = (char)((uint7)uStack_87 >> 0x28);
      auVar15[0xf] = (char)((uint7)uStack_87 >> 0x30);
      auVar15 = NEON_sshl(auVar15,auVar14,8);
      lStack_98 = auVar13._8_8_;
      local_a0 = auVar13._0_8_;
      uStack_88 = auVar15[8];
      uStack_87 = auVar15._9_7_;
      lStack_90 = auVar15._0_8_;
      if (uVar2 < 0x40) {
        uVar7 = 0;
        if (uVar2 != 0) {
          local_a8 = local_a8 << ((ulong)uVar2 & 0x3f) | local_b0 >> ((ulong)-uVar2 & 0x3f);
          uVar7 = (ulong)uVar2;
        }
        uVar7 = local_b0 << (uVar7 & 0x3f);
      }
      else {
        uVar7 = 0;
        local_a8 = local_b0 << ((ulong)uVar2 & 0x3f);
      }
      dVar25 = (double)(long)(uVar7 >> 0x15 & 0x7fffffffff |
                             (ulong)((uint)(uVar7 >> 0x3c) | (int)local_a8 << 4) << 0x27);
      dVar24 = dVar25 * 3.725290298461914e-09;
      dVar25 = dVar25 * -3.725290298461914e-09;
      bVar3 = ((byte)(local_80 >> 0x3f) & (byte)uVar6) +
              ((byte)(lStack_78 >> 0x3f) & (byte)((ulong)uVar6 >> 0x20)) +
              ((byte)(local_70 >> 0x3f) & (byte)uVar4) +
              ((byte)(lStack_68 >> 0x3f) & (byte)((ulong)uVar4 >> 0x20));
      uVar16 = SUB81(dVar24,0);
      uVar17 = (undefined1)((ulong)dVar24 >> 8);
      uVar18 = (undefined1)((ulong)dVar24 >> 0x10);
      uVar19 = (undefined1)((ulong)dVar24 >> 0x18);
      uVar20 = (undefined1)((ulong)dVar24 >> 0x20);
      uVar21 = (undefined1)((ulong)dVar24 >> 0x28);
      uVar22 = (undefined1)((ulong)dVar24 >> 0x30);
      uVar23 = (undefined1)((ulong)dVar24 >> 0x38);
      if ((uVar11 & 0x400) != 0) {
        uVar16 = SUB81(dVar25,0);
        uVar17 = (undefined1)((ulong)dVar25 >> 8);
        uVar18 = (undefined1)((ulong)dVar25 >> 0x10);
        uVar19 = (undefined1)((ulong)dVar25 >> 0x18);
        uVar20 = (undefined1)((ulong)dVar25 >> 0x20);
        uVar21 = (undefined1)((ulong)dVar25 >> 0x28);
        uVar22 = (undefined1)((ulong)dVar25 >> 0x30);
        uVar23 = (undefined1)((ulong)dVar25 >> 0x38);
      }
      dVar24 = (double)(local_a0 << 4) * 1.1102230246251565e-16;
      if ((bVar3 & 1) != 0) {
        dVar24 = (double)(local_a0 << 4) * -1.1102230246251565e-16;
      }
      dVar25 = (double)(lStack_98 << 4) * 1.1102230246251565e-16;
      if ((bVar3 & 2) != 0) {
        dVar25 = (double)(lStack_98 << 4) * -1.1102230246251565e-16;
      }
      *pdVar1 = dVar24;
      pdVar1[1] = dVar25;
      dVar24 = (double)(lStack_90 << 4) * 1.1102230246251565e-16;
      if ((bVar3 & 4) != 0) {
        dVar24 = (double)(lStack_90 << 4) * -1.1102230246251565e-16;
      }
      lVar10 = lVar10 + -0x40;
      pdVar1[2] = dVar24;
      pdVar1[3] = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                  ));
    } while (0 < lVar9);
  }
  uVar6 = FUN_032cf5b0(0x20);
  FUN_0332cf84();
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  return;
}


