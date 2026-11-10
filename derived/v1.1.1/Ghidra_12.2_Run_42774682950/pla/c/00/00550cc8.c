/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00550cc8; name: FUN_00550cc8
 */


undefined8
FUN_00550cc8(char *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5,long param_6,
            uint param_7)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  byte **ppbVar14;
  long *plVar15;
  uint *puVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  byte bVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong local_200;
  ulong uStack_1f8;
  byte *local_1f0 [2];
  undefined1 local_1e0 [24];
  ulong local_1c8 [5];
  byte *local_1a0;
  undefined1 auStack_198 [8];
  undefined1 local_190 [24];
  ulong local_178 [29];
  
  if ((param_4 != 1) && (param_5 != 2)) {
    FUN_0054f038(&local_1a0,"external/com_github_google_re2/re2/onepass.cc",0xdb);
                    /* try { // try from 00551734 to 0055173f has its CatchHandler @ 00551748 */
    FUN_00551750(auStack_198,"Cannot use SearchOnePass for unanchored matches.");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(&local_1a0);
  }
  uVar13 = param_7 * 2;
  uVar10 = uVar13;
  if ((int)param_7 < 2) {
    uVar10 = 2;
  }
  if (0 < (int)uVar10) {
    memset(&local_1a0,0,(ulong)uVar10 << 3);
    memset(local_1f0,0,(ulong)uVar10 << 3);
  }
  uVar9 = DAT_0388a690;
  uStack_1f8 = param_3[1];
  local_200 = *param_3;
  if (local_200 == 0) {
    uStack_1f8 = param_2[1];
    local_200 = *param_2;
    if (*param_1 != '\0') goto LAB_00550d70;
LAB_00550d94:
    if (param_1[1] == '\0') {
      pbVar18 = (byte *)*param_2;
      uVar19 = param_2[1];
    }
    else {
      pbVar18 = (byte *)*param_2;
      uVar19 = param_2[1];
      if ((byte *)(local_200 + uStack_1f8) != pbVar18 + uVar19) goto LAB_005514e0;
    }
    puVar16 = *(uint **)(param_1 + 0x70);
    iVar24 = 2;
    if (param_1[1] == '\0') {
      iVar24 = param_5;
    }
    local_1f0[0] = pbVar18;
    local_1a0 = pbVar18;
    if ((long)uVar19 < 1) {
      bVar4 = false;
      uVar13 = *puVar16;
      if (uVar13 != 0x30) goto LAB_005514b8;
LAB_005514d8:
      if (!bVar4) goto LAB_005514e0;
    }
    else {
      pbVar2 = pbVar18 + uVar19;
      iVar26 = *(int *)(param_1 + 0x14) * 4 + 4;
      bVar1 = 1 < (int)param_7;
      uVar19 = (ulong)uVar10;
      puVar21 = puVar16;
      if (iVar24 == 2) {
        uVar17 = uVar19 - 2;
        uVar20 = uVar17 & 0xfffffffffffffff8;
        do {
          uVar13 = puVar21[(ulong)(byte)param_1[(ulong)*pbVar18 + 0x98] + 1];
          if ((((uVar13 & 0x3f) != 0) &&
              (uVar6 = FUN_005530e4(&local_200,pbVar18), (uVar13 & 0x3f & (uVar6 ^ 0xffffffff)) != 0
              )) || (puVar21 = (uint *)((long)puVar16 + (ulong)(uVar13 >> 0x10) * (long)iVar26),
                    puVar21 == (uint *)0x0)) goto LAB_005514e0;
          if ((1 < (int)param_7 && (uVar13 & 0x7f80) != 0) && bVar1) {
            if (uVar17 < 8) {
              uVar11 = 2;
              uVar6 = uVar13 & 0x80;
              goto joined_r0x00550ee4;
            }
            uVar22 = CONCAT44(uVar13,uVar13);
            puVar12 = local_178;
            uVar11 = uVar20;
            uVar28 = uVar9;
            do {
              iVar24 = (int)uVar28;
              iVar23 = (int)((ulong)uVar28 >> 0x20);
              uVar28 = NEON_ushl(0x2000000020,uVar28,4);
              uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 2,iVar24 + 2),4);
              if (((uint)uVar28 & uVar13) != 0) {
                puVar12[-3] = (ulong)pbVar18;
              }
              if ((bool)(~(((uint)((ulong)uVar28 >> 0x20) & uVar13) == 0) & 1)) {
                puVar12[-2] = (ulong)pbVar18;
              }
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 4,iVar24 + 4),4);
              if ((bool)(~((int)(uVar30 & uVar22) == 0) & 1)) {
                puVar12[-1] = (ulong)pbVar18;
              }
              if ((bool)(~((int)((uVar30 & uVar22) >> 0x20) == 0) & 1)) {
                *puVar12 = (ulong)pbVar18;
              }
              bVar4 = (bool)~((int)((uVar29 & uVar22) >> 0x20) == 0);
              uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 6,iVar24 + 6),4);
              if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                puVar12[1] = (ulong)pbVar18;
                if (bVar4) goto LAB_00550fec;
