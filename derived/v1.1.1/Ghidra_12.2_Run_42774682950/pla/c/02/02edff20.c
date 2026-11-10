/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edff20; name: FUN_02edff20
 */


int FUN_02edff20(long *param_1,long param_2,uint param_3,int param_4,undefined4 param_5,int param_6,
                int param_7,undefined4 param_8,void *param_9,int param_10,long *param_11,
                int param_12,byte param_13)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  int *piVar21;
  long *plVar22;
  int *piVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 local_b8;
  long *plStack_b0;
  uint *local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  uint local_64;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar7 = *(uint *)(param_1 + 4);
  plVar15 = param_1 + 3;
  if (uVar7 != 0) {
    uVar14 = (int)param_2 + param_6;
    uVar16 = 0;
    if (uVar7 != 0) {
      uVar16 = uVar14 / uVar7;
    }
    for (plVar20 = *(long **)(*plVar15 + (ulong)(uVar14 - uVar16 * uVar7) * 8);
        plVar20 != (long *)0x0; plVar20 = (long *)plVar20[2]) {
      if ((*plVar20 == param_2) && ((int)plVar20[1] == param_6)) {
        if (*(uint *)(plVar20 + 0xb) == 0) goto LAB_02ee00a8;
        piVar21 = (int *)plVar20[10];
        lVar8 = (ulong)*(uint *)(plVar20 + 0xb) << 5;
        goto LAB_02ee0090;
      }
    }
  }
  plVar20 = (long *)(*DAT_0442d138)(0,0x60);
  if (plVar20 == (long *)0x0) {
    return 0x34;
  }
  *plVar20 = 0;
  plVar20[1] = 0;
  plVar20[8] = 0;
  *plVar20 = param_2;
  plVar20[4] = 0;
  plVar20[5] = 0;
  plVar20[2] = 0;
  plVar20[3] = 0;
  plVar20[6] = 0xff;
  plVar20[7] = 0xff;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  *(int *)(plVar20 + 1) = param_6;
  *(int *)(plVar20 + 9) = param_12;
  *(undefined4 *)((long)plVar20 + 0x4c) = param_5;
  lVar8 = param_11[2];
  lVar4 = param_11[4];
  lVar9 = param_11[5];
  plVar20[6] = param_11[3];
  plVar20[7] = lVar4;
  plVar20[8] = lVar9;
  lVar4 = *param_11;
  lVar9 = param_11[1];
  plVar20[5] = lVar8;
  plVar20[3] = lVar4;
  plVar20[4] = lVar9;
  uVar7 = *(uint *)(param_1 + 4);
  if ((uVar7 == 0) || (fVar24 = (float)NEON_ucvtf((int)param_1[5]), 0.9 < fVar24 / (float)uVar7)) {
    FUN_02ee8148(plVar15);
    uVar7 = *(uint *)(param_1 + 4);
    if (uVar7 != 0) {
      lVar8 = *plVar20;
      goto LAB_02ee0048;
    }
  }
  else {
    lVar8 = param_2;
LAB_02ee0048:
    uVar14 = (int)plVar20[1] + (int)lVar8;
    uVar16 = 0;
    if (uVar7 != 0) {
      uVar16 = uVar14 / uVar7;
    }
    lVar8 = (ulong)(uVar14 - uVar16 * uVar7) * 8;
    plVar20[2] = *(long *)(param_1[3] + lVar8);
    *(long **)(param_1[3] + lVar8) = plVar20;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
LAB_02ee00a8:
  bVar2 = plVar20 != (long *)0x0;
LAB_02ee00b0:
  if ((param_9 != (void *)0x0) && (param_10 != 0)) {
    uVar14 = *(uint *)(plVar20 + 0xb);
    uVar7 = *(uint *)((long)plVar20 + 0x5c);
    if (uVar14 < uVar7) {
LAB_02ee0110:
      if (uVar14 < uVar7) {
        uVar7 = *(uint *)(plVar20 + 0xb);
        *(uint *)(plVar20 + 0xb) = uVar7 + 1;
        piVar21 = (int *)(plVar20[10] + (ulong)uVar7 * 0x20);
        if (piVar21 != (int *)0x0) {
          lVar8 = plVar20[10] + (ulong)uVar7 * 0x20;
          plVar22 = (long *)(lVar8 + 8);
          *plVar22 = 0;
          piVar23 = (int *)(lVar8 + 0x10);
          piVar23[0] = 0;
          piVar23[1] = 0;
          *(undefined4 *)(lVar8 + 0x18) = 1;
          *(uint *)(lVar8 + 4) = param_3;
          *piVar21 = param_7;
          *(undefined4 *)(lVar8 + 0x14) = 0;
          *(undefined4 *)(lVar8 + 0x18) = 1;
          *piVar23 = param_10 + 2;
          lVar4 = (*DAT_0442d138)(0,(param_10 + 2) * 0x14);
          *plVar22 = lVar4;
          if (lVar4 != 0) {
            *(undefined4 *)(lVar8 + 0x14) = param_8;
            memcpy((void *)(lVar4 + 0xc),param_9,(ulong)(uint)(param_10 * 0xc));
            *(undefined4 *)(*plVar22 + 8) = 9;
            *(undefined4 *)*plVar22 = 0xff7fffff;
            *(undefined4 *)(*plVar22 + 4) = *(undefined4 *)(*plVar22 + 0x10);
            *(undefined4 *)(*plVar22 + (ulong)(*piVar23 - 1) * 0xc + 8) = 9;
            *(undefined4 *)(*plVar22 + (ulong)(*piVar23 - 1) * 0xc) = 0x7f7fffff;
            *(undefined4 *)(*plVar22 + (ulong)(*piVar23 - 1) * 0xc + 4) =
                 *(undefined4 *)(*plVar22 + (ulong)(*piVar23 - 2) * 0xc + 4);
            FUN_02e9b180(plVar22);
            goto LAB_02ee022c;
          }
          *piVar23 = 0;
          *(int *)(plVar20 + 0xb) = (int)plVar20[0xb] + -1;
        }
      }
    }
    else {
      iVar3 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar3 = 1;
      }
      uVar7 = iVar3 + uVar7;
      lVar8 = (*DAT_0442d148)(0,plVar20[10],(ulong)uVar7 << 5);
      if (lVar8 != 0) {
        plVar20[10] = lVar8;
        *(uint *)((long)plVar20 + 0x5c) = uVar7;
        goto LAB_02ee0110;
      }
    }
    iVar3 = 0x34;
    goto joined_r0x02ee0908;
  }
  iVar3 = 0x1f;
  if ((param_6 != 0x3a) || (param_12 != 5)) goto joined_r0x02ee0908;
