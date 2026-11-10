/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01306f1c; name: FUN_01306f1c
 */


void FUN_01306f1c(long param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  *param_3 = 0;
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 == 0)) {
      uVar3 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      uVar5 = (ulong)*puVar1;
      uVar3 = uVar5 << 2;
      if (uVar5 != 0) {
        uVar3 = 0;
        puVar4 = puVar1 + 1;
        do {
          piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
            iVar7 = 0;
LAB_01306f90:
            if ((&DAT_03a7a7f4)[iVar7] == param_2) {
LAB_01306fe0:
              if (0x27 < (uint)uVar3) break;
              param_3[uVar3 * 0x44 + 2] = param_2;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 4) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar5 == 0)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
              }
              *(bool *)(param_3 + uVar3 * 0x44 + 6) = iVar7 != 0;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar5 == 0)) {
                iVar7 = 0;
LAB_01307084:
                uVar6 = (&DAT_03a7a810)[iVar7];
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
                if (iVar7 < 0x18) goto LAB_01307084;
                uVar6 = 0;
              }
              *(undefined1 *)((long)param_3 + uVar3 * 0x110 + 0x19) = uVar6;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 8) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 10) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0xc] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0xe) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x10] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x14 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x11] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x12] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x18 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x13] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x1a < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x14] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1d) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe], uVar5 == 0)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
              }
              *(bool *)(param_3 + uVar3 * 0x44 + 0x16) = iVar7 != 0;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1d) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe], uVar5 == 0)) {
                iVar7 = 0;
LAB_013072c0:
                uVar6 = (&DAT_03a7a810)[iVar7];
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
                if (iVar7 < 0x18) goto LAB_013072c0;
                uVar6 = 0;
              }
              *(undefined1 *)((long)param_3 + uVar3 * 0x110 + 0x59) = uVar6;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1f) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x18) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x21) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x1a) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x23) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x1c] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x1e) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x27) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x13], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x20] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x28 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x21] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x2a < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x15];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x22] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x2c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x16];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x23] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x2e < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x24] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x31) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18], uVar5 == 0)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
              }
              *(bool *)(param_3 + uVar3 * 0x44 + 0x26) = iVar7 != 0;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x31) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18], uVar5 == 0)) {
                iVar7 = 0;
LAB_013074fc:
                uVar6 = (&DAT_03a7a810)[iVar7];
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
                if (iVar7 < 0x18) goto LAB_013074fc;
                uVar6 = 0;
              }
              *(undefined1 *)((long)param_3 + uVar3 * 0x110 + 0x99) = uVar6;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x33) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x19], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x28) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x35) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1a], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x2a) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x37) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1b], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x2c] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x39) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1c], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x2e) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3b) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1d], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x30] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x3c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1e];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x31] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x3e < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1f];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x32] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x40 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x20];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x33] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x42 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x21];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x34] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x45) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x22], uVar5 == 0)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
              }
              *(bool *)(param_3 + uVar3 * 0x44 + 0x36) = iVar7 != 0;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x45) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x22], uVar5 == 0)) {
                iVar7 = 0;
LAB_01307738:
                uVar6 = (&DAT_03a7a810)[iVar7];
              }
              else {
                iVar7 = *(int *)((long)piVar2 + uVar5);
                if (iVar7 < 0x18) goto LAB_01307738;
                uVar6 = 0;
              }
              *(undefined1 *)((long)param_3 + uVar3 * 0x110 + 0xd9) = uVar6;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x47) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x23], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x38) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x49) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x24], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x3a) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x4b) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x25], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x3c] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x4d) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x26], uVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)((long)piVar2 + uVar5);
              }
              *(undefined8 *)(param_3 + uVar3 * 0x44 + 0x3e) = uVar8;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x4f) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x27], uVar5 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
              }
              param_3[uVar3 * 0x44 + 0x40] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x50 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x28];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x41] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x52 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x29];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x42] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x54 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2a];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x43] = uVar10;
              piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
              uVar10 = 0;
              if (0x56 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2b];
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
                }
              }
              param_3[uVar3 * 0x44 + 0x44] = uVar10;
              uVar5 = (ulong)*puVar1;
              uVar3 = (ulong)((uint)uVar3 + 1);
            }
          }
          else {
            iVar7 = *(int *)((long)piVar2 + uVar9);
            if (iVar7 < 7) goto LAB_01306f90;
            if (param_2 == 7) goto LAB_01306fe0;
          }
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar1 + 1 + uVar5);
      }
    }
    *param_3 = (int)uVar3;
  }
  return;
}