LAB_00550fc0:
                bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                if (!(bool)(~((int)(uVar30 & uVar22) == 0) & 1)) goto LAB_00550fd0;
LAB_00551000:
                puVar12[3] = (ulong)pbVar18;
                if (bVar27 != 0) goto LAB_0055100c;
              }
              else {
                if (!bVar4) goto LAB_00550fc0;
LAB_00550fec:
                puVar12[2] = (ulong)pbVar18;
                bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                if (((int)(uVar30 & uVar22) == 0) != true) goto LAB_00551000;
LAB_00550fd0:
                if ((bool)(bVar27 & 1)) {
LAB_0055100c:
                  puVar12[4] = (ulong)pbVar18;
                }
              }
              uVar28 = CONCAT44(iVar23 + 8,iVar24 + 8);
              uVar11 = uVar11 - 8;
              puVar12 = puVar12 + 8;
            } while (uVar11 != 0);
            uVar11 = uVar20 | 2;
            if (uVar17 != uVar20) {
              do {
                while( true ) {
                  uVar6 = 0x20 << (ulong)((uint)uVar11 & 0x1f) & uVar13;
joined_r0x00550ee4:
                  if (uVar6 != 0) break;
                  uVar11 = uVar11 + 1;
                  if (uVar19 == uVar11) goto LAB_00550e5c;
                }
                local_1c8[uVar11 + 5] = (ulong)pbVar18;
                uVar11 = uVar11 + 1;
              } while (uVar19 != uVar11);
            }
          }
