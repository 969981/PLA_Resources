/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019229a4; name: FUN_019229a4
 */


void FUN_019229a4(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  ulong uVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  ushort *puVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  puVar9 = PTR_DAT_0437b6e8;
  uVar18 = *(ulong *)(param_2 + 0x628);
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    param_3 = param_3 & 0xffff;
    if (uVar20 < 2) {
      uVar24 = (int)uVar18 - 1 & param_3;
    }
    else if (param_3 < uVar18) {
      uVar24 = param_3;
    }
    else {
      uVar24 = 0;
      if (uVar18 != 0) {
        uVar24 = param_3 / uVar18;
      }
      uVar24 = param_3 - uVar24 * uVar18;
    }
    plVar21 = *(long **)(*(long *)(param_2 + 0x620) + uVar24 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar21[1] == param_3) {
            if (plVar21[2] == param_3) goto LAB_01922a70;
          }
          else if ((plVar21[1] & uVar18 - 1) != uVar24) goto LAB_01923a48;
          plVar21 = (long *)*plVar21;
          uVar20 = 0;
        } while (plVar21 != (long *)0x0);
        goto LAB_01922a74;
      }
      do {
        uVar20 = plVar21[1];
        if (uVar20 == param_3) {
          if (plVar21[2] == param_3) goto LAB_01922a70;
        }
        else {
          if (uVar18 <= uVar20) {
            uVar7 = 0;
            if (uVar18 != 0) {
              uVar7 = uVar20 / uVar18;
            }
            uVar20 = uVar20 - uVar7 * uVar18;
          }
          if (uVar20 != uVar24) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
LAB_01923a48:
    uVar20 = 0;
  }
  goto LAB_01922a74;
LAB_01922a70:
  uVar20 = (ulong)*(uint *)(plVar21 + 3);
LAB_01922a74:
  puVar15 = *(uint **)(*(long *)(param_2 + 0x250) + 0x250);
  piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar15 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar15 = (uint *)((long)puVar15 + uVar20 * 4 + (ulong)*puVar15 + 4);
  piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
  *(undefined1 *)(param_1 + 6) = 0;
  uVar27 = *(undefined8 *)puVar9;
  uVar3 = *(undefined8 *)(puVar9 + 8);
  *param_1 = uVar27;
  param_1[1] = uVar3;
  param_1[2] = uVar27;
  param_1[3] = uVar3;
  param_1[4] = 0x40a000003f800000;
  param_1[5] = 0x41a000003f800000;
  param_1[8] = 0;
  param_1[9] = 4;
  puVar16 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar5 = *puVar16;
  if (uVar5 < 7) {
    lVar23 = 0;
  }
  else {
    lVar23 = 0;
    if ((ulong)puVar16[3] != 0) {
      puVar15 = (uint *)((long)piVar2 + (ulong)puVar16[3]);
      lVar23 = (long)puVar15 + (ulong)*puVar15;
    }
  }
  bVar4 = *(byte *)(lVar23 + 4);
  puVar26 = &DAT_cbf29ce484222645;
  if (bVar4 == 0) {
    uVar13 = 0;
  }
  else {
    puVar22 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
    uVar13 = 0;
    if ((long)puVar22 < 0x7b75dc588d683f07) {
      if (puVar22 == (undefined1 *)0x921becbef31460fa) {
        uVar13 = 5;
      }
      else if (puVar22 == (undefined1 *)0xafa2e3372124ce57) {
        uVar13 = 1;
      }
      else if (puVar22 == (undefined1 *)0xb5333c6fc6a8229c) {
        uVar13 = 3;
      }
    }
    else if (puVar22 == (undefined1 *)0x7b75dc588d683f07) {
      uVar13 = 4;
    }
    else if (puVar22 == (undefined1 *)0x7fcc293af41fc8bd) {
      uVar13 = 2;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar13;
  if (uVar5 < 0xb) {
    lVar23 = 0;
    bVar4 = DAT_00000004;
    if (DAT_00000004 != 0) goto LAB_01922ba0;
LAB_01923788:
    uVar19 = 0;
  }
  else {
    lVar23 = 0;
    if ((ulong)puVar16[5] != 0) {
      puVar15 = (uint *)((long)piVar2 + (ulong)puVar16[5]);
      lVar23 = (long)puVar15 + (ulong)*puVar15;
    }
    bVar4 = *(byte *)(lVar23 + 4);
    if (*(byte *)(lVar23 + 4) == 0) goto LAB_01923788;
LAB_01922ba0:
    puVar22 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
    uVar19 = 2;
    if (puVar22 != (undefined1 *)0x6b8f1aecf51ff115) {
      uVar19 = (uint)(puVar22 == (undefined1 *)0xb593bc76f148934);
    }
  }
  *(uint *)((long)param_1 + 0x44) = uVar19;
  if ((uVar5 < 0x13) || ((ulong)puVar16[9] == 0)) {
    lVar23 = 0;
  }
  else {
    puVar15 = (uint *)((long)piVar2 + (ulong)puVar16[9]);
    lVar23 = (long)puVar15 + (ulong)*puVar15;
  }
  local_60 = strlen((char *)(lVar23 + 4));
  bVar4 = *(byte *)(lVar23 + 4);
  local_70 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    local_70 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
  }
  local_58 = (long *)0x0;
  pcStack_68 = (char *)(lVar23 + 4);
  uVar13 = FUN_0191e810(&local_70);
  *(undefined4 *)(param_1 + 9) = uVar13;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar16 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar5 = *puVar16;
  if (uVar5 < 9) {
    lVar23 = 0;
    bVar4 = DAT_00000004;
    if (DAT_00000004 != 0) goto LAB_01922c9c;
LAB_0192379c:
    uVar13 = 0;
  }
  else {
    lVar23 = 0;
    if ((ulong)puVar16[4] != 0) {
      puVar15 = (uint *)((long)piVar2 + (ulong)puVar16[4]);
      lVar23 = (long)puVar15 + (ulong)*puVar15;
    }
    bVar4 = *(byte *)(lVar23 + 4);
    if (*(byte *)(lVar23 + 4) == 0) goto LAB_0192379c;
LAB_01922c9c:
    puVar22 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
    if (puVar22 == (undefined1 *)0x570e45733e8000f5) {
      uVar13 = 5;
    }
    else {
      uVar13 = 0;
      if ((long)puVar22 < -0x138fd65574849699) {
        if (puVar22 == (undefined1 *)0x972559a8fd278567) {
          uVar13 = 3;
        }
        else if (puVar22 == (undefined1 *)0xb959416586cf0e67) {
          uVar13 = 1;
        }
      }
      else if (puVar22 == (undefined1 *)0x51ccbd7a4ebe8e4d) {
        uVar13 = 2;
      }
      else if (puVar22 == (undefined1 *)0xec7029aa8b7b6967) {
        uVar13 = 4;
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar13;
  if (uVar5 < 0xd) {
    lVar23 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    bVar12 = false;
    if ((ulong)puVar16[6] != 0) {
      bVar12 = *(char *)((long)piVar2 + (ulong)puVar16[6]) != '\0';
    }
    *(bool *)(param_1 + 6) = bVar12;
    if ((uVar5 < 0xf) || ((ulong)puVar16[7] == 0)) {
      lVar23 = 0;
    }
    else {
      puVar15 = (uint *)((long)piVar2 + (ulong)puVar16[7]);
      lVar23 = (long)puVar15 + (ulong)*puVar15;
    }
  }
  local_80 = strlen((char *)(lVar23 + 4));
  bVar4 = *(byte *)(lVar23 + 4);
  local_90 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    local_90 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
  }
  local_78 = (long *)0x0;
  pcStack_88 = (char *)(lVar23 + 4);
  FUN_0191e5f8(&local_90);
  uVar27 = NEON_fmov(0x3f800000,4);
  uVar13 = (undefined4)((ulong)uVar27 >> 0x20);
  param_1[1] = CONCAT44(uVar13,extraout_var_01);
  *param_1 = CONCAT44(extraout_var,extraout_s0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
     (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar20 == 0)) {
    lVar23 = 0;
  }
  else {
    puVar15 = (uint *)((long)piVar2 + uVar20);
    lVar23 = (long)puVar15 + (ulong)*puVar15;
  }
  local_80 = strlen((char *)(lVar23 + 4));
  bVar4 = *(byte *)(lVar23 + 4);
  if (bVar4 != 0) {
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
  }
  local_78 = (long *)0x0;
  local_90 = puVar26;
  pcStack_88 = (char *)(lVar23 + 4);
  FUN_0191e5f8(&local_90);
  param_1[3] = CONCAT44(uVar13,extraout_var_02);
  param_1[2] = CONCAT44(extraout_var_00,extraout_s0_00);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar9 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar11 = PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar23 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar23;
  uVar20 = *(ulong *)(lVar23 + 0x60);
  fVar28 = 0.0;
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar24 = uVar20 - 1 & DAT_043d1ca8;
    }
    else if (DAT_043d1ca8 < uVar20) {
      uVar24 = DAT_043d1ca8;
    }
    else {
      uVar24 = 0;
      if (uVar20 != 0) {
        uVar24 = DAT_043d1ca8 / uVar20;
      }
      uVar24 = DAT_043d1ca8 - uVar24 * uVar20;
    }
    plVar21 = *(long **)(*(long *)(lVar23 + 0x58) + uVar24 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_01922ec0;
          }
          else if ((plVar21[1] & uVar20 - 1) != uVar24) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_01922ec0;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar7 * uVar20;
            }
            if (uVar18 != uVar24) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_019230c0:
  bVar4 = *puVar9;
joined_r0x019237c0:
  if (((bVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar10;
  *(long *)puVar11 = lVar23;
  uVar20 = *(ulong *)(lVar23 + 0x60);
  fVar29 = 0.0;
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar24 = uVar20 - 1 & DAT_043d1ca8;
    }
    else if (DAT_043d1ca8 < uVar20) {
      uVar24 = DAT_043d1ca8;
    }
    else {
      uVar24 = 0;
      if (uVar20 != 0) {
        uVar24 = DAT_043d1ca8 / uVar20;
      }
      uVar24 = DAT_043d1ca8 - uVar24 * uVar20;
    }
    plVar21 = *(long **)(*(long *)(lVar23 + 0x58) + uVar24 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_0192315c;
          }
          else if ((plVar21[1] & uVar20 - 1) != uVar24) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_0192315c;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar7 * uVar20;
            }
            if (uVar18 != uVar24) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_019232b8;
LAB_01922ec0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar20 = plVar21[0x21];
    fVar28 = 0.0;
    if (uVar20 != 0) {
      uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar24 = uVar20 - 1 & 0xbc587caa1dd6bee7;
      }
      else if (uVar20 < 0xbc587caa1dd6bee8) {
        uVar24 = 0;
        if (uVar20 != 0) {
          uVar24 = 0xbc587caa1dd6bee7 / uVar20;
        }
        uVar24 = 0xbc587caa1dd6bee7 - uVar24 * uVar20;
      }
      else {
        uVar24 = 0xbc587caa1dd6bee7;
      }
      plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar25[1] == 0xbc587caa1dd6bee7) {
              if (plVar25[2] == -0x43a78355e2294119) goto LAB_019230a8;
            }
            else if ((plVar25[1] & uVar20 - 1) != uVar24) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar25[1];
            if (uVar18 == 0xbc587caa1dd6bee7) {
              if (plVar25[2] == -0x43a78355e2294119) goto LAB_019230a8;
            }
            else {
              if (uVar20 <= uVar18) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar18 / uVar20;
                }
                uVar18 = uVar18 - uVar7 * uVar20;
              }
              if (uVar18 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_019230ac;
  }
  goto LAB_019230c0;
LAB_019230a8:
  fVar28 = *(float *)(plVar25 + 6);
LAB_019230ac:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 != 0) goto LAB_019230c0;
  (**(code **)(*plVar21 + 0x10))();
  bVar4 = *puVar9;
  goto joined_r0x019237c0;
