/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f5e5c; name: FUN_013f5e5c
 */


void FUN_013f5e5c(long param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  long lVar13;
  uint uVar14;
  
  if (param_3 != (uint *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined1 **)(param_3 + 4) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 6) = &DAT_cbf29ce484222645;
    *param_3 = param_2;
    *(undefined1 **)(param_3 + 8) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 10) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0xc) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0xe) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x10) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x12) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x14) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x16) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x18) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x1a) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x1c) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x1e) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x20) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x22) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x24) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x26) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x28) = &DAT_cbf29ce484222645;
    *(undefined1 **)(param_3 + 0x2a) = &DAT_cbf29ce484222645;
    if ((param_2 < 0x38a) && (piVar7 = *(int **)(param_1 + 0x38), piVar7 != (int *)0x0)) {
      uVar8 = (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7));
      puVar1 = (uint *)((long)piVar7 + uVar8);
      uVar10 = (ulong)*puVar1;
      uVar5 = (ulong)*(uint *)((long)puVar1 + uVar10);
      if (uVar5 != 0) {
        lVar2 = uVar10 + uVar8;
        lVar6 = 0;
        do {
          uVar8 = (ulong)*(uint *)((long)piVar7 + lVar6 + lVar2 + 4);
          lVar3 = lVar6 + uVar8 + lVar2;
          lVar13 = (long)*(int *)((long)piVar7 + lVar3 + 4);
          lVar4 = lVar6 + (uVar8 - lVar13) + lVar2;
          uVar11 = *(ushort *)((long)piVar7 + lVar4 + 4);
          if (uVar11 < 5) {
            if (param_2 == 0) goto LAB_013f5f44;
          }
          else {
            uVar10 = (ulong)*(ushort *)((long)piVar7 + lVar4 + 8);
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = *(uint *)((long)piVar7 + lVar6 + uVar8 + uVar10 + lVar2 + 4);
            }
            if (uVar14 == param_2) {
LAB_013f5f44:
              puVar1 = (uint *)((long)piVar7 + lVar6 + lVar2 + 4);
              if (uVar11 < 7) {
LAB_013f6550:
                puVar12 = (undefined1 *)0x0;
LAB_013f6554:
                *(undefined1 **)(param_3 + 4) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                uVar5 = 1;
                if (0x20 < uVar11) goto LAB_013f62e4;
LAB_013f6588:
                puVar12 = (undefined1 *)0x0;
LAB_013f658c:
                uVar8 = (ulong)((int)uVar5 + 1);
                *(undefined1 **)(param_3 + uVar5 * 2 + 4) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x22 < uVar11) goto LAB_013f6304;
LAB_013f65c4:
                puVar12 = (undefined1 *)0x0;
LAB_013f65c8:
                uVar5 = (ulong)((int)uVar8 + 1);
                *(undefined1 **)(param_3 + uVar8 * 2 + 4) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x24 < uVar11) goto LAB_013f6324;
LAB_013f6600:
                puVar12 = (undefined1 *)0x0;
LAB_013f6604:
                *(undefined1 **)(param_3 + uVar5 * 2 + 4) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x26 < uVar11) goto LAB_013f6344;
LAB_013f6638:
                puVar12 = (undefined1 *)0x0;
LAB_013f663c:
                *(undefined1 **)(param_3 + 0xc) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                uVar5 = 1;
                if (0x28 < uVar11) goto LAB_013f6368;
LAB_013f6670:
                puVar12 = (undefined1 *)0x0;
LAB_013f6674:
                uVar8 = (ulong)((int)uVar5 + 1);
                *(undefined1 **)(param_3 + uVar5 * 2 + 0xc) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x2a < uVar11) goto LAB_013f6388;
LAB_013f66ac:
                puVar12 = (undefined1 *)0x0;
LAB_013f66b0:
                uVar5 = (ulong)((int)uVar8 + 1);
                *(undefined1 **)(param_3 + uVar8 * 2 + 0xc) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x2c < uVar11) goto LAB_013f63a8;
LAB_013f66e8:
                puVar12 = (undefined1 *)0x0;
