/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a5548; name: FUN_031a5548
 */


void FUN_031a5548(long param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  
  iVar12 = *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4);
  if (iVar12 == -1) {
    iVar12 = *(int *)(param_1 + 0x58);
    *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4) = iVar12;
    iVar5 = *(int *)(param_1 + 0x58);
    iVar8 = iVar5 + 1;
    lVar6 = *(long *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar5) {
      lVar6 = FUN_031a57a4(PTR_PTR_0434a080,iVar8);
      iVar5 = *(int *)(param_1 + 0x58);
      *(long *)(param_1 + 0x50) = lVar6;
    }
    *(int *)(param_1 + 0x58) = iVar8;
    *(undefined8 *)(lVar6 + (long)iVar5 * 8) = 0xffffffff;
  }
  lVar6 = *(long *)(param_1 + 0x50);
  piVar9 = (int *)(lVar6 + (long)iVar12 * 8 + 4);
  if (*piVar9 + -1 == 0) {
    *piVar9 = 0;
    *(undefined4 *)(lVar6 + (long)iVar12 * 8) = 0xffffffff;
  }
  else {
    *piVar9 = *piVar9 + -1;
  }
  iVar12 = *(int *)(param_1 + 0x30);
  iVar8 = *param_3;
  iVar2 = iVar8 - iVar12;
  iVar5 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar5;
  uVar3 = iVar5 - iVar2;
  if ((uVar3 != 0) && (0 < (int)uVar3)) {
    lVar6 = *(long *)(param_1 + 0x60);
    puVar1 = (undefined4 *)(lVar6 + (long)iVar2 * 8);
    *puVar1 = puVar1[2];
    *(undefined4 *)(lVar6 + (long)iVar2 * 8 + 4) = puVar1[3];
    if (1 < (int)uVar3) {
      puVar1[2] = puVar1[4];
      puVar1[3] = puVar1[5];
      if (2 < (int)uVar3) {
        lVar11 = 0x14;
        puVar7 = (undefined4 *)(lVar6 + ((long)iVar8 - (long)iVar12) * 8 + 0x1c);
        puVar1[4] = puVar1[6];
        do {
          lVar11 = (lVar11 << 0x20) + 0x400000000 >> 0x20;
          puVar7[-2] = *puVar7;
          puVar7 = puVar7 + 1;
        } while (lVar11 < (long)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3));
      }
    }
  }
  puVar4 = PTR_PTR_0434a080;
  iVar12 = *(int *)(param_1 + 0x20);
  if (0 < iVar12) {
    uVar13 = 0;
    do {
      if (uVar13 != *param_2) {
        if ((*(int *)(param_1 + 0x48) == 0) ||
           (iVar8 = *(int *)(*(long *)(param_1 + 0x40) + uVar13 * 4), iVar8 == -1)) {
          iVar8 = -1;
        }
        else {
          iVar8 = (int)*(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar8 * 8);
        }
        if (iVar2 < iVar8 - *(int *)(param_1 + 0x30)) {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x40) + uVar13 * 4);
          if (uVar3 == 0xffffffff) {
            uVar3 = *(uint *)(param_1 + 0x58);
            *(uint *)(*(long *)(param_1 + 0x40) + uVar13 * 4) = uVar3;
            iVar8 = *(int *)(param_1 + 0x58);
            lVar6 = *(long *)(param_1 + 0x50);
            iVar12 = iVar8 + 1;
            if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar8) {
              lVar6 = FUN_031a57a4(puVar4,iVar12,lVar6,iVar8,param_1 + 0x5c);
              iVar8 = *(int *)(param_1 + 0x58);
              *(long *)(param_1 + 0x50) = lVar6;
            }
            *(int *)(param_1 + 0x58) = iVar12;
            *(undefined8 *)(lVar6 + (long)iVar8 * 8) = 0xffffffff;
          }
          uVar10 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
          *(int *)(*(long *)(param_1 + 0x50) + uVar10) =
               *(int *)(*(long *)(param_1 + 0x50) + uVar10) + -1;
          iVar12 = *(int *)(param_1 + 0x20);
        }
      }
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)iVar12);
  }
  return;
}


