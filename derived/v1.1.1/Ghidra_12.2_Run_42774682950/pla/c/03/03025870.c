/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03025870; name: FUN_03025870
 */


void FUN_03025870(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_150;
  undefined4 local_148;
  int iStack_144;
  int local_140 [2];
  undefined8 local_138;
  uint local_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_90;
  undefined8 local_88;
  
  lVar11 = *(long *)(param_2 + 8);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar9;
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar8 + 8);
    uVar3 = (long)puVar7 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
      *puVar7 = "LtSolve";
      puVar7[2] = "Stinit";
      uVar14 = nn::os::GetSystemTick();
      puVar7[1] = uVar14;
    }
  }
  uStack_d8 = *(undefined8 *)(lVar11 + 0x38);
  local_e0 = 0;
  local_d0 = *(undefined8 *)(lVar11 + 0x150);
  uStack_108 = *(undefined8 *)(lVar11 + 0x4b0);
  local_c8 = *(undefined8 *)(param_2 + 0x10);
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  uStack_f8 = *(undefined8 *)(lVar11 + 0x4e8);
  local_100 = *(undefined8 *)(lVar11 + 0x4e0);
  uStack_e8 = *(undefined8 *)(lVar11 + 0x4f8);
  local_f0 = *(undefined8 *)(lVar11 + 0x4f0);
  uStack_118 = 0;
  local_88 = 0;
  if (*(long *)(lVar11 + 0x698) != 0) {
    local_88 = *(undefined8 *)(*(long *)(lVar11 + 0x698) + 0x388);
  }
  local_b0 = 0;
  *(undefined8 **)(param_2 + 0x4c0) = &local_120;
  local_148 = 0;
  plVar4 = (long *)*param_3;
  iStack_144 = param_6;
  local_120 = param_1;
  local_110 = lVar11 + 0x530;
  uStack_b8 = param_4;
  local_90 = param_5;
  if (0xf < (int)*(uint *)plVar4[6]) {
    memset((void *)((plVar4[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar4 + 0x1c)),0,
           (ulong)*(uint *)plVar4[6] & 0xfffffff0);
  }
  plVar4 = (long *)param_3[1];
  if (0xf < (int)*(uint *)plVar4[6]) {
    memset((void *)((plVar4[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar4 + 0x1c)),0,
           (ulong)*(uint *)plVar4[6] & 0xfffffff0);
  }
  plVar4 = (long *)param_3[2];
  if (0xf < (int)*(uint *)plVar4[6]) {
    memset((void *)((plVar4[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar4 + 0x1c)),0,
           (ulong)*(uint *)plVar4[6] & 0xfffffff0);
  }
  iVar2 = *(int *)(lVar11 + 0x5a0);
  if (0 < iVar2) {
    uVar14 = NEON_fmov(0x3f800000,4);
    iVar10 = 0;
    do {
      iVar6 = *(int *)(lVar11 + 0x5a8);
      if (0 < iVar6) {
        iVar12 = 0;
        uVar15 = NEON_scvtf(CONCAT44(iVar10,iVar10),4);
        do {
          fVar13 = (float)*(undefined8 *)(lVar11 + 0x5e0);
          local_138 = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar13 +
                               (float)((ulong)uVar14 >> 0x20),(float)uVar15 * fVar13 + (float)uVar14
                              );
          local_130 = 2;
          if (iVar2 + -1 != iVar10 || iVar6 + -1 != iVar12) {
            local_130 = 0;
          }
          local_130 = (uint)(iVar12 == 0 && iVar10 == 0) | (uint)(iVar12 == 0) << 2 | local_130;
          lVar9 = *(long *)*param_3;
          local_140[0] = iVar10;
          local_128 = lVar8;
          if (*(int *)(lVar9 + 0xc) != 0) {
            local_150 = (((long *)*param_3)[8] + 0x3fU & 0xffffffffffffffc0) +
                        (long)*(int *)(lVar9 + 0x1c);
            if (iVar10 == 0) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians0";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else if (iVar10 == 1) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians1";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else {
              do {
                if (iVar10 == 3) {
                  if (lVar8 != 0) {
                    puVar7 = *(undefined8 **)(lVar8 + 8);
                    uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                      pcVar5 = "StSolveJacobians3";
LAB_0302618c:
                      *puVar7 = pcVar5;
                      uVar1 = nn::os::GetSystemTick();
                      puVar7[1] = uVar1;
                    }
                  }
                }
                else if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    pcVar5 = "StSolveJacobians2";
                    goto LAB_0302618c;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
          }
          lVar9 = *(long *)param_3[1];
          if (*(int *)(lVar9 + 0xc) != 0) {
            local_150 = (((long *)param_3[1])[8] + 0x3fU & 0xffffffffffffffc0) +
                        (long)*(int *)(lVar9 + 0x1c);
            if (iVar10 == 0) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians0";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else if (iVar10 == 1) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians1";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else {
              do {
                if (iVar10 == 3) {
                  if (lVar8 != 0) {
                    puVar7 = *(undefined8 **)(lVar8 + 8);
                    uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                      pcVar5 = "StSolveJacobians3";
LAB_030261c0:
                      *puVar7 = pcVar5;
                      uVar1 = nn::os::GetSystemTick();
                      puVar7[1] = uVar1;
                    }
                  }
                }
                else if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    pcVar5 = "StSolveJacobians2";
                    goto LAB_030261c0;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
          }
          lVar9 = *(long *)param_3[2];
          if (*(int *)(lVar9 + 0xc) != 0) {
            local_150 = (((long *)param_3[2])[8] + 0x3fU & 0xffffffffffffffc0) +
                        (long)*(int *)(lVar9 + 0x1c);
            if (iVar10 == 0) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians0";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else if (iVar10 == 1) {
              do {
                if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    *puVar7 = "StSolveJacobians1";
                    uVar1 = nn::os::GetSystemTick();
                    puVar7[1] = uVar1;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
            else {
              do {
                if (iVar10 == 3) {
                  if (lVar8 != 0) {
                    puVar7 = *(undefined8 **)(lVar8 + 8);
                    uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                      pcVar5 = "StSolveJacobians3";
LAB_030261f4:
                      *puVar7 = pcVar5;
                      uVar1 = nn::os::GetSystemTick();
                      puVar7[1] = uVar1;
                    }
                  }
                }
                else if (lVar8 != 0) {
                  puVar7 = *(undefined8 **)(lVar8 + 8);
                  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
                     (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
                    pcVar5 = "StSolveJacobians2";
                    goto LAB_030261f4;
                  }
                }
                plVar4 = *(long **)(lVar11 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
                lVar9 = (**(code **)(*plVar4 + 0x20))
                                  (plVar4,param_2,&local_120,local_140,lVar9,&local_150,&local_148,
                                   &local_148);
              } while (lVar9 != 0);
            }
          }
          iVar6 = *(int *)(lVar11 + 0x5a8);
          iVar12 = iVar12 + 1;
          iVar2 = *(int *)(lVar11 + 0x5a0);
        } while (iVar12 < iVar6);
      }
      if (iVar10 < iVar2 + -1) {
        if (lVar8 != 0) {
          puVar7 = *(undefined8 **)(lVar8 + 8);
          uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
          if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
             (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
            *puVar7 = "StSubIntegrate";
            uVar15 = nn::os::GetSystemTick();
            puVar7[1] = uVar15;
          }
        }
        FUN_030265bc(param_2,&local_120,1,param_6 + -1,*(undefined8 *)(param_2 + 0x30),lVar8);
        iVar2 = *(int *)(lVar11 + 0x5a0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar2);
  }
  plVar4 = (long *)*param_3;
  puVar7 = (undefined8 *)*plVar4;
  *puVar7 = 0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  puVar7[2] = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(long *)plVar4[2] = *plVar4;
  *(undefined4 *)(*plVar4 + 0x1c) = 0;
  *(undefined1 *)plVar4[4] = 0;
  *(undefined4 *)plVar4[6] = 0;
  plVar4 = (long *)param_3[1];
  puVar7 = (undefined8 *)*plVar4;
  *puVar7 = 0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  puVar7[2] = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(long *)plVar4[2] = *plVar4;
  *(undefined4 *)(*plVar4 + 0x1c) = 0;
  *(undefined1 *)plVar4[4] = 0;
  *(undefined4 *)plVar4[6] = 0;
  plVar4 = (long *)param_3[2];
  puVar7 = (undefined8 *)*plVar4;
  *puVar7 = 0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  puVar7[2] = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(long *)plVar4[2] = *plVar4;
  *(undefined4 *)(*plVar4 + 0x1c) = 0;
  *(undefined1 *)plVar4[4] = 0;
  *(undefined4 *)plVar4[6] = 0;
  if (lVar8 == 0) {
    FUN_030269e0(param_2,&local_120,1,param_6 + -1,0);
    *(undefined8 *)(param_2 + 0x4c0) = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar8 + 8);
    uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
      *puVar7 = "StSubIntegrateLast";
      uVar14 = nn::os::GetSystemTick();
      puVar7[1] = uVar14;
    }
    FUN_030269e0(param_2,&local_120,1,param_6 + -1,lVar8);
    *(undefined8 *)(param_2 + 0x4c0) = 0;
    puVar7 = *(undefined8 **)(lVar8 + 8);
    uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar3, puVar7 != (undefined8 *)0x0)) {
      *puVar7 = &DAT_03922da5;
      uVar14 = nn::os::GetSystemTick();
      puVar7[1] = uVar14;
    }
  }
  return;
}


