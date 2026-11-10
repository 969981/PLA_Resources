/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e813f0; name: FUN_02e813f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e813f0(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  byte *pbVar12;
  ulong *puVar13;
  uint uVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  MutexType *pMVar18;
  ulong local_98 [9];
  long local_48;
  
  plVar2 = DAT_0440a170;
  uVar16 = *(uint *)(param_2 + 6);
  if (uVar16 != 0) {
    pMVar18 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar18);
    uVar6 = *(uint *)(plVar2 + 1);
    if (uVar6 != 0) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar16 / uVar6;
      }
      for (lVar7 = *(long *)(*plVar2 + (ulong)(uVar16 - uVar11 * uVar6) * 8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x68)) {
        if (*(uint *)(lVar7 + 0x4c) == uVar16) {
          *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex(pMVar18);
  }
  (**(code **)(*(long *)param_2[1] + 0x10))();
  local_98[0] = CONCAT44(local_98[0]._4_4_,DAT_0440a838._4_4_);
  pbVar12 = *(byte **)(param_2[1] + 0x20);
  if (pbVar12 == (byte *)0x0) {
    puVar15 = (ulong *)0x0;
  }
  else {
    uVar9 = 0;
    puVar13 = (ulong *)(pbVar12 + ((ulong)(*pbVar12 + 4) & 0x1fc));
    do {
      puVar15 = puVar13;
      if (pbVar12[uVar9 + 1] == 0xf) break;
      uVar9 = uVar9 + 1;
      puVar15 = (ulong *)0x0;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (uVar9 < *pbVar12);
  }
  pbVar12 = *(byte **)(param_2[1] + 0x28);
  puVar13 = local_98;
  if (puVar15 != (ulong *)0x0) {
    puVar13 = puVar15;
  }
  iVar17 = (int)*puVar13;
  if (pbVar12 != (byte *)0x0) {
    uVar9 = 0;
    pbVar4 = pbVar12 + ((ulong)(*pbVar12 + 4) & 0x1fc);
    do {
      if (pbVar12[uVar9 + 1] == 0xf) {
        iVar1 = FUN_02e87b38(pbVar4);
        iVar17 = iVar1 + iVar17;
        break;
      }
      uVar9 = uVar9 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar9 < *pbVar12);
  }
  uVar16 = iVar17 + param_3;
  uVar6 = 0;
  if (DAT_042ab268 != 0) {
    uVar6 = uVar16 / DAT_042ab268;
  }
  iVar17 = *(int *)(param_1 + 0x78);
  uVar11 = (uint)DAT_042ab268;
  *(int *)(param_2 + 2) = iVar17;
  *(uint *)((long)param_2 + 0x14) = uVar16 - uVar6 * uVar11;
  if (uVar16 < uVar11) {
    lVar7 = param_2[8];
    if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x40) != 0)) &&
        (lVar7 = **(long **)(lVar7 + 0x38), lVar7 != 0)) && ((*(byte *)(lVar7 + 0x54) & 1) != 0)) {
      local_98[0] = 0;
      local_48 = 0;
      if (((*(uint *)(*(long *)(lVar7 + 8) + 0x40) < 2) ||
          (lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x38) + 8), lVar5 == 0)) &&
         (lVar5 = DAT_0440a410, DAT_0440a410 == 0)) {
        FUN_02e43d1c();
        lVar5 = DAT_0440a410;
      }
      *(undefined4 *)(lVar7 + 0x48) = 0;
      FUN_02ef013c(lVar7,lVar7 + 0x40,lVar5 + 0xa0,lVar5,&local_48,local_98);
      if ((local_98[0] != 0) && (local_48 != 0)) {
        FUN_02ef0870(lVar7);
      }
      *(byte *)(lVar7 + 0x54) = *(byte *)(lVar7 + 0x54) & 0xfe;
    }
    (**(code **)(*(long *)param_2[1] + 0x40))((long *)param_2[1],param_2);
    plVar2 = DAT_0440a170;
    uVar16 = *(uint *)(param_2 + 6);
    if (uVar16 == 0) goto LAB_02e81568;
    pMVar18 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar18);
    uVar6 = *(uint *)(plVar2 + 1);
    if (uVar6 != 0) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar16 / uVar6;
      }
      for (lVar7 = *(long *)(*plVar2 + (ulong)(uVar16 - uVar11 * uVar6) * 8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x68)) {
        if (*(uint *)(lVar7 + 0x4c) == uVar16) goto LAB_02e81550;
      }
    }
