/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8425c; name: FUN_02e8425c
 */


void FUN_02e8425c(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 local_78 [18];
  
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((long)param_3 + 0x34) = param_4;
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(*DAT_0442d138)(0,0x18);
    if (puVar7 == (undefined8 *)0x0) {
      local_78[0] = 0;
      plVar5 = (long *)param_3[1];
      if ((*(short *)((long)plVar5 + 0x34) == 0x503) || (*(short *)((long)plVar5 + 0x34) == 0x403))
      {
        (**(code **)(*plVar5 + 0x58))(plVar5,local_78);
      }
      plVar5 = DAT_0440a170;
      uVar2 = *(uint *)(param_3 + 6);
      pMVar1 = (MutexType *)(DAT_0440a170 + 3);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(plVar5 + 1);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
            lVar6 = *(long *)(lVar6 + 0x68)) {
          if (*(uint *)(lVar6 + 0x4c) == uVar2) {
            *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
            FUN_02edcd9c(plVar5,uVar2);
            goto LAB_02e843f0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_02e843f0:
      (**(code **)(*(long *)param_3[1] + 0x18))();
      if (param_3 == (long *)0x0) {
        return;
      }
      (**(code **)(*param_3 + 8))(param_3);
      (*DAT_0442d150)(0,param_3);
      return;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar7;
  }
  *(uint *)(puVar7 + 1) = param_2;
  *(long **)(*(long *)(param_1 + 0x60) + 0x10) = param_3;
  puVar7 = *(undefined8 **)(param_1 + 0x50);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = puVar7;
    *(undefined8 *)(param_1 + 0x60) = *puVar7;
    *puVar7 = 0;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    if (param_2 < *(uint *)(puVar7 + 1)) {
      plVar9 = *(long **)(param_1 + 0x60);
      *(long **)(param_1 + 0x50) = plVar9;
      plVar5 = plVar9;
    }
    else {
      do {
        puVar8 = puVar7;
        puVar7 = (undefined8 *)*puVar8;
        if (puVar7 == (undefined8 *)0x0) {
          plVar9 = *(long **)(param_1 + 0x60);
          *(long **)(param_1 + 0x58) = plVar9;
          goto LAB_02e842c0;
        }
      } while (*(uint *)(puVar7 + 1) <= param_2);
      plVar9 = *(long **)(param_1 + 0x60);
LAB_02e842c0:
      *puVar8 = plVar9;
      plVar5 = *(long **)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x60) = *plVar5;
    *plVar9 = (long)puVar7;
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  return;
}


