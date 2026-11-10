/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301e778; name: FUN_0301e778
 */


void FUN_0301e778(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ushort uVar14;
  uint uVar15;
  uint extraout_w11;
  undefined8 *puVar16;
  uint *extraout_x12;
  uint *puVar17;
  long *plVar18;
  int *piVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long local_e8;
  uint *local_d0;
  uint local_c4;
  long local_c0;
  uint *local_b8;
  long local_b0;
  uint local_a4;
  uint *local_80;
  undefined8 local_78;
  uint local_6c;
  ushort local_68 [4];
  
  *(undefined1 *)(param_1 + 0x7a) = 1;
  if (*(char *)(param_1 + 0x78) != '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  plVar18 = *(long **)(param_1 + 0x48);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  lVar23 = *plVar18;
  local_b8 = (uint *)(ulong)*(uint *)((long)plVar18 + 0x1c);
  iVar2 = *(uint *)((long)plVar18 + 0x1c) + *(int *)(lVar23 + 8) + *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    puVar12 = (uint *)*puVar1;
    puVar17 = (uint *)plVar18[2];
    if (puVar12 == puVar17) {
      uVar14 = *(ushort *)(param_1 + 0x5a);
    }
    else {
      uVar14 = *(ushort *)(param_1 + 0x5a);
      if ((uint)uVar14 == (*puVar12 & 0xffff)) {
        puVar12 = *(uint **)(puVar12 + 2);
        *(undefined4 *)(param_1 + 0x58) = 0;
        uVar14 = 0;
        puVar17 = (uint *)plVar18[2];
        uVar7 = 0;
        if (puVar12 == (uint *)plVar18[2]) goto LAB_0301f084;
      }
      else {
        uVar7 = uVar14;
        if (puVar12 == puVar17) {
LAB_0301f084:
          uVar14 = uVar7;
          puVar12 = puVar17;
          local_b8 = (uint *)(ulong)*(uint *)((long)plVar18 + 0x1c);
          goto LAB_0301e7e8;
        }
      }
      local_b8 = (uint *)(ulong)*puVar12;
    }
LAB_0301e7e8:
    *(ushort *)(param_1 + 0x5a) = (short)local_b8 - uVar14;
    *puVar1 = puVar12;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  uVar8 = *(uint *)((long)plVar18 + 0x1c);
  lVar13 = *plVar18;
  if (uVar8 == 0) {
    piVar19 = (int *)(lVar13 + 0x18);
    iVar2 = *piVar19;
    if (iVar2 < 2) goto LAB_0301e818;
    puVar16 = (undefined8 *)plVar18[1];
    iVar9 = *(int *)(puVar16 + 0xb);
    lVar11 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(iVar2 + -2) * 8);
    lVar25 = puVar16[1];
    *(undefined8 *)(lVar25 + (long)iVar9 * 8) =
         *(undefined8 *)(*(long *)(lVar13 + 0x10) + (long)(iVar2 + -1) * 8);
    local_a4 = *(uint *)((long)puVar16 + 0x5c);
    *(int *)(puVar16 + 0xb) = iVar9 + 1;
    if ((int)local_a4 <= iVar9 + 1) {
      (**(code **)(*(long *)*puVar16 + 0x28))((long *)*puVar16,lVar25 + (long)(iVar9 + -5) * 8,6);
      *(int *)(puVar16 + 0xb) = iVar9 + -5;
      local_b8 = extraout_x12;
      local_a4 = extraout_w11;
    }
    *(undefined8 *)(lVar11 + 8) = 0;
    uVar8 = 0xffffffff;
  }
  else {
LAB_0301e818:
    puVar17 = (uint *)plVar18[2];
    piVar19 = (int *)(lVar13 + 8);
    local_a4 = *(uint *)(plVar18 + 3);
    puVar17[2] = 0;
    puVar17[3] = 0;
    *puVar17 = *puVar17 & 0xffff0000 | uVar8 & 0xffff;
    uVar15 = *puVar17 & 0xffff | local_a4 << 0x10;
    local_b8 = (uint *)(ulong)uVar15;
    *puVar17 = uVar15;
  }
  *piVar19 = *piVar19 + uVar8;
  *plVar18 = 0;
  plVar18[2] = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
LAB_0301ecd8:
    local_6c = 0xffffffff;
LAB_0301ece0:
    if (local_a4 == 0) {
      local_a4 = 0;
    }
    else {
      local_b8 = *(uint **)(local_b8 + 2);
      if (local_b8 != (uint *)0x0) {
        uVar8 = *local_b8 & 0xffff;
        if ((int)local_a4 <= (int)(*local_b8 & 0xffff)) {
          uVar8 = local_a4;
        }
        if ((int)uVar8 < 1) {
          puVar17 = (uint *)0x0;
        }
        else {
          local_a4 = local_a4 - uVar8;
          puVar17 = local_b8 + 8;
          Hint_Prefetch(*(long *)(local_b8 + 2),0,0,0);
          Hint_Prefetch(*(long *)(local_b8 + 2) + 0x40,0,0,0);
          Hint_Prefetch(local_b8 + 0x20,0,0,0);
          Hint_Prefetch(local_b8 + 0x30,0,0,0);
          local_6c = uVar8;
        }
        goto LAB_0301e89c;
      }
    }
    puVar17 = (uint *)0x0;
    local_b8 = (uint *)0x0;
  }
  else {
    uVar14 = *(ushort *)(param_1 + 0x5a);
    local_a4 = *(int *)(param_1 + 0x5c) - (uint)uVar14;
    local_b8 = *(uint **)(param_1 + 0x50);
    if (uVar14 == 0) goto LAB_0301ecd8;
    local_6c = uVar14 - 1;
    if ((int)local_6c < 1) goto LAB_0301ece0;
    puVar17 = (uint *)((long)local_b8 + (ulong)*(ushort *)(param_1 + 0x58) + 0x30);
  }
