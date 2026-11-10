/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030138dc; name: FUN_030138dc
 */


void FUN_030138dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  MutexType *pMVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  pMVar8 = (MutexType *)param_1[8];
  *param_1 = (long)&PTR_LAB_042c5f78;
  lVar2 = tpidr_el0;
  if (pMVar8 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar8);
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,pMVar8,0x20);
  }
  iVar6 = (int)param_1[10];
  if (0 < iVar6) {
    lVar11 = 0;
    lVar7 = 0;
    do {
      lVar9 = param_1[9];
      if (0.0 <= *(float *)(lVar9 + lVar11 + 0x28)) {
        if (*(long *)(lVar9 + lVar11 + 8) == 0) {
          uVar10 = *(ulong *)(lVar9 + lVar11);
        }
        else {
          FUN_032d647c();
          uVar10 = *(ulong *)(lVar9 + lVar11);
        }
        if ((uVar10 & 1) != 0) {
          lVar9 = *(long *)(lVar2 + 0x38d490);
          if (lVar9 == 0) {
            lVar9 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar9;
          }
          plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
          *(undefined8 *)(uVar10 - 0x11) = 0;
          (**(code **)(*plVar4 + 0x18))
                    (plVar4,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
        }
        iVar6 = (int)param_1[10];
      }
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + 0x50;
    } while (lVar7 < iVar6);
  }
  puVar3 = PTR_PTR_0434a080;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[0xb],(long)(int)param_1[0xc]);
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar3,param_1[9],0x50,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  cVar5 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar4 = (long *)(param_1[7] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[7] & 3U) == 0) {
        param_1[7] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[7] = 0;
        cVar5 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar5 == '\0') goto LAB_03013a8c;
    }
    plVar4 = (long *)(param_1[6] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[6] & 3U) == 0) {
        param_1[6] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[6] = 0;
        cVar5 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar5 == '\0') goto LAB_03013a8c;
    }
    plVar4 = (long *)(param_1[5] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[5] & 3U) == 0) {
        param_1[5] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[5] = 0;
        cVar5 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar5 == '\0') goto LAB_03013a8c;
    }
    plVar4 = (long *)(param_1[4] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[4] & 3U) == 0) {
        param_1[4] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[4] = 0;
        cVar5 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar5 == '\0') goto LAB_03013a8c;
    }
    plVar4 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[3] & 3U) == 0) {
        param_1[3] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[3] = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
LAB_03013a8c:
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


