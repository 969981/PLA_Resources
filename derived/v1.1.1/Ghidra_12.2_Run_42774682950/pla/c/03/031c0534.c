/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0534; name: FUN_031c0534
 */


void FUN_031c0534(int param_1,long *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  
  if (0 < (int)param_2[1]) {
    uVar7 = 0;
    piVar9 = (int *)*param_2;
    do {
      if (*piVar9 == param_3) {
        uVar10 = uVar7 & 0xffffffff;
        ((int *)*param_2)[uVar10 * 2 + 1] = param_1;
        lVar8 = *param_2;
        puVar1 = (undefined4 *)(lVar8 + uVar10 * 8);
        uVar3 = *puVar1;
        iVar4 = puVar1[1];
        if ((int)uVar7 == 0) goto LAB_031c05d0;
        goto LAB_031c058c;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 2;
    } while ((long)(int)param_2[1] != uVar7);
  }
  return;
LAB_031c058c:
  uVar6 = (uint)uVar7;
  uVar5 = uVar6 - 1;
  uVar2 = uVar6;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if (*(int *)(lVar8 + (long)((int)uVar2 >> 1) * 8 + 4) <= iVar4) {
    uVar10 = (ulong)(int)uVar6;
    goto LAB_031c05d0;
  }
  uVar10 = (long)((ulong)uVar2 << 0x20) >> 0x21;
  *(undefined8 *)(lVar8 + (long)(int)uVar6 * 8) = *(undefined8 *)(lVar8 + uVar10 * 8);
  lVar8 = *param_2;
  uVar7 = (ulong)(uint)((int)uVar2 >> 1);
  if ((int)uVar5 < 2) {
LAB_031c05d0:
    *(undefined4 *)(lVar8 + uVar10 * 8) = uVar3;
    *(int *)(*param_2 + uVar10 * 8 + 4) = iVar4;
    return;
  }
  goto LAB_031c058c;
}


