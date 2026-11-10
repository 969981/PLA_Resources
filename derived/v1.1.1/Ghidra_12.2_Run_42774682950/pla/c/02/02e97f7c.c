/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97f7c; name: FUN_02e97f7c
 */


undefined8 FUN_02e97f7c(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  plVar6 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar4;
  plVar3 = plVar6 + uVar11 * 2;
  plVar7 = plVar6;
  if ((uVar4 != 0) && (*plVar6 != param_2)) {
    lVar8 = uVar11 * 0x10;
    plVar9 = plVar6;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_02e97fcc;
      plVar7 = plVar9 + 2;
      plVar1 = plVar9 + 2;
      plVar9 = plVar7;
    } while (*plVar1 != param_2);
  }
  if (plVar7 == plVar3) {
LAB_02e97fcc:
    if ((uVar4 != 0) && (*plVar6 != param_2)) {
      lVar8 = uVar11 * 0x10;
      plVar7 = plVar6;
      do {
        lVar8 = lVar8 + -0x10;
        if (lVar8 == 0) goto LAB_02e97fe8;
        plVar6 = plVar7 + 2;
        plVar9 = plVar7 + 2;
        plVar7 = plVar6;
      } while (*plVar9 != param_2);
    }
    if (plVar6 == plVar3) {
LAB_02e97fe8:
      uVar5 = *(uint *)((long)param_1 + 0xc);
      if (uVar4 < uVar5) {
joined_r0x02e98060:
        if (uVar4 < uVar5) {
          uVar4 = *(uint *)(param_1 + 1);
          *(uint *)(param_1 + 1) = uVar4 + 1;
          plVar7 = (long *)(*param_1 + (ulong)uVar4 * 0x10);
          if (plVar7 != (long *)0x0) {
            uVar10 = 1;
            *(undefined8 *)(*param_1 + (ulong)uVar4 * 0x10 + 8) = 1;
            *plVar7 = param_2;
            goto LAB_02e98024;
          }
        }
      }
      else {
        iVar2 = uVar5 + (uVar5 >> 1);
        if (uVar5 == 0) {
          iVar2 = 1;
        }
        uVar11 = FUN_02e984d4(param_1,iVar2);
        if ((uVar11 & 1) != 0) {
          uVar5 = *(uint *)((long)param_1 + 0xc);
          goto joined_r0x02e98060;
        }
      }
      uVar10 = 0x34;
      goto LAB_02e98024;
    }
  }
  else {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  }
  uVar10 = 1;
LAB_02e98024:
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar10;
}