LAB_00550e5c:
          pbVar18 = pbVar18 + 1;
        } while (pbVar18 < pbVar2);
        bVar4 = false;
      }
      else {
        if ((int)uVar13 < 4) {
          uVar13 = 3;
        }
        uVar17 = uVar19 - 2;
        uVar20 = uVar17 & 0xfffffffffffffff8;
        bVar4 = false;
        uVar6 = *puVar16;
        do {
          uVar3 = puVar21[(ulong)(byte)param_1[(ulong)*pbVar18 + 0x98] + 1];
          if (((uVar3 & 0x3f) == 0) ||
             (uVar7 = FUN_005530e4(&local_200,pbVar18), (uVar3 & 0x3f & (uVar7 ^ 0xffffffff)) == 0))
          {
            puVar21 = (uint *)((long)puVar16 + (ulong)(uVar3 >> 0x10) * (long)iVar26);
            uVar7 = *puVar21;
          }
          else {
            puVar21 = (uint *)0x0;
            uVar7 = 0x30;
          }
          if (((uVar6 != 0x30) && ((uVar3 & 0x40) != 0 || (uVar7 & 0x3f) != 0)) &&
             (((uVar6 & 0x3f) == 0 ||
              (uVar8 = FUN_005530e4(&local_200,pbVar18), (uVar6 & 0x3f & (uVar8 ^ 0xffffffff)) == 0)
              ))) {
            if ((1 < (int)param_7) &&
               (memcpy(local_1e0,local_190,(ulong)(uVar13 - 2) << 3),
               (1 < (int)param_7 && (uVar6 & 0x7f80) != 0) && bVar1)) {
              if (uVar17 < 8) {
                uVar11 = 2;
                uVar8 = uVar6 & 0x80;
                goto joined_r0x005511a8;
              }
              uVar22 = CONCAT44(uVar6,uVar6);
              puVar12 = local_1c8;
              uVar11 = uVar20;
              uVar28 = uVar9;
              do {
                iVar23 = (int)uVar28;
                iVar25 = (int)((ulong)uVar28 >> 0x20);
                uVar28 = NEON_ushl(0x2000000020,uVar28,4);
                uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 2,iVar23 + 2),4);
                if (((uint)uVar28 & uVar6) != 0) {
                  puVar12[-3] = (ulong)pbVar18;
                }
                if ((bool)(~(((uint)((ulong)uVar28 >> 0x20) & uVar6) == 0) & 1)) {
                  puVar12[-2] = (ulong)pbVar18;
                }
                uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 4,iVar23 + 4),4);
                if ((bool)(~((int)(uVar30 & uVar22) == 0) & 1)) {
                  puVar12[-1] = (ulong)pbVar18;
                }
                if ((bool)(~((int)((uVar30 & uVar22) >> 0x20) == 0) & 1)) {
                  *puVar12 = (ulong)pbVar18;
                }
                bVar4 = (bool)~((int)((uVar29 & uVar22) >> 0x20) == 0);
                uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 6,iVar23 + 6),4);
                if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                  puVar12[1] = (ulong)pbVar18;
                  if (bVar4) goto LAB_005512d0;
LAB_005512a4:
                  bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                  if (!(bool)(~((int)(uVar30 & uVar22) == 0) & 1)) goto LAB_005512b4;
LAB_005512e4:
                  puVar12[3] = (ulong)pbVar18;
                  if (bVar27 != 0) goto LAB_005512f0;
                }
                else {
                  if (!bVar4) goto LAB_005512a4;
LAB_005512d0:
                  puVar12[2] = (ulong)pbVar18;
                  bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                  if (((int)(uVar30 & uVar22) == 0) != true) goto LAB_005512e4;
LAB_005512b4:
                  if ((bool)(bVar27 & 1)) {
LAB_005512f0:
                    puVar12[4] = (ulong)pbVar18;
                  }
                }
                uVar28 = CONCAT44(iVar25 + 8,iVar23 + 8);
                uVar11 = uVar11 - 8;
                puVar12 = puVar12 + 8;
              } while (uVar11 != 0);
              uVar11 = uVar20 | 2;
              if (uVar17 != uVar20) {
                do {
                  while( true ) {
                    uVar8 = 0x20 << (ulong)((uint)uVar11 & 0x1f) & uVar6;
joined_r0x005511a8:
                    if (uVar8 != 0) break;
                    uVar11 = uVar11 + 1;
                    if (uVar19 == uVar11) goto LAB_0055130c;
                  }
                  local_1f0[uVar11] = pbVar18;
                  uVar11 = uVar11 + 1;
                } while (uVar19 != uVar11);
              }
            }
