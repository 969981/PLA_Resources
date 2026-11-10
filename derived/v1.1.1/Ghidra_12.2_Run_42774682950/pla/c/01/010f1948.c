/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f1948; name: FUN_010f1948
 */


undefined1  [16] FUN_010f1948(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
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
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar7 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar7) {
    puVar6 = *(uint **)(param_1 + 8);
    puVar9 = puVar3;
    do {
      puVar8 = puVar6 + (uVar7 / 0x60) * 0xc;
      if (*puVar8 == *param_2) goto LAB_010f19d4;
      puVar2 = puVar8 + 0xc;
      if (*param_2 <= *puVar8) {
        puVar2 = puVar6;
        puVar9 = puVar8;
      }
      uVar7 = (long)puVar9 - (long)puVar2;
      puVar6 = puVar2;
    } while (0 < (long)uVar7);
  }
  puVar8 = puVar3;
LAB_010f19d4:
  uVar7 = 0;
  if (puVar8 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    if (puVar3 != puVar8) {
      uVar10 = *(undefined8 *)(puVar8 + 2);
      uVar11 = *(undefined8 *)(puVar8 + 8);
      local_b0 = PTR_DAT_0437e438 + 0x10;
      uStack_44 = *puVar8;
      puVar1 = PTR_DAT_0437e440 + 0x10;
      local_50 = 0;
      local_48 = 0;
      local_58 = puVar1;
      if (uStack_44 != 0) {
        uVar7 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
        uStack_44 = uStack_44 ^ uStack_44 << 2;
        uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
        uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
        uStack_44 = uStack_44 ^ uStack_44 << 0xd;
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar7 != 1) &&
            (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
            uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 2)) &&
           (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
           uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 3)) {
          (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_58);
          for (lVar4 = uVar7 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
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
      local_90 = uVar10;
      uStack_88 = uVar11;
      local_78 = puVar1;
      uStack_70 = local_50;
      local_48 = uStack_44;
      auVar13 = FUN_010f1b60(&local_b0);
      param_2 = auVar13._8_8_;
      uVar12 = auVar13._0_8_ & 0xffffffffffffff00;
      uVar7 = auVar13._0_8_ & 0xff;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  auVar13._0_8_ = uVar12 | uVar7;
  auVar13._8_8_ = param_2;
  return auVar13;
}


