/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94794; name: FUN_02e94794
 */


int FUN_02e94794(long param_1,undefined8 *param_2,long param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  char *__s;
  long lVar10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_3 + 0x18);
  lVar9 = DAT_0440a120;
  while( true ) {
    if (lVar10 == 0) {
      DAT_0440a120 = lVar9;
      return 1;
    }
    DAT_0440a120 = lVar9;
    if (*(short *)(lVar10 + 0x34) == 0x2103) break;
    if (*(short *)(lVar10 + 0x34) == 0x403) {
      uVar2 = *(uint *)(lVar10 + 0x38);
      *(uint *)((long)param_2 + 4) = uVar2;
      uVar3 = *(uint *)(param_1 + 0xd0);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar8 = *(long **)(*(long *)(param_1 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (*(uint *)(plVar8 + 1) == uVar2) {
            __s = (char *)plVar8[2];
            if (*(char *)(param_2 + 2) != '\0') {
              (*DAT_0442d150)(0,param_2[1]);
            }
            param_2[1] = 0;
            *(undefined1 *)(param_2 + 2) = 0;
            sVar7 = strlen(__s);
            if ((((sVar7 < 5) || (__s[sVar7 - 4] != '.')) || (__s[sVar7 - 3] != 'b')) ||
               ((__s[sVar7 - 2] != 'n' || (__s[sVar7 - 1] != 'k')))) {
              FUN_02e8e48c(param_2 + 1,__s,&DAT_039b7b72);
            }
            else {
              param_2[1] = __s;
              *(undefined1 *)(param_2 + 2) = 0;
            }
            break;
          }
        }
      }
      local_a8 = *param_2;
      local_a0 = param_2[1];
      uStack_98 = param_2[2];
      local_90 = param_2[3];
      uStack_88 = param_2[4];
      local_80 = param_2[5];
      uStack_78 = param_2[6];
      local_70 = param_2[7];
      uStack_68 = param_2[8];
      iVar6 = FUN_02e94ae4(param_1,&local_a8,2,0,0);
      if (iVar6 != 1) goto LAB_02e949c8;
      iVar6 = FUN_02ed52f0(*(undefined4 *)(lVar10 + 0x30));
      if (iVar6 != 1) {
        FUN_02e94c9c(param_1,*(undefined4 *)(lVar10 + 0x38),0,0);
        goto LAB_02e949c8;
      }
    }
LAB_02e9481c:
    lVar10 = *(long *)(lVar10 + 0x18);
    lVar9 = DAT_0440a120;
  }
  pMVar1 = (MutexType *)(lVar9 + 0xa8);
  uVar2 = *(uint *)(lVar10 + 0x30);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar9 + 0xd0);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
    if (plVar8 != (long *)0x0) {
      while (*(uint *)(plVar8 + 2) != uVar2) {
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) goto LAB_02e949bc;
      }
      *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
      nn::os::UnlockMutex(pMVar1);
      iVar6 = FUN_02e94794(param_1,param_2,plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (iVar6 != 1) goto LAB_02e949c8;
      goto LAB_02e9481c;
    }
  }
LAB_02e949bc:
  nn::os::UnlockMutex(pMVar1);
  iVar6 = 2;
LAB_02e949c8:
  lVar9 = *(long *)(param_3 + 0x18);
  do {
    if (lVar9 == lVar10) {
      return iVar6;
    }
    while( true ) {
      lVar5 = DAT_0440a120;
      if (*(short *)(lVar9 + 0x34) != 0x2103) break;
      pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
      uVar2 = *(uint *)(lVar9 + 0x30);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar5 + 0xd0);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar8 = *(long **)(*(long *)(lVar5 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
          if (*(uint *)(plVar8 + 2) == uVar2) {
            *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            FUN_02e94d58(param_1,plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            goto LAB_02e94a08;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 == lVar10) {
        return iVar6;
      }
    }
    if (*(short *)(lVar9 + 0x34) == 0x403) {
      FUN_02ed53a8(*(undefined4 *)(lVar9 + 0x30));
      FUN_02e94c9c(param_1,*(undefined4 *)(lVar9 + 0x38),0,0);
      lVar9 = *(long *)(lVar9 + 0x18);
    }
    else {
LAB_02e94a08:
      lVar9 = *(long *)(lVar9 + 0x18);
    }
  } while( true );
}


