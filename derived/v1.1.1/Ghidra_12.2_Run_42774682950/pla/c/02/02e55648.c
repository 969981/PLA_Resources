/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55648; name: FUN_02e55648
 */


void FUN_02e55648(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  lVar4 = param_2 + (param_3 & 0xffffffff) * 0x2b0;
  lVar3 = *(long *)(lVar4 + 0xf8);
  param_3 = param_3 & 0xffffffff;
  if (lVar3 != 0) {
    uVar7 = (ulong)*(uint *)(lVar3 + 0x28);
    if (*(uint *)(lVar3 + 0x28) != 0) {
      plVar8 = *(long **)(lVar3 + 0x20);
      plVar2 = plVar8 + uVar7;
      plVar5 = plVar8;
      do {
        iVar6 = (int)uVar7;
        if (*plVar5 == lVar4 + 0xc0 || *plVar5 == param_2 + param_3 * 0x2b0 + 0x100) {
          if (plVar5 < plVar2 + -1) {
            uVar9 = (long)plVar2 + (-9 - (long)plVar5);
            uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
            uVar7 = (ulong)uVar1 & 7;
            plVar8 = plVar5;
            if ((uVar1 & 7) != 0) {
              plVar10 = plVar5;
              do {
                plVar8 = plVar10 + 1;
                *plVar10 = *plVar8;
                uVar7 = uVar7 - 1;
                plVar10 = plVar8;
              } while (uVar7 != 0);
            }
            if (0x37 < uVar9) {
              do {
                *plVar8 = plVar8[1];
                plVar8[1] = plVar8[2];
                plVar8[2] = plVar8[3];
                plVar8[3] = plVar8[4];
                plVar8[4] = plVar8[5];
                plVar8[5] = plVar8[6];
                plVar8[6] = plVar8[7];
                plVar10 = plVar8 + 8;
                plVar8[7] = *plVar10;
                plVar8 = plVar10;
              } while (plVar10 < plVar2 + -1);
            }
            iVar6 = *(int *)(lVar3 + 0x28);
            plVar8 = *(long **)(lVar3 + 0x20);
          }
          uVar7 = (ulong)(iVar6 - 1U);
          *(uint *)(lVar3 + 0x28) = iVar6 - 1U;
        }
        else {
          plVar5 = plVar5 + 1;
        }
        plVar2 = plVar8 + uVar7;
      } while (plVar2 != plVar5);
    }
    uVar7 = (ulong)*(uint *)(lVar3 + 0x38);
    if (*(uint *)(lVar3 + 0x38) != 0) {
      lVar4 = param_2 + param_3 * 0x2b0;
      plVar8 = *(long **)(lVar3 + 0x30);
      plVar2 = plVar8 + uVar7;
      plVar5 = plVar8;
      do {
        iVar6 = (int)uVar7;
        lVar11 = *plVar5;
        if (((lVar11 == lVar4 + 0x2d8 || lVar11 == lVar4 + 0x250) || lVar11 == lVar4 + 0x140) ||
            lVar11 == lVar4 + 0x1c8) {
          if (plVar5 < plVar2 + -1) {
            uVar9 = (long)plVar2 + (-9 - (long)plVar5);
            uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
            uVar7 = (ulong)uVar1 & 7;
            plVar8 = plVar5;
            if ((uVar1 & 7) != 0) {
              plVar10 = plVar5;
              do {
                plVar8 = plVar10 + 1;
                *plVar10 = *plVar8;
                uVar7 = uVar7 - 1;
                plVar10 = plVar8;
              } while (uVar7 != 0);
            }
            if (0x37 < uVar9) {
              do {
                *plVar8 = plVar8[1];
                plVar8[1] = plVar8[2];
                plVar8[2] = plVar8[3];
                plVar8[3] = plVar8[4];
                plVar8[4] = plVar8[5];
                plVar8[5] = plVar8[6];
                plVar8[6] = plVar8[7];
                plVar10 = plVar8 + 8;
                plVar8[7] = *plVar10;
                plVar8 = plVar10;
              } while (plVar10 < plVar2 + -1);
            }
            iVar6 = *(int *)(lVar3 + 0x38);
            plVar8 = *(long **)(lVar3 + 0x30);
          }
          uVar7 = (ulong)(iVar6 - 1U);
          *(uint *)(lVar3 + 0x38) = iVar6 - 1U;
        }
        else {
          plVar5 = plVar5 + 1;
        }
        plVar2 = plVar8 + uVar7;
      } while (plVar2 != plVar5);
    }
  }
  param_2 = param_2 + param_3 * 0x2b0;
  FUN_02e4c20c(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x170) = 0;
  FUN_02e4c20c(param_2 + 0x1c8);
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  FUN_02e4c20c(param_2 + 0x250);
  *(undefined8 *)(param_2 + 0x280) = 0;
  FUN_02e4c20c(param_2 + 0x2d8);
  *(undefined8 *)(param_2 + 0x308) = 0;
  return;
}


