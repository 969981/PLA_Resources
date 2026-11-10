/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38740; name: FUN_02f38740
 */


int FUN_02f38740(undefined1 *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  MutexType *pMVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  uint local_54;
  
  lVar5 = DAT_0440a148;
  pMVar7 = DAT_0440a120;
  switch(*param_1) {
  case 10:
    lVar10 = DAT_0440a148 + 8;
    uVar2 = *(uint *)(param_1 + 1);
    puVar11 = (uint *)(lVar10 + (ulong)*(uint *)(DAT_0440a148 + 0x28) * 4 + 0x18);
    uVar3 = *puVar11;
    if (uVar3 < uVar2) {
      uVar4 = uVar2;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = uVar2 + 0x1f;
      }
      lVar9 = (*DAT_0442d140)(0,uVar4,0x20);
      *(long *)(lVar5 + 0x40) = lVar9;
      if (lVar9 == 0) {
        return 2;
      }
      uVar4 = 0;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = 0x20 - (uVar3 & 0x1f);
      }
      puVar11 = (uint *)(lVar9 + (ulong)uVar4);
      iVar6 = FUN_02e9b7a4(lVar10,puVar11,uVar2,&local_54);
      if (iVar6 != 1 || local_54 != uVar2) {
LAB_02f38cdc:
        (*DAT_0442d158)(0,*(undefined8 *)(lVar5 + 0x40));
        *(undefined8 *)(lVar5 + 0x40) = 0;
        return 2;
      }
LAB_02f388ac:
      if (puVar11 == (uint *)0x0) {
        return 2;
      }
    }
    else {
      *puVar11 = uVar3 - uVar2;
      puVar11 = *(uint **)(lVar5 + 0x58);
      if (puVar11 == (uint *)0x0) {
        puVar11 = *(uint **)(lVar5 + 0x18);
        *(ulong *)(lVar5 + 0x18) = (long)puVar11 + (ulong)uVar2;
        goto LAB_02f388ac;
      }
      *(ulong *)(lVar5 + 0x58) = (long)puVar11 + (ulong)uVar2;
    }
    uVar2 = *puVar11;
    nn::os::LockMutex(pMVar7);
    uVar3 = *(uint *)(pMVar7 + 0x28);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar12 = *(long **)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        if (*(uint *)(plVar12 + 2) == uVar2) goto LAB_02f38b3c;
      }
    }
    nn::os::UnlockMutex(pMVar7);
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    plVar12 = (long *)FUN_02f41c04(uVar2);
    if (plVar12 == (long *)0x0) {
LAB_02f38dd4:
      iVar6 = 2;
      goto LAB_02f38dd8;
    }
    iVar6 = FUN_02f41d6c(plVar12,puVar11,*(undefined4 *)(param_1 + 1));
    break;
  case 0xb:
    lVar10 = DAT_0440a148 + 8;
    uVar2 = *(uint *)(param_1 + 1);
    puVar11 = (uint *)(lVar10 + (ulong)*(uint *)(DAT_0440a148 + 0x28) * 4 + 0x18);
    uVar3 = *puVar11;
    if (uVar3 < uVar2) {
      uVar4 = uVar2;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = uVar2 + 0x1f;
      }
      lVar9 = (*DAT_0442d140)(0,uVar4,0x20);
      *(long *)(lVar5 + 0x40) = lVar9;
      if (lVar9 == 0) {
        return 2;
      }
      uVar4 = 0;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = 0x20 - (uVar3 & 0x1f);
      }
      puVar11 = (uint *)(lVar9 + (ulong)uVar4);
      iVar6 = FUN_02e9b7a4(lVar10,puVar11,uVar2,&local_54);
      if (iVar6 != 1 || local_54 != uVar2) goto LAB_02f38cdc;
