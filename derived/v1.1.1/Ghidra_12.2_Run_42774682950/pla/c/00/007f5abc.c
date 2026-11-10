/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f5abc; name: FUN_007f5abc
 */


void FUN_007f5abc(long *param_1)

{
  undefined1 *puVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  short sVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  void *__src;
  short sVar14;
  uint uVar15;
  long lVar16;
  int local_c0 [4];
  int local_b0 [4];
  undefined1 auStack_a0 [24];
  undefined *local_88;
  long *local_80;
  undefined4 local_78;
  char local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((int)param_1[0x33] == 0) {
    lVar9 = FUN_00847434();
    uVar8 = (**(code **)(*param_1 + 0x18))(param_1);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
    plVar10 = (long *)FUN_00844598(lVar9,&local_88);
    (**(code **)(*(long *)*plVar10 + 0x78))();
    uVar11 = (**(code **)(*(long *)*plVar10 + 0x80))();
    if ((uVar11 & 1) == 0) {
      puVar1 = PTR_DAT_04377590 + 0x10;
      do {
        plVar4 = (long *)0x0;
        if (*(long *)(*plVar10 + 0x50) != 0) {
          plVar4 = (long *)(*plVar10 + 0x50);
        }
        bVar5 = *(byte *)(plVar4 + 5);
        uVar15 = 1;
        if ((bVar5 & 1) != 0) {
          uVar15 = 2;
        }
        if ((bVar5 & 2) != 0) {
          uVar15 = uVar15 + 2;
        }
        if ((bVar5 & 4) != 0) {
          uVar15 = uVar15 + 4;
        }
        if ((bVar5 & 8) != 0) {
          uVar15 = uVar15 + 8;
        }
        __src = (void *)(*plVar4 + (ulong)uVar15);
        uVar15 = (uint)*(ushort *)((long)plVar4 + 0x2a);
        if ((*(byte *)((long)plVar4 + 0x29) >> 5 & 1) != 0) {
          FUN_00844870(&local_88,lVar9,__src,*(ushort *)((long)plVar4 + 0x2a));
          if ((int)local_88 != 0) {
            return;
          }
          __src = *(void **)(lVar9 + 0x28);
          uVar15 = *(uint *)(lVar9 + 0x30);
        }
        if (uVar15 - 4 < 0x4d5) {
          memcpy(param_1 + 0xed,__src,(ulong)uVar15);
          local_74 = '\x01';
          local_78 = 0x4d8;
          local_70 = 4;
          local_68 = 0;
          local_88 = puVar1;
          local_80 = param_1 + 0xed;
          FUN_007fd53c(&local_88);
          if (local_74 != '\x01') {
            FUN_007ff084(auStack_a0,param_1 + 0x188,uVar15);
            FUN_007ff094(auStack_a0,__src,uVar15,local_74);
            FUN_007f605c(param_1,auStack_a0,plVar4 + 8);
          }
        }
        (**(code **)(*(long *)*plVar10 + 0x88))();
        uVar11 = (**(code **)(*(long *)*plVar10 + 0x80))();
      } while ((uVar11 & 1) == 0);
    }
    FUN_00854f28(local_b0,*(undefined8 *)PTR_DAT_043773c0);
    if (local_b0[0] == 0) {
      if ((((*(int *)((long)param_1 + 0x1c4) != 4) && (param_1[0x230] != 0)) &&
          (uVar11 = (**(code **)(*param_1 + 0x180))(param_1), (uVar11 & 1) != 0)) &&
         (*(short *)((long)param_1 + 0x114e) != 0)) {
        lVar9 = 0;
        uVar11 = 0;
        plVar10 = param_1 + 0x17;
        do {
          uVar12 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar11 * 8) + 0x10,plVar10);
          if ((uVar12 & 1) != 0) {
            sVar7 = (short)uVar11;
            if (sVar7 < 0) {
              return;
            }
            uVar11 = FUN_007f0ee4(*(long *)(param_1[0x11] + (lVar9 >> 0x2d)) + 0x10);
            if ((uVar11 & 1) == 0) {
              return;
            }
            uVar11 = FUN_007f0ee4(plVar10);
            if ((uVar11 & 1) != 0) {
              uVar11 = FUN_007f0ee4(param_1 + 0x13);
              if (((uVar11 & 1) != 0) &&
                 (uVar11 = FUN_007f0f48(param_1 + 0x13,plVar10), (uVar11 & 1) != 0)) {
                if (*(short *)((long)param_1 + 0x114e) == 0) {
                  return;
                }
                sVar14 = 0;
                pMVar2 = (MutexType *)(param_1 + 0x3f);
                pMVar3 = (MutexType *)(param_1 + 0x1f);
                puVar1 = PTR_DAT_04377598 + 0x10;
                if (sVar7 == 0) goto LAB_007f5ed0;
                goto LAB_007f5eec;
              }
            }
            if ((int)param_1[0x38] != 0) {
              return;
            }
            local_88 = (undefined *)0x0;
            FUN_007ecf14(&local_88);
            lVar16 = (long)local_88 - *(long *)(param_1[0x230] + (lVar9 >> 0x30) * 8);
            plVar10 = (long *)FUN_007ecfa4();
            lVar6 = 0;
            if (*plVar10 != 0) {
              lVar6 = lVar16 / *plVar10;
            }
            lVar16 = (**(code **)(*param_1 + 0x378))(param_1);
            if (lVar6 <= lVar16) {
              return;
            }
            nn::os::LockMutex((MutexType *)(param_1 + 0x1f));
            uVar11 = (**(code **)(*(long *)param_1[0x23] + 0x78))
                               ((long *)param_1[0x23],
                                *(long *)(param_1[0x11] + (lVar9 >> 0x30) * 8) + 0x10);
            if ((uVar11 & 1) != 0) {
              local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
              local_88 = (undefined *)0x40;
              (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_88);
              *(undefined1 *)((long)param_1 + 0x24b) = 1;
            }
            nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f));
            return;
          }
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + 0x1000000000000;
        } while (uVar11 < *(ushort *)((long)param_1 + 0x114e));
      }
    }
    else {
      FUN_007ee578(local_c0,local_b0);
      if ((int)param_1[0x33] != local_c0[0]) {
        FUN_007ee660(param_1 + 0x33,local_c0);
      }
    }
  }
  return;