LAB_0055130c:
            bVar4 = true;
            local_1f0[1] = pbVar18;
            if ((iVar24 == 0) && ((uVar3 & 0x40) != 0)) goto LAB_005516d8;
          }
          if (puVar21 == (uint *)0x0) goto LAB_005514d8;
          if ((1 < (int)param_7 && (uVar3 & 0x7f80) != 0) && bVar1) {
            if (uVar17 < 8) {
              uVar11 = 2;
              uVar6 = uVar3 & 0x80;
              goto joined_r0x00551360;
            }
            uVar22 = CONCAT44(uVar3,uVar3);
            puVar12 = local_178;
            uVar11 = uVar20;
            uVar28 = uVar9;
            do {
              iVar23 = (int)uVar28;
              iVar25 = (int)((ulong)uVar28 >> 0x20);
              uVar28 = NEON_ushl(0x2000000020,uVar28,4);
              uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 2,iVar23 + 2),4);
              if (((uint)uVar28 & uVar3) != 0) {
                puVar12[-3] = (ulong)pbVar18;
              }
              if ((bool)(~(((uint)((ulong)uVar28 >> 0x20) & uVar3) == 0) & 1)) {
                puVar12[-2] = (ulong)pbVar18;
              }
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 4,iVar23 + 4),4);
              if ((bool)(~((int)(uVar30 & uVar22) == 0) & 1)) {
                puVar12[-1] = (ulong)pbVar18;
              }
              if ((bool)(~((int)((uVar30 & uVar22) >> 0x20) == 0) & 1)) {
                *puVar12 = (ulong)pbVar18;
              }
              bVar5 = (bool)~((int)((uVar29 & uVar22) >> 0x20) == 0);
              uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 6,iVar23 + 6),4);
              if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                puVar12[1] = (ulong)pbVar18;
                if (bVar5) goto LAB_00551468;
LAB_0055143c:
                bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                if (!(bool)(~((int)(uVar30 & uVar22) == 0) & 1)) goto LAB_0055144c;
LAB_0055147c:
                puVar12[3] = (ulong)pbVar18;
                if (bVar27 != 0) goto LAB_00551488;
              }
              else {
                if (!bVar5) goto LAB_0055143c;
LAB_00551468:
                puVar12[2] = (ulong)pbVar18;
                bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
                if (((int)(uVar30 & uVar22) == 0) != true) goto LAB_0055147c;
LAB_0055144c:
                if ((bool)(bVar27 & 1)) {
LAB_00551488:
                  puVar12[4] = (ulong)pbVar18;
                }
              }
              uVar28 = CONCAT44(iVar25 + 8,iVar23 + 8);
              uVar11 = uVar11 - 8;
              puVar12 = puVar12 + 8;
            } while (uVar11 != 0);
            uVar11 = uVar20 | 2;
            if (uVar17 != uVar20) {
              do {
                while( true ) {
                  uVar6 = 0x20 << (ulong)((uint)uVar11 & 0x1f) & uVar3;
joined_r0x00551360:
                  if (uVar6 != 0) break;
                  uVar11 = uVar11 + 1;
                  if (uVar19 == uVar11) goto LAB_005510cc;
                }
                local_1c8[uVar11 + 5] = (ulong)pbVar18;
                uVar11 = uVar11 + 1;
              } while (uVar19 != uVar11);
            }
          }
LAB_005510cc:
          pbVar18 = pbVar18 + 1;
          uVar6 = uVar7;
        } while (pbVar18 < pbVar2);
      }
      uVar13 = *puVar21;
      if (uVar13 == 0x30) goto LAB_005514d8;
