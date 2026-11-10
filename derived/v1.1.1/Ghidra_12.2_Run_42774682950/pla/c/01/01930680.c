/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01930680; name: FUN_01930680
 */


undefined8
FUN_01930680(int *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 local_c0;
  undefined2 local_bc;
  uint local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long local_90;
  long lStack_88;
  int local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  uint local_64;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar12 == 0)) {
    puVar25 = (undefined1 *)0x0;
  }
  else {
    puVar25 = *(undefined1 **)((long)param_1 + uVar12);
    if (puVar25 == &DAT_cbf29ce484222645) {
      return 0;
    }
  }
  local_64 = 0;
  uVar7 = FUN_018b51ac(*param_2,puVar25);
  piVar8 = (int *)FUN_01933a2c(&local_64,uVar7);
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  local_68 = 0;
  lVar9 = FUN_018b54c4(*param_2,puVar25);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x2d) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x16], uVar12 == 0)) {
    lVar17 = 0;
  }
  else {
    puVar18 = (uint *)((long)piVar8 + uVar12);
    lVar17 = (long)puVar18 + (ulong)*puVar18;
  }
  piVar10 = (int *)FUN_01931a60(lVar17,&local_68);
  if (piVar10 == (int *)0x0) {
    return 0;
  }
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar12 == 0)) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)((long)piVar10 + uVar12);
  }
  puVar18 = *(uint **)(*(long *)(lVar9 + 8) + 0x250);
  uVar20 = (ulong)*puVar18;
  piVar10 = (int *)((long)puVar18 + uVar20);
  uVar21 = (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10));
  uVar22 = (ulong)*(uint *)((long)piVar10 + uVar21);
  uVar12 = (ulong)*(uint *)((long)((long)piVar10 + uVar21) + uVar22);
  if (uVar12 != 0) {
    lVar2 = uVar20 + uVar22 + uVar21;
    lVar9 = 0;
    do {
      uVar15 = (ulong)*(uint *)((long)puVar18 + lVar9 + lVar2 + 4);
      lVar6 = lVar9 + (uVar15 - (long)*(int *)((long)puVar18 + lVar9 + uVar15 + lVar2 + 4)) + lVar2;
      if (*(ushort *)((long)puVar18 + lVar6 + 4) < 5) {
        if (lVar17 == 0) {
LAB_01930820:
          if ((long)puVar18 + lVar9 + uVar15 + uVar21 + uVar20 + uVar22 == -4) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)puVar18 + lVar6 + 0xe);
          lVar17 = uVar12 + *(uint *)((long)puVar18 + lVar9 + uVar12 + uVar15 + lVar2 + 4);
          lVar17 = lVar17 + (ulong)*(uint *)((long)puVar18 + lVar9 + lVar17 + uVar15 + lVar2 + 8);
          lVar6 = lVar9 + (lVar17 - *(int *)((long)puVar18 + lVar9 + lVar17 + uVar15 + lVar2 + 8)) +
                          uVar15 + lVar2;
          uVar4 = *(ushort *)((long)puVar18 + lVar6 + 8);
          if (uVar4 < 5) {
            uVar26 = 0;
LAB_019308b0:
            uVar27 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)puVar18 + lVar6 + 0xc);
            if (uVar12 != 0) {
              uVar26 = *(undefined4 *)((long)puVar18 + lVar9 + lVar17 + uVar12 + uVar15 + lVar2 + 8)
              ;
              if (10 < uVar4) goto LAB_019308a8;
              goto LAB_019308b0;
            }
            uVar26 = 0;
            if (uVar4 < 0xb) goto LAB_019308b0;
LAB_019308a8:
            uVar12 = (ulong)*(ushort *)((long)puVar18 + lVar6 + 0x12);
            if (uVar12 == 0) goto LAB_019308b0;
            uVar27 = *(undefined4 *)((long)puVar18 + lVar9 + lVar17 + uVar12 + uVar15 + lVar2 + 8);
          }
          piVar10 = (int *)FUN_02c53064(uVar26,uVar27);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x21) ||
             (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x10], uVar12 == 0)) {
            uVar11 = 0;
            param_4 = (long *)*param_4;
          }
          else {
            cVar3 = *(char *)((long)piVar10 + uVar12);
            uVar11 = 2;
            if (cVar3 != -1) {
              uVar11 = (uint)(cVar3 == -2);
            }
            param_4 = (long *)*param_4;
          }
          if (param_4 == (long *)0x0) {
            uVar12 = FUN_011323a4(0,uVar26,uVar27);
          }
          else {
            lVar9 = param_4[0xb];
            if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar9 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
              *(undefined8 *)(lVar9 + 0x10) = uVar7;
            }
            piVar10 = (int *)(lVar9 + 0xc);
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar12 = FUN_011323a4(param_4,uVar26,uVar27);
            lVar9 = param_4[0xb];
            piVar10 = (int *)(lVar9 + 0xc);
            do {
              iVar14 = *piVar10;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*param_4 + 0x20))(param_4);
            }
          }
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          puVar18 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (8 - (long)*piVar8)));
          puVar18 = (uint *)((long)puVar18 + (ulong)local_64 * 4 + (ulong)*puVar18 + 4);
          piVar8 = (int *)((long)puVar18 + (ulong)*puVar18);
          if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x13) ||
             (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[9], uVar12 == 0)) {
            piVar8 = (int *)0x0;
          }
          else {
            puVar18 = (uint *)((long)piVar8 + uVar12);
            piVar8 = (int *)((long)puVar18 + (ulong)*puVar18);
          }
          puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
          uVar4 = *puVar13;
          if (uVar4 < 5) {
            uVar28 = 0;
            uVar29 = 0;
            uStack_98 = 0;
          }
          else {
            uVar28 = 0;
            uVar29 = 0;
            if ((ulong)puVar13[2] != 0) {
              uVar29 = *(undefined4 *)((long)piVar8 + (ulong)puVar13[2]);
            }
            if (uVar4 < 7) {
              uStack_98 = 0;
            }
            else {
              uStack_98 = 0;
              uVar28 = 0;
              if ((ulong)puVar13[3] != 0) {
                uVar28 = *(undefined4 *)((long)piVar8 + (ulong)puVar13[3]);
              }
              if ((8 < uVar4) && ((ulong)puVar13[4] != 0)) {
                uStack_98 = (ulong)*(uint *)((long)piVar8 + (ulong)puVar13[4]);
              }
            }
          }
          puVar13 = (ushort *)((long)param_1 - (long)*param_1);
          uVar4 = *puVar13;
          local_a0 = CONCAT44(uVar28,uVar29);
          if (uVar4 < 0xf) {
            iVar14 = 0;
            local_80 = 0;
            uVar12 = 0;
            goto LAB_01930a58;
          }
          uVar12 = (ulong)puVar13[7];
          if (uVar12 == 0) {
            local_80 = 0;
            if (0x10 < uVar4) goto LAB_01930a44;
LAB_01930b84:
            iVar14 = 0;
          }
          else {
            local_80 = *(int *)((long)param_1 + uVar12);
            if (uVar4 < 0x11) goto LAB_01930b84;
LAB_01930a44:
            iVar14 = 0;
            if ((ulong)puVar13[8] != 0) {
              iVar14 = *(int *)((long)param_1 + (ulong)puVar13[8]);
            }
          }
          if (puVar13[7] != 0) {
            uVar12 = (ulong)*(uint *)((long)param_1 + uVar12);
          }
