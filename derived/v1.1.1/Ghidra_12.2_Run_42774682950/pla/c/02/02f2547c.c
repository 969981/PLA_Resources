/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2547c; name: FUN_02f2547c
 */


undefined8 FUN_02f2547c(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_70;
  long lStack_68;
  
  plVar7 = *(long **)(param_1 + 8);
  if ((*(ushort *)(plVar7 + 0x30) & 1) == 0) {
    (**(code **)(*plVar7 + 0x50))(plVar7,0);
  }
  else if ((*(ushort *)(plVar7 + 0x30) >> 4 & 1) != 0) {
    (**(code **)(*plVar7 + 0x58))();
  }
  lVar10 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (((((*(byte *)(lVar10 + 0xee) & 1) == 0) && (*(int *)(lVar10 + 0xcc) == 0)) &&
      (*(int *)(lVar10 + 0xd0) == 0)) &&
     ((*(int *)(lVar10 + 0xd4) == 0 && (*(int *)(lVar10 + 0xd8) == 0)))) {
    if (*(long *)(lVar10 + 0x170) == 0) {
      return 0;
    }
    if (((*(uint *)(*(long *)(lVar10 + 0x10) + 0x40) < 6) ||
        (lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x10) + 0x38) + 0x28), lVar10 == 0)) ||
       (((*(char *)(lVar10 + 0xfa) == '\0' ||
         ((uVar8 = FUN_02ef8108(), (uVar8 & 1) == 0 &&
          ((*(float *)(lVar10 + 0xa4) <= 0.0 || (*(int *)(lVar10 + 0xa0) == 0)))))) &&
        (*(int *)(lVar10 + 0x78) == 0)))) {
      return 0;
    }
  }
  FUN_02e9e5b4(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  iVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x168) + 0x88))();
  if (*(int *)(param_1 + 0x38) == 0) {
    return 1;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  if (iVar6 == 10) {
LAB_02f257a4:
    lVar10 = DAT_0440a120;
    if ((*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x48) != *plVar7) ||
       ((int)plVar7[2] == 2)) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x38);
      uVar2 = *(uint *)(plVar7 + 1);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar10 + 0x60);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar12 = *(long **)(*(long *)(lVar10 + 0x58) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
          if (*(uint *)(plVar12 + 2) == uVar2) {
            *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            lVar10 = plVar12[0xd];
            if (((lVar10 == 0) ||
                ((((*(int *)(lVar10 + 4) == 0 && (*(int *)(lVar10 + 0xc) == 0)) &&
                  (*(int *)(lVar10 + 0x14) == 0)) && (*(int *)(lVar10 + 0x1c) == 0)))) &&
               ((((((iVar6 = (**(code **)(*plVar12 + 0x88))(plVar12), iVar6 != 10 &&
                    (*(char *)((long)plVar12 + 0xec) == '\0')) &&
                   (((*(uint *)((long)plVar12 + 0xaa) & 0x780000) == 0 &&
                    ((plVar12[0x11] != 0 && ((*(byte *)((long)plVar12 + 0xa2) & 0xe) == 0)))))) &&
                  (plVar12[0x19] == 0)) &&
                 (((*(uint *)((long)plVar12 + 0xaa) >> 0x12 & 1) == 0 && (plVar12[0x12] == 0)))) &&
                (((ulong *)plVar12[7] == (ulong *)0x0 ||
                 ((*(ulong *)plVar12[7] & 0x380000000020) == 0)))))) goto LAB_02f258d0;
            lStack_68 = *plVar7;
            lVar5 = plVar7[2];
            lVar10 = *(long *)(param_1 + 0x28);
            goto joined_r0x02f25844;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
    }
    goto LAB_02f258e0;
  }