LAB_02ee022c:
  if (param_4 == 2) {
    iVar3 = FUN_02ec5234(DAT_0440a180,param_3,plVar20);
    if (iVar3 != 1) goto joined_r0x02ee0908;
  }
  else {
    lVar8 = FUN_02ee2654(param_1,param_3);
    if (lVar8 == 0) {
      iVar3 = 0x34;
      goto joined_r0x02ee0908;
    }
    uVar7 = *(uint *)(lVar8 + 0x60);
    plVar22 = (long *)(lVar8 + 0x58);
    if (uVar7 != 0) {
      iVar3 = 0;
      uVar14 = uVar7;
      do {
        iVar1 = iVar3 + (uVar14 >> 1);
        plVar18 = *(long **)(*plVar22 + (long)iVar1 * 8);
        if (plVar18 == plVar20) {
          if (*plVar22 + (long)iVar1 * 8 != 0) goto LAB_02ee0448;
          break;
        }
        if (((int)plVar18[9] < (int)plVar20[9]) ||
           ((plVar18 < plVar20 && ((int)plVar18[9] == (int)plVar20[9])))) {
          iVar3 = iVar1 + 1;
          uVar14 = uVar14 - 1;
        }
        uVar14 = uVar14 >> 1;
      } while (uVar14 != 0);
    }
    uVar14 = *(uint *)(lVar8 + 0x50);
    plVar18 = (long *)(lVar8 + 0x48);
    if (uVar14 != 0) {
      iVar3 = 0;
      uVar16 = uVar14;
      do {
        iVar1 = iVar3 + (uVar16 >> 1);
        plVar19 = *(long **)(*plVar18 + (long)iVar1 * 8);
        if (plVar19 == plVar20) {
          if (*plVar18 + (long)iVar1 * 8 != 0) goto LAB_02ee0448;
          break;
        }
        if (((int)plVar19[9] < (int)plVar20[9]) ||
           ((plVar19 < plVar20 && ((int)plVar19[9] == (int)plVar20[9])))) {
          iVar3 = iVar1 + 1;
          uVar16 = uVar16 - 1;
        }
        uVar16 = uVar16 >> 1;
      } while (uVar16 != 0);
    }
    uVar7 = uVar7 + uVar14 + 1;
    if (*(uint *)(lVar8 + 0x54) < uVar7) {
      lVar4 = (*DAT_0442d148)(0,*plVar18,(ulong)(uVar7 * 2) << 3);
      if (lVar4 != 0) {
        *(long *)(lVar8 + 0x48) = lVar4;
        *(uint *)(lVar8 + 0x54) = uVar7 * 2;
        goto LAB_02ee0340;
      }
LAB_02ee0910:
      iVar3 = 0x34;
joined_r0x02ee0908:
      if ((bVar2) && ((int)plVar20[0xb] == 0)) {
        uVar7 = *(uint *)(param_1 + 4);
        if (uVar7 != 0) {
          uVar14 = (int)param_2 + param_6;
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = uVar14 / uVar7;
          }
          plVar15 = (long *)(*plVar15 + (ulong)(uVar14 - uVar16 * uVar7) * 8);
          if ((long *)*plVar15 != (long *)0x0) {
            plVar22 = (long *)0x0;
            plVar18 = (long *)*plVar15;
            do {
              if ((*plVar18 == param_2) && ((int)plVar18[1] == param_6)) {
                if (plVar22 != (long *)0x0) {
                  plVar15 = plVar22 + 2;
                }
                *plVar15 = plVar18[2];
                *(int *)(param_1 + 5) = (int)param_1[5] + -1;
                break;
              }
              plVar19 = plVar18 + 2;
              plVar22 = plVar18;
              plVar18 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
        }
        FUN_02edfd6c(param_1,plVar20);
        if (plVar20[10] != 0) {
          *(undefined4 *)(plVar20 + 0xb) = 0;
          (*DAT_0442d150)(0);
          plVar20[10] = 0;
          *(undefined4 *)((long)plVar20 + 0x5c) = 0;
        }
        (*DAT_0442d150)(0,plVar20);
      }
      return iVar3;
    }
LAB_02ee0340:
    if (*(uint *)(lVar8 + 100) < uVar7) {
      lVar4 = (*DAT_0442d148)(0,*plVar22,(ulong)(uVar7 * 2) << 3);
      if (lVar4 == 0) goto LAB_02ee0910;
      *(long *)(lVar8 + 0x58) = lVar4;
      *(uint *)(lVar8 + 100) = uVar7 * 2;
    }
    if ((param_13 & 1) == 0) {
      plVar18 = plVar22;
    }
    uVar7 = *(uint *)(plVar18 + 1);
    iVar3 = 0;
    lVar8 = *plVar18;
    iVar1 = iVar3;
    if (uVar7 != 0) {
      uVar14 = uVar7;
      do {
        iVar1 = iVar3 + (uVar14 >> 1);
        plVar15 = *(long **)(lVar8 + (long)iVar1 * 8);
        if (plVar15 == plVar20) break;
        if (((int)plVar15[9] < (int)plVar20[9]) ||
           ((plVar15 < plVar20 && ((int)plVar15[9] == (int)plVar20[9])))) {
          iVar3 = iVar1 + 1;
          uVar14 = uVar14 - 1;
        }
        uVar14 = uVar14 >> 1;
        iVar1 = iVar3;
      } while (uVar14 != 0);
    }
    lVar4 = lVar8 + (long)iVar1 * 8;
    if (lVar4 == 0) {
      puVar6 = (undefined8 *)FUN_02ec6314(plVar18);
    }
    else {
      uVar14 = *(uint *)((long)plVar18 + 0xc);
      if (uVar14 <= uVar7) {
        uVar10 = FUN_02ec6380(plVar18);
        if ((uVar10 & 1) == 0) goto LAB_02ee0448;
        uVar14 = *(uint *)((long)plVar18 + 0xc);
      }
      if (uVar14 <= uVar7) goto LAB_02ee0448;
      lVar9 = *plVar18;
      uVar10 = lVar4 - lVar8;
      puVar6 = (undefined8 *)(lVar9 + (ulong)*(uint *)(plVar18 + 1) * 8);
      *(uint *)(plVar18 + 1) = *(uint *)(plVar18 + 1) + 1;
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        lVar9 = *plVar18;
      }
      uVar11 = uVar10 >> 3 & 0xffffffff;
      puVar13 = (undefined8 *)(lVar9 + (uVar10 >> 3 & 0xffffffff) * 8);
      if (puVar13 < puVar6) {
        do {
          puVar17 = puVar6 + -1;
          *puVar6 = *puVar17;
          lVar9 = *plVar18;
          puVar13 = (undefined8 *)(lVar9 + uVar11 * 8);
          puVar6 = puVar17;
        } while (puVar13 < puVar17);
      }
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
        lVar9 = *plVar18;
      }
      puVar6 = (undefined8 *)(lVar9 + uVar11 * 8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = plVar20;
    }
  }
