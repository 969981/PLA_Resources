/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e88e74; name: FUN_02e88e74
 */


void FUN_02e88e74(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  MutexType *pMVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long alStack_430 [128];
  undefined8 *local_28;
  
  lVar6 = DAT_0440a120;
  if (*(char *)(param_2 + 9) == '\0') {
    return;
  }
  pMVar2 = (MutexType *)(DAT_0440a120 + 0x1c0);
  nn::os::LockMutex(pMVar2);
  if (*(uint *)(lVar6 + 0x1f0) != 0) {
    local_28 = (undefined8 *)
               ((long)alStack_430 +
               (0x400 - ((ulong)*(uint *)(lVar6 + 0x1f0) * 8 + 0xf & 0xffffffff0)));
    uVar3 = *(uint *)(lVar6 + 0x1e8);
    if (uVar3 != 0) {
      plVar4 = *(long **)(lVar6 + 0x1e0);
      lVar6 = *plVar4;
      if (lVar6 == 0) {
        uVar5 = 0;
        do {
          if (uVar3 - 1 == uVar5) goto LAB_02e88f28;
          uVar5 = uVar5 + 1;
          lVar6 = plVar4[uVar5 & 0xffffffff];
        } while (lVar6 == 0);
      }
      else {
        uVar5 = 0;
      }
      uVar7 = 0;
      do {
        do {
          local_28[uVar7] = lVar6;
          lVar6 = *(long *)(lVar6 + 8);
          uVar7 = uVar7 + 1;
        } while (lVar6 != 0);
        do {
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar3 <= uVar1) {
            nn::os::UnlockMutex(pMVar2);
            if ((int)uVar7 == 0) {
              return;
            }
            uVar7 = uVar7 & 0xffffffff;
            do {
              FUN_02eaa3a4(*local_28,*param_2,*(undefined8 *)(param_2 + 2));
              uVar7 = uVar7 - 1;
              local_28 = local_28 + 1;
            } while (uVar7 != 0);
            return;
          }
          lVar6 = plVar4[uVar1];
        } while (lVar6 == 0);
      } while( true );
    }
  }
LAB_02e88f28:
  nn::os::UnlockMutex(pMVar2);
  return;
}


