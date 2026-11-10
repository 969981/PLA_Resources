/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f418; name: FUN_02f0f418
 */


void FUN_02f0f418(undefined8 param_1,int param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if ((int)param_3[1] != 0) {
    uVar10 = 0;
    do {
      lVar9 = *(long *)(*param_3 + uVar10 * 8);
      iVar1 = *(int *)(lVar9 + 0x3c);
      if (iVar1 == 1) {
LAB_02f0f468:
        uVar3 = FUN_02f0e5cc(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
LAB_02f0f478:
          uVar10 = (ulong)((int)uVar10 + 1);
        }
        else {
          if (*(long *)(lVar9 + 0x28) != 0) {
            *(undefined4 *)(lVar9 + 0x30) = 0;
            (*DAT_0442d150)(0);
            *(undefined8 *)(lVar9 + 0x28) = 0;
            *(undefined4 *)(lVar9 + 0x34) = 0;
          }
          puVar6 = (undefined8 *)(*param_3 + uVar10 * 8);
          uVar5 = *(uint *)(param_3 + 1);
          puVar4 = (undefined8 *)(*param_3 + (ulong)uVar5 * 8 + -8);
          if (puVar6 < puVar4) {
            uVar3 = ((ulong)uVar5 * 8 + uVar10 * -8) - 9;
            uVar5 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
            if ((uVar5 & 7) != 0) {
              lVar8 = -((ulong)uVar5 & 7);
              puVar7 = puVar6;
              do {
                puVar6 = puVar7 + 1;
                *puVar7 = *puVar6;
                bVar2 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                puVar7 = puVar6;
              } while (bVar2);
            }
            if (0x37 < uVar3) {
              do {
                *puVar6 = puVar6[1];
                puVar6[1] = puVar6[2];
                puVar6[2] = puVar6[3];
                puVar6[3] = puVar6[4];
                puVar6[4] = puVar6[5];
                puVar6[5] = puVar6[6];
                puVar6[6] = puVar6[7];
                puVar7 = puVar6 + 8;
                puVar6[7] = *puVar7;
                puVar6 = puVar7;
              } while (puVar7 < puVar4);
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + -1;
            if (lVar9 == 0) goto LAB_02f0f47c;
          }
          else {
            *(uint *)(param_3 + 1) = uVar5 - 1;
          }
          (*DAT_0442d150)(0,lVar9);
        }
      }
      else {
        if (iVar1 != 6) {
          if (iVar1 == 2) {
            *(int *)(lVar9 + 0x24) = param_2;
            *(undefined4 *)(lVar9 + 0x3c) = 3;
          }
          else if (iVar1 == 4) {
            *(int *)(lVar9 + 0x18) = (param_2 - *(int *)(lVar9 + 0x24)) + *(int *)(lVar9 + 0x18);
            *(undefined4 *)(lVar9 + 0x3c) = 1;
            goto LAB_02f0f468;
          }
          goto LAB_02f0f478;
        }
        if (*(long *)(lVar9 + 0x28) != 0) {
          *(undefined4 *)(lVar9 + 0x30) = 0;
          (*DAT_0442d150)(0);
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *(undefined4 *)(lVar9 + 0x34) = 0;
        }
        (*DAT_0442d150)(0,lVar9);
        puVar6 = (undefined8 *)(*param_3 + uVar10 * 8);
        uVar5 = *(uint *)(param_3 + 1);
        puVar4 = (undefined8 *)(*param_3 + (ulong)uVar5 * 8 + -8);
        if (puVar6 < puVar4) {
          uVar3 = ((ulong)uVar5 * 8 + uVar10 * -8) - 9;
          uVar5 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
          if ((uVar5 & 7) != 0) {
            lVar9 = -((ulong)uVar5 & 7);
            puVar7 = puVar6;
            do {
              puVar6 = puVar7 + 1;
              *puVar7 = *puVar6;
              bVar2 = lVar9 != -1;
              lVar9 = lVar9 + 1;
              puVar7 = puVar6;
            } while (bVar2);
          }
          if (0x37 < uVar3) {
            do {
              *puVar6 = puVar6[1];
              puVar6[1] = puVar6[2];
              puVar6[2] = puVar6[3];
              puVar6[3] = puVar6[4];
              puVar6[4] = puVar6[5];
              puVar6[5] = puVar6[6];
              puVar6[6] = puVar6[7];
              puVar7 = puVar6 + 8;
              puVar6[7] = *puVar7;
              puVar6 = puVar7;
            } while (puVar7 < puVar4);
          }
          uVar5 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar5 - 1;
      }
LAB_02f0f47c:
    } while ((uint)uVar10 < *(uint *)(param_3 + 1));
  }
  return;
}