LAB_0192315c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar20 = plVar21[0x21];
    fVar29 = 0.0;
    if (uVar20 != 0) {
      uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar24 = uVar20 - 1 & 0xbc736aaa1ded6809;
      }
      else if (uVar20 < 0xbc736aaa1ded680a) {
        uVar24 = 0;
        if (uVar20 != 0) {
          uVar24 = 0xbc736aaa1ded6809 / uVar20;
        }
        uVar24 = 0xbc736aaa1ded6809 - uVar24 * uVar20;
      }
      else {
        uVar24 = 0xbc736aaa1ded6809;
      }
      plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar25[1] == 0xbc736aaa1ded6809) {
              if (plVar25[2] == -0x438c9555e21297f7) goto LAB_019232a0;
            }
            else if ((plVar25[1] & uVar20 - 1) != uVar24) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar25[1];
            if (uVar18 == 0xbc736aaa1ded6809) {
              if (plVar25[2] == -0x438c9555e21297f7) goto LAB_019232a0;
            }
            else {
              if (uVar20 <= uVar18) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar18 / uVar20;
                }
                uVar18 = uVar18 - uVar7 * uVar20;
              }
              if (uVar18 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_019232a4;
  }
  goto LAB_019232b8;
LAB_01923364:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar20 = plVar21[0x21];
    fVar28 = 0.0;
    if (uVar20 != 0) {
      uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar24 = uVar20 - 1 & 0xeb78c628ac0b8d7f;
      }
      else if (uVar20 < 0xeb78c628ac0b8d80) {
        uVar24 = 0;
        if (uVar20 != 0) {
          uVar24 = 0xeb78c628ac0b8d7f / uVar20;
        }
        uVar24 = 0xeb78c628ac0b8d7f - uVar24 * uVar20;
      }
      else {
        uVar24 = 0xeb78c628ac0b8d7f;
      }
      plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar25[1] == 0xeb78c628ac0b8d7f) {
              if (plVar25[2] == -0x148739d753f47281) goto LAB_019234a8;
            }
            else if ((plVar25[1] & uVar20 - 1) != uVar24) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar25[1];
            if (uVar18 == 0xeb78c628ac0b8d7f) {
              if (plVar25[2] == -0x148739d753f47281) goto LAB_019234a8;
            }
            else {
              if (uVar20 <= uVar18) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar18 / uVar20;
                }
                uVar18 = uVar18 - uVar7 * uVar20;
              }
              if (uVar18 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_019234ac;
  }
  goto LAB_019234c0;
