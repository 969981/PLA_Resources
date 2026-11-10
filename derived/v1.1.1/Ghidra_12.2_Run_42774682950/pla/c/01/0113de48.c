/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113de48; name: FUN_0113de48
 */


ulong FUN_0113de48(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  ulong uVar11;
  undefined8 uVar12;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_03a79060);
  }
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar7 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar7) {
    puVar6 = *(uint **)(param_1 + 8);
    puVar9 = puVar3;
    do {
      puVar8 = puVar6 + (uVar7 / 0x60) * 0xc;
      if (*puVar8 == 0x2c24c5f2) goto LAB_0113dee0;
      puVar2 = puVar8 + 0xc;
      if (0x2c24c5f1 < *puVar8) {
        puVar2 = puVar6;
        puVar9 = puVar8;
      }
      uVar7 = (long)puVar9 - (long)puVar2;
      puVar6 = puVar2;
    } while (0 < (long)uVar7);
  }
  puVar8 = puVar3;
LAB_0113dee0:
  uVar7 = 0;
  if (puVar8 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (puVar3 != puVar8) {
      uVar10 = *(undefined8 *)(puVar8 + 2);
      uVar12 = *(undefined8 *)(puVar8 + 8);
      local_c0 = PTR_DAT_0437e438 + 0x10;
      uStack_54 = *puVar8;
      puVar1 = PTR_DAT_0437e440 + 0x10;
      local_60 = 0;
      local_58 = 0;
      local_68 = puVar1;
      if (uStack_54 != 0) {
        uVar7 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
        uStack_54 = uStack_54 ^ uStack_54 << 2;
        uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
        uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
        uStack_54 = uStack_54 ^ uStack_54 << 0xd;
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar7 != 1) &&
            (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
            uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 2)) &&
           (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
           uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 3)) {
          (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_68);
          for (lVar4 = uVar7 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
            (**(code **)(local_68 + 0x10))(&local_68);
          }
        }
      }
      puStack_a8 = PTR_DAT_0437e448 + 0x10;
      local_90 = 0;
      local_b0 = 0;
      local_78 = CONCAT44(uStack_54,uStack_54);
      local_b8 = PTR_DAT_0437e450 + 0x10;
      uStack_70 = 0;
      local_a0 = uVar10;
      uStack_98 = uVar12;
      local_88 = puVar1;
      uStack_80 = local_60;
      local_58 = uStack_54;
      uVar7 = FUN_010d7784(&local_c0,*param_2,*param_3);
      uVar11 = uVar7 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xff;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return uVar11 | uVar7;
}


