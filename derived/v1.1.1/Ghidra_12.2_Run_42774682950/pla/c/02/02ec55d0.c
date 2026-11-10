/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec55d0; name: FUN_02ec55d0
 */


void FUN_02ec55d0(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long local_28;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar1 = 0;
    uVar3 = (uint)*param_2;
    if (uVar4 != 0) {
      uVar1 = uVar3 / uVar4;
    }
    for (plVar5 = *(long **)(*param_1 + (ulong)(uVar3 - uVar1 * uVar4) * 8); plVar5 != (long *)0x0;
        plVar5 = (long *)plVar5[3]) {
      if (plVar5[2] == *param_2) {
        puVar9 = (undefined8 *)*plVar5;
        if ((int)plVar5[1] != 0) {
          if (param_3 == 0) {
            puVar10 = puVar9;
            do {
              plVar11 = (long *)*puVar10;
              uVar2 = FUN_02ec5918(plVar11,param_2);
              if ((uVar2 & 1) == 0) {
LAB_02ec5798:
                puVar10 = puVar10 + 1;
              }
              else {
                if (*(uint *)(plVar11 + 0xd) != 0) {
                  lVar6 = (ulong)*(uint *)(plVar11 + 0xd) << 3;
                  puVar9 = (undefined8 *)plVar11[0xc];
                  do {
                    if (*(long *)*puVar9 == *param_2) goto LAB_02ec5798;
                    lVar6 = lVar6 + -8;
                    puVar9 = puVar9 + 1;
                  } while (lVar6 != 0);
                }
                uVar4 = *(uint *)(plVar5 + 1);
                puVar9 = (undefined8 *)(*plVar5 + (ulong)uVar4 * 8 + -8);
                if (puVar10 < puVar9) {
                  uVar8 = (*plVar5 + ((ulong)uVar4 * 8 - (long)puVar10)) - 9;
                  uVar4 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
                  uVar2 = (ulong)uVar4 & 7;
                  if ((uVar4 & 7) == 0) {
                    puVar7 = puVar10;
                  }
                  else {
                    puVar12 = puVar10;
                    do {
                      puVar7 = puVar12 + 1;
                      *puVar12 = *puVar7;
                      uVar2 = uVar2 - 1;
                      puVar12 = puVar7;
                    } while (uVar2 != 0);
                  }
                  if (0x37 < uVar8) {
                    do {
                      *puVar7 = puVar7[1];
                      puVar7[1] = puVar7[2];
                      puVar7[2] = puVar7[3];
                      puVar7[3] = puVar7[4];
                      puVar7[4] = puVar7[5];
                      puVar7[5] = puVar7[6];
                      puVar7[6] = puVar7[7];
                      puVar12 = puVar7 + 8;
                      puVar7[7] = *puVar12;
                      puVar7 = puVar12;
                    } while (puVar12 < puVar9);
                  }
                  uVar4 = *(uint *)(plVar5 + 1);
                }
                *(uint *)(plVar5 + 1) = uVar4 - 1;
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
              puVar9 = (undefined8 *)*plVar5;
              uVar4 = *(uint *)(plVar5 + 1);
            } while (puVar9 + uVar4 != puVar10);
          }
          else {
            puVar10 = puVar9;
            do {
              plVar11 = (long *)*puVar10;
              if (((int)plVar11[2] == param_3) &&
                 (uVar2 = FUN_02ec5918(plVar11,param_2), (uVar2 & 1) != 0)) {
                if (*(uint *)(plVar11 + 0xd) != 0) {
                  lVar6 = (ulong)*(uint *)(plVar11 + 0xd) << 3;
                  puVar9 = (undefined8 *)plVar11[0xc];
                  do {
                    if (*(long *)*puVar9 == *param_2) goto LAB_02ec5658;
                    lVar6 = lVar6 + -8;
                    puVar9 = puVar9 + 1;
                  } while (lVar6 != 0);
                }
                uVar4 = *(uint *)(plVar5 + 1);
                puVar9 = (undefined8 *)(*plVar5 + (ulong)uVar4 * 8 + -8);
                if (puVar10 < puVar9) {
                  uVar8 = (*plVar5 + ((ulong)uVar4 * 8 - (long)puVar10)) - 9;
                  uVar4 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
                  uVar2 = (ulong)uVar4 & 7;
                  if ((uVar4 & 7) == 0) {
                    puVar7 = puVar10;
                  }
                  else {
                    puVar12 = puVar10;
                    do {
                      puVar7 = puVar12 + 1;
                      *puVar12 = *puVar7;
                      uVar2 = uVar2 - 1;
                      puVar12 = puVar7;
                    } while (uVar2 != 0);
                  }
                  if (0x37 < uVar8) {
                    do {
                      *puVar7 = puVar7[1];
                      puVar7[1] = puVar7[2];
                      puVar7[2] = puVar7[3];
                      puVar7[3] = puVar7[4];
                      puVar7[4] = puVar7[5];
                      puVar7[5] = puVar7[6];
                      puVar7[6] = puVar7[7];
                      puVar12 = puVar7 + 8;
                      puVar7[7] = *puVar12;
                      puVar7 = puVar12;
                    } while (puVar12 < puVar9);
                  }
                  uVar4 = *(uint *)(plVar5 + 1);
                }
                *(uint *)(plVar5 + 1) = uVar4 - 1;
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
              else {
LAB_02ec5658:
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined8 *)*plVar5;
              uVar4 = *(uint *)(plVar5 + 1);
            } while (puVar9 + uVar4 != puVar10);
          }
          if (uVar4 != 0) {
            return;
          }
        }
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 0;
          FUN_02f59e60(0,puVar9);
          *plVar5 = 0;
          *(undefined4 *)((long)plVar5 + 0xc) = 0;
        }
        local_28 = *param_2;
        FUN_02ec5a54(param_1,&local_28);
        FUN_02f59e60(0,plVar5);
        return;
      }
    }
  }
  return;
}


