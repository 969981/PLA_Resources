/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6c6c; name: FUN_02ed6c6c
 */


void FUN_02ed6c6c(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  uint local_34;
  
  lVar9 = DAT_0440a120;
  while ((((*(byte *)(param_1 + 0xab) >> 5 & 1) == 0 && (*(long *)(param_1 + 0x80) != 0)) &&
         (*(long *)(param_1 + 0x88) == 0))) {
    param_1 = *(long *)(param_1 + 0x80);
  }
  local_34 = DAT_0440a8e0._4_4_;
  puVar6 = *(uint **)(param_1 + 0x98);
  puVar7 = puVar6;
  if (puVar6 != (uint *)0x0) {
    uVar8 = 0;
    puVar7 = (uint *)((long)puVar6 + ((ulong)((byte)*puVar6 + 4) & 0x1fc));
    do {
      if (*(char *)((long)puVar6 + uVar8 + 1) == '9') goto LAB_02ed6ce8;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 < (byte)*puVar6);
    puVar7 = (uint *)0x0;
  }
LAB_02ed6ce8:
  puVar6 = &local_34;
  if (puVar7 != (uint *)0x0) {
    puVar6 = puVar7;
  }
  uVar2 = *puVar6;
  if (uVar2 == 0xffffffff) {
    plVar5 = (long *)*param_2;
    *param_2 = 0;
  }
  else {
    pMVar1 = (MutexType *)(DAT_0440a120 + 0x268);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar9 + 0x290);
    if (uVar3 == 0) {
      lVar9 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (lVar9 = *(long *)(*(long *)(lVar9 + 0x288) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if (*(uint *)(lVar9 + 0x10) == uVar2) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    plVar5 = (long *)*param_2;
    *param_2 = lVar9;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


