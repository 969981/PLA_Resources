/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5e7ac; name: FUN_02f5e7ac
 */


void FUN_02f5e7ac(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  MutexType *pMVar21;
  long *plVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined **local_fb8;
  char local_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined8 **local_f98;
  uint *local_f90;
  undefined8 local_f88;
  undefined8 local_f80;
  undefined8 auStack_f78 [474];
  int local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  long local_78;
  long lStack_70;
  
  pMVar21 = (MutexType *)param_1[0x37f];
  lVar25 = *param_1;
  nn::os::LockMutex(pMVar21);
  uVar3 = *(uint *)(param_1 + 0x37e);
  *(uint *)(param_1 + 0x37e) = uVar3 + 1;
  *(undefined4 *)((long)param_1 + (ulong)uVar3 * 4 + 0x1af0) = param_4;
  nn::os::UnlockMutex(pMVar21);
  plVar22 = *(long **)(lVar25 + 0x18);
  puVar1 = (uint *)(plVar22 + 0x22);
  uVar4 = *(uint *)(plVar22 + 0x22);
  uVar13 = (ulong)uVar4 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar15 = *puVar1;
  if (uVar15 != uVar4) {
    ClearExclusiveLocal();
LAB_02f5e874:
    do {
      uVar13 = (ulong)(uVar15 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar4 = *puVar1;
      if (uVar4 == uVar15) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar15 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar22 + uVar13 * 4 + 0x114);
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') goto code_r0x02f5e878;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar15 = uVar4;
    } while( true );
  }
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
  if (bVar9) {
    *puVar1 = uVar4 + 0x200 & 0xfffffe00 | puVar1[uVar13 + 1];
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 != '\0') goto LAB_02f5e874;
  puVar17 = puVar1 + uVar13 + 1;
  goto LAB_02f5e8b4;
code_r0x02f5e878:
  puVar17 = (uint *)((long)plVar22 + uVar13 * 4 + 0x114);
LAB_02f5e8b4:
  *puVar17 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar17 = *(uint **)(*plVar22 + uVar13 * 8);
  lVar20 = (long)(int)*puVar17;
  lVar24 = *(long *)(lVar25 + 0x28);
  puVar26 = (undefined8 *)(lVar24 + lVar20 * 0x110);
  if (*(char *)(puVar26 + 0x20) == '\0') {
    puVar19 = *(undefined8 **)(puVar17 + 0x138);
    lVar14 = lVar24 + lVar20 * 0x110;
    plVar11 = (long *)*puVar19;
    *puVar26 = plVar11;
    *(undefined4 *)(lVar14 + 8) = 0;
    *(undefined1 *)(lVar14 + 0xc) = 0;
    iVar5 = *(int *)(puVar19 + 0xb) + -1;
    if (*(int *)(puVar19 + 0xb) < 1) {
      lVar14 = puVar19[1];
      (**(code **)(*plVar11 + 0x20))(plVar11,lVar14,6);
      *(undefined4 *)(puVar19 + 0xb) = 5;
      puVar19 = (undefined8 *)(lVar14 + 0x28);
    }
    else {
      *(int *)(puVar19 + 0xb) = iVar5;
      puVar19 = (undefined8 *)(puVar19[1] + (long)iVar5 * 8);
    }
    puVar19 = (undefined8 *)*puVar19;
    lVar14 = lVar24 + lVar20 * 0x110;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar23 = (uint *)(lVar14 + 0x18);
    *(uint *)((long)puVar19 + 4) = *puVar23;
    puVar10 = PTR_PTR_0434a080;
    puVar16 = (uint *)(lVar14 + 0x1c);
    uVar12 = *puVar16;
    uVar15 = *puVar23;
    plVar11 = (long *)(lVar14 + 0x10);
    uVar4 = uVar15 + 1;
    if ((int)uVar15 < (int)(uVar12 & 0x3fffffff)) {
      lVar14 = *plVar11;
    }
    else {
      lVar14 = *plVar11;
      if (0x3ffffffe < (int)uVar15) {
        FUN_032bd0a8(uVar4);
        uVar12 = *puVar16;
      }
      uVar12 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      uVar2 = uVar4;
      if ((int)uVar4 <= (int)uVar12) {
        uVar2 = uVar12;
      }
      lVar14 = FUN_032bd1d4(puVar10,uVar2,8,lVar14,uVar15,puVar16);
      *plVar11 = lVar14;
      uVar15 = *puVar23;
    }
    *(undefined8 **)(lVar14 + (long)(int)uVar15 * 8) = puVar19;
    *puVar23 = uVar4;
    *(char **)(lVar24 + lVar20 * 0x110 + 0xf0) =
         "hknpSimdTreeBroadPhaseInternal::ThreadCollisionPairs::m_newPairs";
    *(undefined1 *)(puVar26 + 0x20) = 1;
  }
  lVar24 = lVar24 + lVar20 * 0x110;
  local_98 = *(undefined8 **)(puVar17 + 0x138);
  local_90 = *(uint **)(*(long *)(lVar24 + 0x10) + (long)*(int *)(lVar24 + 0x18) * 8 + -8);
  local_88 = *local_90 >> 0x10;
  local_84 = *local_90 & 0xffff;
  *(uint *)(lVar24 + 8) = *(int *)(lVar24 + 8) - local_84;
  local_fb8 = &PTR_LAB_042afd08;
  local_a8 = 0;
  local_fb0 = '\x01';
  local_fa0 = *(undefined8 *)(*(long *)(lVar25 + 0x10) + 0x10);
  local_fa8 = *(undefined8 *)(*(long *)(lVar25 + 0x10) + 0x58);
  local_f98 = &local_a0;
  local_78 = *param_2;
  if (local_78 != 0) {
    local_78 = local_78 + (long)param_2;
  }
  local_f90 = puVar17;
  local_a0 = puVar26;
  lStack_70 = local_78;
  FUN_03359650(param_2,param_2,&local_fb8,param_4,param_4,&local_78);
  if (local_a8 != 0) {
    plVar11 = *(long **)(*(long *)(local_f90 + 2) + 0x4b8);
    if (plVar11 != (long *)0x0) {
      local_a8 = (**(code **)(*plVar11 + 0x20))(plVar11,*(long *)(local_f90 + 2),&local_f88);
      if (local_a8 == 0) goto joined_r0x02f5eba4;
    }
    if (0 < local_a8) {
      if (*(int *)(local_f98 + 3) < 0xed9) {
        puVar26 = (undefined8 *)((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
      }
      else {
        puVar26 = (undefined8 *)FUN_032bf82c();
      }
      *puVar26 = local_f88;
      *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
      *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
      if (1 < local_a8) {
        if (*(int *)(local_f98 + 3) < 0xed9) {
          puVar26 = (undefined8 *)((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
        }
        else {
          puVar26 = (undefined8 *)FUN_032bf82c();
        }
        *puVar26 = local_f80;
        *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
        *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
        if (2 < local_a8) {
          lVar25 = 8;
          do {
            if (*(int *)(local_f98 + 3) < 0xed9) {
              puVar26 = (undefined8 *)((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
            }
            else {
              puVar26 = (undefined8 *)FUN_032bf82c();
            }
            *puVar26 = auStack_f78[lVar25 + -8];
            *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
            *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
            lVar24 = lVar25 + -5;
            lVar25 = lVar25 + 1;
          } while (lVar24 < local_a8);
        }
      }
    }
  }
joined_r0x02f5eba4:
  local_a8 = 0;
  if (uVar3 != 0) {
    local_a8 = 0;
    uVar13 = 0;
    do {
      uVar6 = *(undefined4 *)((long)param_1 + uVar13 * 4 + 0x1af0);
      if (local_fb0 == '\0') {
        FUN_0335a780(param_2,param_2,&local_fb8,param_4,uVar6,&local_78);
      }
      else {
        local_78 = 0;
        if (*param_2 != 0) {
          local_78 = *param_2 + (long)param_2;
        }
        lStack_70 = local_78;
        FUN_03359650(param_2,param_2,&local_fb8,param_4,uVar6,&local_78);
      }
      if (local_a8 != 0) {
        plVar11 = *(long **)(*(long *)(local_f90 + 2) + 0x4b8);
        if (plVar11 == (long *)0x0) {
LAB_02f5ee90:
          if (0 < local_a8) {
            if (*(int *)(local_f98 + 3) < 0xed9) {
              puVar26 = (undefined8 *)((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
            }
            else {
              puVar26 = (undefined8 *)FUN_032bf82c();
            }
            *puVar26 = local_f88;
            *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
            *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
            if (1 < local_a8) {
              if (*(int *)(local_f98 + 3) < 0xed9) {
                puVar26 = (undefined8 *)((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
              }
              else {
                puVar26 = (undefined8 *)FUN_032bf82c();
              }
              *puVar26 = local_f80;
              *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
              *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
              if (2 < local_a8) {
                lVar25 = 8;
                do {
                  if (*(int *)(local_f98 + 3) < 0xed9) {
                    puVar26 = (undefined8 *)
                              ((long)local_f98[2] + (long)*(int *)(local_f98 + 3) + 0x20);
                  }
                  else {
                    puVar26 = (undefined8 *)FUN_032bf82c();
                  }
                  *puVar26 = auStack_f78[lVar25 + -8];
                  *(int *)(local_f98 + 3) = *(int *)(local_f98 + 3) + 8;
                  *(int *)((long)local_f98 + 0x1c) = *(int *)((long)local_f98 + 0x1c) + 1;
                  lVar24 = lVar25 + -5;
                  lVar25 = lVar25 + 1;
                } while (lVar24 < local_a8);
              }
            }
          }
        }
        else {
          local_a8 = (**(code **)(*plVar11 + 0x20))(plVar11,*(long *)(local_f90 + 2),&local_f88);
          if (local_a8 != 0) goto LAB_02f5ee90;
        }
        local_a8 = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  puVar26 = local_98;
  if (local_84 == 0) {
    piVar18 = (int *)(local_a0 + 3);
    iVar5 = *piVar18;
    if (1 < iVar5) {
      iVar7 = *(int *)(local_98 + 0xb);
      lVar24 = *(long *)(local_a0[2] + (long)(iVar5 + -2) * 8);
      lVar25 = local_98[1];
      *(undefined8 *)(lVar25 + (long)iVar7 * 8) =
           *(undefined8 *)(local_a0[2] + (long)(iVar5 + -1) * 8);
      *(int *)(local_98 + 0xb) = iVar7 + 1;
      if (*(int *)((long)local_98 + 0x5c) <= iVar7 + 1) {
        (**(code **)(*(long *)*local_98 + 0x28))
                  ((long *)*local_98,lVar25 + (long)(iVar7 + -5) * 8,6);
        *(int *)(puVar26 + 0xb) = iVar7 + -5;
      }
      *(undefined8 *)(lVar24 + 8) = 0;
      local_84 = 0xffffffff;
      goto LAB_02f5e9f0;
    }
  }
  piVar18 = (int *)(local_a0 + 1);
  local_90[2] = 0;
  local_90[3] = 0;
  *local_90 = *local_90 & 0xffff0000 | local_84 & 0xffff;
  *local_90 = *local_90 & 0xffff | local_88 << 0x10;
LAB_02f5e9f0:
  *piVar18 = *piVar18 + local_84;
  uVar4 = *puVar17;
  uVar3 = *(uint *)(plVar22 + 0x22);
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar22 + (long)(int)uVar4 * 4 + 0x114) = uVar3 & 0x1ff;
  uVar15 = *puVar1;
  if (uVar15 == uVar3) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar3 & 0xfffffe00 | uVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar22 + (long)(int)uVar4 * 4 + 0x114) = uVar15 & 0x1ff;
    uVar3 = *puVar1;
    if (uVar3 == uVar15) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar15 & 0xfffffe00 | uVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar15 = uVar3;
  } while( true );
}