LAB_02f387cc:
      if (puVar11 == (uint *)0x0) {
        return 2;
      }
    }
    else {
      *puVar11 = uVar3 - uVar2;
      puVar11 = *(uint **)(lVar5 + 0x58);
      if (puVar11 == (uint *)0x0) {
        puVar11 = *(uint **)(lVar5 + 0x18);
        *(ulong *)(lVar5 + 0x18) = (long)puVar11 + (ulong)uVar2;
        goto LAB_02f387cc;
      }
      *(ulong *)(lVar5 + 0x58) = (long)puVar11 + (ulong)uVar2;
    }
    pMVar7 = DAT_0440a120;
    uVar2 = *puVar11;
    nn::os::LockMutex(DAT_0440a120);
    uVar3 = *(uint *)(pMVar7 + 0x28);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar12 = *(long **)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        if (*(uint *)(plVar12 + 2) == uVar2) {
          *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar7);
          if (((int)plVar12[0x1a] != 0) && (uVar8 = FUN_02f4a63c(plVar12), (uVar8 & 1) != 0))
          goto LAB_02f38958;
          nn::os::LockMutex((MutexType *)&DAT_0440a210);
          iVar6 = FUN_02f49600(plVar12,puVar11,*(undefined4 *)(param_1 + 1),param_2,1);
          nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
          if (iVar6 == 1) goto LAB_02f38958;
          (**(code **)(*plVar12 + 0x18))(plVar12);
          lVar10 = *(long *)(lVar5 + 0x40);
          goto joined_r0x02f38bf0;
        }
      }
    }
    nn::os::UnlockMutex(pMVar7);
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    plVar12 = (long *)FUN_02f4948c(uVar2);
    if (plVar12 == (long *)0x0) {
      iVar6 = 2;
    }
    else {
      iVar6 = FUN_02f49600(plVar12,puVar11,*(undefined4 *)(param_1 + 1),param_2,0);
      if (iVar6 == 1) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
LAB_02f38958:
        uVar2 = *(uint *)(param_2 + 0x58);
        if (uVar2 < *(uint *)(param_2 + 0x5c)) {
          *(uint *)(param_2 + 0x58) = uVar2 + 1;
          plVar1 = (long *)(*(long *)(param_2 + 0x50) + (ulong)uVar2 * 8);
          if (plVar1 != (long *)0x0) {
            *plVar1 = (long)plVar12;
          }
        }
        iVar6 = 1;
        lVar10 = *(long *)(lVar5 + 0x40);
        goto joined_r0x02f38e30;
      }
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
    lVar10 = *(long *)(lVar5 + 0x40);
joined_r0x02f38e30:
    if (lVar10 == 0) {
      return iVar6;
    }
    (*DAT_0442d158)(0);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    return iVar6;
  case 0xc:
    lVar10 = DAT_0440a148 + 8;
    uVar2 = *(uint *)(param_1 + 1);
    puVar11 = (uint *)(lVar10 + (ulong)*(uint *)(DAT_0440a148 + 0x28) * 4 + 0x18);
    uVar3 = *puVar11;
    if (uVar3 < uVar2) {
      uVar4 = uVar2;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = uVar2 + 0x1f;
      }
      lVar9 = (*DAT_0442d140)(0,uVar4,0x20);
      *(long *)(lVar5 + 0x40) = lVar9;
      if (lVar9 == 0) {
        return 2;
      }
      uVar4 = 0;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = 0x20 - (uVar3 & 0x1f);
      }
      puVar11 = (uint *)(lVar9 + (ulong)uVar4);
      iVar6 = FUN_02e9b7a4(lVar10,puVar11,uVar2,&local_54);
      if (iVar6 != 1 || local_54 != uVar2) goto LAB_02f38cdc;