LAB_0301e89c:
  plVar20 = (long *)(param_1 + 0x60);
  plVar18 = *(long **)(param_1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  uVar8 = *(uint *)(*plVar3 + 0x54) | *(uint *)(*plVar18 + 0x54) |
          *(uint *)(*(long *)(param_2 + 0x20) + (ulong)*(ushort *)(*plVar18 + 0x8a) * 0x50 + 0x14) |
          *(uint *)(*(long *)(param_2 + 0x20) + (ulong)*(ushort *)(*plVar3 + 0x8a) * 0x50 + 0x14);
  if ((*(byte *)(*plVar20 + 0xd) & 3) != 0) {
    lVar13 = *(long *)(param_1 + 0x20);
    iVar2 = *(int *)(lVar13 + 0x738);
    if (iVar2 != 0) {
      local_b0 = nn::os::GetSystemTick();
    }
    uVar21 = *(undefined8 *)(param_1 + 0x58);
    local_80 = (uint *)*puVar1;
    local_78._4_4_ = (int)((ulong)uVar21 >> 0x20);
    if (*(ushort *)(param_1 + 0x5a) < 2) {
      uVar4 = local_78._4_4_ - 1;
      local_80 = *(uint **)(local_80 + 2);
      uVar15 = uVar4;
      if ((*local_80 & 0xffff) <= (uVar4 & 0xffff)) {
        uVar15 = *local_80;
      }
      local_78 = (ulong)CONCAT42(uVar4,(short)uVar15) << 0x10;
    }
    else {
      local_78._2_2_ = (short)((ulong)uVar21 >> 0x10);
      local_78._2_2_ = local_78._2_2_ + -1;
      local_78._0_2_ = (short)uVar21;
      local_78 = CONCAT44(local_78._4_4_ + -1,CONCAT22(local_78._2_2_,(short)local_78));
      local_78 = CONCAT62(local_78._2_6_,(short)local_78 + 0x10);
    }
    local_68[0] = *(ushort *)(*plVar20 + 0xc);
    if ((local_68[0] >> 8 & 1) == 0) {
      if ((local_68[0] >> 9 & 1) == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = *(long **)(*(long *)(param_2 + 0x40) + 0x13a8);
      }
    }
    else {
      plVar24 = *(long **)(*(long *)(param_2 + 0x40) + 0x13a0);
    }
    (**(code **)(*plVar24 + 0x10))(plVar24,param_2,param_3,local_68,plVar18,plVar3,&local_80);
    if (iVar2 != 0) {
      lVar25 = nn::os::GetSystemTick();
      *(long *)(lVar13 + 0x508) = (lVar25 - local_b0) + *(long *)(lVar13 + 0x508);
      *(int *)(lVar13 + 0x510) = *(int *)(lVar13 + 0x510) + 1;
    }
  }
  if ((*(uint *)(*(long *)(param_2 + 0x40) + 0x318) & (*(uint *)(param_1 + 0x70) | uVar8)) == 0)
  goto LAB_0301e908;
  lVar13 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar13 + 0x738);
  if (iVar2 == 0) {
    iVar9 = *(int *)(param_1 + 0x5c);
  }
  else {
    lVar25 = nn::os::GetSystemTick();
    local_e8 = -lVar25;
    iVar9 = *(int *)(param_1 + 0x5c);
  }
  if (iVar9 != 0) {
    uVar14 = *(ushort *)(param_1 + 0x5a);
    local_c4 = iVar9 - (uint)uVar14;
    local_d0 = *(uint **)(param_1 + 0x50);
    if ((uVar14 == 0) || (uVar15 = uVar14 - 1, (int)uVar15 < 1)) {
      if ((local_c4 != 0) && (local_d0 = *(uint **)(local_d0 + 2), local_d0 != (uint *)0x0)) {
        uVar15 = *local_d0 & 0xffff;
        if ((int)local_c4 <= (int)(*local_d0 & 0xffff)) {
          uVar15 = local_c4;
        }
        if (0 < (int)uVar15) {
          local_c4 = local_c4 - uVar15;
          puVar12 = local_d0 + 8;
          goto LAB_0301eaac;
        }
      }
    }
    else {
      puVar12 = (uint *)((long)local_d0 + (ulong)*(ushort *)(param_1 + 0x58) + 0x30);
      if (puVar12 != (uint *)0x0) {
LAB_0301eaac:
        local_c0 = CONCAT44(local_c0._4_4_,uVar8);
        do {
          while( true ) {
            uVar4 = puVar12[0x28];
            lVar25 = *(long *)(*plVar18 + 0x78);
            *(uint *)(plVar18 + 3) = uVar4;
            if (*(char *)(lVar25 + 0x18) == '\x15') {
              plVar24 = (long *)(lVar25 + ((ulong)(uVar4 >> 0x1a) & 0x38) + 0x48);
              lVar25 = *plVar24;
              if (lVar25 == 0) {
                lVar25 = 0;
              }
              else {
                lVar25 = lVar25 + (long)plVar24;
              }
            }
            plVar18[4] = lVar25;
            uVar4 = puVar12[0x29];
            lVar25 = *(long *)(*plVar3 + 0x78);
            *(uint *)(plVar3 + 3) = uVar4;
            if (*(char *)(lVar25 + 0x18) == '\x15') {
              plVar24 = (long *)(lVar25 + ((ulong)(uVar4 >> 0x1a) & 0x38) + 0x48);
              lVar25 = *plVar24;
              if (lVar25 == 0) {
                lVar25 = 0;
              }
              else {
                lVar25 = lVar25 + (long)plVar24;
              }
            }
            plVar3[4] = lVar25;
            plVar18[2] = *(long *)(puVar12 + 0x2a);
            plVar3[2] = *(long *)(puVar12 + 0x2c);
            lVar25 = *(long *)(param_2 + 0x40);
            uVar4 = puVar12[0x2f] | uVar8;
            if ((*(uint *)(lVar25 + 0x318) & uVar4) != 0) {
              if (*(int *)(lVar25 + 0x1458) == 0) {
                if ((*(uint *)(lVar25 + 800) & uVar4) != 0) {
                  (**(code **)(**(long **)(lVar25 + 0x328) + 0x28))
                            (*(long **)(lVar25 + 0x328),param_2,param_3,plVar18,plVar3,puVar12);
                }
                if (1 < *(int *)(lVar25 + 0x31c)) {
                  if ((*(uint *)(lVar25 + 0x330) & uVar4) != 0) {
                    (**(code **)(**(long **)(lVar25 + 0x338) + 0x28))
                              (*(long **)(lVar25 + 0x338),param_2,param_3,plVar18,plVar3,puVar12);
                  }
                  if (2 < *(int *)(lVar25 + 0x31c)) {
                    if ((*(uint *)(lVar25 + 0x340) & uVar4) != 0) {
                      (**(code **)(**(long **)(lVar25 + 0x348) + 0x28))
                                (*(long **)(lVar25 + 0x348),param_2,param_3,plVar18,plVar3,puVar12);
                    }
                    if (3 < *(int *)(lVar25 + 0x31c)) {
                      if ((*(uint *)(lVar25 + 0x350) & uVar4) != 0) {
                        (**(code **)(**(long **)(lVar25 + 0x358) + 0x28))
                                  (*(long **)(lVar25 + 0x358),param_2,param_3,plVar18,plVar3,puVar12
                                  );
                      }
                      if (4 < *(int *)(lVar25 + 0x31c)) {
                        puVar16 = (undefined8 *)(lVar25 + 0x368);
                        lVar11 = 4;
                        do {
                          if ((*(uint *)(puVar16 + -1) & uVar4) != 0) {
                            (**(code **)(*(long *)*puVar16 + 0x28))
                                      ((long *)*puVar16,param_2,param_3,plVar18,plVar3,puVar12);
                          }
                          lVar11 = lVar11 + 1;
                          puVar16 = puVar16 + 2;
                        } while (lVar11 < *(int *)(lVar25 + 0x31c));
                      }
                    }
                  }
                }
              }
              else {
                lVar11 = (long)*(int *)(lVar25 + 0x1458) << 3;
                puVar16 = *(undefined8 **)(lVar25 + 0x1450);
                do {
                  (**(code **)(*(long *)*puVar16 + 0xb8))
                            ((long *)*puVar16,param_2,param_3,plVar18,plVar3,puVar12);
                  lVar11 = lVar11 + -8;
                  puVar16 = puVar16 + 1;
                } while (lVar11 != 0);
                lVar11 = 0;
                puVar16 = (undefined8 *)(lVar25 + 0x328);
                do {
                  if ((*(uint *)(puVar16 + -1) & uVar4) != 0) {
                    (**(code **)(*(long *)*puVar16 + 0x28))
                              ((long *)*puVar16,param_2,param_3,plVar18,plVar3,puVar12);
                  }
                  lVar11 = lVar11 + 1;
                  puVar16 = puVar16 + 2;
                } while (lVar11 < *(int *)(lVar25 + 0x31c));
                if (*(int *)(lVar25 + 0x1458) != 0) {
                  lVar11 = (long)*(int *)(lVar25 + 0x1458) << 3;
                  puVar16 = *(undefined8 **)(lVar25 + 0x1450);
                  do {
                    (**(code **)(*(long *)*puVar16 + 0xc0))
                              ((long *)*puVar16,param_2,param_3,plVar18,plVar3,puVar12);
                    lVar11 = lVar11 + -8;
                    puVar16 = puVar16 + 1;
                  } while (lVar11 != 0);
                }
              }
            }
            uVar15 = uVar15 - 1;
            if (0 < (int)uVar15) break;
            if ((local_c4 == 0) || (local_d0 = *(uint **)(local_d0 + 2), local_d0 == (uint *)0x0))
            goto LAB_0301eda8;
            uVar15 = *local_d0 & 0xffff;
            if ((int)local_c4 <= (int)(*local_d0 & 0xffff)) {
              uVar15 = local_c4;
            }
            if ((int)uVar15 < 1) goto LAB_0301eda8;
            local_c4 = local_c4 - uVar15;
            puVar12 = local_d0 + 8;
            if (puVar12 == (uint *)0x0) goto LAB_0301eda8;
          }
          puVar12 = puVar12 + 0x40;
        } while (puVar12 != (uint *)0x0);
      }
    }
  }