LAB_005514b8:
      if (((uVar13 & 0x3f) != 0) &&
         (uVar6 = FUN_005530e4(&local_200,pbVar18), (uVar13 & 0x3f & (uVar6 ^ 0xffffffff)) != 0))
      goto LAB_005514d8;
      if (((1 < (int)param_7) && ((uVar13 & 0x7f80) != 0)) && (1 < (int)param_7)) {
        uVar19 = (ulong)uVar10 - 2;
        if (uVar19 < 8) {
          uVar17 = 2;
        }
        else {
          uVar22 = CONCAT44(uVar13,uVar13);
          uVar11 = uVar19 & 0xfffffffffffffff8;
          uVar17 = uVar11 | 2;
          puVar12 = local_178;
          uVar20 = uVar11;
          uVar9 = DAT_0388a690;
          do {
            iVar24 = (int)uVar9;
            iVar26 = (int)((ulong)uVar9 >> 0x20);
            uVar9 = NEON_ushl(0x2000000020,uVar9,4);
            uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar26 + 2,iVar24 + 2),4);
            if (((uint)uVar9 & uVar13) != 0) {
              puVar12[-3] = (ulong)pbVar18;
            }
            if ((bool)(~(((uint)((ulong)uVar9 >> 0x20) & uVar13) == 0) & 1)) {
              puVar12[-2] = (ulong)pbVar18;
            }
            uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar26 + 4,iVar24 + 4),4);
            if ((bool)(~((int)(uVar30 & uVar22) == 0) & 1)) {
              puVar12[-1] = (ulong)pbVar18;
            }
            if ((bool)(~((int)((uVar30 & uVar22) >> 0x20) == 0) & 1)) {
              *puVar12 = (ulong)pbVar18;
            }
            bVar4 = (bool)~((int)((uVar29 & uVar22) >> 0x20) == 0);
            uVar30 = NEON_ushl(0x2000000020,CONCAT44(iVar26 + 6,iVar24 + 6),4);
            if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
              puVar12[1] = (ulong)pbVar18;
              if (bVar4) goto LAB_00551644;
LAB_00551618:
              bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
              if (!(bool)(~((int)(uVar30 & uVar22) == 0) & 1)) goto LAB_00551628;
LAB_00551658:
              puVar12[3] = (ulong)pbVar18;
              if (bVar27 != 0) goto LAB_00551664;
            }
            else {
              if (!bVar4) goto LAB_00551618;
LAB_00551644:
              puVar12[2] = (ulong)pbVar18;
              bVar27 = ~((int)((uVar30 & uVar22) >> 0x20) == 0);
              if ((bool)(~((int)(uVar30 & uVar22) == 0) & 1)) goto LAB_00551658;
LAB_00551628:
              if ((bool)(bVar27 & 1)) {
LAB_00551664:
                puVar12[4] = (ulong)pbVar18;
              }
            }
            uVar9 = CONCAT44(iVar26 + 8,iVar24 + 8);
            uVar20 = uVar20 - 8;
            puVar12 = puVar12 + 8;
          } while (uVar20 != 0);
          if (uVar19 == uVar11) goto LAB_005516b0;
        }
        uVar6 = (uint)uVar17;
        while( true ) {
          if ((0x20 << (ulong)(uVar6 & 0x1f) & uVar13) != 0) {
            local_1c8[uVar17 + 5] = (ulong)pbVar18;
          }
          if ((ulong)uVar10 == uVar17 + 1) break;
          uVar17 = uVar17 + 1;
          uVar6 = (uint)uVar17;
        }
      }
LAB_005516b0:
      if (uVar10 - 2 != 0 && 1 < (int)uVar10) {
        memcpy(local_1e0,local_190,(ulong)(uVar10 - 2) << 3);
      }
      local_1f0[1] = pbVar18;
    }
LAB_005516d8:
    if (0 < (int)param_7) {
      uVar19 = (ulong)param_7;
      ppbVar14 = local_1f0 + 1;
      plVar15 = (long *)(param_6 + 8);
      do {
        pbVar18 = ppbVar14[-1];
        pbVar2 = *ppbVar14;
        ppbVar14 = ppbVar14 + 2;
        plVar15[-1] = (long)pbVar18;
        *plVar15 = (long)pbVar2 - (long)pbVar18;
        plVar15 = plVar15 + 2;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    uVar9 = 1;
  }
  else {
    if (*param_1 == '\0') goto LAB_00550d94;
LAB_00550d70:
    if (local_200 == *param_2) goto LAB_00550d94;
LAB_005514e0:
    uVar9 = 0;
  }
  return uVar9;
}


