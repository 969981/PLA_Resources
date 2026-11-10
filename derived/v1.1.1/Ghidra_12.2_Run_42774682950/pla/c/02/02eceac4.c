/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eceac4; name: FUN_02eceac4
 */


void FUN_02eceac4(long *param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  lVar8 = param_1[0x2a];
  *(undefined4 *)(param_1 + 0x25) = 0x42ca0000;
  lVar7 = DAT_0440a120;
  if (lVar8 == 0) {
    uVar3 = *(uint *)((long)param_1 + 0x13c);
    if (uVar3 != 0) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar2 = *(uint *)(lVar7 + 0x178);
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        for (lVar8 = *(long *)(*(long *)(lVar7 + 0x170) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
            lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
          if (*(uint *)(lVar8 + 0x10) == uVar3) {
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            param_1[0x2a] = lVar8;
            if (-1 < *(char *)((long)param_1 + 0x14c)) goto LAB_02eceaf8;
            goto LAB_02eceaf0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      param_1[0x2a] = 0;
      lVar8 = param_1[0x2f];
      goto joined_r0x02ecebbc;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x14c) < '\0') {
LAB_02eceaf0:
      if ((*(byte *)(param_1 + 0x33) >> 3 & 1) != 0) goto LAB_02eceb48;
    }
LAB_02eceaf8:
    if (*(int *)(param_1[5] + 0x40) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = **(long **)(param_1[5] + 0x38);
    }
    uVar5 = FUN_02eef860();
    fVar9 = (float)FUN_02f0fde0(lVar7 + 0x20,uVar5);
    (**(code **)(*param_1 + 0xb0))
              (fVar9 / *(float *)(**(long **)(param_1[5] + 0x38) + 0x50),param_1,lVar8);
  }
LAB_02eceb48:
  lVar8 = param_1[0x2f];
joined_r0x02ecebbc:
  if ((((lVar8 == 0) || (param_1[0x21] == 0)) ||
      (uVar3 = *(uint *)(lVar8 + 0x30), FUN_02edbedc(param_1[0x21],uVar3 >> 0x1f), -1 < (int)uVar3))
     || ((((*(byte *)(param_1[0x21] + 0x28) >> 1 & 1) == 0 ||
          (uVar6 = FUN_02edbaf8(), (uVar6 & 1) == 0)) || (param_1[0x21] == 0)))) {
    return;
  }
  lVar8 = param_1[0x30];
  do {
    if (*(long *)(lVar8 + 0x70) != 0) {
      lVar8 = *(long *)(lVar8 + 0x70) + 0x38;
      goto LAB_02ecec48;
    }
    lVar8 = *(long *)(lVar8 + 0x80);
  } while (lVar8 != 0);
  lVar8 = 0;
LAB_02ecec48:
  FUN_02edc9e8(DAT_0440a158,param_1[0x21],lVar8);
  return;
}