LAB_0301eda8:
  if (iVar2 != 0) {
    lVar25 = nn::os::GetSystemTick();
    *(long *)(lVar13 + 0x520) = lVar25 + local_e8 + *(long *)(lVar13 + 0x520);
    *(int *)(lVar13 + 0x528) = *(int *)(lVar13 + 0x528) + 1;
  }
LAB_0301e908:
  lVar13 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar13 + 0x738);
  if (iVar2 != 0) {
    lVar25 = nn::os::GetSystemTick();
    local_c0 = -lVar25;
  }
  uVar21 = *(undefined8 *)(param_3 + 8);
  plVar24 = *(long **)(*(long *)(param_2 + 8) + 0x658);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar24 + 0x48))(plVar24,*(long *)(param_1 + 0x18),plVar18[1],plVar3[1]);
  }
  plVar3[2] = *(long *)(puVar17 + 0x2c);
  for (; uVar8 = local_6c, puVar17 != (uint *)0x0; puVar17 = puVar17 + 0x40) {
    while( true ) {
      lVar25 = *(long *)(puVar17 + 0x26);
      puVar12 = *(uint **)(lVar25 + 0x20);
      if (puVar12 != (uint *)0x0) {
        plVar22 = *(long **)(param_1 + 0x10);
        puVar10 = (uint *)plVar22[3];
        if (puVar10 == puVar12) {
          iVar9 = (int)plVar22[4] + 1;
        }
        else {
          if ((puVar10 != (uint *)0x0) && (lVar11 = *plVar22, lVar11 != 0)) {
            uVar8 = *(uint *)(plVar22 + 4);
            if (uVar8 == (*puVar10 & 0xffff)) {
              puVar16 = (undefined8 *)plVar22[2];
              *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)puVar10[1] * 8) = 0;
              *(undefined1 *)(lVar11 + 0xc) = 1;
              iVar9 = *(int *)(puVar16 + 0xb);
              lVar11 = puVar16[1];
              *(uint **)(lVar11 + (long)iVar9 * 8) = puVar10;
              *(int *)(puVar16 + 0xb) = iVar9 + 1;
              if (*(int *)((long)puVar16 + 0x5c) <= iVar9 + 1) {
                (**(code **)(*(long *)*puVar16 + 0x28))
                          ((long *)*puVar16,lVar11 + (long)(iVar9 + -5) * 8,6);
                *(int *)(puVar16 + 0xb) = iVar9 + -5;
              }
            }
            else {
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar10,0x10);
                if (bVar6) {
                  *puVar10 = *puVar10 - uVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          iVar9 = 1;
          plVar22[3] = (long)puVar12;
        }
        *(int *)(plVar22 + 4) = iVar9;
      }
      if (((*(byte *)(lVar25 + 0x2c) >> 6 & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
        plVar3[2] = *(long *)(puVar17 + 0x2c);
        uVar8 = puVar17[0x29];
        lVar11 = *(long *)(*plVar3 + 0x78);
        *(uint *)(plVar3 + 3) = uVar8;
        if (*(char *)(lVar11 + 0x18) == '\x15') {
          plVar22 = (long *)(lVar11 + ((ulong)(uVar8 >> 0x1a) & 0x38) + 0x48);
          lVar11 = *plVar22;
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = lVar11 + (long)plVar22;
          }
        }
        plVar3[4] = lVar11;
        (**(code **)(*plVar24 + 0x50))
                  (plVar24,*(undefined8 *)(param_1 + 0x18),param_2,uVar21,lVar25,puVar17,plVar18,
                   plVar3,0);
      }
      else {
        *(undefined8 *)(lVar25 + 0x20) = 0;
        *(undefined2 *)(lVar25 + 0x28) = 0;
      }
      uVar8 = local_6c - 1;
      if (0 < (int)uVar8) break;
      if (local_a4 == 0) goto LAB_0301ed44;
      local_b8 = *(uint **)(local_b8 + 2);
      if (local_b8 == (uint *)0x0) goto LAB_0301ed44;
      local_6c = *local_b8 & 0xffff;
      if ((int)local_a4 <= (int)(*local_b8 & 0xffff)) {
        local_6c = local_a4;
      }
      if ((int)local_6c < 1) goto LAB_0301ed44;
      puVar17 = local_b8 + 8;
      local_a4 = local_a4 - local_6c;
      Hint_Prefetch(*(long *)(local_b8 + 2),0,0,0);
      Hint_Prefetch(*(long *)(local_b8 + 2) + 0x40,0,0,0);
      Hint_Prefetch(local_b8 + 0x20,0,0,0);
      Hint_Prefetch(local_b8 + 0x30,0,0,0);
      uVar8 = local_6c;
      if (puVar17 == (uint *)0x0) goto LAB_0301ed44;
    }
    local_6c = uVar8;
  }
LAB_0301ed44:
  local_6c = uVar8;
  if (iVar2 != 0) {
    lVar25 = nn::os::GetSystemTick();
    *(long *)(lVar13 + 0x4f0) = lVar25 + local_c0 + *(long *)(lVar13 + 0x4f0);
    *(int *)(lVar13 + 0x4f8) = *(int *)(lVar13 + 0x4f8) + 1;
  }
  FUN_032bf658(*(undefined8 *)(param_1 + 0x48),lVar23,puVar1);
  plVar18 = *(long **)(param_1 + 0x48);
  lVar23 = plVar18[3];
  iVar2 = *(int *)((long)plVar18 + 0x1c);
  iVar9 = *(int *)(*plVar18 + 8);
  *(long *)(param_1 + 0x50) = plVar18[2];
  *(short *)(param_1 + 0x58) = (short)lVar23;
  *(short *)(param_1 + 0x5a) = (short)iVar2;
  *(int *)(param_1 + 0x5c) = -(iVar2 + iVar9);
  *plVar20 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