LAB_019234a8:
  fVar28 = *(float *)(plVar25 + 6);
LAB_019234ac:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 != 0) goto LAB_019234c0;
  (**(code **)(*plVar21 + 0x10))();
  bVar4 = *puVar9;
  goto joined_r0x01923820;
LAB_0192355c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_019236b8;
  plVar1 = plVar21 + 10;
  do {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar20 = plVar21[0x21];
  fVar29 = 0.0;
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar24 = uVar20 - 1 & 0x911ca1aa055ea97e;
    }
    else if (uVar20 < 0x911ca1aa055ea97f) {
      uVar24 = 0;
      if (uVar20 != 0) {
        uVar24 = 0x911ca1aa055ea97e / uVar20;
      }
      uVar24 = 0x911ca1aa055ea97e - uVar24 * uVar20;
    }
    else {
      uVar24 = 0x911ca1aa055ea97e;
    }
    plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar25[1] == 0x911ca1aa055ea97e) {
            if (plVar25[2] == -0x6ee35e55faa15682) goto LAB_019236a0;
          }
          else if ((plVar25[1] & uVar20 - 1) != uVar24) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar25[1];
          if (uVar18 == 0x911ca1aa055ea97e) {
            if (plVar25[2] == -0x6ee35e55faa15682) goto LAB_019236a0;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar7 * uVar20;
            }
            if (uVar18 != uVar24) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_019236a4;
