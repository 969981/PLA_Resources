/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03375020; name: FUN_03375020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03375020(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 local_90;
  undefined4 uStack_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  local_50 = *param_1 >> 0xe;
  lStack_48 = param_1[1] >> 0xe;
  uVar7 = SUB168(*(undefined1 (*) [16])(param_1 + 2),0);
  local_40 = (long)uVar7 >> 0xe;
  uVar6 = SUB168(*(undefined1 (*) [16])(param_1 + 2),8);
  lStack_38 = (long)uVar6 >> 0xe;
  FUN_0337258c(&local_70,&local_50);
  local_80 = uVar7 >> 10 & 1;
  uVar5 = -local_80;
  uVar6 = uVar5 ^ uVar6;
  local_80 = uVar6 + local_80;
  local_78 = ((uVar5 ^ (long)(uVar7 << 0x35) >> 0x35) + ((uVar7 & 0x7ff) >> 10)) -
             (ulong)(uVar6 < uVar5);
  FUN_033725d0(&local_70,&local_90);
  uVar8 = NEON_sminp(local_90,local_90,4);
  uVar8 = NEON_smin(uVar8,CONCAT44(uStack_88,uStack_88),4);
  iVar4 = FUN_03372dd0(&local_80,2);
  uVar1 = (int)uVar8 - 0xf;
  if ((int)(iVar4 - 0x36U) <= (int)uVar1) {
    uVar1 = iVar4 - 0x36U;
  }
  auVar11._8_8_ = uStack_68;
  auVar11._0_8_ = local_70;
  auVar3._8_8_ = uStack_58;
  auVar3._0_8_ = uStack_60;
  auVar10._8_8_ = (long)(int)uVar1;
  auVar10._0_8_ = (long)(int)uVar1;
  auVar13 = NEON_sshl(auVar11,auVar10,8);
  auVar11 = NEON_sshl(auVar3,auVar10,8);
  if (uVar1 < 0x40) {
    uVar5 = 0;
    if (uVar1 != 0) {
      local_78 = local_78 << ((ulong)uVar1 & 0x3f) | local_80 >> ((ulong)-uVar1 & 0x3f);
      uVar5 = (ulong)uVar1;
    }
    iVar4 = (int)local_78;
    uVar5 = local_80 << (uVar5 & 0x3f);
  }
  else {
    uVar5 = 0;
    iVar4 = (int)(local_80 << ((ulong)uVar1 & 0x3f));
  }
  dVar14 = (double)(auVar13._8_8_ << 4);
  dVar12 = (double)(auVar13._0_8_ << 4);
  dVar15 = (double)(long)(uVar5 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar5 >> 0x3c) | iVar4 << 4) << 0x27);
  dVar9 = (double)(auVar11._0_8_ << 4);
  dVar16 = dVar15 * 3.725290298461914e-09;
  if ((uVar7 & 0x400) != 0) {
    dVar16 = dVar15 * -3.725290298461914e-09;
  }
  param_1[7] = (long)dVar16;
  bVar2 = ((byte)(local_50 >> 0x3f) & (byte)_DAT_03889700) +
          ((byte)(lStack_48 >> 0x3f) & (byte)((ulong)_DAT_03889700 >> 0x20)) +
          ((byte)(local_40 >> 0x3f) & (byte)_UNK_03889708) +
          ((byte)(lStack_38 >> 0x3f) & (byte)((ulong)_UNK_03889708 >> 0x20));
  dVar16 = dVar12 * 1.1102230246251565e-16;
  if ((bVar2 & 1) != 0) {
    dVar16 = dVar12 * -1.1102230246251565e-16;
  }
  dVar12 = dVar14 * 1.1102230246251565e-16;
  if ((bVar2 & 2) != 0) {
    dVar12 = dVar14 * -1.1102230246251565e-16;
  }
  dVar14 = dVar9 * 1.1102230246251565e-16;
  if ((bVar2 & 4) != 0) {
    dVar14 = dVar9 * -1.1102230246251565e-16;
  }
  param_1[4] = (long)dVar16;
  param_1[5] = (long)dVar12;
  param_1[6] = (long)dVar14;
  return;
}


