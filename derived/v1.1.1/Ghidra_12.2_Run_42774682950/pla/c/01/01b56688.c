/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b56688; name: FUN_01b56688
 */


void FUN_01b56688(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  ushort *puVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_108;
  undefined8 local_100 [2];
  undefined8 local_f0;
  ulong uStack_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  size_t local_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined4 local_90;
  
  uVar10 = *(undefined8 *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x1ffffffffffffff;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = uVar10;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_3 != &DAT_cbf29ce484222645) {
    puVar15 = *(undefined8 **)(param_2 + 800);
    puVar16 = *(undefined8 **)(param_2 + 0x328);
    if (puVar15 != puVar16) {
      do {
        piVar18 = (int *)*puVar15;
        puVar19 = (ushort *)((long)piVar18 - (long)*piVar18);
        uVar4 = *puVar19;
        bVar6 = param_3 == (undefined1 *)0x0;
        if (uVar4 < 7) {
LAB_01b56a54:
          bVar6 = (bool)(param_3 == (undefined1 *)0x0 | bVar6);
LAB_01b56a60:
          bVar6 = (bool)(param_3 == (undefined1 *)0x0 | bVar6);
LAB_01b56a6c:
          puVar11 = (undefined1 *)0x0;
          if (param_3 == (undefined1 *)0x0 || bVar6) goto LAB_01b567f4;
LAB_01b567dc:
          if (puVar11 == param_3) goto LAB_01b567f4;
        }
        else {
          puVar11 = (undefined1 *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar11 = *(undefined1 **)((long)piVar18 + (ulong)puVar19[3]);
          }
          bVar6 = puVar11 == param_3;
          if (uVar4 < 9) goto LAB_01b56a54;
          puVar12 = (undefined1 *)0x0;
          if ((ulong)puVar19[4] != 0) {
            puVar12 = *(undefined1 **)((long)piVar18 + (ulong)puVar19[4]);
          }
          bVar7 = puVar11 == param_3;
          bVar8 = puVar12 == param_3;
          bVar6 = bVar7 || bVar8;
          if (uVar4 < 0xb) goto LAB_01b56a60;
          puVar11 = (undefined1 *)0x0;
          if ((ulong)puVar19[5] != 0) {
            puVar11 = *(undefined1 **)((long)piVar18 + (ulong)puVar19[5]);
          }
          bVar9 = puVar11 == param_3;
          bVar6 = bVar6 || bVar9;
          if (uVar4 < 0xd) goto LAB_01b56a6c;
          puVar12 = (undefined1 *)0x0;
          if ((ulong)puVar19[6] != 0) {
            puVar12 = *(undefined1 **)((long)piVar18 + (ulong)puVar19[6]);
          }
          if (uVar4 < 0xf) {
            puVar11 = (undefined1 *)0x0;
            if (((bVar7 || bVar8) || bVar9) || puVar12 == param_3) goto LAB_01b567f4;
            goto LAB_01b567dc;
          }
          puVar11 = (undefined1 *)0x0;
          if ((ulong)puVar19[7] != 0) {
            puVar11 = *(undefined1 **)((long)piVar18 + (ulong)puVar19[7]);
          }
          if (((!bVar7 && !bVar8) && !bVar9) && puVar12 != param_3) goto LAB_01b567dc;
LAB_01b567f4:
          if ((ulong)puVar19[2] == 0) {
            local_108 = 0;
          }
          else {
            local_108 = *(undefined8 *)((long)piVar18 + (ulong)puVar19[2]);
          }
          piVar1 = (int *)((long)((long)piVar18 + (ulong)puVar19[8]) +
                          (ulong)*(uint *)((long)piVar18 + (ulong)puVar19[8]));
          puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar5 = *puVar13;
          uVar21 = 0;
          uVar22 = 0;
          uVar20 = 0;
          if (4 < uVar5) {
            uVar22 = 0;
            if ((ulong)puVar13[2] != 0) {
              uVar22 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[2]);
            }
            if (uVar5 < 7) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              if ((ulong)puVar13[3] != 0) {
                uVar21 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[3]);
              }
              if ((8 < uVar5) && ((ulong)puVar13[4] != 0)) {
                uVar20 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar13[4]);
                goto LAB_01b56870;
              }
            }
            uVar20 = 0;
          }
LAB_01b56870:
          if ((uVar4 < 0x13) || ((ulong)puVar19[9] == 0)) {
            lVar17 = 0;
          }
          else {
            puVar2 = (uint *)((long)piVar18 + (ulong)puVar19[9]);
            lVar17 = (long)puVar2 + (ulong)*puVar2;
          }
          local_d0 = strlen((char *)(lVar17 + 4));
          bVar3 = *(byte *)(lVar17 + 4);
          local_e0 = &DAT_cbf29ce484222645;
          if (bVar3 != 0) {
            local_e0 = &DAT_cbf29ce484222645;
            pbVar14 = (byte *)(lVar17 + 5);
            do {
              local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (bVar3 != 0);
          }
          local_c0 = 0;
          if ((ulong)puVar19[10] != 0) {
            local_c0 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[10]);
          }
          uVar24 = 0;
          uVar23 = 0;
          uStack_a8 = 0;
          piVar1 = (int *)((long)((long)piVar18 + (ulong)puVar19[0xb]) +
                          (ulong)*(uint *)((long)piVar18 + (ulong)puVar19[0xb]));
          puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar5 = *puVar13;
          if (4 < uVar5) {
            uVar23 = 0;
            if ((ulong)puVar13[2] != 0) {
              uVar23 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[2]);
            }
            if (uVar5 < 7) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              if ((ulong)puVar13[3] != 0) {
                uVar24 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[3]);
              }
              if ((8 < uVar5) && ((ulong)puVar13[4] != 0)) {
                uStack_a8 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar13[4]);
                goto LAB_01b56958;
              }
            }
            uStack_a8 = 0;
          }
LAB_01b56958:
          uStack_98 = 0;
          local_f0 = CONCAT44(uVar21,uVar22);
          piVar1 = (int *)((long)((long)piVar18 + (ulong)puVar19[0xc]) +
                          (ulong)*(uint *)((long)piVar18 + (ulong)puVar19[0xc]));
          puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar5 = *puVar13;
          uVar21 = 0;
          local_b0 = CONCAT44(uVar24,uVar23);
          uVar22 = 0;
          if (4 < uVar5) {
            uVar21 = 0;
            if ((ulong)puVar13[2] != 0) {
              uVar21 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[2]);
            }
            if (uVar5 < 7) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              if ((ulong)puVar13[3] != 0) {
                uVar22 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[3]);
              }
              if ((8 < uVar5) && ((ulong)puVar13[4] != 0)) {
                uStack_98 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar13[4]);
                goto LAB_01b569d8;
              }
            }
            uStack_98 = 0;
          }
LAB_01b569d8:
          uStack_a0 = CONCAT44(uVar22,uVar21);
          if (uVar4 < 0x1b) {
            local_90 = 0;
          }
          else {
            local_90 = 0;
            if ((ulong)puVar19[0xd] != 0) {
              local_90 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[0xd]);
            }
          }
          local_c8 = (long *)0x0;
          local_100[0] = local_108;
          uStack_e8 = uVar20;
          pcStack_d8 = (char *)(lVar17 + 4);
          FUN_01b57c1c(param_1,local_100);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar16);
    }
  }
  return;
}


