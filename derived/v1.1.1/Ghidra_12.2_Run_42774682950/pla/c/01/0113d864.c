/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113d864; name: FUN_0113d864
 */


undefined1  [16] FUN_0113d864(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  pMVar1 = (MutexType *)(param_1 + 0xa0);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&DAT_03a7902c);
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar8 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar8) {
    puVar7 = *(uint **)(param_1 + 8);
    puVar10 = puVar4;
    do {
      puVar9 = puVar7 + (uVar8 / 0x60) * 0xc;
      if (*puVar9 == 0x203a7f34) goto LAB_0113d8f0;
      puVar3 = puVar9 + 0xc;
      if (0x203a7f33 < *puVar9) {
        puVar3 = puVar7;
        puVar10 = puVar9;
      }
      uVar8 = (long)puVar10 - (long)puVar3;
      puVar7 = puVar3;
    } while (0 < (long)uVar8);
  }
  puVar9 = puVar4;
LAB_0113d8f0:
  uVar8 = 0;
  if (puVar9 == (uint *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (puVar4 != puVar9) {
      uVar11 = *(undefined8 *)(puVar9 + 2);
      uVar12 = *(undefined8 *)(puVar9 + 8);
      local_b0 = PTR_DAT_0437e438 + 0x10;
      uStack_44 = *puVar9;
      puVar2 = PTR_DAT_0437e440 + 0x10;
      local_50 = 0;
      local_48 = 0;
      local_58 = puVar2;
      if (uStack_44 != 0) {
        uVar8 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
        uStack_44 = uStack_44 ^ uStack_44 << 2;
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
        uStack_44 = uStack_44 ^ uStack_44 << 0xd;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar8 != 1) &&
            (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
            uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar8 != 2)) &&
           (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
           uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar8 != 3)) {
          (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_58);
          for (lVar5 = uVar8 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
            (**(code **)(local_58 + 0x10))(&local_58);
          }
        }
      }
      puStack_98 = PTR_DAT_0437e448 + 0x10;
      local_80 = 0;
      local_a0 = 0;
      local_68 = CONCAT44(uStack_44,uStack_44);
      uStack_60 = 0;
      local_a8 = PTR_DAT_0437e450 + 0x10;
      local_90 = uVar11;
      uStack_88 = uVar12;
      local_78 = puVar2;
      uStack_70 = local_50;
      local_48 = uStack_44;
      auVar14 = FUN_0113da80(&local_b0);
      param_1 = auVar14._8_8_;
      uVar13 = auVar14._0_8_ & 0xffffffffffffff00;
      uVar8 = auVar14._0_8_ & 0xff;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  auVar14._0_8_ = uVar13 | uVar8;
  auVar14._8_8_ = param_1;
  return auVar14;
}


