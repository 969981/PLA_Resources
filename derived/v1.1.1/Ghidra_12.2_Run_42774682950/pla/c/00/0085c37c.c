/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085c37c; name: FUN_0085c37c
 */


void FUN_0085c37c(long *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  long local_1e0 [24];
  long local_120 [24];
  
  if ((param_3 != 0) && (*(short *)((long)param_1 + 0x114e) != 0)) {
    lVar8 = 0;
    uVar9 = 0;
    uVar10 = param_3 & 1;
    do {
      if ((uVar10 == 0) ||
         (uVar3 = FUN_007f0ee4(*(long *)(param_1[0x11] + lVar8 * 8) + 0x10), (uVar3 & 1) == 0)) {
        if ((ulong)*(ushort *)((long)param_1 + 0x114e) <= lVar8 + 1U) goto LAB_0085c428;
      }
      else {
        lVar4 = FUN_007f10e8(*(long *)(param_1[0x11] + lVar8 * 8) + 0x10);
        local_120[(int)uVar9] = lVar4;
        uVar9 = uVar9 + 1;
        if ((ulong)*(ushort *)((long)param_1 + 0x114e) <= lVar8 + 1U) goto LAB_0085c428;
      }
      lVar8 = lVar8 + 1;
      uVar10 = 1 << (ulong)((uint)lVar8 & 0x1f) & param_3;
    } while( true );
  }
LAB_0085c550:
  uVar10 = 0;
joined_r0x0085c580:
  if (param_4 != (uint *)0x0) {
    *param_4 = *param_4 | uVar10;
  }
  return;
LAB_0085c428:
  if (0 < (int)uVar9) {
    uVar10 = 0;
    iVar7 = 0;
    uVar3 = (ulong)uVar9;
    plVar11 = local_120;
    do {
      FUN_007f0ce0(auStack_200);
      nn::os::LockMutex((MutexType *)(param_1 + 0x26f));
      lVar8 = *plVar11;
      plVar5 = (long *)FUN_0085e934(param_1[0x261],lVar8);
      if (plVar5 == (long *)0x0) {
LAB_0085c4e0:
        lVar4 = lVar8;
LAB_0085c4e4:
        local_1e0[iVar7] = lVar4;
        iVar7 = iVar7 + 1;
        uVar6 = (**(code **)(*param_1 + 0x3b0))(param_1);
        if ((uVar6 & 1) != 0) {
          FUN_007f0ce0(auStack_220);
          FUN_007f110c(auStack_220,lVar4);
          FUN_007f1158(auStack_220,0x4e96);
          iVar2 = FUN_007fa6fc(param_1,auStack_220);
          if (-0x10000 < iVar2 * 0x10000) {
            uVar10 = 1 << (ulong)(iVar2 * 0x10000 >> 0x10 & 0x1f) | uVar10;
          }
        }
      }
      else {
        if ((int)plVar5[2] != 0xd) {
          lVar4 = *plVar5;
          if (*plVar5 == -1) goto LAB_0085c4e0;
          goto LAB_0085c4e4;
        }
        plVar1 = plVar5 + 7;
        if ((char)plVar5[0xb] != '\0') {
          plVar1 = plVar5 + 3;
        }
        FUN_007e3428(auStack_220,plVar1);
        FUN_007f105c(auStack_200,auStack_220);
        FUN_007e34a4(auStack_220);
        FUN_007f9fcc(param_1,param_2,auStack_200);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x26f));
      plVar11 = plVar11 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (0 < iVar7) {
      (**(code **)(*param_1 + 0x3a8))(param_1,param_2,local_1e0,iVar7);
    }
    goto joined_r0x0085c580;
  }
  goto LAB_0085c550;
}


