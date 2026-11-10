/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cd4c0; name: FUN_010cd4c0
 */


uint FUN_010cd4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **local_178;
  undefined **ppuStack_170;
  undefined8 local_168;
  undefined **ppuStack_160;
  long local_158;
  long lStack_150;
  undefined1 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [16];
  Sha256Impl aSStack_d8 [120];
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = PTR_DAT_0437a508 + 0x10;
  local_58 = 0;
  uVar3 = FUN_00938764(&local_60,0,param_3,0,param_2,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_01150950(auStack_e8);
    FUN_01150960(auStack_e8);
    if (local_58 == 0) {
      lVar4 = -0x20;
    }
    else {
      lVar4 = *(long *)(local_58 + 0x240) + -0x20;
    }
    FUN_011509cc(auStack_e8,*(undefined8 *)(local_58 + 0x250),lVar4,0);
    FUN_01150a18(auStack_108,auStack_e8);
    lVar4 = local_58;
    lVar6 = *(long *)(local_58 + 0x250);
    if (local_58 == 0) {
      lVar5 = -0x20;
    }
    else {
      lVar5 = *(long *)(local_58 + 0x240) + -0x20;
    }
    puVar1 = (undefined8 *)(lVar6 + lVar5);
    local_128 = *puVar1;
    uStack_120 = puVar1[1];
    local_118 = puVar1[2];
    uStack_110 = puVar1[3];
    uVar3 = FUN_010d0fa0(&local_128,auStack_108);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (lVar4 == 0) {
        lStack_150 = -0x20;
      }
      else {
        lStack_150 = *(long *)(lVar4 + 0x240) + -0x20;
      }
      local_140 = &DAT_03a78d24;
      local_148 = 0;
      local_178 = &PTR_LAB_041f0558;
      ppuStack_170 = &PTR_LAB_041f0588;
      local_168 = 0;
      ppuStack_160 = &PTR_LAB_041f0510;
      local_138 = 0x7f;
      uStack_130 = 0;
      local_158 = lVar6;
      uVar2 = FUN_010cd634(param_1,&local_178);
    }
    nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_d8);
  }
  FUN_00936104(&local_60);
  return uVar2 & 1;
}


