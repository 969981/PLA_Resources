/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305b4e0; name: FUN_0305b4e0
 */


void FUN_0305b4e0(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar5;
  int *piVar8;
  int *piVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  do {
    iVar1 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc);
    iVar11 = param_2;
    iVar3 = param_3;
    do {
      piVar5 = (int *)(param_1 + -0xc + (long)iVar11 * 0xc);
      do {
        iVar2 = iVar11;
        piVar6 = piVar5;
        piVar5 = piVar6 + 3;
        iVar11 = iVar2 + 1;
      } while (*piVar5 < iVar1);
      piVar7 = (int *)(param_1 + 0xc + (long)iVar3 * 0xc);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        piVar8 = piVar7;
        piVar7 = piVar8 + -3;
        iVar3 = iVar4 + -1;
      } while (iVar1 < *piVar7);
      iVar11 = iVar2;
      if (iVar2 <= iVar3) {
        if (iVar2 != iVar3) {
          uVar9 = *(undefined8 *)piVar7;
          iVar3 = piVar8[-1];
          uVar10 = *(undefined8 *)piVar5;
          piVar8[-1] = piVar6[5];
          *(undefined8 *)piVar7 = uVar10;
          piVar6[5] = iVar3;
          *(undefined8 *)piVar5 = uVar9;
        }
        iVar3 = iVar4 + -2;
        iVar11 = iVar2 + 1;
      }
    } while (iVar11 <= iVar3);
    if (param_2 < iVar3) {
      FUN_0305b4e0(param_1);
    }
    param_2 = iVar11;
  } while (iVar11 < param_3);
  return;
}