LAB_013f66ec:
                *(undefined1 **)(param_3 + uVar5 * 2 + 0xc) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x2e < uVar11) goto LAB_013f63c8;
LAB_013f6720:
                puVar12 = (undefined1 *)0x0;
LAB_013f6724:
                *(undefined1 **)(param_3 + 0x14) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                uVar5 = 1;
                if (0x30 < uVar11) goto LAB_013f63ec;
LAB_013f6758:
                puVar12 = (undefined1 *)0x0;
LAB_013f675c:
                uVar8 = (ulong)((int)uVar5 + 1);
                *(undefined1 **)(param_3 + uVar5 * 2 + 0x14) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x32 < uVar11) goto LAB_013f640c;
LAB_013f6794:
                puVar12 = (undefined1 *)0x0;
LAB_013f6798:
                uVar5 = (ulong)((int)uVar8 + 1);
                *(undefined1 **)(param_3 + uVar8 * 2 + 0x14) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x34 < uVar11) goto LAB_013f642c;
LAB_013f67d0:
                puVar12 = (undefined1 *)0x0;
LAB_013f67d4:
                *(undefined1 **)(param_3 + uVar5 * 2 + 0x14) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x36 < uVar11) goto LAB_013f644c;
LAB_013f6808:
                puVar12 = (undefined1 *)0x0;
LAB_013f680c:
                *(undefined1 **)(param_3 + 0x1c) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                uVar5 = 1;
                if (0x38 < uVar11) goto LAB_013f6470;
LAB_013f6840:
                puVar12 = (undefined1 *)0x0;
LAB_013f6844:
                uVar8 = (ulong)((int)uVar5 + 1);
                *(undefined1 **)(param_3 + uVar5 * 2 + 0x1c) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x3a < uVar11) goto LAB_013f6490;
LAB_013f687c:
                puVar12 = (undefined1 *)0x0;
LAB_013f6880:
                uVar5 = (ulong)((int)uVar8 + 1);
                *(undefined1 **)(param_3 + uVar8 * 2 + 0x1c) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x3c < uVar11) goto LAB_013f64b0;
LAB_013f68b8:
                puVar12 = (undefined1 *)0x0;
LAB_013f68bc:
                *(undefined1 **)(param_3 + uVar5 * 2 + 0x1c) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x3e < uVar11) goto LAB_013f64d0;
LAB_013f68f0:
                puVar12 = (undefined1 *)0x0;
LAB_013f68f4:
                *(undefined1 **)(param_3 + 0x24) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                uVar5 = 1;
                if (0x40 < uVar11) goto LAB_013f64f4;
LAB_013f6928:
                puVar12 = (undefined1 *)0x0;
LAB_013f692c:
                uVar8 = (ulong)((int)uVar5 + 1);
                *(undefined1 **)(param_3 + uVar5 * 2 + 0x24) = puVar12;
                piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                uVar11 = *(ushort *)
                          ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                lVar13 = -(long)*piVar9;
                if (0x42 < uVar11) goto LAB_013f6514;
LAB_013f6964:
                puVar12 = (undefined1 *)0x0;
              }
              else {
                uVar5 = (ulong)*(ushort *)((long)piVar7 + lVar4 + 10);
                lVar13 = -lVar13;
                piVar9 = (int *)((long)piVar7 + lVar3 + 4);
                if ((uVar5 != 0) &&
                   (*(int *)((long)piVar7 + lVar6 + uVar5 + uVar8 + lVar2 + 4) != 0)) {
                  *(undefined1 *)(param_3 + 1) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 9) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 8);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 5) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0xb) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 10);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 6) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0xd) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0xc);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 7) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0xf) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0xe);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)(param_3 + 2) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x11) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x10);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 9) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x13) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x12);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 10) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x15) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x14);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 0xb) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x17) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x16);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)(param_3 + 3) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x19) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x18);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 0xd) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x1b) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x1a);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 0xe) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x1d) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x1c);
                if ((uVar5 != 0) && (*(int *)((long)piVar9 + uVar5) != 0)) {
                  *(undefined1 *)((long)param_3 + 0xf) = 1;
                  piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
                  uVar11 = *(ushort *)
                            ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
                  lVar13 = -(long)*piVar9;
                }
                if (uVar11 < 0x1f) goto LAB_013f6550;
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x1e);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6554;
                uVar5 = 0;
                if (uVar11 < 0x21) goto LAB_013f6588;
