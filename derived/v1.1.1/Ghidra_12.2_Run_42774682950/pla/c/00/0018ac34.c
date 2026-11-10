/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0018ac34; name: FUN_0018ac34
 */


undefined1  [16]
FUN_0018ac34(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  fVar8 = (float)((ulong)local_a0 >> 0x20);
  fVar10 = (float)((ulong)uStack_90 >> 0x20);
  fVar9 = (float)((ulong)uStack_98 >> 0x20);
  fVar11 = (float)((ulong)uStack_88 >> 0x20);
  auVar7 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
  auVar12 = NEON_ext(auVar7,auVar7,8,1);
  auVar7 = NEON_ext(auVar12,auVar7,8,1);
  local_80 = CONCAT44((fVar8 + fVar10) * auVar7._4_4_,
                      ((float)local_a0 + (float)uStack_90) * auVar7._0_4_);
  uStack_78 = CONCAT44((fVar9 + fVar11) * auVar7._12_4_,
                       ((float)uStack_98 + (float)uStack_88) * auVar7._8_4_);
  auVar12._0_8_ =
       CONCAT44((fVar10 - fVar8) * auVar7._4_4_,((float)uStack_90 - (float)local_a0) * auVar7._0_4_)
  ;
  auVar12._8_4_ = ((float)uStack_88 - (float)uStack_98) * auVar7._8_4_;
  auVar12._12_4_ = (fVar11 - fVar9) * auVar7._12_4_;
  uStack_68 = auVar12._8_8_;
  local_60 = *param_4;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x8000000000000000;
  local_38 = 0x40;
  lVar3 = tpidr_el0;
  local_b0[0] = param_3;
  uStack_70 = auVar12._0_8_;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar4;
    lVar4 = *(long *)(lVar4 + 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38d490) + 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
  }
  if (0xbff < uVar6) {
    local_40 = *(long *)(lVar4 + 0x18);
    if (local_40 + 0xc00U <= *(ulong *)(lVar4 + 0x20)) {
      *(ulong *)(lVar4 + 0x18) = local_40 + 0xc00U;
      goto LAB_0018ad20;
    }
  }
  local_40 = FUN_032ce670(lVar4,0xc00);
LAB_0018ad20:
  local_48._4_4_ = 0x80000040;
  local_50 = local_40;
  FUN_0019db30(param_1,&local_50,local_b0);
  iVar2 = local_38;
  lVar4 = local_40;
  if (local_40 == local_50) {
    local_48._0_4_ = 0;
    lVar5 = *(long *)(lVar3 + 0x38d490);
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x38d490);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar3 = *(long *)(lVar5 + 8);
  uVar6 = (long)iVar2 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar3 + 0x10) < uVar6) || (*(long *)(lVar3 + 0x18) != uVar6 + lVar4)) ||
     (*(long *)(lVar3 + 0x28) == lVar4)) {
    FUN_032cedf0(lVar3,lVar4);
    uVar1 = local_48._4_4_;
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar4;
    uVar1 = local_48._4_4_;
  }
  if ((-1 < (int)uVar1) && (local_48 = (ulong)uVar1 << 0x20, local_50 != 0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_50,0x30,uVar1 & 0x3fffffff);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_60;
  return auVar7;
}


