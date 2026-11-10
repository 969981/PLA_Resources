/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f09d5c; name: FUN_02f09d5c
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_02f09d5c(long *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  MutexType *pMVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  uint *puVar21;
  uint uVar22;
  long *plVar23;
  int local_384;
  byte local_380 [24];
  long local_368 [5];
  undefined8 local_340;
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  int *local_320;
  undefined8 local_318;
  int local_310;
  int local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  byte *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [144];
  long local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 auStack_1e0 [256];
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c0;
  byte local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  byte local_6c [12];
  
  iVar4 = *param_2;
  local_a0 = *(undefined8 *)(param_2 + 4);
  local_98 = param_2[0xd];
  local_88 = *(undefined1 *)((long)param_2 + 0x99);
  bVar2 = (*(byte *)(param_2 + 0x26) >> 4 | *(byte *)(param_2 + 0x26) << 4) ^ 8;
  if (bVar2 < 3) {
    local_80 = *(undefined1 *)((long)param_2 + 0x9a);
  }
  else {
    local_80 = 0xff;
    if (bVar2 == 8) {
      local_90 = 0;
      goto LAB_02f09dd4;
    }
  }
  local_90 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    local_90 = *(undefined4 *)(*(long *)(param_2 + 2) + 0x10);
  }
LAB_02f09dd4:
  local_78 = 0;
  iVar12 = FUN_02f088a8(param_1 + 0x1e,&local_a0,(int)param_1[0x22],
                        *(undefined4 *)((long)param_1 + 0x10c));
  if (((*(byte *)((long)param_1 + 0xad) >> 3 & 1) != 0) && ((char)param_2[0x26] == '\0')) {
    uVar13 = (**(code **)(*param_1 + 0x130))(param_1,1);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_1 + 0x138))(param_1,1);
      return 2;
    }
    FUN_02ed5ce4(param_1);
    plVar16 = (long *)FUN_02f0bf48();
    if (plVar16 == (long *)0x0) {
      (**(code **)(*param_1 + 0x138))(param_1,1);
      FUN_02ed5d64(param_1);
      return 2;
    }
    plVar16[2] = 0;
    plVar16[3] = 0;
    plVar16[1] = 0;
    *(undefined4 *)((long)plVar16 + 0x6c) = 0;
    if (param_1[0x2f] == 0) {
      param_1[0x2f] = (long)plVar16;
      *plVar16 = 0;
    }
    else {
      *plVar16 = param_1[0x2f];
      param_1[0x2f] = (long)plVar16;
    }
    *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
    *(int *)(plVar16 + 0xe) = param_2[0x20];
    plVar16[4] = *(long *)(param_2 + 4);
    *(int *)((long)plVar16 + 0x1c) = param_2[0xd];
    plVar16[2] = *(long *)(param_2 + 10);
    *(int *)(plVar16 + 3) = param_2[0xc];
    piVar17 = *(int **)(param_2 + 8);
    if (plVar16[1] != 0) {
      FUN_02e771a8();
    }
    if (piVar17 != (int *)0x0) {
      *piVar17 = *piVar17 + 1;
    }
    plVar16[1] = (long)piVar17;
    plVar16[5] = *(long *)(param_2 + 0xe);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x12);
    lVar19 = *(long *)(param_2 + 0x16);
    plVar16[8] = *(long *)(param_2 + 0x14);
    plVar16[9] = lVar19;
    plVar16[6] = lVar14;
    plVar16[7] = lVar18;
    lVar19 = *(long *)(param_2 + 0x1c);
    lVar14 = *(long *)(param_2 + 0x18);
    lVar18 = *(long *)(param_2 + 0x1a);
    *(int *)(plVar16 + 0xd) = param_2[0x1e];
    plVar16[0xb] = lVar18;
    plVar16[0xc] = lVar19;
    plVar16[10] = lVar14;
    *(int *)((long)plVar16 + 0x6c) = param_2[0x1f];
    *(int *)(plVar16[4] + 0x50) = *(int *)(plVar16[4] + 0x50) + 1;
    FUN_02eddac0(DAT_0440a170,param_2[0xd]);
  }
  local_a8 = 0;
  if ((*param_2 == 0) || (lVar14 = *(long *)(*(long *)(param_2 + 0x22) + 0x18), lVar14 == 0)) {
    plVar16 = (long *)param_1[0x24];
  }
  else {
    FUN_02ea7ffc(lVar14);
    lVar18 = local_a8;
    if (local_a8 != 0) {
      iVar8 = *(int *)(local_a8 + 0x10) + -1;
      *(int *)(local_a8 + 0x10) = iVar8;
      if (iVar8 == 0) {
        local_a8 = lVar14;
        FUN_02ea7e60(lVar18);
        (*DAT_0442d150)(0,lVar18);
        lVar14 = local_a8;
      }
    }
    local_a8 = lVar14;
    FUN_02ec7368(param_1,local_a8);
    plVar16 = (long *)param_1[0x24];
  }
  if (plVar16 == (long *)0x0) {
LAB_02f09e58:
    local_384 = 0;
    iVar12 = 1;
    lVar14 = local_a8;
    if (iVar4 != 0) {
      iVar12 = 2;
LAB_02f09e6c:
      if ((local_384 == 0) && ((*(byte *)((long)param_1 + 0xad) >> 3 & 1) == 0)) {
        iVar12 = FUN_02ec79d8(param_1,param_2);
        lVar14 = local_a8;
      }
      else {
        if (local_a8 == 0) {
          return iVar12;
        }
        iVar12 = FUN_02ec7748(param_1);
        lVar14 = local_a8;
      }
    }
joined_r0x02f0a240:
    if ((lVar14 != 0) &&
       (iVar4 = *(int *)(lVar14 + 0x10) + -1, *(int *)(lVar14 + 0x10) = iVar4, iVar4 == 0)) {
      local_a8 = lVar14;
      FUN_02ea7e60(lVar14);
      (*DAT_0442d150)(0,lVar14);
    }
    return iVar12;
  }
  plVar23 = plVar16;
  do {
    if ((int)plVar23[1] == iVar12) goto LAB_02f09e98;
    plVar23 = (long *)*plVar23;
  } while (plVar23 != (long *)0x0);
  iVar12 = *(int *)((long)param_1 + 0x114);
