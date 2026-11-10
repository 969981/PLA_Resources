/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01102030; name: FUN_01102030
 */


void FUN_01102030(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  MutexType *pMVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    puVar4 = *(uint **)(param_1 + 0x10);
    uVar10 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar10) {
      puVar8 = *(uint **)(param_1 + 8);
      puVar9 = puVar4;
      do {
        puVar12 = puVar8 + (uVar10 / 0x60) * 0xc;
        if (*puVar12 == 0x7799eb86) goto LAB_011020d0;
        puVar3 = puVar12 + 0xc;
        if (0x7799eb85 < *puVar12) {
          puVar3 = puVar8;
          puVar9 = puVar12;
        }
        uVar10 = (long)puVar9 - (long)puVar3;
        puVar8 = puVar3;
      } while (0 < (long)uVar10);
    }
    puVar12 = puVar4;
LAB_011020d0:
    if ((puVar12 == (uint *)0x0) || (puVar4 == puVar12)) {
      pMVar2 = (MutexType *)(param_1 + 0x80);
      nn::os::LockMutex(pMVar2);
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,&DAT_03a78eb4);
      }
      local_d0 = (undefined *)(*param_3 + 5);
      nn::os::LockMutex(pMVar2);
      if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
      }
      FUN_01104820(param_1 + 8,&DAT_03a78eb4,*(undefined8 *)(param_1 + 0x40),&local_d0);
      lVar11 = *(long *)(param_1 + 0x10);
      nn::os::UnlockMutex(pMVar2);
      puVar1 = PTR_DAT_0437e440;
      lVar14 = *(long *)(lVar11 + -0x28);
      uVar13 = *(undefined8 *)(lVar11 + -0x10);
      *(undefined1 *)(lVar11 + -8) = 1;
      puVar1 = puVar1 + 0x10;
      local_d0 = PTR_DAT_0437e458 + 0x10;
      uStack_64 = *(uint *)(lVar11 + -0x30);
      local_68 = 0;
      local_70 = 0;
      local_78 = puVar1;
      if (uStack_64 != 0) {
        uVar10 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
        uStack_64 = uStack_64 ^ uStack_64 << 2;
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
        uStack_64 = uStack_64 ^ uStack_64 << 0xd;
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar10 != 1) &&
            (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
            uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 2)) &&
           (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
           uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 3)) {
          FUN_010d3e10(&local_78);
          for (lVar5 = uVar10 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
            (**(code **)(local_78 + 0x10))(&local_78);
          }
        }
      }
      puStack_b8 = PTR_DAT_0437e448 + 0x10;
      local_a0 = 0;
      local_c0 = 0;
      local_88 = CONCAT44(uStack_64,uStack_64);
      local_c8 = PTR_DAT_0437e450 + 0x10;
      uStack_80 = 0;
      local_b0 = lVar14;
      uStack_a8 = uVar13;
      local_98 = puVar1;
      uStack_90 = local_70;
      local_68 = uStack_64;
      uVar10 = FUN_010d80b4(&local_d0,param_2,*param_3);
      if ((uVar10 & 1) == 0) {
        FUN_010d099c((uint *)(lVar11 + -0x30),*(undefined8 *)(param_1 + 0x40));
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
      }
      else {
        nn::os::LockMutex(pMVar2);
        FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_78);
        nn::os::UnlockMutex(pMVar2);
      }
      nn::os::UnlockMutex(pMVar2);
    }
    else {
      uVar10 = FUN_010d7974(param_1,puVar12);
      if (((uVar10 & 1) == 0) && (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x58))(plVar6,&DAT_03a78eb4);
      }
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,puVar12);
      }
      uVar10 = *param_3 + 5;
      if (*(ulong *)(puVar12 + 8) == uVar10) {
        lVar11 = *(long *)(puVar12 + 2);
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 0x80));
        plVar6 = *(long **)(param_1 + 0x60);
        if (plVar6 != (long *)0x0) {
          if (*(ulong *)(puVar12 + 6) < uVar10) {
            pcVar7 = *(code **)(*plVar6 + 0x18);
          }
          else {
            pcVar7 = *(code **)(*plVar6 + 0x20);
          }
          (*pcVar7)(plVar6,puVar12);
        }
        FUN_010d4780(puVar12,*(undefined8 *)(param_1 + 0x40),uVar10);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
        lVar11 = *(long *)(puVar12 + 2);
      }
      if ((lVar11 != 0) && (*(long *)(puVar12 + 4) != 0)) {
        *(undefined1 *)(puVar12 + 10) = 1;
        uVar13 = *(undefined8 *)(puVar12 + 8);
        local_d0 = PTR_DAT_0437e458 + 0x10;
        uStack_64 = *puVar12;
        puVar1 = PTR_DAT_0437e440 + 0x10;
        local_68 = 0;
        local_70 = 0;
        local_78 = puVar1;
        if (uStack_64 != 0) {
          uVar10 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
          uStack_64 = uStack_64 ^ uStack_64 << 2;
          uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
          uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
          uStack_64 = uStack_64 ^ uStack_64 << 0xd;
          uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar10 != 1) &&
              (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
              uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 2)) &&
             (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
             uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 3)) {
            FUN_010d3e10(&local_78);
            for (lVar14 = uVar10 - 4; lVar14 != 0; lVar14 = lVar14 + -1) {
              (**(code **)(local_78 + 0x10))(&local_78);
            }
          }
        }
        puStack_b8 = PTR_DAT_0437e448 + 0x10;
        local_a0 = 0;
        local_c0 = 0;
        local_88 = CONCAT44(uStack_64,uStack_64);
        local_c8 = PTR_DAT_0437e450 + 0x10;
        uStack_80 = 0;
        local_b0 = lVar11;
        uStack_a8 = uVar13;
        local_98 = puVar1;
        uStack_90 = local_70;
        local_68 = uStack_64;
        FUN_010d80b4(&local_d0,param_2,*param_3);
      }
    }
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