LAB_02f255c0:
  lVar10 = DAT_0440a120;
  pMVar1 = (MutexType *)(DAT_0440a120 + 0x38);
  uVar2 = *(uint *)(plVar7 + 1);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar10 + 0x60);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    for (plVar12 = *(long **)(*(long *)(lVar10 + 0x58) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
        plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
      if (*(uint *)(plVar12 + 2) == uVar2) {
        *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        lVar10 = plVar12[0xd];
        if (((lVar10 == 0) ||
            ((((*(int *)(lVar10 + 4) == 0 && (*(int *)(lVar10 + 0xc) == 0)) &&
              (*(int *)(lVar10 + 0x14) == 0)) && (*(int *)(lVar10 + 0x1c) == 0)))) &&
           (((((iVar6 = (**(code **)(*plVar12 + 0x88))(plVar12), iVar6 != 10 &&
               (*(char *)((long)plVar12 + 0xec) == '\0')) &&
              (((*(uint *)((long)plVar12 + 0xaa) & 0x780000) == 0 &&
               ((plVar12[0x11] != 0 && ((*(byte *)((long)plVar12 + 0xa2) & 0xe) == 0)))))) &&
             ((plVar12[0x19] == 0 &&
              (((*(uint *)((long)plVar12 + 0xaa) >> 0x12 & 1) == 0 && (plVar12[0x12] == 0)))))) &&
            (((ulong *)plVar12[7] == (ulong *)0x0 || ((*(ulong *)plVar12[7] & 0x380000000020) == 0))
            )))) goto LAB_02f256c8;
        lStack_68 = *plVar7;
        lVar5 = plVar7[2];
        lVar10 = *(long *)(param_1 + 0x28);
        goto joined_r0x02f2563c;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  goto LAB_02f256d8;
joined_r0x02f25844:
  local_70 = plVar12;
  if (lVar10 == 0) goto LAB_02f25874;
  if ((*(long **)(*(long *)(lVar10 + 0x58) + 0x68) == plVar12) &&
     (*(long *)(*(long *)(lVar10 + 0x58) + 0x70) == lStack_68)) goto LAB_02f258d0;
  lVar10 = *(long *)(lVar10 + 0x48);
  goto joined_r0x02f25844;
LAB_02f25874:
  if (DAT_0440ae08 != 0) {
    lVar10 = (ulong)DAT_0440ae08 << 3;
    plVar11 = DAT_0440ae00;
    do {
      lVar9 = *plVar11;
      if (((*(long **)(lVar9 + 0x68) == plVar12) && (*(long *)(lVar9 + 0x70) == lStack_68)) &&
         ((*(long *)(lVar9 + 8) == 0 ||
          (*(char *)(*(long *)(*(long *)(lVar9 + 8) + 0x10) + 0x54) != '\0')))) goto LAB_02f258c4;
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  lVar9 = FUN_02f14e14(&local_70);
  if (lVar9 != 0) {
LAB_02f258c4:
    FUN_02f25d70(param_1,lVar9,(int)lVar5);
  }
LAB_02f258d0:
  (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_02f258e0:
  plVar7 = plVar7 + 4;
  if (plVar7 == (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x20)) {
    return 1;
  }
  goto LAB_02f257a4;
joined_r0x02f2563c:
  local_70 = plVar12;
  if (lVar10 == 0) goto LAB_02f2566c;
  if ((*(long **)(*(long *)(lVar10 + 0x58) + 0x68) == plVar12) &&
     (*(long *)(*(long *)(lVar10 + 0x58) + 0x70) == lStack_68)) goto LAB_02f256c8;
  lVar10 = *(long *)(lVar10 + 0x48);
  goto joined_r0x02f2563c;
LAB_02f2566c:
  if (DAT_0440ae08 != 0) {
    lVar10 = (ulong)DAT_0440ae08 << 3;
    plVar11 = DAT_0440ae00;
    do {
      lVar9 = *plVar11;
      if (((*(long **)(lVar9 + 0x68) == plVar12) && (*(long *)(lVar9 + 0x70) == lStack_68)) &&
         ((*(long *)(lVar9 + 8) == 0 ||
          (*(char *)(*(long *)(*(long *)(lVar9 + 8) + 0x10) + 0x54) != '\0')))) goto LAB_02f256bc;
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  lVar9 = FUN_02f14e14(&local_70);
  if (lVar9 != 0) {
LAB_02f256bc:
    FUN_02f25d70(param_1,lVar9,(int)lVar5);
  }
LAB_02f256c8:
  (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_02f256d8:
  plVar7 = plVar7 + 4;
  if (plVar7 == (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x20)) {
    return 1;
  }
  goto LAB_02f255c0;
}