LAB_007f5eec:
  lVar9 = (long)sVar14;
  uVar11 = FUN_007f0ee4(*(long *)(param_1[0x11] + lVar9 * 8) + 0x10);
  if ((uVar11 & 1) != 0) {
    local_88 = (undefined *)0x0;
    FUN_007ecf14(&local_88);
    lVar16 = (long)local_88 - *(long *)(param_1[0x230] + lVar9 * 8);
    plVar10 = (long *)FUN_007ecfa4();
    lVar6 = 0;
    if (*plVar10 != 0) {
      lVar6 = lVar16 / *plVar10;
    }
    lVar16 = (**(code **)(*param_1 + 0x378))(param_1);
    if ((lVar16 < lVar6) && ((int)param_1[0x38] != 1)) {
      nn::os::LockMutex(pMVar2);
      nn::os::LockMutex(pMVar3);
      uVar11 = (**(code **)(*(long *)param_1[0x23] + 0x78))
                         ((long *)param_1[0x23],*(long *)(param_1[0x11] + lVar9 * 8) + 0x10);
      if ((uVar11 & 1) != 0) {
        lVar9 = param_1[0x43];
        uVar8 = FUN_008026bc(param_1[0x23]);
        FUN_007f24d4(lVar9,uVar8);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        local_88 = &DAT_00000040;
        (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_88);
        *(undefined1 *)((long)param_1 + 0x24b) = 1;
        nn::os::UnlockMutex(pMVar3);
        nn::os::UnlockMutex(pMVar2);
        goto LAB_007f5ed0;
      }
      nn::os::UnlockMutex(pMVar3);
      nn::os::UnlockMutex(pMVar2);
    }
    local_88 = (undefined1 *)0x0;
    FUN_007ecf14(&local_88);
    lVar16 = (long)local_88 - *(long *)(param_1[0x231] + lVar9 * 8);
    plVar10 = (long *)FUN_007ecfa4();
    lVar6 = 0;
    if (*plVar10 != 0) {
      lVar6 = lVar16 / *plVar10;
    }
    lVar13 = (**(code **)(*param_1 + 0x378))(param_1);
    lVar16 = lVar13 + 3;
    if (-1 < lVar13) {
      lVar16 = lVar13;
    }
    if ((lVar16 >> 2 < lVar6) && (param_1[0x230] != 0)) {
      lVar9 = *(long *)(param_1[0x11] + lVar9 * 8);
      local_78 = 0x4d8;
      local_68 = 0;
      local_74 = -0x80;
      local_70 = 4;
      local_88 = puVar1;
      local_80 = param_1 + 0x52;
      FUN_007fd434(&local_88);
      FUN_007ff084(auStack_a0,param_1 + 0x188,0x4d8);
      FUN_007ff094(auStack_a0,local_80,local_70._4_4_ + (int)local_70,0x80);
      (**(code **)(*param_1 + 0x140))(param_1,auStack_a0,lVar9 + 0x10,0);
    }
  }
LAB_007f5ed0:
  do {
    sVar14 = sVar14 + 1;
    if ((int)(uint)*(ushort *)((long)param_1 + 0x114e) <= (int)sVar14) {
      return;
    }
  } while (sVar14 == sVar7);
  goto LAB_007f5eec;
}