LAB_02ee0448:
  if ((int)plVar20[9] == 2) {
    (**(code **)(*(long *)*plVar20 + 8))((long *)*plVar20,param_3 != 0,(int)plVar20[1]);
    return 1;
  }
  switch((int)plVar20[9]) {
  case 0:
    uVar25 = FUN_02eb1334(param_1,plVar20,plVar20 + 3);
    local_a0 = CONCAT44(local_a0._4_4_,uVar25);
    FUN_02e9cd3c(*plVar20,(int)plVar20[1],&local_a0,4);
    break;
  case 1:
    plVar15 = (long *)*plVar20;
    iVar3 = *(int *)((long)plVar20 + 0x4c);
    if (param_3 == 0) {
      uVar26 = 0x3f800000;
      if (iVar3 != 3) {
        uVar26 = 0;
      }
      (**(code **)(*plVar15 + 0x20))(uVar26,plVar15,(int)plVar20[1],0,iVar3,1);
      return 1;
    }
    if (iVar3 == 3) {
      uVar10 = FUN_02ee8474(param_1,plVar20,plVar20 + 3,param_3);
    }
    else {
      local_a0 = plVar20[3];
      local_98 = plVar20[4];
      local_90 = plVar20[5];
      local_88 = plVar20[6];
      local_80 = plVar20[7];
      local_78 = plVar20[8];
      uVar7 = *(uint *)(param_1 + 1);
      if (uVar7 != 0) {
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar14 = param_3 / uVar7;
        }
        for (puVar5 = *(uint **)(*param_1 + (ulong)(param_3 - uVar14 * uVar7) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (*puVar5 == param_3) {
            puVar5 = (uint *)FUN_02eb14e4(puVar5 + 8,&local_a0);
            if (puVar5 == (uint *)0x0) goto LAB_02ee05cc;
            local_64 = *puVar5;
            goto LAB_02ee055c;
          }
        }
      }
      uVar10 = FUN_02ec5abc(DAT_0440a180,param_3,&local_a0,&local_64);
      if ((uVar10 & 1) == 0) {
LAB_02ee05cc:
        uVar7 = *(uint *)(param_1 + 1);
        if (uVar7 != 0) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = param_3 / uVar7;
          }
          puVar5 = *(uint **)(*param_1 + (ulong)(param_3 - uVar14 * uVar7) * 8);
          if (puVar5 != (uint *)0x0) {
            local_64 = 0;
            do {
              if (*puVar5 == param_3) {
                local_64 = puVar5[4];
                break;
              }
              puVar5 = *(uint **)(puVar5 + 2);
            } while (puVar5 != (uint *)0x0);
            uVar7 = *(uint *)(plVar20 + 0xb);
            goto joined_r0x02ee0560;
          }
        }
        local_64 = 0;
        uVar7 = *(uint *)(plVar20 + 0xb);
      }
      else {
LAB_02ee055c:
        uVar7 = *(uint *)(plVar20 + 0xb);
      }