LAB_01930a58:
          iVar14 = iVar14 - (int)uVar12;
          if (iVar14 == 0) {
            uVar12 = *param_5;
            uVar20 = param_5[1];
            uVar16 = 0;
          }
          else {
            uVar1 = iVar14 + 1;
            if (uVar1 == 0) {
              uVar12 = *param_5;
              uVar16 = (int)param_5[1] + (int)uVar12;
              uVar20 = param_5[1] ^ uVar12;
              uVar12 = uVar20 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar20 << 0x10;
              uVar20 = uVar20 >> 0x1b | uVar20 << 0x25;
            }
            else {
              lVar9 = 0x1f;
              if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
                lVar9 = 0x20;
              }
              uVar20 = lVar9 - LZCOUNT(uVar1);
              uVar12 = uVar20 >> 6;
              if ((uVar20 & 0x3f) != 0) {
                uVar12 = uVar12 + 1;
              }
              if (uVar20 < uVar12) {
                uVar19 = 0;
              }
              else {
                uVar21 = 0;
                if (uVar12 != 0) {
                  uVar21 = uVar20 / uVar12;
                }
                uVar19 = (uint)(0xffffffffffffffff >> (-uVar21 & 0x3f));
              }
              uVar12 = *param_5;
              uVar20 = param_5[1];
              do {
                uVar21 = uVar12 ^ uVar20;
                iVar14 = (int)uVar20;
                uVar20 = uVar21 >> 0x1b | uVar21 << 0x25;
                uVar16 = (int)uVar12 + iVar14 & uVar19;
                uVar12 = uVar21 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar21 << 0x10;
              } while (uVar1 <= uVar16);
            }
            *param_5 = uVar12;
            param_5[1] = uVar20;
          }
          uVar21 = uVar12 ^ uVar20;
          local_80 = uVar16 + local_80;
          uVar22 = uVar21 >> 0x1b | uVar21 << 0x25;
          local_90 = uVar12 + uVar20;
          uVar12 = uVar21 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar21 << 0x10;
          uVar20 = uVar12 ^ uVar22;
          lStack_88 = uVar12 + uVar22;
          *param_5 = uVar20 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar20 << 0x10;
          param_5[1] = uVar20 >> 0x1b | uVar20 << 0x25;
          local_bc = (undefined2)uVar27;
          local_b4 = 0;
          local_b0 = 0;
          uStack_7c = 0;
          local_78 = 0;
          local_c0 = uVar26;
          local_b8 = uVar11;
          puStack_a8 = puVar25;
          FUN_01102b54(*param_3,&local_c0);
          return 1;
        }
      }
      else {
        uVar23 = (ulong)*(ushort *)((long)puVar18 + lVar6 + 8);
        lVar24 = 0;
        if (uVar23 != 0) {
          lVar24 = *(long *)((long)puVar18 + lVar9 + uVar15 + uVar23 + lVar2 + 4);
        }
        if (lVar17 == lVar24) goto LAB_01930820;
      }
      lVar9 = lVar9 + 4;
    } while (uVar12 * 4 != lVar9);
  }
  return 0;
}