LAB_02f09e44:
  if ((int)plVar16[1] != iVar12) goto code_r0x02f09e50;
  plVar23 = plVar16;
LAB_02f09e98:
  lVar14 = *(long *)(param_2 + 4);
  iVar8 = (int)param_1[2];
  if ((lVar14 == 0) || (*(uint *)(lVar14 + 0x40) < 5)) {
LAB_02f09f04:
    local_b0._0_4_ = 0;
    iVar3 = 0;
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
    if (lVar18 == 0) {
      local_b0._0_4_ = 0;
      iVar3 = 0;
    }
    else {
      piVar17 = *(int **)(lVar18 + 0x20);
      uVar22 = *(uint *)(lVar18 + 0x28);
      if ((uVar22 == 0) || (*piVar17 == iVar8)) {
        piVar20 = piVar17;
      }
      else {
        lVar18 = (ulong)uVar22 * 0xc;
        piVar10 = piVar17;
        do {
          lVar18 = lVar18 + -0xc;
          if (lVar18 == 0) goto LAB_02f09f04;
          piVar1 = piVar10 + 3;
          piVar20 = piVar10 + 3;
          piVar10 = piVar10 + 3;
        } while (*piVar1 != iVar8);
      }
      if (piVar20 == piVar17 + (ulong)uVar22 * 3) goto LAB_02f09f04;
      local_b0._0_4_ = piVar20[1];
      iVar3 = piVar20[2];
    }
  }
  if (iVar12 == (int)local_b0) {
    iVar15 = iVar3 + 1;
    uVar22 = (uint)(iVar3 == 0);
  }
  else {
    iVar15 = 1;
    uVar22 = 1;
    local_b0._0_4_ = iVar12;
  }
  local_b0 = CONCAT44(iVar15,(int)local_b0);
  FUN_02ef32e4(DAT_0440a140,lVar14,iVar8,&local_b0);
  uVar5 = *(uint *)(plVar23 + 4);
  if (uVar5 == 0 && iVar4 == 0) {
    local_384 = 0;
    iVar12 = 1;
  }
  else {
    if (1 < uVar5) {
      FUN_02ecf12c(param_2,param_1);
      uVar5 = (uint)plVar23[4];
    }
    if (uVar5 == 0) {
      local_384 = 0;
      iVar12 = 2;
    }
    else {
      local_384 = 0;
      puVar21 = (uint *)plVar23[3];
      iVar12 = 2;
      do {
        local_340 = *(undefined8 *)param_2;
        local_338 = *(long *)(param_2 + 2);
        local_330 = *(undefined8 *)(param_2 + 4);
        local_328 = *(undefined8 *)(param_2 + 6);
        local_30c = param_2[0xd];
        local_318 = *(undefined8 *)(param_2 + 10);
        local_310 = param_2[0xc];
        local_320 = *(int **)(param_2 + 8);
        if (local_320 != (int *)0x0) {
          *local_320 = *local_320 + 1;
        }
        local_308 = *(undefined8 *)(param_2 + 0xe);
        uStack_300 = *(undefined8 *)(param_2 + 0x10);
        local_2f8 = *(undefined8 *)(param_2 + 0x12);
        uStack_2f0 = *(undefined8 *)(param_2 + 0x14);
        local_2e8 = *(undefined8 *)(param_2 + 0x16);
        uStack_2e0 = *(undefined8 *)(param_2 + 0x18);
        local_2d8 = *(undefined8 *)(param_2 + 0x1a);
        uStack_2d0 = *(undefined8 *)(param_2 + 0x1c);
        local_2c8 = *(undefined8 *)(param_2 + 0x1e);
        uStack_2c0 = *(undefined8 *)(param_2 + 0x20);
        local_2b8 = *(byte **)(param_2 + 0x22);
        local_2b0 = *(undefined8 *)(param_2 + 0x24);
        local_2a8 = *(undefined8 *)(param_2 + 0x26);
        uStack_2a0 = *(undefined8 *)(param_2 + 0x28);
        FUN_02eb4fd0(auStack_298,param_2 + 0x2a);
        pMVar11 = DAT_0440a120;
        local_c0 = *(undefined8 *)(param_2 + 0xa0);
        local_b8 = *(byte *)(param_2 + 0xa2);
        uVar5 = *puVar21;
        for (plVar16 = (long *)param_1[0x29]; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
          if (*(uint *)(plVar16 + 1) == uVar5) {
            if ((~uVar22 & (*(byte *)((long)plVar16 + 0x14) & 8) >> 3) != 0)
            goto joined_r0x02f0a168;
            break;
          }
        }
        if ((local_384 == 0) || ((int)local_2b0 == 0)) {
          nn::os::LockMutex(DAT_0440a120);
          uVar6 = *(uint *)(pMVar11 + 0x28);
          if (uVar6 != 0) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar5 / uVar6;
            }
            for (plVar16 = *(long **)(*(long *)(pMVar11 + 0x20) + (ulong)(uVar5 - uVar9 * uVar6) * 8
                                     ); plVar16 != (long *)0x0; plVar16 = (long *)plVar16[1]) {
              if (*(uint *)(plVar16 + 2) == uVar5) {
                *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar11);
                if (iVar4 == 0) {
                  if (((char)local_2a8 != -0x70) || (local_2a8._3_1_ == '\0')) {
LAB_02f0a110:
                    iVar12 = FUN_02ed2bb4(plVar16,&local_340);
                    if (iVar12 == 1) {
                      iVar12 = (**(code **)(*plVar16 + 0x240))(plVar16,&local_340);
                      goto joined_r0x02f0a390;
                    }
                    if (iVar12 != 3) goto LAB_02f0a154;
                    goto LAB_02f0a144;
                  }
                  local_380[0] = local_b8 & 1;
                  if (local_338 == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = *(undefined4 *)(local_338 + 0x10);
                  }
                  iVar12 = FUN_02ed13fc(plVar16,&local_2a8,uVar7,local_380,local_330,local_30c);
                  if (iVar12 == 1) {
                    local_b8 = local_b8 & 0xfe | local_380[0];
                    goto LAB_02f0a110;
                  }
                }
                else {
                  FUN_02ec73c8(local_380,local_2b8);
                  if ((int)plVar23[4] == 1) {
                    FUN_02ec761c(param_1,*(undefined8 *)(local_2b8 + 0x18),local_368);
LAB_02f0a338:
                    local_2b8 = local_380;
                    if (((char)local_2a8 == -0x70) && (local_2a8._3_1_ != '\0')) {
                      local_6c[0] = local_b8 & 1;
                      if (local_338 == 0) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = *(undefined4 *)(local_338 + 0x10);
                      }
                      iVar12 = FUN_02ed13fc(plVar16,&local_2a8,uVar7,local_6c,local_330,local_30c);
                      if (iVar12 != 1) goto LAB_02f0a380;
                      local_b8 = local_b8 & 0xfe | local_6c[0];
                    }
                    iVar12 = FUN_02ed2bb4(plVar16,&local_340);
                    if (iVar12 == 1) {
                      iVar12 = (**(code **)(*plVar16 + 0x240))(plVar16,&local_340);
                    }
                    else if (iVar12 == 3) {
                      iVar12 = 1;
                    }
                  }
                  else {
                    lVar18 = FUN_02ea7fc8();
                    lVar14 = local_368[0];
                    if (local_368[0] != 0) {
                      iVar12 = *(int *)(local_368[0] + 0x10) + -1;
                      *(int *)(local_368[0] + 0x10) = iVar12;
                      local_368[0] = lVar18;
                      if (iVar12 == 0) {
                        FUN_02ea7e60(lVar14);
                        (*DAT_0442d150)(0,lVar14);
                      }
                      lVar18 = local_368[0];
                    }
                    local_368[0] = lVar18;
                    if (local_368[0] == 0) {
                      iVar12 = 0x34;
                    }
                    else {
                      iVar12 = FUN_02ec7834(param_1,local_380,&local_340,&local_a8);
                      if (iVar12 == 1) goto LAB_02f0a338;
                    }
                  }
LAB_02f0a380:
                  FUN_02ec743c(local_380);
joined_r0x02f0a390:
                  if (iVar12 == 1) {
LAB_02f0a144:
                    local_384 = local_384 + 1;
                    iVar12 = 1;
                  }
                }
LAB_02f0a154:
                (**(code **)(*plVar16 + 0x18))(plVar16);
                goto joined_r0x02f0a168;
              }
            }
          }
          nn::os::UnlockMutex(pMVar11);
        }
joined_r0x02f0a168:
        if (local_208 != 0) {
          local_200 = 0;
          (*DAT_0442d150)(0);
          local_208 = 0;
          local_1fc = 0;
        }
        if (local_e0 != (undefined1 *)0x0) {
          local_d8 = 0;
          if (auStack_1e0 != local_e0) {
            (*DAT_0442d158)(0);
          }
          local_e0 = (undefined1 *)0x0;
          local_d4 = 0;
        }
        if (local_320 != (int *)0x0) {
          FUN_02e771a8();
        }
        puVar21 = puVar21 + 1;
      } while (puVar21 != (uint *)(plVar23[3] + (ulong)*(uint *)(plVar23 + 4) * 4));
    }
  }
  lVar14 = local_a8;
  if (iVar4 == 0) goto joined_r0x02f0a240;
  goto LAB_02f09e6c;
code_r0x02f09e50:
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto LAB_02f09e58;
  goto LAB_02f09e44;
}


