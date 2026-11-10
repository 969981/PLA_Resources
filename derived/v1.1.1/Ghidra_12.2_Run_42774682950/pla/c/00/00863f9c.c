/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863f9c; name: FUN_00863f9c
 */


void FUN_00863f9c(undefined8 param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  uint uVar3;
  MutexType *pMVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong local_a0;
  undefined4 local_98;
  uint local_80 [4];
  int local_70 [4];
  
  local_70[0] = 0;
  local_a0 = local_a0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_a0);
  pMVar4 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
  nn::os::LockMutex(pMVar4);
  pMVar1 = (MutexType *)(param_2 + 0xb8);
  nn::os::LockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_2 + 0x60);
  nn::os::LockMutex(pMVar2);
  if (*(int *)(param_3 + 0x5fc) == 0xffffff) {
    uVar3 = *(int *)(param_2 + 0xfc) + *(int *)(param_2 + 0xf8);
    plVar8 = (long *)(param_2 + 0xe0);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xfc);
    plVar8 = (long *)(param_2 + 0xe8);
  }
  iVar12 = 0;
  if (0 < (int)uVar3) {
    iVar12 = 0;
    lVar13 = *plVar8;
    uVar11 = (ulong)uVar3;
    lVar14 = *(long *)(*(long *)(param_2 + 0xa0) + 0x18);
    do {
      uVar7 = FUN_007f10e8(lVar13);
      plVar8 = (long *)FUN_0085e934(*(undefined8 *)(param_2 + 0xa0),uVar7);
      if (plVar8 == (long *)0x0) {
LAB_0086406c:
        *(undefined8 *)(*(long *)(param_2 + 0xf0) + (long)iVar12 * 8) = uVar7;
        iVar12 = iVar12 + 1;
      }
      else if (*plVar8 != lVar14) {
        if ((int)plVar8[2] != 0xd) goto LAB_0086406c;
        if (*(char *)(param_3 + 0x623) == '\0') {
          local_80[0] = CONCAT31(local_80[0]._1_3_,0xfd);
          plVar9 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
          (**(code **)(*plVar9 + 0x90))(&local_a0,plVar9,local_80,plVar8[1]);
          FUN_007ee660(local_70,&local_a0);
          if (((uint)*(ushort *)(param_2 + 0x92) <= (local_80[0] & 0xff)) ||
             (*(short *)(*(long *)(param_2 + 0x88) + (ulong)(byte)local_80[0]._0_1_ * 2) == 0)) {
            local_98 = 0;
            local_a0 = 0x4000000;
            FUN_007f0cd0(param_3,&local_a0,0);
            goto joined_r0x008641c8;
          }
          uVar6 = FUN_007f02dc(param_2 + 8);
          *(undefined2 *)(param_3 + 0x12) = uVar6;
          *(undefined2 *)(param_3 + 0xe) =
               *(undefined2 *)(*(long *)(param_2 + 0x88) + (ulong)(byte)local_80[0]._0_1_ * 2);
          FUN_007f031c(param_3);
          cVar5 = *(char *)(param_3 + 0x648);
        }
        else {
          cVar5 = *(char *)(param_3 + 0x648);
        }
        if (cVar5 != '\0') {
          plVar9 = plVar8 + 7;
          if ((char)plVar8[0xb] != '\0') {
            plVar9 = plVar8 + 3;
          }
          FUN_007e3428(&local_a0,plVar9);
          FUN_00864304(local_80,param_2,param_3,&local_a0);
          FUN_007ee660(local_70,local_80);
          FUN_007e34a4(&local_a0);
          if (local_70[0] != 0) {
            local_a0 = CONCAT44(local_a0._4_4_,0x10407);
            local_80[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_80);
            if (local_70[0] == (int)local_a0) {
              local_98 = 0;
              local_a0 = 1;
              FUN_007f0cd0(param_3,&local_a0,0);
            }
            FUN_007ee578(param_1,local_70);
            nn::os::UnlockMutex(pMVar2);
            nn::os::UnlockMutex(pMVar1);
            nn::os::UnlockMutex(pMVar4);
            return;
          }
        }
      }
joined_r0x008641c8:
      uVar11 = uVar11 - 1;
      lVar13 = lVar13 + 0x20;
    } while (uVar11 != 0);
  }
  nn::os::UnlockMutex(pMVar2);
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar4);
  if (0 < iVar12) {
    uVar6 = FUN_007f02fc(param_2 + 8);
    *(undefined2 *)(param_3 + 0x12) = uVar6;
    *(undefined2 *)(param_3 + 0xe) = 1;
    FUN_007f031c(param_3);
    if (*(char *)(param_3 + 0x648) != '\0') {
      (**(code **)(**(long **)(param_2 + 0x58) + 0x390))
                (&local_a0,*(long **)(param_2 + 0x58),param_3,*(undefined8 *)(param_2 + 0xf0),iVar12
                );
      FUN_007ee660(local_70,&local_a0);
      if (local_70[0] != 0) {
        puVar10 = (ulong *)local_70;
        goto LAB_00864268;
      }
    }
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_80);
  puVar10 = &local_a0;
LAB_00864268:
  FUN_007ee578(param_1,puVar10);
  return;
}


