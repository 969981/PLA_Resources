/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f7a48; name: FUN_010f7a48
 */


void FUN_010f7a48(long param_1,uint *param_2,char *param_3)

{
  undefined *puVar1;
  MutexType *pMVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 uVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
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
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
    }
    goto LAB_010f7edc;
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar11 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar11) {
    puVar9 = *(uint **)(param_1 + 8);
    puVar10 = puVar4;
    do {
      puVar13 = puVar9 + (uVar11 / 0x60) * 0xc;
      if (*puVar13 == *param_2) goto LAB_010f7ae4;
      puVar3 = puVar13 + 0xc;
      if (*param_2 <= *puVar13) {
        puVar3 = puVar9;
        puVar10 = puVar13;
      }
      uVar11 = (long)puVar10 - (long)puVar3;
      puVar9 = puVar3;
    } while (0 < (long)uVar11);
  }
  puVar13 = puVar4;
LAB_010f7ae4:
  if ((puVar13 != (uint *)0x0) && (puVar4 != puVar13)) {
    uVar11 = FUN_010de338(param_1,puVar13);
    if (((uVar11 & 1) == 0) && (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x58))(plVar6,param_2);
      plVar6 = *(long **)(param_1 + 0x60);
    }
    else {
      plVar6 = *(long **)(param_1 + 0x60);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,puVar13);
    }
    if (*(long *)(puVar13 + 8) == 1) {
      lVar14 = *(long *)(puVar13 + 2);
    }
    else {
      nn::os::LockMutex((MutexType *)(param_1 + 0x80));
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 != (long *)0x0) {
        if (*(long *)(puVar13 + 6) == 0) {
          pcVar8 = *(code **)(*plVar6 + 0x18);
        }
        else {
          pcVar8 = *(code **)(*plVar6 + 0x20);
        }
        (*pcVar8)(plVar6,puVar13);
      }
      FUN_010d4780(puVar13,*(undefined8 *)(param_1 + 0x40),1);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
      lVar14 = *(long *)(puVar13 + 2);
    }
    if ((lVar14 != 0) && (*(long *)(puVar13 + 4) != 0)) {
      *(undefined1 *)(puVar13 + 10) = 1;
      uVar15 = *(undefined8 *)(puVar13 + 8);
      local_d0 = PTR_DAT_0437e458 + 0x10;
      uStack_64 = *puVar13;
      puVar1 = PTR_DAT_0437e440 + 0x10;
      local_68 = 0;
      local_70 = 0;
      local_78 = puVar1;
      if (uStack_64 != 0) {
        uVar11 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
        uStack_64 = uStack_64 ^ uStack_64 << 2;
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
        uStack_64 = uStack_64 ^ uStack_64 << 0xd;
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar11 != 1) &&
            (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
            uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar11 != 2)) &&
           (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
           uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar11 != 3)) {
          FUN_010d3e10(&local_78);
          for (lVar16 = uVar11 - 4; lVar16 != 0; lVar16 = lVar16 + -1) {
            (**(code **)(local_78 + 0x10))(&local_78);
          }
        }
      }
      puStack_b8 = PTR_DAT_0437e448 + 0x10;
      local_a0 = 0;
      local_c0 = 0;
      local_88 = CONCAT44(uStack_64,uStack_64);
      uStack_80 = 0;
      local_c8 = PTR_DAT_0437e450 + 0x10;
      uVar12 = 1;
      if (*param_3 != '\0') {
        uVar12 = 2;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,uVar12);
      local_b0 = lVar14;
      uStack_a8 = uVar15;
      local_98 = puVar1;
      uStack_90 = local_70;
      local_68 = uStack_64;
      plVar6 = (long *)(**(code **)(local_d0 + 0x10))(&local_d0);
      plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
      uVar11 = (**(code **)(*plVar7 + 0x18))(plVar7,1,plVar6[1]);
      if ((uVar11 & 1) != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_78,1,0);
      }
      lVar14 = (**(code **)(local_d0 + 0x10))(&local_d0);
      *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
    }
    goto LAB_010f7edc;
  }
  pMVar2 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar2);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  local_d0 = (undefined *)0x1;
  nn::os::LockMutex(pMVar2);
  if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  FUN_010f801c(param_1 + 8,param_2,*(undefined8 *)(param_1 + 0x40),&local_d0);
  lVar14 = *(long *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar2);
  *(undefined1 *)(lVar14 + -8) = 1;
  lVar16 = *(long *)(lVar14 + -0x28);
  uVar15 = *(undefined8 *)(lVar14 + -0x10);
  puVar1 = PTR_DAT_0437e440 + 0x10;
  local_d0 = PTR_DAT_0437e458 + 0x10;
  uStack_64 = *(uint *)(lVar14 + -0x30);
  local_70 = 0;
  local_68 = 0;
  local_78 = puVar1;
  if (uStack_64 != 0) {
    uVar11 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
    uStack_64 = uStack_64 ^ uStack_64 << 2;
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
    uStack_64 = uStack_64 ^ uStack_64 << 0xd;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar11 != 1) &&
        (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
        uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar11 != 2)) &&
       (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
       uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar11 != 3)) {
      FUN_010d3e10(&local_78);
      for (lVar5 = uVar11 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
        (**(code **)(local_78 + 0x10))(&local_78);
      }
    }
  }
  puStack_b8 = PTR_DAT_0437e448 + 0x10;
  local_a0 = 0;
  local_c0 = 0;
  local_88 = CONCAT44(uStack_64,uStack_64);
  uStack_80 = 0;
  local_c8 = PTR_DAT_0437e450 + 0x10;
  uVar12 = 1;
  if (*param_3 != '\0') {
    uVar12 = 2;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,uVar12);
  local_b0 = lVar16;
  uStack_a8 = uVar15;
  local_98 = puVar1;
  uStack_90 = local_70;
  local_68 = uStack_64;
  plVar6 = (long *)(**(code **)(local_d0 + 0x10))(&local_d0);
  plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
  uVar11 = (**(code **)(*plVar7 + 0x18))(plVar7,1,plVar6[1]);
  if ((uVar11 & 1) == 0) {
    lVar16 = (**(code **)(local_d0 + 0x10))(&local_d0);
    *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
LAB_010f7fe4:
    FUN_010d099c((uint *)(lVar14 + -0x30),*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
  }
  else {
    uVar11 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_78,1,0);
    lVar16 = (**(code **)(local_d0 + 0x10))(&local_d0);
    *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    if ((uVar11 & 1) == 0) goto LAB_010f7fe4;
    nn::os::LockMutex(pMVar2);
    FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_78);
    nn::os::UnlockMutex(pMVar2);
  }
  nn::os::UnlockMutex(pMVar2);
LAB_010f7edc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