LAB_02e815c8:
    nn::os::UnlockMutex(pMVar18);
LAB_02e81568:
    (**(code **)(*(long *)param_2[1] + 0x18))();
    (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x02e815b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0442d150)(0,param_2);
    return;
  }
  plVar2 = (long *)param_2[1];
  if (*(short *)((long)plVar2 + 0x34) == 0x503) {
    uVar14 = uVar6;
    if (_DAT_0440a1ac <= uVar6) {
      uVar14 = _DAT_0440a1ac;
    }
    uVar6 = uVar6 - uVar14;
    *(uint *)((long)param_2 + 0x14) = uVar16 - uVar6 * uVar11;
    if (uVar6 == 0) {
      lVar7 = param_2[8];
      if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x40) != 0)) &&
          (lVar7 = **(long **)(lVar7 + 0x38), lVar7 != 0)) && ((*(byte *)(lVar7 + 0x54) & 1) != 0))
      {
        local_98[0] = 0;
        local_48 = 0;
        if (((*(uint *)(*(long *)(lVar7 + 8) + 0x40) < 2) ||
            (lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x38) + 8), lVar5 == 0)) &&
           (lVar5 = DAT_0440a410, DAT_0440a410 == 0)) {
          FUN_02e43d1c();
          lVar5 = DAT_0440a410;
        }
        *(undefined4 *)(lVar7 + 0x48) = 0;
        FUN_02ef013c(lVar7,lVar7 + 0x40,lVar5 + 0xa0,lVar5,&local_48,local_98);
        if ((local_98[0] != 0) && (local_48 != 0)) {
          FUN_02ef0870(lVar7);
        }
        *(byte *)(lVar7 + 0x54) = *(byte *)(lVar7 + 0x54) & 0xfe;
        plVar2 = (long *)param_2[1];
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      plVar2 = DAT_0440a170;
      uVar16 = *(uint *)(param_2 + 6);
      if (uVar16 == 0) goto LAB_02e81568;
      pMVar18 = (MutexType *)(DAT_0440a170 + 3);
      nn::os::LockMutex(pMVar18);
      uVar6 = *(uint *)(plVar2 + 1);
      if (uVar6 != 0) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar16 / uVar6;
        }
        for (lVar7 = *(long *)(*plVar2 + (ulong)(uVar16 - uVar11 * uVar6) * 8); lVar7 != 0;
            lVar7 = *(long *)(lVar7 + 0x68)) {
          if (*(uint *)(lVar7 + 0x4c) == uVar16) goto LAB_02e81550;
        }
      }
      goto LAB_02e815c8;
    }
  }
  uVar6 = uVar6 + iVar17;
  *(uint *)(param_2 + 2) = uVar6;
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x18);
    if (puVar3 == (undefined8 *)0x0) goto LAB_02e81568;
    *puVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar3;
  }
  *(uint *)(puVar3 + 1) = uVar6;
  *(long **)(*(long *)(param_1 + 0x38) + 0x10) = param_2;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(undefined8 *)(param_1 + 0x38) = *puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    if (uVar6 < *(uint *)(puVar3 + 1)) {
      plVar10 = *(long **)(param_1 + 0x38);
      *(long **)(param_1 + 0x28) = plVar10;
      plVar2 = plVar10;
    }
    else {
      do {
        puVar8 = puVar3;
        puVar3 = (undefined8 *)*puVar8;
        if (puVar3 == (undefined8 *)0x0) {
          plVar10 = *(long **)(param_1 + 0x38);
          *(long **)(param_1 + 0x30) = plVar10;
          goto LAB_02e8170c;
        }
      } while (*(uint *)(puVar3 + 1) <= uVar6);
      plVar10 = *(long **)(param_1 + 0x38);
LAB_02e8170c:
      *puVar8 = plVar10;
      plVar2 = *(long **)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x38) = *plVar2;
    *plVar10 = (long)puVar3;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  local_98[0] = local_98[0] & 0xffffffff00000000;
  plVar2 = (long *)param_2[1];
  if (*(short *)((long)plVar2 + 0x34) == 0x503) {
    if (*(char *)((long)plVar2 + 0xc4) == '\0') {
      return;
    }
  }
  else if (*(short *)((long)plVar2 + 0x34) != 0x403) {
    return;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,local_98);
  return;
LAB_02e81550:
  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + -1;
  FUN_02edcd9c(plVar2,uVar16);
  goto LAB_02e81568;
}