LAB_019236a0:
  fVar29 = *(float *)(plVar25 + 6);
LAB_019236a4:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
  goto LAB_019236b8;
LAB_019232a0:
  fVar29 = *(float *)(plVar25 + 6);
LAB_019232a4:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
LAB_019232b8:
  fVar8 = fVar29;
  if (fVar29 <= fVar28) {
    fVar8 = fVar28;
    fVar28 = fVar29;
  }
  *(float *)(param_1 + 4) = fVar28;
  *(float *)((long)param_1 + 0x24) = fVar8;
  if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar10;
  *(long *)puVar11 = lVar23;
  uVar20 = *(ulong *)(lVar23 + 0x60);
  fVar28 = 0.0;
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar24 = uVar20 - 1 & DAT_043d1ca8;
    }
    else if (DAT_043d1ca8 < uVar20) {
      uVar24 = DAT_043d1ca8;
    }
    else {
      uVar24 = 0;
      if (uVar20 != 0) {
        uVar24 = DAT_043d1ca8 / uVar20;
      }
      uVar24 = DAT_043d1ca8 - uVar24 * uVar20;
    }
    plVar21 = *(long **)(*(long *)(lVar23 + 0x58) + uVar24 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_01923364;
          }
          else if ((plVar21[1] & uVar20 - 1) != uVar24) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_01923364;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar7 * uVar20;
            }
            if (uVar18 != uVar24) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_019234c0:
  bVar4 = *puVar9;
joined_r0x01923820:
  if (((bVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar10;
  *(long *)puVar11 = lVar23;
  uVar20 = *(ulong *)(lVar23 + 0x60);
  fVar29 = 0.0;
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar24 = uVar20 - 1 & DAT_043d1ca8;
    }
    else if (DAT_043d1ca8 < uVar20) {
      uVar24 = DAT_043d1ca8;
    }
    else {
      uVar24 = 0;
      if (uVar20 != 0) {
        uVar24 = DAT_043d1ca8 / uVar20;
      }
      uVar24 = DAT_043d1ca8 - uVar24 * uVar20;
    }
    plVar21 = *(long **)(*(long *)(lVar23 + 0x58) + uVar24 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_0192355c;
          }
          else if ((plVar21[1] & uVar20 - 1) != uVar24) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == DAT_043d1ca8) {
            if (plVar21[2] == DAT_043d1ca8) goto LAB_0192355c;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar7 * uVar20;
            }
            if (uVar18 != uVar24) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_019236b8:
  fVar8 = fVar29;
  if (fVar29 <= fVar28) {
    fVar8 = fVar28;
    fVar28 = fVar29;
  }
  *(float *)(param_1 + 5) = fVar28;
  *(float *)((long)param_1 + 0x2c) = fVar8;
  return;
}


