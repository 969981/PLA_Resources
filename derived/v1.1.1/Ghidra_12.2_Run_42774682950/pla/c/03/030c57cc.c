/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c57cc; name: FUN_030c57cc
 */


void FUN_030c57cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,ulong param_7,long *param_8,short param_9,short param_10,
                 long param_11)

{
  int iVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined *puVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  short *psVar22;
  uint uVar23;
  ulong uVar24;
  short *psVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  undefined1 *local_258;
  int local_250;
  uint local_24c;
  undefined1 auStack_248 [256];
  short *local_148;
  uint local_140;
  uint local_13c;
  short local_138 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [136];
  
  puVar10 = PTR_PTR_0434a080;
  uVar19 = *(uint *)(param_5 + 0x1c);
  uVar24 = (ulong)uVar19;
  local_f0 = -0x7fffffe000000000;
  local_f8 = auStack_e8;
  if ((int)uVar19 < 0x21) {
    local_f0._0_4_ = 0;
    bVar11 = false;
    uVar23 = uVar19;
    if (0 < (int)uVar19) goto LAB_030c5844;
LAB_030c5aa8:
    if ((int)uVar23 < 0 != bVar11) {
      local_f0 = CONCAT44(local_f0._4_4_,uVar19);
    }
  }
  else {
    local_f0._4_4_ = 0x80000020;
    if (0x3fffffff < (int)uVar19) {
      FUN_032bd0a8(uVar19);
    }
    uVar23 = (local_f0._4_4_ & 0x3fffffff) << 1;
    uVar20 = (ulong)uVar23;
    if (0x3ffffffe < uVar23) {
      uVar20 = 0x3fffffff;
    }
    uVar26 = uVar24;
    if ((int)uVar19 <= (int)uVar20) {
      uVar26 = uVar20;
    }
    local_f8 = (undefined1 *)FUN_032bd1d4(puVar10,uVar26,4,auStack_e8,0,(long)&local_f0 + 4);
    bVar11 = SBORROW4(uVar19,(uint)local_f0);
    uVar23 = uVar19 - (uint)local_f0;
    if ((int)uVar19 <= (int)(uint)local_f0) goto LAB_030c5aa8;
LAB_030c5844:
    lVar27 = (long)(int)(uint)local_f0;
    uVar23 = ~(uint)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,uVar19);
    memset(local_f8 + lVar27 * 4,0xff,(ulong)(uVar19 + uVar23) * 4 + 4);
  }
  local_13c = 0x80000020;
  local_140 = 0;
  local_148 = local_138;
  if (0x20 < (int)uVar19) {
    if (0x3fffffff < (int)uVar19) {
      FUN_032bd0a8(uVar24);
    }
    uVar23 = (local_13c & 0x3fffffff) << 1;
    uVar20 = (ulong)uVar23;
    if (0x3ffffffe < uVar23) {
      uVar20 = 0x3fffffff;
    }
    uVar26 = uVar24;
    if ((int)uVar19 <= (int)uVar20) {
      uVar26 = uVar20;
    }
    local_148 = (short *)FUN_032bd1d4(puVar10,uVar26,2,local_138,0,&local_13c);
  }
  if (uVar19 - local_140 == 0 || (int)uVar19 < (int)local_140) {
    if ((int)uVar19 < (int)local_140) {
      local_140 = uVar19;
    }
  }
  else {
    psVar25 = local_148 + (int)local_140;
    uVar23 = uVar19 - local_140 & 3;
    if (2 < uVar19 + ~local_140) {
      iVar31 = (local_140 + uVar23) - uVar19;
      psVar22 = psVar25;
      do {
        psVar25 = psVar22 + 4;
        *psVar22 = param_9;
        iVar31 = iVar31 + 4;
        psVar22[1] = param_9;
        psVar22[2] = param_9;
        psVar22[3] = param_9;
        psVar22 = psVar25;
      } while (iVar31 != 0);
    }
    for (; local_140 = uVar19, uVar23 != 0; uVar23 = uVar23 - 1) {
      *psVar25 = param_9;
      psVar25 = psVar25 + 1;
    }
  }
  if ((param_7 & 0xff) != 0) {
    uVar20 = 0;
    do {
      uVar23 = *(int *)(param_5 + 0x10) - uVar19;
      if (uVar23 != 0 && (int)uVar19 <= *(int *)(param_5 + 0x10)) {
        lVar28 = *(long *)(param_5 + 8);
        uVar26 = 0;
        lVar27 = *(long *)(param_6 + uVar20 * 8);
        do {
          pbVar2 = (byte *)(lVar28 + (long)(int)uVar19 * 2 + uVar26 * 2);
          bVar5 = *pbVar2;
          bVar6 = pbVar2[1];
          uVar29 = (ulong)bVar6;
          lVar13 = (ulong)bVar5 + ((uVar29 * 0x10000 + 0x10000 >> 0x10) * uVar29 >> 1);
          if (*(char *)(*(long *)(lVar27 + 0x20) + lVar13) != '\0') {
            lVar15 = param_2[1];
            *(int *)(local_f8 + (ulong)bVar5 * 4) = (int)lVar15;
            *(int *)(local_f8 + uVar29 * 4) = (int)lVar15;
            lVar14 = (long)(int)param_2[1];
            lVar16 = *param_2;
            puVar3 = (undefined8 *)(lVar16 + lVar14 * 0x20);
            lVar15 = lVar14 + 1;
            *(int *)(param_2 + 1) = (int)lVar15;
            *puVar3 = &PTR_LAB_042b49e0;
            if (puVar3 + 4 != (undefined8 *)(lVar16 + lVar15 * 0x20)) {
              lVar15 = lVar15 * 0x20 + lVar14 * -0x20 + -0x20;
              puVar12 = puVar3 + 4;
              do {
                lVar15 = lVar15 + -0x20;
                *puVar12 = &PTR_LAB_042b49e0;
                puVar12 = puVar12 + 4;
              } while (lVar15 != 0);
            }
            *puVar3 = &PTR_LAB_042b49e0;
            puVar3[1] = param_1;
            puVar3[3] = 0;
            *(undefined1 *)(puVar3 + 2) = 0;
            *(char *)((long)puVar3 + 0x11) = (char)uVar20;
            *(short *)((long)puVar3 + 0x12) = (short)lVar13;
            *(byte *)((long)puVar3 + 0x14) = bVar5;
            *(byte *)((long)puVar3 + 0x15) = bVar6;
            *(undefined1 *)((long)puVar3 + 0x16) = 0;
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar23);
      }
      do {
        uVar20 = uVar20 + 1;
        if (uVar20 == (param_7 & 0xff)) goto LAB_030c5a04;
      } while (1 < uVar20);
    } while( true );
  }
LAB_030c5a04:
  if (0 < (int)param_2[1]) {
    lVar28 = 0;
    lVar27 = 0;
    do {
      lVar13 = *param_2 + lVar28;
      uVar18 = *(uint *)(param_11 + 0x20);
      uVar17 = *(uint *)(param_11 + 0x24);
      uVar23 = uVar18 + 1;
      if ((int)uVar18 < (int)(uVar17 & 0x3fffffff)) {
        lVar15 = *(long *)(param_11 + 0x18);
        uVar17 = uVar18;
      }
      else {
        uVar33 = *(undefined8 *)(param_11 + 0x18);
        if (0x3ffffffe < (int)uVar18) {
          FUN_032bd0a8(uVar23);
          uVar17 = *(uint *)(param_11 + 0x24);
        }
        uVar17 = (uVar17 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar17) {
          uVar17 = 0x3fffffff;
        }
        uVar30 = uVar23;
        if ((int)uVar23 <= (int)uVar17) {
          uVar30 = uVar17;
        }
        lVar15 = FUN_032bd1d4(puVar10,uVar30,0x18,uVar33,uVar18,(uint *)(param_11 + 0x24));
        uVar17 = *(uint *)(param_11 + 0x20);
        *(long *)(param_11 + 0x18) = lVar15;
      }
      plVar21 = (long *)(lVar15 + (long)(int)uVar17 * 0x18);
      *(uint *)(param_11 + 0x20) = uVar23;
      *plVar21 = lVar13;
      *(undefined2 *)(plVar21 + 1) = 1;
      *(undefined1 *)((long)plVar21 + 10) = 0x40;
      plVar21[2] = 0;
      bVar5 = *(byte *)(lVar13 + 0x14);
      bVar6 = *(byte *)(lVar13 + 0x15);
      sVar7 = local_148[bVar5];
      sVar8 = local_148[bVar6];
      sVar9 = (short)uVar18;
      if (((~uVar18 & 0xffff) != 0) && (sVar7 != -1)) {
        uVar17 = *(uint *)(param_11 + 0x334);
        iVar31 = *(int *)(param_11 + 0x330);
        uVar23 = iVar31 + 1;
        if (iVar31 < (int)(uVar17 & 0x3fffffff)) {
          lVar13 = *(long *)(param_11 + 0x328);
        }
        else {
          uVar33 = *(undefined8 *)(param_11 + 0x328);
          if (0x3ffffffe < iVar31) {
            FUN_032bd0a8(uVar23);
            uVar17 = *(uint *)(param_11 + 0x334);
          }
          uVar17 = (uVar17 & 0x3fffffff) * 2;
          uVar30 = uVar23;
          if (uVar17 < 0x3fffffff) {
            if ((int)uVar23 <= (int)uVar17) goto LAB_030c5e28;
          }
          else {
            uVar17 = 0x3fffffff;
            if ((int)uVar23 < 0x40000000) {
LAB_030c5e28:
              uVar30 = uVar17;
            }
          }
          lVar13 = FUN_032bd1d4(puVar10,uVar30,4,uVar33,iVar31);
          *(long *)(param_11 + 0x328) = lVar13;
          iVar31 = *(int *)(param_11 + 0x330);
        }
        psVar25 = (short *)(lVar13 + (long)iVar31 * 4);
        *(uint *)(param_11 + 0x330) = uVar23;
        *psVar25 = sVar7;
        psVar25[1] = sVar9;
      }
      if ((sVar8 != sVar7 && (~uVar18 & 0xffff) != 0) && sVar8 != -1) {
        uVar18 = *(uint *)(param_11 + 0x334);
        iVar31 = *(int *)(param_11 + 0x330);
        uVar23 = iVar31 + 1;
        if (iVar31 < (int)(uVar18 & 0x3fffffff)) {
          lVar13 = *(long *)(param_11 + 0x328);
        }
        else {
          uVar33 = *(undefined8 *)(param_11 + 0x328);
          if (0x3ffffffe < iVar31) {
            FUN_032bd0a8(uVar23);
            uVar18 = *(uint *)(param_11 + 0x334);
          }
          uVar18 = (uVar18 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar18) {
            uVar18 = 0x3fffffff;
          }
          uVar17 = uVar23;
          if ((int)uVar23 <= (int)uVar18) {
            uVar17 = uVar18;
          }
          lVar13 = FUN_032bd1d4(puVar10,uVar17,4,uVar33,iVar31);
          *(long *)(param_11 + 0x328) = lVar13;
          iVar31 = *(int *)(param_11 + 0x330);
        }
        psVar25 = (short *)(lVar13 + (long)iVar31 * 4);
        *(uint *)(param_11 + 0x330) = uVar23;
        *psVar25 = sVar8;
        psVar25[1] = sVar9;
      }
      local_148[bVar5] = sVar9;
      local_148[bVar6] = sVar9;
      lVar27 = lVar27 + 1;
      lVar28 = lVar28 + 0x20;
    } while (lVar27 < (int)param_2[1]);
  }
  local_258 = auStack_248;
  local_250 = 0;
  local_24c = 0x80000020;
  if ((int)uVar19 < 0x21) {
    if (0 < (int)uVar19) {
      if ((param_7 & 0xff) != 0) goto LAB_030c5cb4;
      goto LAB_030c608c;
    }
  }
  else {
    local_258 = (undefined1 *)FUN_030c74bc(puVar10,uVar24,local_258,0,&local_24c);
    if ((param_7 & 0xff) == 0) {
LAB_030c608c:
      lVar27 = 0;
      lVar28 = 4;
      while( true ) {
        iVar31 = local_250 + 1;
        if ((int)(local_24c & 0x3fffffff) <= local_250) {
          local_258 = (undefined1 *)FUN_030c74bc(puVar10,iVar31,local_258,local_250,&local_24c);
        }
        *(int *)((long)(local_258 + (long)local_250 * 8) + 4) = (int)lVar27;
        *(undefined4 *)(local_258 + (long)local_250 * 8) = *(undefined4 *)(*param_8 + lVar28);
        local_250 = iVar31;
        if (uVar24 - 1 == lVar27) break;
        lVar27 = lVar27 + 1;
        lVar28 = lVar28 + 8;
      }
    }
    else {
LAB_030c5cb4:
      uVar20 = 0;
      do {
        iVar31 = (int)uVar20;
        uVar26 = (ulong)(iVar31 + ((iVar31 * 0x10000 + 0x10000 >> 0x10) * (int)(short)uVar20 >> 1));
        if (((uint)param_7 & 0xff) == 1) {
          uVar29 = 0;
          iVar32 = 0;
        }
        else {
          uVar29 = 0;
          iVar32 = 0;
          do {
            plVar21 = (long *)(param_6 + uVar29 * 8);
            uVar4 = uVar26;
            if (uVar29 != 0) {
              uVar4 = uVar20;
            }
            if (*(char *)(*(long *)(*plVar21 + 0x20) + uVar4) != '\0') {
              iVar32 = iVar32 + 1;
            }
            uVar29 = uVar29 + 2;
            if (*(char *)(*(long *)(plVar21[1] + 0x20) + uVar4) != '\0') {
              iVar32 = iVar32 + 1;
            }
          } while ((param_7 & 0xff) - (param_7 & 1) != uVar29);
        }
        if ((param_7 & 1) != 0) {
          if (1 < uVar29) {
            uVar26 = uVar20;
          }
          if (*(char *)(*(long *)(*(long *)(param_6 + uVar29 * 8) + 0x20) + uVar26) != '\0') {
            iVar32 = iVar32 + 1;
          }
        }
        iVar1 = local_250 + 1;
        if ((int)(local_24c & 0x3fffffff) <= local_250) {
          local_258 = (undefined1 *)FUN_030c74bc(puVar10,iVar1,local_258,local_250,&local_24c);
        }
        *(int *)((long)(local_258 + (long)local_250 * 8) + 4) = iVar31;
        lVar27 = uVar20 * 8;
        uVar20 = uVar20 + 1;
        *(int *)(local_258 + (long)local_250 * 8) = *(int *)(*param_8 + lVar27 + 4) * (iVar32 + 1);
        local_250 = iVar1;
      } while (uVar20 != uVar24);
    }
  }
  if (local_250 + -1 != 0 && 0 < local_250) {
    FUN_030c7630(local_258,0,local_250 + -1);
  }
  if (0 < local_250) {
    lVar27 = 0;
    do {
      uVar19 = *(uint *)(local_258 + lVar27 * 8 + 4);
      lVar13 = ((ulong)uVar19 & 0xff) * 4;
      lVar28 = param_2[1];
      *(int *)(local_f8 + lVar13) = (int)lVar28;
      *(int *)(local_f8 + lVar13) = (int)lVar28;
      lVar13 = (long)(int)param_2[1];
      lVar15 = *param_2;
      puVar3 = (undefined8 *)(lVar15 + lVar13 * 0x20);
      lVar28 = lVar13 + 1;
      *(int *)(param_2 + 1) = (int)lVar28;
      *puVar3 = &PTR_LAB_042b49e0;
      if (puVar3 + 4 != (undefined8 *)(lVar15 + lVar28 * 0x20)) {
        lVar28 = lVar28 * 0x20 + lVar13 * -0x20 + -0x20;
        puVar12 = puVar3 + 4;
        do {
          lVar28 = lVar28 + -0x20;
          *puVar12 = &PTR_LAB_042b49e0;
          puVar12 = puVar12 + 4;
        } while (lVar28 != 0);
      }
      *puVar3 = &PTR_LAB_042b49e0;
      puVar3[1] = param_1;
      puVar3[3] = 0;
      *(undefined2 *)(puVar3 + 2) = 0x301;
      *(short *)((long)puVar3 + 0x12) =
           (short)((uint)(((int)(uVar19 * 0x10000 + 0x10000) >> 0x10) * (int)(short)uVar19) >> 1) +
           (short)uVar19;
      *(char *)((long)puVar3 + 0x14) = (char)uVar19;
      *(char *)((long)puVar3 + 0x15) = (char)uVar19;
      *(undefined1 *)((long)puVar3 + 0x16) = 0;
      uVar18 = *(uint *)(param_11 + 0x20);
      uVar17 = *(uint *)(param_11 + 0x24);
      uVar23 = uVar18 + 1;
      if ((int)uVar18 < (int)(uVar17 & 0x3fffffff)) {
        lVar28 = *(long *)(param_11 + 0x18);
        uVar17 = uVar18;
      }
      else {
        uVar33 = *(undefined8 *)(param_11 + 0x18);
        if (0x3ffffffe < (int)uVar18) {
          FUN_032bd0a8(uVar23);
          uVar17 = *(uint *)(param_11 + 0x24);
        }
        uVar17 = (uVar17 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar17) {
          uVar17 = 0x3fffffff;
        }
        uVar30 = uVar23;
        if ((int)uVar23 <= (int)uVar17) {
          uVar30 = uVar17;
        }
        lVar28 = FUN_032bd1d4(puVar10,uVar30,0x18,uVar33,uVar18,(uint *)(param_11 + 0x24));
        uVar17 = *(uint *)(param_11 + 0x20);
        *(long *)(param_11 + 0x18) = lVar28;
      }
      plVar21 = (long *)(lVar28 + (long)(int)uVar17 * 0x18);
      *(uint *)(param_11 + 0x20) = uVar23;
      *plVar21 = (long)puVar3;
      *(undefined2 *)(plVar21 + 1) = 1;
      *(undefined1 *)((long)plVar21 + 10) = 0x40;
      plVar21[2] = 0;
      if (((~uVar18 & 0xffff) != 0) && (sVar7 = local_148[(int)uVar19], sVar7 != -1)) {
        uVar17 = *(uint *)(param_11 + 0x334);
        iVar31 = *(int *)(param_11 + 0x330);
        uVar23 = iVar31 + 1;
        if (iVar31 < (int)(uVar17 & 0x3fffffff)) {
          lVar28 = *(long *)(param_11 + 0x328);
        }
        else {
          uVar33 = *(undefined8 *)(param_11 + 0x328);
          if (0x3ffffffe < iVar31) {
            FUN_032bd0a8(uVar23);
            uVar17 = *(uint *)(param_11 + 0x334);
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar30 = uVar23;
          if ((int)uVar23 <= (int)uVar17) {
            uVar30 = uVar17;
          }
          lVar28 = FUN_032bd1d4(puVar10,uVar30,4,uVar33,iVar31,(uint *)(param_11 + 0x334));
          iVar31 = *(int *)(param_11 + 0x330);
          *(long *)(param_11 + 0x328) = lVar28;
        }
        psVar25 = (short *)(lVar28 + (long)iVar31 * 4);
        *(uint *)(param_11 + 0x330) = uVar23;
        *psVar25 = sVar7;
        psVar25[1] = (short)uVar18;
      }
      local_148[(int)uVar19] = (short)uVar18;
      lVar27 = lVar27 + 1;
    } while (lVar27 < local_250);
  }
  if ((-1 < (int)local_24c) && (local_258 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_258,((ulong)local_24c & 0x3fffffff) << 3);
  }
  if (param_10 != -1) {
    if (1 < (int)local_140) {
      FUN_030c7730(local_148,0,local_140 - 1);
    }
    if (local_140 != 0) {
      if ((int)local_140 < 2) {
        uVar19 = 1;
      }
      else {
        lVar27 = 0;
        lVar28 = (ulong)local_140 - 1;
        psVar25 = local_148;
        do {
          psVar25 = psVar25 + 1;
          if (local_148[(int)lVar27] != *psVar25) {
            lVar27 = (long)(int)lVar27 + 1;
            local_148[lVar27] = *psVar25;
          }
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        if ((int)lVar27 < 0) goto LAB_030c6504;
        uVar19 = (int)lVar27 + 1;
      }
      uVar24 = 0;
      do {
        sVar7 = local_148[uVar24];
        if (sVar7 != param_9) {
          uVar23 = *(uint *)(param_11 + 0x334);
          iVar32 = *(int *)(param_11 + 0x330);
          iVar31 = iVar32 + 1;
          if (iVar32 < (int)(uVar23 & 0x3fffffff)) {
            lVar27 = *(long *)(param_11 + 0x328);
          }
          else {
            uVar33 = *(undefined8 *)(param_11 + 0x328);
            if (0x3ffffffe < iVar32) {
              FUN_032bd0a8(iVar31);
              uVar23 = *(uint *)(param_11 + 0x334);
            }
            uVar23 = (uVar23 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            if ((int)uVar23 < iVar31) {
              uVar23 = iVar32 + 1;
            }
            lVar27 = FUN_032bd1d4(puVar10,uVar23,4,uVar33,iVar32,(uint *)(param_11 + 0x334));
            iVar32 = *(int *)(param_11 + 0x330);
            *(long *)(param_11 + 0x328) = lVar27;
          }
          psVar25 = (short *)(lVar27 + (long)iVar32 * 4);
          *(int *)(param_11 + 0x330) = iVar31;
          *psVar25 = sVar7;
          psVar25[1] = param_10;
        }
        uVar24 = uVar24 + 1;
      } while (uVar19 != uVar24);
    }
  }
LAB_030c6504:
  local_140 = 0;
  if ((-1 < (int)local_13c) && (local_148 != (short *)0x0)) {
    (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_148,(local_13c & 0x3fffffff) << 1);
  }
  lVar27 = local_f0;
  uVar19 = local_f0._4_4_;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < lVar27) && (local_f8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_f8,uVar19 << 2);
  }
  return;
}