LAB_02f38ac0:
      if (puVar11 == (uint *)0x0) {
        return 2;
      }
    }
    else {
      *puVar11 = uVar3 - uVar2;
      puVar11 = *(uint **)(lVar5 + 0x58);
      if (puVar11 == (uint *)0x0) {
        puVar11 = *(uint **)(lVar5 + 0x18);
        *(ulong *)(lVar5 + 0x18) = (long)puVar11 + (ulong)uVar2;
        goto LAB_02f38ac0;
      }
      *(ulong *)(lVar5 + 0x58) = (long)puVar11 + (ulong)uVar2;
    }
    uVar2 = *puVar11;
    nn::os::LockMutex(pMVar7);
    uVar3 = *(uint *)(pMVar7 + 0x28);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar12 = *(long **)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        if (*(uint *)(plVar12 + 2) == uVar2) goto LAB_02f38b3c;
      }
    }
    nn::os::UnlockMutex(pMVar7);
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    plVar12 = (long *)FUN_02f431dc(uVar2);
    if (plVar12 == (long *)0x0) goto LAB_02f38dd4;
    iVar6 = FUN_02f43380(plVar12,puVar11,*(undefined4 *)(param_1 + 1));
    break;
  case 0xd:
    lVar10 = DAT_0440a148 + 8;
    uVar2 = *(uint *)(param_1 + 1);
    puVar11 = (uint *)(lVar10 + (ulong)*(uint *)(DAT_0440a148 + 0x28) * 4 + 0x18);
    uVar3 = *puVar11;
    if (uVar3 < uVar2) {
      uVar4 = uVar2;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = uVar2 + 0x1f;
      }
      lVar9 = (*DAT_0442d140)(0,uVar4,0x20);
      *(long *)(lVar5 + 0x40) = lVar9;
      if (lVar9 == 0) {
        return 2;
      }
      uVar4 = 0;
      if ((uVar3 & 0x1f) != 0) {
        uVar4 = 0x20 - (uVar3 & 0x1f);
      }
      puVar11 = (uint *)(lVar9 + (ulong)uVar4);
      iVar6 = FUN_02e9b7a4(lVar10,puVar11,uVar2,&local_54);
      if (iVar6 != 1 || local_54 != uVar2) goto LAB_02f38cdc;
LAB_02f389e8:
      if (puVar11 == (uint *)0x0) {
        return 2;
      }
    }
    else {
      *puVar11 = uVar3 - uVar2;
      puVar11 = *(uint **)(lVar5 + 0x58);
      if (puVar11 == (uint *)0x0) {
        puVar11 = *(uint **)(lVar5 + 0x18);
        *(ulong *)(lVar5 + 0x18) = (long)puVar11 + (ulong)uVar2;
        goto LAB_02f389e8;
      }
      *(ulong *)(lVar5 + 0x58) = (long)puVar11 + (ulong)uVar2;
    }
    uVar2 = *puVar11;
    nn::os::LockMutex(pMVar7);
    uVar3 = *(uint *)(pMVar7 + 0x28);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar12 = *(long **)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        if (*(uint *)(plVar12 + 2) == uVar2) goto LAB_02f38b3c;
      }
    }
    nn::os::UnlockMutex(pMVar7);
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    plVar12 = (long *)FUN_02f39244(uVar2);
    if (plVar12 == (long *)0x0) goto LAB_02f38dd4;
    iVar6 = FUN_02f393e0(plVar12,puVar11,*(undefined4 *)(param_1 + 1));
    break;
  default:
    return 3;
  }
  if (iVar6 == 1) {
    pMVar7 = (MutexType *)&DAT_0440a210;
LAB_02f38b4c:
    nn::os::UnlockMutex(pMVar7);
    uVar2 = *(uint *)(param_2 + 0x58);
    if (uVar2 < *(uint *)(param_2 + 0x5c)) {
      *(uint *)(param_2 + 0x58) = uVar2 + 1;
      plVar1 = (long *)(*(long *)(param_2 + 0x50) + (ulong)uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = (long)plVar12;
      }
    }
    if (*(long *)(lVar5 + 0x40) != 0) {
      (*DAT_0442d158)(0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    return 1;
  }
  (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_02f38dd8:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  lVar10 = *(long *)(lVar5 + 0x40);
joined_r0x02f38bf0:
  if (lVar10 != 0) {
    (*DAT_0442d158)(0);
    *(undefined8 *)(lVar5 + 0x40) = 0;
  }
  if (iVar6 == 0x5b) {
    iVar6 = 1;
  }
  return iVar6;
LAB_02f38b3c:
  *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
  goto LAB_02f38b4c;
}


