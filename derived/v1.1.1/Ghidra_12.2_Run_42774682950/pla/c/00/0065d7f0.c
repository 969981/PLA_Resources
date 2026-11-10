/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065d7f0; name: FUN_0065d7f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0065d7f0(long *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *puVar11;
  byte *pbVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  long *local_d8;
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  long *plStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *local_68;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  long local_40;
  long *local_38;
  
  if (*(int *)(param_2 + 0x1c) != 3) {
    if (*(int *)(param_2 + 0x1c) != 2) {
      return;
    }
    local_40 = 0;
    local_38 = (long *)0x0;
    if (param_1[1] == 0) {
      return;
    }
    local_38 = (long *)std::__shared_weak_count::lock();
    if (local_38 == (long *)0x0) {
      return;
    }
    local_40 = *param_1;
    if (local_40 == 0) {
      plVar14 = local_38 + 1;
      do {
        lVar8 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
        return;
      }
      return;
    }
    if (*(int *)(param_2 + 0x1c) == 2) {
      puVar11 = *(undefined **)(param_2 + 0x10);
      iVar13 = *(int *)(puVar11 + 0x20);
      if (1 < iVar13 - 1U) goto LAB_0065d920;
LAB_0065d860:
      if (*(int *)(param_2 + 0x1c) != 2) {
                    /* try { // try from 0065d86c to 0065d88b has its CatchHandler @ 0065df20 */
        FUN_00689a9c(param_2);
        *(undefined4 *)(param_2 + 0x1c) = 2;
        puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        puVar11 = (undefined *)FUN_0069d788(puVar5);
        *(undefined **)(param_2 + 0x10) = puVar11;
      }
      pbVar12 = *(byte **)(puVar11 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        pbVar12 = pbVar12 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar12 + 0x10);
      }
      uVar6 = strtoul((char *)pbVar12,(char **)0x0,10);
      if (*(int *)(param_2 + 0x1c) == 2) {
        lVar15 = *(long *)(param_2 + 0x10);
        lVar8 = *(long *)(lVar15 + 0x18);
      }
      else {
                    /* try { // try from 0065d9a8 to 0065d9eb has its CatchHandler @ 0065df1c */
        FUN_00689a9c(param_2);
        *(undefined4 *)(param_2 + 0x1c) = 2;
        puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar15 = FUN_0069d788(puVar5);
        *(long *)(param_2 + 0x10) = lVar15;
        lVar8 = *(long *)(lVar15 + 0x18);
      }
      if (lVar8 == 0) {
        puVar5 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar8 = FUN_0069c8f0(puVar5);
        *(long *)(lVar15 + 0x18) = lVar8;
      }
      FUN_00654460(auStack_e0,lVar8,*(undefined8 *)(*(long *)(*(long *)(local_40 + 8) + 0x48) + 400)
                  );
      FUN_0065df7c(param_1,uVar6 & 0xffffffff,auStack_e0);
      if (local_d8 != (long *)0x0) {
        plVar14 = local_d8 + 1;
        do {
          lVar8 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    else {
                    /* try { // try from 0065d8e8 to 0065d907 has its CatchHandler @ 0065df20 */
      FUN_00689a9c(param_2);
      *(undefined4 *)(param_2 + 0x1c) = 2;
      puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      puVar11 = (undefined *)FUN_0069d788(puVar5);
      *(undefined **)(param_2 + 0x10) = puVar11;
      iVar13 = *(int *)(puVar11 + 0x20);
      if (iVar13 - 1U < 2) goto LAB_0065d860;
LAB_0065d920:
      if (iVar13 == 3) {
        if (*(int *)(param_2 + 0x1c) != 2) {
          puVar11 = PTR_DAT_04375910;
        }
        puVar1 = PTR_DAT_04375918;
        if (*(undefined **)(puVar11 + 0x18) != (undefined *)0x0) {
          puVar1 = *(undefined **)(puVar11 + 0x18);
        }
        FUN_006826f0(&local_60,puVar1);
        if (*(int *)(param_2 + 0x1c) == 2) {
          pbVar12 = *(byte **)(*(long *)(param_2 + 0x10) + 0x10);
          if ((*pbVar12 & 1) == 0) goto LAB_0065da8c;
LAB_0065da94:
          pbVar12 = *(byte **)(pbVar12 + 0x10);
        }
        else {
                    /* try { // try from 0065da5c to 0065da7b has its CatchHandler @ 0065dee8 */
          FUN_00689a9c(param_2);
          *(undefined4 *)(param_2 + 0x1c) = 2;
          puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(param_2 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar8 = FUN_0069d788(puVar5);
          *(long *)(param_2 + 0x10) = lVar8;
          pbVar12 = *(byte **)(lVar8 + 0x10);
          if ((*pbVar12 & 1) != 0) goto LAB_0065da94;
LAB_0065da8c:
          pbVar12 = pbVar12 + 1;
        }
        uVar7 = strtoul((char *)pbVar12,(char **)0x0,10);
        uVar6 = (ulong)&local_60 | 1;
        if ((local_60 & 1) != 0) {
          uVar6 = local_50;
        }
        FUN_0064f808(auStack_e0,&local_40,uVar6);
        FUN_006543e8(auStack_70,auStack_e0);
        FUN_0065df7c(param_1,uVar7 & 0xffffffff,auStack_70);
        if (local_68 != (long *)0x0) {
          plVar14 = local_68 + 1;
          do {
            lVar8 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_90 & 1) != 0) {
          (**(code **)(*plStack_78 + 0x18))
                    (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
        }
        if ((local_b0 & 1) != 0) {
          (**(code **)(*plStack_98 + 0x18))
                    (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
        }
        if ((local_d0 & 1) != 0) {
          (**(code **)(*plStack_b8 + 0x18))
                    (plStack_b8,local_c0,CONCAT71(uStack_cf,local_d0) & 0xfffffffffffffffe,1);
        }
        if (local_d8 != (long *)0x0) {
          plVar14 = local_d8 + 1;
          do {
            lVar8 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_60 & 1) != 0) {
          (**(code **)(*plStack_48 + 0x18))
                    (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
        }
      }
    }
    if (local_38 != (long *)0x0) {
      plVar14 = local_38 + 1;
      do {
        lVar8 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(int *)(param_2 + 0x1c) != 3) {
                    /* try { // try from 0065ddec to 0065de47 has its CatchHandler @ 0065df78 */
      FUN_00689a9c(param_2);
      *(undefined4 *)(param_2 + 0x1c) = 3;
      puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar8 = FUN_0069d854(puVar5);
      *(long *)(param_2 + 0x10) = lVar8;
      iVar13 = *(int *)(lVar8 + 0x20);
      goto joined_r0x0065de18;
    }
  }
  lVar8 = *(long *)(param_2 + 0x10);
  iVar13 = *(int *)(lVar8 + 0x20);
joined_r0x0065de18:
  if (iVar13 == 2) {
    if (*(int *)(param_2 + 0x1c) != 3) {
      FUN_00689a9c(param_2);
      *(undefined4 *)(param_2 + 0x1c) = 3;
      puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar8 = FUN_0069d854(puVar5);
      *(long *)(param_2 + 0x10) = lVar8;
    }
    pbVar12 = *(byte **)(lVar8 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar12 = pbVar12 + 1;
    }
    else {
      pbVar12 = *(byte **)(pbVar12 + 0x10);
    }
    uVar6 = strtoul((char *)pbVar12,(char **)0x0,10);
    FUN_0065e57c(param_1,uVar6);
    return;
  }
  if (iVar13 != 4) {
    return;
  }
  if (*(int *)(param_2 + 0x1c) != 3) {
                    /* try { // try from 0065dc6c to 0065dd13 has its CatchHandler @ 0065df78 */
    FUN_00689a9c(param_2);
    *(undefined4 *)(param_2 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0069d854(puVar5);
    *(long *)(param_2 + 0x10) = lVar8;
  }
  pbVar12 = *(byte **)(lVar8 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar12 = pbVar12 + 1;
  }
  else {
    pbVar12 = *(byte **)(pbVar12 + 0x10);
  }
  uVar6 = strtoul((char *)pbVar12,(char **)0x0,10);
  if (*(int *)(param_2 + 0x1c) == 3) {
    lVar15 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)(lVar15 + 0x18);
  }
  else {
    FUN_00689a9c(param_2);
    *(undefined4 *)(param_2 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar15 = FUN_0069d854(puVar5);
    *(long *)(param_2 + 0x10) = lVar15;
    lVar8 = *(long *)(lVar15 + 0x18);
  }
  if (lVar8 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_006e5fb4(puVar5);
    *(long *)(lVar15 + 0x18) = lVar8;
  }
  FUN_0065e298(param_1,uVar6 & 0xffffffff,lVar8);
  nn::os::LockMutex((MutexType *)(param_1 + 0x3e));
  if (*(int *)(param_2 + 0x1c) == 3) {
    pbVar12 = *(byte **)(*(long *)(param_2 + 0x10) + 0x10);
    bVar2 = *pbVar12;
  }
  else {
                    /* try { // try from 0065dd58 to 0065dddf has its CatchHandler @ 0065df64 */
    FUN_00689a9c(param_2);
    *(undefined4 *)(param_2 + 0x1c) = 3;
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0069d854(puVar5);
    *(long *)(param_2 + 0x10) = lVar8;
    pbVar12 = *(byte **)(lVar8 + 0x10);
    bVar2 = *pbVar12;
  }
  if ((bVar2 & 1) == 0) {
    pbVar12 = (byte *)((long)pbVar12 + 1);
  }
  else {
    pbVar12 = *(byte **)((long)pbVar12 + 0x10);
  }
  uVar6 = strtoul((char *)pbVar12,(char **)0x0,10);
  plVar14 = (long *)param_1[0x3b];
  if (plVar14 != (long *)0x0) {
    plVar9 = param_1 + 0x3b;
    do {
      uVar10 = (uint)uVar6;
      if (*(uint *)(plVar14 + 4) >= uVar10) {
        plVar9 = plVar14;
      }
      plVar14 = (long *)plVar14[*(uint *)(plVar14 + 4) < uVar10];
    } while (plVar14 != (long *)0x0);
    if ((plVar9 != param_1 + 0x3b) && (*(uint *)(plVar9 + 4) <= uVar10)) {
      FUN_006643fc(param_1 + 0x3a);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e));
  return;
}


