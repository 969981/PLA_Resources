/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013085c0; name: FUN_013085c0
 */


void FUN_013085c0(long param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  
  *param_3 = 0;
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    puVar1 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar5 = (ulong)*puVar1;
    if (uVar5 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      puVar15 = puVar1 + 1;
      do {
        piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar10 == 0)) {
          iVar8 = 0;
LAB_013086b8:
          uVar16 = (&DAT_03a7a828)[iVar8];
        }
        else {
          iVar8 = *(int *)((long)piVar4 + uVar10);
          if (iVar8 < 7) goto LAB_013086b8;
          uVar16 = 7;
        }
        if ((uVar13 < 0x14) && (uVar16 == param_2)) {
          param_3[(ulong)uVar13 * 0x18 + 2] = param_2;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          uVar5 = (ulong)uVar13;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar10 == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)((long)piVar4 + uVar10);
          }
          *(undefined8 *)(param_3 + uVar5 * 0x18 + 4) = uVar6;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar10 == 0)) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((long)piVar4 + uVar10);
          }
          *(bool *)(param_3 + uVar5 * 0x18 + 6) = iVar8 != 0;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          uVar16 = 0;
          if (10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = *(uint *)((long)piVar4 + uVar10);
            }
          }
          param_3[uVar5 * 0x18 + 7] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          uVar16 = 0;
          if (0xc < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = *(uint *)((long)piVar4 + uVar10);
            }
          }
          param_3[uVar5 * 0x18 + 8] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar10 == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)((long)piVar4 + uVar10);
          }
          param_3[uVar5 * 0x18 + 9] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar10 == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)((long)piVar4 + uVar10);
          }
          param_3[uVar5 * 0x18 + 10] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9], uVar10 == 0)) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((long)piVar4 + uVar10);
          }
          *(bool *)(param_3 + uVar5 * 0x18 + 0xb) = iVar8 != 0;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          uVar16 = 0;
          if (0x14 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10];
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = *(uint *)((long)piVar4 + uVar10);
            }
          }
          param_3[uVar5 * 0x18 + 0xc] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          uVar16 = 0;
          if (0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb];
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = *(uint *)((long)piVar4 + uVar10);
            }
          }
          param_3[uVar5 * 0x18 + 0xd] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar10 == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)((long)piVar4 + uVar10);
          }
          param_3[uVar5 * 0x18 + 0xe] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1b) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xd], uVar10 == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)((long)piVar4 + uVar10);
          }
          param_3[uVar5 * 0x18 + 0xf] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1d) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xe], uVar10 == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)((long)piVar4 + uVar10);
          }
          param_3[uVar5 * 0x18 + 0x10] = uVar16;
          piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1f) ||
             (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xf], uVar10 == 0)) {
            lVar14 = 0;
          }
          else {
            puVar12 = (uint *)((long)piVar4 + uVar10);
            lVar14 = (long)puVar12 + (ulong)*puVar12;
          }
          sVar3 = strlen((char *)(lVar14 + 4));
          bVar2 = *(byte *)(lVar14 + 4);
          puVar9 = &DAT_cbf29ce484222645;
          if (bVar2 != 0) {
            puVar9 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar14 + 5);
            do {
              puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar2 != 0);
          }
          puVar12 = param_3 + uVar5 * 0x18 + 0x18;
          plVar7 = *(long **)puVar12;
          *(undefined1 **)(param_3 + uVar5 * 0x18 + 0x12) = puVar9;
          *(char **)(param_3 + uVar5 * 0x18 + 0x14) = (char *)(lVar14 + 4);
          *(size_t *)(param_3 + uVar5 * 0x18 + 0x16) = sVar3;
          (param_3 + uVar5 * 0x18 + 0x18)[0] = 0;
          (param_3 + uVar5 * 0x18 + 0x18)[1] = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
          puVar12[0] = 0;
          puVar12[1] = 0;
          uVar13 = uVar13 + 1;
          uVar5 = (ulong)*puVar1;
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar1 + 1 + uVar5);
    }
    *param_3 = uVar13;
  }
  return;
}