joined_r0x02ee0560:
      if (uVar7 != 0) {
        lVar8 = plVar20[10];
        if (*(uint *)(lVar8 + 4) != param_3) {
          uVar10 = 0;
          lVar4 = lVar8;
          goto LAB_02ee0b84;
        }
        local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar8 + 0x18));
        uVar10 = FUN_02e74568(local_64,lVar8 + 8,&local_b8);
        *(undefined4 *)(lVar8 + 0x18) = (undefined4)local_b8;
        lVar4 = lVar8;
        do {
          lVar8 = plVar20[10];
          uVar7 = *(uint *)(plVar20 + 0xb);
LAB_02ee0b84:
          do {
            lVar9 = lVar4;
            lVar4 = lVar9 + 0x20;
            if (lVar4 == lVar8 + (ulong)uVar7 * 0x20) goto LAB_02ee0bcc;
          } while (*(uint *)(lVar9 + 0x24) != param_3);
          local_b8 = (undefined **)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar9 + 0x38));
          fVar24 = (float)FUN_02e74568(local_64,lVar9 + 0x28,&local_b8);
          *(undefined4 *)(lVar9 + 0x38) = (undefined4)local_b8;
          uVar10 = (ulong)(uint)(fVar24 + (float)uVar10);
        } while( true );
      }
      uVar10 = 0;
    }