LAB_013f62e4:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x20);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f658c;
                uVar8 = uVar5;
                if (uVar11 < 0x23) goto LAB_013f65c4;
LAB_013f6304:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x22);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f65c8;
                uVar5 = uVar8;
                if (uVar11 < 0x25) goto LAB_013f6600;
LAB_013f6324:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x24);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6604;
                if (uVar11 < 0x27) goto LAB_013f6638;
LAB_013f6344:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x26);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f663c;
                uVar5 = 0;
                if (uVar11 < 0x29) goto LAB_013f6670;
LAB_013f6368:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x28);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6674;
                uVar8 = uVar5;
                if (uVar11 < 0x2b) goto LAB_013f66ac;
LAB_013f6388:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x2a);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f66b0;
                uVar5 = uVar8;
                if (uVar11 < 0x2d) goto LAB_013f66e8;
LAB_013f63a8:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x2c);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f66ec;
                if (uVar11 < 0x2f) goto LAB_013f6720;
LAB_013f63c8:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x2e);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6724;
                uVar5 = 0;
                if (uVar11 < 0x31) goto LAB_013f6758;
LAB_013f63ec:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x30);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f675c;
                uVar8 = uVar5;
                if (uVar11 < 0x33) goto LAB_013f6794;
LAB_013f640c:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x32);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6798;
                uVar5 = uVar8;
                if (uVar11 < 0x35) goto LAB_013f67d0;
LAB_013f642c:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x34);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f67d4;
                if (uVar11 < 0x37) goto LAB_013f6808;
LAB_013f644c:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x36);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f680c;
                uVar5 = 0;
                if (uVar11 < 0x39) goto LAB_013f6840;
LAB_013f6470:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x38);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6844;
                uVar8 = uVar5;
                if (uVar11 < 0x3b) goto LAB_013f687c;
LAB_013f6490:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x3a);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f6880;
                uVar5 = uVar8;
                if (uVar11 < 0x3d) goto LAB_013f68b8;
LAB_013f64b0:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x3c);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f68bc;
                if (uVar11 < 0x3f) goto LAB_013f68f0;
LAB_013f64d0:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x3e);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f68f4;
                uVar5 = 0;
                if (uVar11 < 0x41) goto LAB_013f6928;
LAB_013f64f4:
                uVar8 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x40);
                puVar12 = (undefined1 *)0x0;
                if ((uVar8 == 0) ||
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar8),
                   puVar12 != &DAT_cbf29ce484222645)) goto LAB_013f692c;
                uVar8 = uVar5;
                if (uVar11 < 0x43) goto LAB_013f6964;
LAB_013f6514:
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x42);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 != 0) &&
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 == &DAT_cbf29ce484222645)) goto joined_r0x013f699c;
              }
              *(undefined1 **)(param_3 + uVar8 * 2 + 0x24) = puVar12;
              piVar9 = (int *)((long)piVar7 + lVar6 + (ulong)*puVar1 + lVar2 + 4);
              lVar13 = -(long)*piVar9;
              uVar11 = *(ushort *)
                        ((long)piVar7 + lVar6 + ((ulong)*puVar1 - (long)*piVar9) + lVar2 + 4);
              uVar8 = (ulong)((int)uVar8 + 1);
joined_r0x013f699c:
              if (uVar11 < 0x45) {
                puVar12 = (undefined1 *)0x0;
              }
              else {
                uVar5 = (ulong)*(ushort *)((long)piVar9 + lVar13 + 0x44);
                puVar12 = (undefined1 *)0x0;
                if ((uVar5 != 0) &&
                   (puVar12 = *(undefined1 **)((long)piVar9 + uVar5),
                   puVar12 == &DAT_cbf29ce484222645)) {
                  return;
                }
              }
              *(undefined1 **)(param_3 + uVar8 * 2 + 0x24) = puVar12;
              return;
            }
          }
          lVar6 = lVar6 + 4;
        } while (uVar5 * 4 != lVar6);
      }
    }
  }
  return;
}


