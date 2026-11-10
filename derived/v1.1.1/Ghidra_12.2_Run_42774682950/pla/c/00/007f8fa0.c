/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8fa0; name: FUN_007f8fa0
 */


void FUN_007f8fa0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [20];
  char local_74;
  int local_70;
  int iStack_6c;
  byte local_64;
  byte local_63;
  undefined8 local_50;
  undefined4 local_48;
  
  if (*(char *)((long)param_1 + 0x284) != '\0') {
    return;
  }
  if ((int)param_1[0x223] == 1) {
    return;
  }
  uVar14 = FUN_007f0ee4(param_1 + 0x17);
  if ((uVar14 & 1) == 0) {
    return;
  }
  uVar14 = FUN_007f0ee4(param_1 + 0x13);
  if ((uVar14 & 1) == 0) {
    return;
  }
  uVar14 = FUN_007f0f48(param_1 + 0x13,param_1 + 0x17);
  if ((uVar14 & 1) == 0) {
    return;
  }
  FUN_007fe9c8(auStack_88,*param_2,*(undefined4 *)((long)param_2 + 0xc),0,0,0,param_1);
  uVar14 = FUN_007fec10(auStack_88);
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) != iStack_6c + local_70) {
    return;
  }
  if (local_74 != '2') {
    return;
  }
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar14 = 0;
    do {
      uVar15 = FUN_007f0ee4(*(long *)(param_1[0x11] + uVar14 * 8) + 0x10);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar14 * 8) + 0x10,param_3),
         (uVar15 & 1) != 0)) {
        bVar6 = 1;
        cVar3 = *(char *)((long)param_1 + 0x24b);
        goto joined_r0x007f90a4;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ushort *)((long)param_1 + 0x114e));
  }
  if ((int)param_1[0x38] != 0) {
    return;
  }
  bVar6 = 0;
  cVar3 = *(char *)((long)param_1 + 0x24b);
joined_r0x007f90a4:
  if (cVar3 != '\0') {
    return;
  }
  if ((param_1[0x22c] != 0) && (uVar14 = FUN_007e5f0c(), (uVar14 & 1) != 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
  FUN_007fea24(&local_50,auStack_88,auStack_98,0x10);
  bVar5 = local_64;
  if (*(long *)PTR_DAT_04377550 == 0) {
    uVar17 = 1;
  }
  else {
    uVar17 = (uint)*(byte *)(*(long *)PTR_DAT_04377550 + 0x458);
  }
  bVar4 = DAT_043a3f80;
  if (DAT_043a3f80 == 0) {
    bVar4 = (**(code **)(*param_1 + 0x200))(param_1);
  }
  if (bVar5 < bVar4) {
    uVar16 = 1;
  }
  else {
    bVar5 = DAT_043a3f80;
    if (DAT_043a3f80 == 0) {
      bVar5 = (**(code **)(*param_1 + 0x200))(param_1);
    }
    if (bVar5 < local_64) {
      uVar16 = 2;
    }
    else if ((short)(ushort)local_63 < *(short *)((long)param_1 + 0x5a)) {
      uVar16 = 3;
    }
    else if (*(short *)((long)param_1 + 0x5a) < (short)(ushort)local_63) {
      uVar16 = 4;
    }
    else {
      memset(&local_50,0,0x10);
      iVar10 = memcmp(param_1 + 0x44,&local_50,0x10);
      if ((iVar10 == 0) || (iVar10 = memcmp(param_1 + 0x44,auStack_98,0x10), iVar10 == 0)) {
        sVar7 = FUN_008026bc(param_1[0x24]);
        sVar8 = (**(code **)(*(long *)param_1[0x43] + 0x20))();
        if ((bool)(sVar7 == sVar8 & (bVar6 ^ 1))) {
          uVar16 = 5;
        }
        else {
          uVar14 = (**(code **)(*(long *)param_1[0x43] + 0x30))();
          if ((uVar14 & 1) != 0) {
            uVar11 = (**(code **)(*(long *)param_1[0x43] + 0x28))();
            uVar12 = (**(code **)(*(long *)param_1[0x43] + 0x20))();
            if ((bool)((uVar12 & 0xffff) < uVar17 + (uVar11 & 0xffff) & (bVar6 ^ 1))) {
              uVar16 = 8;
              goto LAB_007f9320;
            }
          }
          if (((int)param_1[0x50] == 2) &&
             ((((param_1[0x37] == 0 || (param_1[0x4f] == 0)) ||
               (uVar14 = FUN_007e5f0c(), (uVar14 & 1) == 0)) ||
              (uVar14 = (**(code **)(*(long *)param_1[0x4f] + 0x68))((long *)param_1[0x4f],param_3),
              (uVar14 & 1) == 0)))) {
            uVar16 = 6;
          }
          else {
            pMVar1 = (MutexType *)(param_1 + 0x1b);
            nn::os::LockMutex(pMVar1);
            pMVar2 = (MutexType *)(param_1 + 0x1f);
            nn::os::LockMutex(pMVar2);
            uVar14 = (**(code **)(*(long *)param_1[0x24] + 0x68))((long *)param_1[0x24],param_3);
            if ((((uVar14 & 1) == 0) &&
                (uVar9 = FUN_008026bc(param_1[0x24]), uVar9 < *(ushort *)((long)param_1 + 0x114e)))
               && (uVar14 = (**(code **)(*(long *)param_1[0x23] + 0x68))
                                      ((long *)param_1[0x23],param_3), (uVar14 & 1) == 0)) {
              (**(code **)(*(long *)param_1[0x23] + 0x70))((long *)param_1[0x23],param_3,0,0);
              lVar18 = param_1[0x43];
              uVar13 = FUN_008026bc(param_1[0x23]);
              FUN_007f24d4(lVar18,uVar13);
              local_48 = 0;
              local_50 = 0x40;
              (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_50);
              nn::os::UnlockMutex(pMVar2);
              nn::os::UnlockMutex(pMVar1);
              (**(code **)(*param_1 + 0x118))(param_1);
              nn::os::LockMutex(pMVar1);
              nn::os::LockMutex(pMVar2);
              (**(code **)(*(long *)param_1[0x24] + 0x18))((long *)param_1[0x24],param_1[0x23]);
              nn::os::UnlockMutex(pMVar2);
              uVar14 = FUN_00802560(param_1[0x24]);
              bVar6 = 0;
              if ((uVar14 & 1) != 0) {
                bVar6 = FUN_00802714(param_1[0x24]);
                bVar6 = ~bVar6 & 1;
              }
              *(byte *)((long)param_1 + 0x24c) = bVar6;
              nn::os::UnlockMutex(pMVar1);
              FUN_007f666c(param_1);
              (**(code **)(*param_1 + 0x120))(param_1);
            }
            else {
              nn::os::UnlockMutex(pMVar2);
              nn::os::UnlockMutex(pMVar1);
            }
            uVar16 = 0;
          }
        }
      }
      else {
        uVar16 = 7;
      }
    }
  }
LAB_007f9320:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
  FUN_007f7868(param_1,param_3,uVar16);
  return;
}