LAB_02ee0bcc:
    (**(code **)(*plVar15 + 0x20))
              (uVar10,plVar15,(int)plVar20[1],param_3,*(undefined4 *)((long)plVar20 + 0x4c),0);
    break;
  default:
    FUN_02eb5c1c(*plVar20,param_3 != 0,0);
    break;
  case 3:
    FUN_02eb1334(param_1,plVar20,plVar20 + 3);
    FUN_02eb9b44(*plVar20,(int)plVar20[1],plVar20 + 3);
    break;
  case 6:
    plVar15 = plVar20 + 3;
    fVar24 = (float)FUN_02eb1334(param_1,plVar20,plVar15);
    lVar8 = DAT_0440a130;
    uVar7 = *(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      uVar14 = 0;
      if (uVar7 != 0) {
        uVar14 = param_3 / uVar7;
      }
      puVar5 = *(uint **)(*param_1 + (ulong)(param_3 - uVar14 * uVar7) * 8);
      if (puVar5 != (uint *)0x0) {
LAB_02ee0768:
        if (*puVar5 != param_3) goto code_r0x02ee0774;
        local_a8 = puVar5 + 8;
        local_b8 = &PTR_LAB_042aabf8;
        lVar4 = *plVar20;
        iVar3 = *(int *)(DAT_0440a130 + 0x1c0) + 1;
        *(int *)(DAT_0440a130 + 0x1c0) = iVar3;
        plStack_b0 = plVar15;
        if (((lVar4 != 0) && ((uint)(int)fVar24 < *(uint *)(lVar4 + 0x18))) &&
           (uVar7 = *(uint *)(lVar4 + 0x30), uVar7 != 0)) {
          puVar13 = *(undefined8 **)(lVar4 + 0x28);
          puVar6 = puVar13;
          do {
            if ((*(char *)((long)*puVar6 + 0x14) != '\0') &&
               (plVar20 = *(long **)*puVar6, plVar20 != (long *)0x0)) {
              local_a0 = *plVar15;
              local_90 = local_90 & 0xffffffff00000000;
              local_98 = local_98 & 0xffffffff00000000;
              local_88 = CONCAT71(local_88._1_7_,0xff);
              local_80 = CONCAT71(local_80._1_7_,0xff);
              local_78 = 0;
              (**(code **)(*plVar20 + 0x10))
                        (plVar20,*(undefined4 *)
                                  (*(long *)(lVar4 + 0x10) + (ulong)(uint)(int)fVar24 * 4),&local_a0
                         ,&local_b8);
              puVar13 = *(undefined8 **)(lVar4 + 0x28);
              uVar7 = *(uint *)(lVar4 + 0x30);
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 != puVar13 + uVar7);
          goto LAB_02ee0b68;
        }
        goto LAB_02ee086c;
      }
    }
LAB_02ee077c:
    lVar4 = *plVar20;
    iVar3 = *(int *)(DAT_0440a130 + 0x1c0) + 1;
    *(int *)(DAT_0440a130 + 0x1c0) = iVar3;
    if (lVar4 != 0) {
      if ((uint)(int)fVar24 < *(uint *)(lVar4 + 0x18)) {
        uVar7 = *(uint *)(lVar4 + 0x30);
        if (uVar7 != 0) {
          puVar13 = *(undefined8 **)(lVar4 + 0x28);
          puVar6 = puVar13;
          do {
            if ((*(char *)((long)*puVar6 + 0x14) != '\0') &&
               (plVar20 = *(long **)*puVar6, plVar20 != (long *)0x0)) {
              local_a0 = *plVar15;
              local_90 = local_90 & 0xffffffff00000000;
              local_98 = local_98 & 0xffffffff00000000;
              local_88 = CONCAT71(local_88._1_7_,0xff);
              local_80 = CONCAT71(local_80._1_7_,0xff);
              local_78 = 0;
              (**(code **)(*plVar20 + 0x10))
                        (plVar20,*(undefined4 *)
                                  (*(long *)(lVar4 + 0x10) + (ulong)(uint)(int)fVar24 * 4),&local_a0
                         ,0);
              puVar13 = *(undefined8 **)(lVar4 + 0x28);
              uVar7 = *(uint *)(lVar4 + 0x30);
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 != puVar13 + uVar7);
LAB_02ee0b68:
          iVar3 = *(int *)(DAT_0440a130 + 0x1c0);
          lVar8 = DAT_0440a130;
        }
      }
    }
LAB_02ee086c:
    *(int *)(lVar8 + 0x1c0) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      FUN_02f0cbdc();
    }
  }
  return 1;
