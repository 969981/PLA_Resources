/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d3d68; name: FUN_030d3d68
 */


void FUN_030d3d68(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  *param_1 = (long)&PTR_LAB_042b4b38;
  param_1[4] = (long)&PTR_LAB_042b4b78;
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0xb],((ulong)*(uint *)((long)param_1 + 100) & 0x3fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if ((int)param_1[8] != 0) {
    plVar11 = (long *)param_1[7];
    plVar12 = plVar11 + (long)(int)param_1[8] * 0x42;
    do {
      plVar13 = plVar12 + -0x42;
      if (plVar12[-0x22] != 0) {
        uVar5 = *(uint *)(plVar12 + -0x1f);
        if (*(char *)((long)plVar12 + -0x104) != '\0') {
          plVar3 = (long *)plVar12[-0x20];
          if ((int)uVar5 < 1) {
            plVar6 = plVar3;
          }
          else {
            uVar1 = uVar5 & 3;
            plVar6 = plVar3;
            if (2 < uVar5 - 1) {
              iVar10 = uVar1 - uVar5;
              do {
                if (*plVar6 == 0) {
                  lVar4 = plVar6[1];
                  plVar9 = plVar3;
                  plVar8 = plVar3;
                  if (lVar4 == 0) goto LAB_030d3f48;
LAB_030d3f74:
                  plVar8 = plVar9 + 1;
                  *plVar9 = lVar4;
                  lVar4 = plVar6[2];
                  if (lVar4 != 0) goto LAB_030d3f80;
LAB_030d3f50:
                  lVar4 = plVar6[3];
                }
                else {
                  plVar9 = plVar3 + 1;
                  *plVar3 = *plVar6;
                  lVar4 = plVar6[1];
                  plVar8 = plVar9;
                  if (lVar4 != 0) goto LAB_030d3f74;
LAB_030d3f48:
                  lVar4 = plVar6[2];
                  if (lVar4 == 0) goto LAB_030d3f50;
LAB_030d3f80:
                  *plVar8 = lVar4;
                  lVar4 = plVar6[3];
                  plVar8 = plVar8 + 1;
                }
                plVar3 = plVar8;
                if (lVar4 != 0) {
                  plVar3 = plVar8 + 1;
                  *plVar8 = lVar4;
                }
                plVar6 = plVar6 + 4;
                iVar10 = iVar10 + 4;
              } while (iVar10 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              plVar8 = plVar3;
              if (*plVar6 != 0) {
                plVar8 = plVar3 + 1;
                *plVar3 = *plVar6;
              }
              plVar3 = plVar8;
              plVar6 = plVar6 + 1;
            }
            plVar6 = (long *)plVar12[-0x20];
          }
          *(char *)((long)plVar12 + -0x104) = '\0';
          uVar5 = (uint)((ulong)((long)plVar3 - (long)plVar6) >> 3);
        }
        if (uVar5 != 0) {
          plVar3 = (long *)plVar12[-0x22];
          (**(code **)(*plVar3 + 0x28))(plVar3,plVar12[-0x20]);
        }
        *(undefined4 *)(plVar12 + -0x1f) = 0;
        *(undefined4 *)(plVar12 + -0x21) = 0;
      }
      *(undefined4 *)(plVar12 + -0x1f) = 0;
      if ((-1 < (int)*(uint *)((long)plVar12 + -0xf4)) && (plVar12[-0x20] != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,plVar12[-0x20],((ulong)*(uint *)((long)plVar12 + -0xf4) & 0x3fffffff) << 3
                  );
      }
      plVar12[-0x20] = 0;
      *(undefined4 *)((long)plVar12 + -0xf4) = 0x80000000;
      if (*plVar13 != 0) {
        uVar5 = *(uint *)(plVar12 + -0x3f);
        plVar3 = plVar12 + -0x40;
        if (*(char *)((long)plVar12 + -0x204) != '\0') {
          plVar6 = (long *)*plVar3;
          if ((int)uVar5 < 1) {
            plVar8 = plVar6;
          }
          else {
            uVar1 = uVar5 & 3;
            plVar8 = plVar6;
            if (2 < uVar5 - 1) {
              iVar10 = uVar1 - uVar5;
              do {
                if (*plVar8 == 0) {
                  lVar4 = plVar8[1];
                  plVar7 = plVar6;
                  plVar9 = plVar6;
                  if (lVar4 == 0) goto LAB_030d3fb4;
LAB_030d3fe0:
                  plVar9 = plVar7 + 1;
                  *plVar7 = lVar4;
                  lVar4 = plVar8[2];
                  if (lVar4 != 0) goto LAB_030d3fec;
LAB_030d3fbc:
                  lVar4 = plVar8[3];
                }
                else {
                  plVar7 = plVar6 + 1;
                  *plVar6 = *plVar8;
                  lVar4 = plVar8[1];
                  plVar9 = plVar7;
                  if (lVar4 != 0) goto LAB_030d3fe0;
LAB_030d3fb4:
                  lVar4 = plVar8[2];
                  if (lVar4 == 0) goto LAB_030d3fbc;
LAB_030d3fec:
                  *plVar9 = lVar4;
                  lVar4 = plVar8[3];
                  plVar9 = plVar9 + 1;
                }
                plVar6 = plVar9;
                if (lVar4 != 0) {
                  plVar6 = plVar9 + 1;
                  *plVar9 = lVar4;
                }
                plVar8 = plVar8 + 4;
                iVar10 = iVar10 + 4;
              } while (iVar10 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              plVar9 = plVar6;
              if (*plVar8 != 0) {
                plVar9 = plVar6 + 1;
                *plVar6 = *plVar8;
              }
              plVar6 = plVar9;
              plVar8 = plVar8 + 1;
            }
            plVar8 = (long *)*plVar3;
          }
          *(char *)((long)plVar12 + -0x204) = '\0';
          uVar5 = (uint)((ulong)((long)plVar6 - (long)plVar8) >> 3);
        }
        if (uVar5 != 0) {
          (**(code **)(*(long *)*plVar13 + 0x28))((long *)*plVar13,*plVar3);
        }
        *(uint *)(plVar12 + -0x3f) = 0;
        *(undefined4 *)(plVar12 + -0x41) = 0;
      }
      *(undefined4 *)(plVar12 + -0x3f) = 0;
      uVar5 = *(uint *)((long)plVar12 + -500);
      if ((-1 < (int)uVar5) && (lVar4 = plVar12[-0x40], lVar4 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar4,((ulong)uVar5 & 0x3fffffff) << 3);
      }
      plVar12[-0x40] = 0;
      *(uint *)((long)plVar12 + -500) = 0x80000000;
      plVar12 = plVar13;
    } while (plVar13 != plVar11);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) * 0x210);
  }
  param_1[7] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


