/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c44ac; name: FUN_030c44ac
 */


void FUN_030c44ac(undefined8 param_1,long *param_2,int param_3,int param_4,long param_5,
                 long *param_6,long *param_7,byte param_8,short param_9,short param_10,long param_11
                 )

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar15;
  undefined8 *puVar14;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  short *psVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  short *psVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  long local_338;
  long local_310;
  undefined1 *local_2e8;
  int local_2e0;
  uint local_2dc;
  undefined1 auStack_2d8 [256];
  short *local_1d8;
  uint local_1d0;
  uint local_1cc;
  short local_1c8 [32];
  undefined1 *local_188;
  uint local_180;
  uint local_17c;
  undefined1 local_178 [128];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [136];
  
  puVar8 = PTR_PTR_0434a080;
  uVar13 = *(uint *)(param_5 + 0x1c);
  uVar19 = (ulong)uVar13;
  uVar35 = *(uint *)(param_5 + 0x20);
  local_f0 = -0x7fffffe000000000;
  local_f8 = auStack_e8;
  if ((int)uVar13 < 0x21) {
    local_f0._0_4_ = 0;
    bVar9 = false;
    uVar36 = uVar13;
    if ((int)uVar13 < 1) goto LAB_030c476c;
LAB_030c4520:
    lVar21 = (long)(int)(uint)local_f0;
    uVar36 = ~(uint)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,uVar13);
    memset(local_f8 + lVar21 * 4,0xff,(ulong)(uVar13 + uVar36) * 4 + 4);
  }
  else {
    local_f0._4_4_ = 0x80000020;
    if (0x3fffffff < (int)uVar13) {
      FUN_032bd0a8(uVar13);
    }
    uVar36 = (local_f0._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar36) {
      uVar36 = 0x3fffffff;
    }
    uVar23 = uVar13;
    if ((int)uVar13 <= (int)uVar36) {
      uVar23 = uVar36;
    }
    local_f8 = (undefined1 *)FUN_032bd1d4(puVar8,uVar23,4,auStack_e8,0,(long)&local_f0 + 4);
    bVar9 = SBORROW4(uVar13,(uint)local_f0);
    uVar36 = uVar13 - (uint)local_f0;
    if ((int)(uint)local_f0 < (int)uVar13) goto LAB_030c4520;
LAB_030c476c:
    if ((int)uVar36 < 0 != bVar9) {
      local_f0 = CONCAT44(local_f0._4_4_,uVar13);
    }
  }
  local_17c = 0x80000020;
  local_180 = 0;
  local_188 = local_178;
  if ((int)uVar13 < 0x21) {
    bVar9 = false;
    uVar36 = uVar13;
    uVar23 = 0;
    if ((int)uVar13 < 1) goto LAB_030c47d4;
LAB_030c456c:
    puVar15 = (undefined8 *)(local_188 + (long)(int)uVar23 * 4);
    uVar36 = uVar36 & 3;
    if (2 < uVar13 + ~uVar23) {
      iVar28 = (uVar23 + uVar36) - uVar13;
      puVar14 = puVar15;
      do {
        puVar15 = puVar14 + 2;
        *puVar14 = 0x100000001;
        puVar14[1] = 0x100000001;
        iVar28 = iVar28 + 4;
        puVar14 = puVar15;
      } while (iVar28 != 0);
    }
    for (; local_180 = uVar13, uVar36 != 0; uVar36 = uVar36 - 1) {
      *(undefined4 *)puVar15 = 1;
      puVar15 = (undefined8 *)((long)puVar15 + 4);
    }
LAB_030c45b4:
    uVar23 = local_180;
    puVar10 = local_f8;
    lVar21 = local_f0;
  }
  else {
    if (0x3fffffff < (int)uVar13) {
      FUN_032bd0a8(uVar13);
    }
    uVar36 = (local_17c & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar36) {
      uVar36 = 0x3fffffff;
    }
    uVar23 = uVar13;
    if ((int)uVar13 <= (int)uVar36) {
      uVar23 = uVar36;
    }
    local_188 = (undefined1 *)FUN_032bd1d4(puVar8,uVar23,4,local_178,0,&local_17c);
    bVar9 = SBORROW4(uVar13,local_180);
    uVar36 = uVar13 - local_180;
    uVar23 = local_180;
    if (!(uVar36 == 0 || (int)uVar13 < (int)local_180)) goto LAB_030c456c;
LAB_030c47d4:
    uVar23 = uVar13;
    puVar10 = local_f8;
    lVar21 = local_f0;
    if ((int)uVar36 < 0 == bVar9) goto LAB_030c45b4;
  }
  local_180 = uVar23;
  if (0 < (int)uVar13) {
    if (param_8 == 0) {
      uVar36 = 0;
      do {
        uVar36 = uVar36 + 1;
      } while ((int)(uVar36 & 0xff) < (int)uVar13);
    }
    else if (1 < (int)uVar13) {
      uVar32 = 0;
      uVar18 = 1;
      do {
        uVar24 = 0;
        do {
          if (uVar24 < 2) {
            lVar26 = param_7[uVar24];
            uVar29 = uVar18;
            do {
              iVar28 = (int)uVar29;
              if (*(char *)(*(long *)(lVar26 + 0x20) +
                           ((iVar28 * 0x10000 + 0x10000U >> 0x10) * iVar28 >> 1) + uVar32) != '\0')
              {
                *(undefined4 *)(local_188 + uVar32 * 4) = 0;
                *(undefined4 *)(local_188 + uVar29 * 4) = 0;
              }
              uVar36 = iVar28 + 1U & 0xff;
              uVar29 = (ulong)uVar36;
            } while ((int)uVar36 < (int)uVar13);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != param_8);
        uVar36 = (int)uVar18 + 1U & 0xff;
        uVar32 = uVar18;
        uVar18 = (ulong)uVar36;
      } while ((int)uVar36 < (int)uVar13);
    }
  }
  local_1cc = 0x80000020;
  local_1d0 = 0;
  local_1d8 = local_1c8;
  local_f8 = puVar10;
  local_f0 = lVar21;
  if (0x20 < (int)uVar13) {
    if (0x3fffffff < (int)uVar13) {
      FUN_032bd0a8(uVar13);
    }
    uVar36 = (local_1cc & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar36) {
      uVar36 = 0x3fffffff;
    }
    uVar23 = uVar13;
    if ((int)uVar13 <= (int)uVar36) {
      uVar23 = uVar36;
    }
    local_1d8 = (short *)FUN_032bd1d4(puVar8,uVar23,2,local_1c8,0,&local_1cc);
  }
  if (uVar13 - local_1d0 == 0 || (int)uVar13 < (int)local_1d0) {
    if ((int)uVar13 < (int)local_1d0) {
      local_1d0 = uVar13;
    }
  }
  else {
    psVar25 = local_1d8 + (int)local_1d0;
    uVar36 = uVar13 - local_1d0 & 3;
    if (2 < uVar13 + ~local_1d0) {
      iVar28 = (local_1d0 + uVar36) - uVar13;
      psVar20 = psVar25;
      do {
        psVar25 = psVar20 + 4;
        *psVar20 = param_9;
        iVar28 = iVar28 + 4;
        psVar20[1] = param_9;
        psVar20[2] = param_9;
        psVar20[3] = param_9;
        psVar20 = psVar25;
      } while (iVar28 != 0);
    }
    for (; local_1d0 = uVar13, uVar36 != 0; uVar36 = uVar36 - 1) {
      *psVar25 = param_9;
      psVar25 = psVar25 + 1;
    }
  }
  local_2e8 = auStack_2d8;
  local_2e0 = 0;
  local_2dc = 0x80000020;
  if (0x20 < (int)uVar13) {
    local_2e8 = (undefined1 *)FUN_030c74bc(puVar8,uVar13,local_2e8,0,&local_2dc);
  }
  if (0 < (int)uVar13) {
    if (param_8 == 0) {
      uVar32 = 0;
      lVar21 = 4;
      do {
        if ((*(int *)(local_188 + uVar32 * 4) != 0) && (*(int *)(*param_6 + lVar21) != 0)) {
          if ((int)(local_2dc & 0x3fffffff) <= local_2e0) {
            local_2e8 = (undefined1 *)
                        FUN_030c74bc(puVar8,local_2e0 + 1,local_2e8,local_2e0,&local_2dc);
          }
          *(int *)((long)(local_2e8 + (long)local_2e0 * 8) + 4) = (int)uVar32;
          *(undefined4 *)(local_2e8 + (long)local_2e0 * 8) = *(undefined4 *)(*param_6 + lVar21);
          local_2e0 = local_2e0 + 1;
        }
        uVar32 = uVar32 + 1;
        lVar21 = lVar21 + 8;
      } while (uVar19 != uVar32);
    }
    else {
      uVar32 = 0;
      do {
        if (*(int *)(local_188 + uVar32 * 4) != 0) {
          iVar28 = (int)uVar32;
          lVar21 = (long)(iVar28 + ((iVar28 * 0x10000 + 0x10000 >> 0x10) * (int)(short)uVar32 >> 1))
          ;
          uVar36 = (uint)(*(char *)(*(long *)(*param_7 + 0x20) + lVar21) != '\0');
          if (param_8 != 1) {
            if (*(char *)(*(long *)(param_7[1] + 0x20) + lVar21) != '\0') {
              uVar36 = uVar36 + 1;
            }
            if (param_8 != 2) {
              if (*(char *)(*(long *)(param_7[2] + 0x20) + uVar32) != '\0') {
                uVar36 = uVar36 + 1;
              }
              plVar17 = param_7 + 3;
              lVar21 = (ulong)param_8 - 3;
              if (param_8 != 3) {
                do {
                  if (*(char *)(*(long *)(*plVar17 + 0x20) + uVar32) != '\0') {
                    uVar36 = uVar36 + 1;
                  }
                  lVar21 = lVar21 + -1;
                  plVar17 = plVar17 + 1;
                } while (lVar21 != 0);
              }
            }
          }
          if ((uVar36 != 0) || (*(int *)(*param_6 + uVar32 * 8 + 4) != 0)) {
            if ((int)(local_2dc & 0x3fffffff) <= local_2e0) {
              local_2e8 = (undefined1 *)
                          FUN_030c74bc(puVar8,local_2e0 + 1,local_2e8,local_2e0,&local_2dc);
            }
            *(int *)((long)(local_2e8 + (long)local_2e0 * 8) + 4) = iVar28;
            *(uint *)(local_2e8 + (long)local_2e0 * 8) =
                 *(int *)(*param_6 + uVar32 * 8 + 4) * (uVar36 + 1);
            local_2e0 = local_2e0 + 1;
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar19);
    }
  }
  if (local_2e0 + -1 != 0 && 0 < local_2e0) {
    FUN_030c7630(local_2e8,0,local_2e0 + -1);
  }
  if (0 < local_2e0) {
    lVar21 = 0;
    do {
      uVar36 = *(uint *)(local_2e8 + lVar21 * 8 + 4);
      lVar16 = ((ulong)uVar36 & 0xff) * 4;
      lVar26 = param_2[1];
      *(int *)(local_f8 + lVar16) = (int)lVar26;
      *(int *)(local_f8 + lVar16) = (int)lVar26;
      lVar16 = (long)(int)param_2[1];
      lVar27 = *param_2;
      puVar15 = (undefined8 *)(lVar27 + lVar16 * 0x20);
      lVar26 = lVar16 + 1;
      *(int *)(param_2 + 1) = (int)lVar26;
      *puVar15 = &PTR_LAB_042b49e0;
      if (puVar15 + 4 != (undefined8 *)(lVar27 + lVar26 * 0x20)) {
        lVar26 = lVar26 * 0x20 + lVar16 * -0x20 + -0x20;
        puVar14 = puVar15 + 4;
        do {
          lVar26 = lVar26 + -0x20;
          *puVar14 = &PTR_LAB_042b49e0;
          puVar14 = puVar14 + 4;
        } while (lVar26 != 0);
      }
      *puVar15 = &PTR_LAB_042b49e0;
      puVar15[1] = param_1;
      puVar15[3] = 0;
      *(undefined2 *)(puVar15 + 2) = 0x301;
      *(short *)((long)puVar15 + 0x12) =
           (short)((uint)(((int)(uVar36 * 0x10000 + 0x10000) >> 0x10) * (int)(short)uVar36) >> 1) +
           (short)uVar36;
      *(char *)((long)puVar15 + 0x14) = (char)uVar36;
      *(char *)((long)puVar15 + 0x15) = (char)uVar36;
      *(undefined1 *)((long)puVar15 + 0x16) = 0;
      uVar2 = *(uint *)(param_11 + 0x20);
      uVar12 = *(uint *)(param_11 + 0x24);
      uVar23 = uVar2 + 1;
      if ((int)uVar2 < (int)(uVar12 & 0x3fffffff)) {
        lVar26 = *(long *)(param_11 + 0x18);
        uVar12 = uVar2;
      }
      else {
        uVar22 = *(undefined8 *)(param_11 + 0x18);
        if (0x3ffffffe < (int)uVar2) {
          FUN_032bd0a8(uVar23);
          uVar12 = *(uint *)(param_11 + 0x24);
        }
        uVar12 = (uVar12 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        uVar11 = uVar23;
        if ((int)uVar23 <= (int)uVar12) {
          uVar11 = uVar12;
        }
        lVar26 = FUN_032bd1d4(puVar8,uVar11,0x18,uVar22,uVar2,(uint *)(param_11 + 0x24));
        *(long *)(param_11 + 0x18) = lVar26;
        uVar12 = *(uint *)(param_11 + 0x20);
      }
      plVar17 = (long *)(lVar26 + (long)(int)uVar12 * 0x18);
      *(uint *)(param_11 + 0x20) = uVar23;
      *plVar17 = (long)puVar15;
      *(undefined2 *)(plVar17 + 1) = 1;
      *(undefined1 *)((long)plVar17 + 10) = 0x40;
      plVar17[2] = 0;
      if (((~uVar2 & 0xffff) != 0) && (sVar5 = local_1d8[(int)uVar36], sVar5 != -1)) {
        uVar12 = *(uint *)(param_11 + 0x334);
        iVar28 = *(int *)(param_11 + 0x330);
        uVar23 = iVar28 + 1;
        if (iVar28 < (int)(uVar12 & 0x3fffffff)) {
          lVar26 = *(long *)(param_11 + 0x328);
        }
        else {
          uVar22 = *(undefined8 *)(param_11 + 0x328);
          if (0x3ffffffe < iVar28) {
            FUN_032bd0a8(uVar23);
            uVar12 = *(uint *)(param_11 + 0x334);
          }
          uVar12 = (uVar12 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          uVar11 = uVar23;
          if ((int)uVar23 <= (int)uVar12) {
            uVar11 = uVar12;
          }
          lVar26 = FUN_032bd1d4(puVar8,uVar11,4,uVar22,iVar28);
          *(long *)(param_11 + 0x328) = lVar26;
          iVar28 = *(int *)(param_11 + 0x330);
        }
        psVar25 = (short *)(lVar26 + (long)iVar28 * 4);
        *(uint *)(param_11 + 0x330) = uVar23;
        *psVar25 = sVar5;
        psVar25[1] = (short)uVar2;
      }
      local_1d8[(int)uVar36] = (short)uVar2;
      lVar21 = lVar21 + 1;
    } while (lVar21 < local_2e0);
  }
  if ((-1 < (int)local_2dc) && (local_2e8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_2e8,((ulong)local_2dc & 0x3fffffff) << 3);
  }
  iVar28 = (int)param_2[1];
  if (param_8 != 0) {
    uVar32 = 0;
    do {
      lVar21 = param_7[uVar32];
      if (uVar32 < 2) {
        if (0 < (int)uVar35) {
          lVar26 = *(long *)(param_5 + 8);
          uVar18 = 0;
          do {
            pbVar1 = (byte *)(lVar26 + uVar18 * 2);
            bVar3 = *pbVar1;
            uVar24 = (ulong)bVar3;
            bVar4 = pbVar1[1];
            uVar29 = (ulong)bVar4;
            if (((bVar3 != bVar4) || (*(int *)(local_188 + uVar24 * 4) == 0)) &&
               (lVar16 = uVar24 + ((uVar29 * 0x10000 + 0x10000 >> 0x10) * uVar29 >> 1),
               *(char *)(*(long *)(lVar21 + 0x20) + lVar16) != '\0')) {
              lVar27 = param_2[1];
              *(int *)(local_f8 + uVar24 * 4) = (int)lVar27;
              *(int *)(local_f8 + uVar29 * 4) = (int)lVar27;
              lVar30 = (long)(int)param_2[1];
              lVar27 = lVar30 + 1;
              *(int *)(param_2 + 1) = (int)lVar27;
              lVar31 = *param_2;
              puVar15 = (undefined8 *)(lVar31 + lVar30 * 0x20);
              *puVar15 = &PTR_LAB_042b49e0;
              if (puVar15 + 4 != (undefined8 *)(lVar31 + lVar27 * 0x20)) {
                lVar27 = lVar27 * 0x20 + lVar30 * -0x20 + -0x20;
                puVar14 = puVar15 + 4;
                do {
                  lVar27 = lVar27 + -0x20;
                  *puVar14 = &PTR_LAB_042b49e0;
                  puVar14 = puVar14 + 4;
                } while (lVar27 != 0);
              }
              *puVar15 = &PTR_LAB_042b49e0;
              puVar15[1] = param_1;
              puVar15[3] = 0;
              *(undefined1 *)(puVar15 + 2) = 0;
              *(char *)((long)puVar15 + 0x11) = (char)uVar32;
              *(short *)((long)puVar15 + 0x12) = (short)lVar16;
              *(byte *)((long)puVar15 + 0x14) = bVar3;
              *(byte *)((long)puVar15 + 0x15) = bVar4;
              *(undefined1 *)((long)puVar15 + 0x16) = 0;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar35);
        }
      }
      else {
        local_2e0 = 0;
        local_2dc = 0x80000020;
        puVar10 = auStack_2d8;
        if (0x20 < (int)uVar13) {
          puVar10 = (undefined1 *)FUN_030c74bc(puVar8,uVar13,auStack_2d8,0,&local_2dc);
        }
        if (0 < (int)uVar13) {
          uVar18 = 0;
          lVar26 = 1;
          do {
            if ((*(int *)(local_188 + uVar18 * 4) == 0) &&
               (*(char *)(*(long *)(lVar21 + 0x20) + uVar18) != '\0')) {
              *(long *)(puVar10 + (long)local_2e0 * 8) = lVar26;
              local_2e0 = local_2e0 + 1;
            }
            uVar18 = uVar18 + 1;
            lVar26 = lVar26 + 0x100000000;
          } while (uVar19 != uVar18);
        }
        if (0 < local_2e0) {
          lVar21 = 0;
          do {
            uVar36 = *(uint *)(puVar10 + lVar21 * 8 + 4);
            lVar26 = param_2[1];
            lVar16 = ((ulong)uVar36 & 0xff) * 4;
            *(int *)(local_f8 + lVar16) = (int)lVar26;
            *(int *)(local_f8 + lVar16) = (int)lVar26;
            lVar27 = *param_2;
            lVar16 = (long)(int)param_2[1];
            puVar15 = (undefined8 *)(lVar27 + lVar16 * 0x20);
            lVar26 = lVar16 + 1;
            *(int *)(param_2 + 1) = (int)lVar26;
            *puVar15 = &PTR_LAB_042b49e0;
            if (puVar15 + 4 != (undefined8 *)(lVar27 + lVar26 * 0x20)) {
              lVar26 = lVar26 * 0x20 + lVar16 * -0x20 + -0x20;
              puVar14 = puVar15 + 4;
              do {
                lVar26 = lVar26 + -0x20;
                *puVar14 = &PTR_LAB_042b49e0;
                puVar14 = puVar14 + 4;
              } while (lVar26 != 0);
            }
            *puVar15 = &PTR_LAB_042b49e0;
            puVar15[1] = param_1;
            puVar15[3] = 0;
            *(undefined1 *)(puVar15 + 2) = 0;
            *(char *)((long)puVar15 + 0x11) = (char)uVar32;
            *(ushort *)((long)puVar15 + 0x12) = (ushort)uVar36 & 0xff;
            lVar21 = lVar21 + 1;
            *(char *)((long)puVar15 + 0x14) = (char)uVar36;
            *(char *)((long)puVar15 + 0x15) = (char)uVar36;
            *(undefined1 *)((long)puVar15 + 0x16) = 0;
          } while (lVar21 < local_2e0);
        }
        if (-1 < (int)local_2dc) {
          if (puVar10 != (undefined1 *)0x0) {
            (**(code **)(*(long *)puVar8 + 0x18))
                      (puVar8,puVar10,((ulong)local_2dc & 0x3fffffff) << 3);
          }
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != param_8);
  }
  if (0 < (int)uVar13) {
    uVar19 = 0;
    do {
      uVar19 = uVar19 & 0xff;
      uVar35 = (uint)uVar19;
      if (*(int *)(local_188 + uVar19 * 4) == 0) {
        lVar21 = *param_2 + (long)*(int *)(local_f8 + uVar19 * 4) * 0x20;
        if (*(byte *)(lVar21 + 0x14) == uVar35) {
          *(byte *)(lVar21 + 0x16) = *(byte *)(lVar21 + 0x16) | 4;
        }
        if (*(byte *)(lVar21 + 0x15) == uVar35 &&
            (uint)*(byte *)(lVar21 + 0x14) != (uint)*(byte *)(lVar21 + 0x15)) {
          *(byte *)(lVar21 + 0x16) = *(byte *)(lVar21 + 0x16) | 8;
        }
      }
      uVar19 = (ulong)(uVar35 + 1);
    } while ((int)(uVar35 + 1 & 0xff) < (int)uVar13);
  }
  if (0 < param_3) {
    iVar37 = 0;
    do {
      if (0 < param_4) {
        uVar19 = (ulong)*(uint *)(param_2 + 1);
        iVar34 = 0;
        do {
          if (iVar28 < (int)uVar19) {
            local_338 = (long)iVar28;
            local_310 = (long)iVar28 << 5;
            do {
              lVar21 = *param_2 + local_310;
              uVar35 = *(uint *)(param_11 + 0x20);
              uVar36 = *(uint *)(param_11 + 0x24);
              uVar13 = uVar35 + 1;
              if ((int)uVar35 < (int)(uVar36 & 0x3fffffff)) {
                lVar26 = *(long *)(param_11 + 0x18);
                uVar36 = uVar35;
              }
              else {
                uVar22 = *(undefined8 *)(param_11 + 0x18);
                if (0x3ffffffe < (int)uVar35) {
                  FUN_032bd0a8(uVar13);
                  uVar36 = *(uint *)(param_11 + 0x24);
                }
                uVar36 = (uVar36 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar36) {
                  uVar36 = 0x3fffffff;
                }
                uVar23 = uVar13;
                if ((int)uVar13 <= (int)uVar36) {
                  uVar23 = uVar36;
                }
                lVar26 = FUN_032bd1d4(puVar8,uVar23,0x18,uVar22,uVar35,(uint *)(param_11 + 0x24));
                *(long *)(param_11 + 0x18) = lVar26;
                uVar36 = *(uint *)(param_11 + 0x20);
              }
              *(uint *)(param_11 + 0x20) = uVar13;
              plVar17 = (long *)(lVar26 + (long)(int)uVar36 * 0x18);
              *(undefined2 *)(plVar17 + 1) = 1;
              *plVar17 = lVar21;
              *(undefined1 *)((long)plVar17 + 10) = 0x40;
              plVar17[2] = 0;
              bVar3 = *(byte *)(lVar21 + 0x14);
              bVar4 = *(byte *)(lVar21 + 0x15);
              sVar5 = local_1d8[bVar3];
              sVar6 = local_1d8[bVar4];
              if (sVar5 == param_9) {
                *(byte *)(lVar21 + 0x16) = *(byte *)(lVar21 + 0x16) | 1;
              }
              if ((bVar3 != bVar4) && (sVar6 == param_9)) {
                *(byte *)(lVar21 + 0x16) = *(byte *)(lVar21 + 0x16) | 2;
              }
              sVar7 = (short)uVar35;
              if (sVar5 != -1 && (~uVar35 & 0xffff) != 0) {
                iVar33 = *(int *)(param_11 + 0x330);
                uVar35 = *(uint *)(param_11 + 0x334);
                uVar13 = iVar33 + 1;
                if (iVar33 < (int)(uVar35 & 0x3fffffff)) {
                  lVar21 = *(long *)(param_11 + 0x328);
                }
                else {
                  uVar22 = *(undefined8 *)(param_11 + 0x328);
                  if (0x3ffffffe < iVar33) {
                    FUN_032bd0a8(uVar13);
                    uVar35 = *(uint *)(param_11 + 0x334);
                  }
                  uVar35 = (uVar35 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar35) {
                    uVar35 = 0x3fffffff;
                  }
                  uVar36 = uVar13;
                  if ((int)uVar13 <= (int)uVar35) {
                    uVar36 = uVar35;
                  }
                  lVar21 = FUN_032bd1d4(puVar8,uVar36,4,uVar22,iVar33,(uint *)(param_11 + 0x334));
                  *(long *)(param_11 + 0x328) = lVar21;
                  iVar33 = *(int *)(param_11 + 0x330);
                }
                *(uint *)(param_11 + 0x330) = uVar13;
                psVar25 = (short *)(lVar21 + (long)iVar33 * 4);
                *psVar25 = sVar5;
                psVar25[1] = sVar7;
              }
              if (sVar6 != -1 && sVar6 != sVar5) {
                iVar33 = *(int *)(param_11 + 0x330);
                uVar35 = *(uint *)(param_11 + 0x334);
                uVar13 = iVar33 + 1;
                if (iVar33 < (int)(uVar35 & 0x3fffffff)) {
                  lVar21 = *(long *)(param_11 + 0x328);
                }
                else {
                  uVar22 = *(undefined8 *)(param_11 + 0x328);
                  if (0x3ffffffe < iVar33) {
                    FUN_032bd0a8(uVar13);
                    uVar35 = *(uint *)(param_11 + 0x334);
                  }
                  uVar35 = (uVar35 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar35) {
                    uVar35 = 0x3fffffff;
                  }
                  uVar36 = uVar13;
                  if ((int)uVar13 <= (int)uVar35) {
                    uVar36 = uVar35;
                  }
                  lVar21 = FUN_032bd1d4(puVar8,uVar36,4,uVar22,iVar33,(uint *)(param_11 + 0x334));
                  *(long *)(param_11 + 0x328) = lVar21;
                  iVar33 = *(int *)(param_11 + 0x330);
                }
                *(uint *)(param_11 + 0x330) = uVar13;
                psVar25 = (short *)(lVar21 + (long)iVar33 * 4);
                *psVar25 = sVar6;
                psVar25[1] = sVar7;
              }
              local_1d8[bVar3] = sVar7;
              local_1d8[bVar4] = sVar7;
              local_338 = local_338 + 1;
              uVar19 = (ulong)(int)param_2[1];
              local_310 = local_310 + 0x20;
            } while (local_338 < (long)uVar19);
          }
          iVar34 = iVar34 + 1;
        } while (iVar34 != param_4);
      }
      iVar37 = iVar37 + 1;
    } while (iVar37 != param_3);
  }
  if (param_10 != -1) {
    if (1 < (int)local_1d0) {
      FUN_030c7730(local_1d8,0,local_1d0 - 1);
    }
    if (local_1d0 != 0) {
      if ((int)local_1d0 < 2) {
        uVar13 = 1;
      }
      else {
        lVar21 = 0;
        lVar26 = (ulong)local_1d0 - 1;
        psVar25 = local_1d8;
        do {
          psVar25 = psVar25 + 1;
          if (local_1d8[(int)lVar21] != *psVar25) {
            lVar21 = (long)(int)lVar21 + 1;
            local_1d8[lVar21] = *psVar25;
          }
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        if ((int)lVar21 < 0) goto LAB_030c4eb0;
        uVar13 = (int)lVar21 + 1;
      }
      uVar19 = 0;
      do {
        sVar5 = local_1d8[uVar19];
        if (sVar5 != param_9) {
          uVar35 = *(uint *)(param_11 + 0x334);
          iVar37 = *(int *)(param_11 + 0x330);
          iVar28 = iVar37 + 1;
          if (iVar37 < (int)(uVar35 & 0x3fffffff)) {
            lVar21 = *(long *)(param_11 + 0x328);
          }
          else {
            uVar22 = *(undefined8 *)(param_11 + 0x328);
            if (0x3ffffffe < iVar37) {
              FUN_032bd0a8(iVar28);
              uVar35 = *(uint *)(param_11 + 0x334);
            }
            uVar35 = (uVar35 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar35) {
              uVar35 = 0x3fffffff;
            }
            if ((int)uVar35 < iVar28) {
              uVar35 = iVar37 + 1;
            }
            lVar21 = FUN_032bd1d4(puVar8,uVar35,4,uVar22,iVar37,(uint *)(param_11 + 0x334));
            iVar37 = *(int *)(param_11 + 0x330);
            *(long *)(param_11 + 0x328) = lVar21;
          }
          psVar25 = (short *)(lVar21 + (long)iVar37 * 4);
          *(int *)(param_11 + 0x330) = iVar28;
          *psVar25 = sVar5;
          psVar25[1] = param_10;
        }
        uVar19 = uVar19 + 1;
      } while (uVar13 != uVar19);
    }
  }
LAB_030c4eb0:
  local_1d0 = 0;
  if ((-1 < (int)local_1cc) && (local_1d8 != (short *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_1d8,(local_1cc & 0x3fffffff) << 1);
  }
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_188,local_17c << 2);
  }
  lVar21 = local_f0;
  uVar13 = local_f0._4_4_;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_f8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_f8,uVar13 << 2);
  }
  return;
}