LAB_02ee0090:
  if (*piVar21 != param_7) goto code_r0x02ee009c;
  uVar7 = piVar21[1];
  if (*(long *)(piVar21 + 2) != 0) {
    (*DAT_0442d150)(0);
    piVar21[2] = 0;
    piVar21[3] = 0;
  }
  piVar21[4] = 0;
  piVar21[5] = 0;
  uVar14 = *(uint *)(plVar20 + 0xb);
  piVar23 = (int *)(plVar20[10] + (ulong)uVar14 * 0x20 + -0x20);
  if (piVar21 < piVar23) {
    do {
      piVar12 = piVar21 + 8;
      *(undefined8 *)(piVar21 + 6) = *(undefined8 *)(piVar21 + 0xe);
      *(undefined8 *)(piVar21 + 4) = *(undefined8 *)(piVar21 + 0xc);
      *(undefined8 *)(piVar21 + 2) = *(undefined8 *)(piVar21 + 10);
      *(undefined8 *)piVar21 = *(undefined8 *)piVar12;
      piVar21 = piVar12;
    } while (piVar12 < piVar23);
    uVar14 = *(uint *)(plVar20 + 0xb);
  }
  *(uint *)(plVar20 + 0xb) = uVar14 - 1;
  uVar14 = *(uint *)(param_1 + 1);
  if (uVar14 != 0) {
    uVar16 = 0;
    if (uVar14 != 0) {
      uVar16 = uVar7 / uVar14;
    }
    for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar7 - uVar16 * uVar14) * 8); puVar5 != (uint *)0x0
        ; puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == uVar7) {
        FUN_02ee16f8(puVar5,plVar20);
        break;
      }
    }
  }
  if (uVar7 != 0) {
    FUN_02ec55d0(DAT_0440a180,plVar20,uVar7);
  }
  if (plVar20 == (long *)0x0) {
    return 0x1f;
  }
  bVar2 = true;
  goto LAB_02ee00b0;
code_r0x02ee009c:
  piVar21 = piVar21 + 8;
  lVar8 = lVar8 + -0x20;
  if (lVar8 == 0) goto LAB_02ee00a8;
  goto LAB_02ee0090;
code_r0x02ee0774:
  puVar5 = *(uint **)(puVar5 + 2);
  if (puVar5 == (uint *)0x0) goto LAB_02ee077c;
  goto LAB_02ee0768;
}


