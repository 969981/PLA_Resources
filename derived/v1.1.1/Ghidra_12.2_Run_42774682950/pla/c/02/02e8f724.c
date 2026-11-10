/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8f724; name: FUN_02e8f724
 */


undefined8 FUN_02e8f724(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar5 = param_2[1];
  if (param_2[10] == 2) {
    lVar10 = *(long *)(param_2 + 0xc);
  }
  else {
    lVar10 = 0;
  }
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar2 = *(uint *)(param_1 + 0x16);
  if (uVar2 != 0) {
    uVar1 = uVar5 + (int)lVar10;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (puVar11 = *(uint **)(param_1[0x15] + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 4)) {
      if ((*puVar11 == uVar5) && (*(long *)(puVar11 + 2) == lVar10)) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if ((puVar11[0x1a] & 1) != 0) {
          FUN_02e97998(param_1 + 0x15,uVar5,lVar10);
          nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
                    /* WARNING: Could not recover jumptable at 0x02e8f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (**(code **)(*param_1 + 0x48))
                            (param_1,puVar11,*(undefined8 *)(param_2 + 6),
                             *(undefined8 *)(param_2 + 8));
          return uVar8;
        }
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        uVar5 = *param_2;
        if (uVar5 < 2) {
LAB_02e8f8c8:
          uVar5 = param_2[1];
        }
        else if (uVar5 - 2 < 2) {
          uVar5 = param_2[0xe];
          if (param_2[0xc] != 1) {
            uVar5 = 0;
          }
        }
        else {
          if (uVar5 - 6 < 2) goto LAB_02e8f8c8;
          uVar5 = 0;
        }
        uVar2 = param_2[10];
        uVar8 = *(undefined8 *)(param_2 + 0xc);
        uVar4 = *(undefined8 *)(param_2 + 6);
        uVar7 = *(undefined8 *)(param_2 + 8);
        uVar9 = 2;
        *(undefined4 *)((long)param_1 + 0xf4) = 2;
        if (uVar2 != 2) {
          uVar8 = 0;
        }
        uVar6 = 2;
        goto LAB_02e8f7dc;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  uVar5 = *param_2;
  if (1 < uVar5) {
    if (uVar5 - 2 < 2) {
      uVar5 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar5 = 0;
      }
      goto LAB_02e8f7b8;
    }
    if (1 < uVar5 - 6) {
      uVar5 = 0;
      goto LAB_02e8f7b8;
    }
  }
  uVar5 = param_2[1];
LAB_02e8f7b8:
  uVar2 = param_2[10];
  uVar8 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar9 = 0x36;
  uVar6 = 0x36;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x36;
  if (uVar2 != 2) {
    uVar8 = 0;
  }
LAB_02e8f7dc:
  FUN_02e9823c(param_1 + 0x1f,uVar4,uVar5,uVar8,uVar6,uVar7);
  return uVar9;
}


