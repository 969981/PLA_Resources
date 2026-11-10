/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e669fc; name: FUN_02e669fc
 */


undefined8 FUN_02e669fc(long param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  piVar10 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 == 0) || (*piVar10 == param_2)) {
    piVar14 = piVar10;
  }
  else {
    lVar13 = (ulong)uVar4 * 0x18;
    piVar5 = piVar10;
    do {
      lVar13 = lVar13 + -0x18;
      if (lVar13 == 0) {
        return 2;
      }
      piVar14 = piVar5 + 6;
      piVar2 = piVar5 + 6;
      piVar5 = piVar14;
    } while (*piVar2 != param_2);
  }
  if (piVar14 != piVar10 + (ulong)uVar4 * 6) {
    plVar15 = *(long **)(piVar14 + 4);
    uVar6 = FUN_02e66b7c(plVar15,param_3);
    plVar7 = (long *)*plVar15;
    if ((uVar6 & 1) != 0) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        *plVar15 = 0;
      }
      FUN_02e65b0c(piVar14 + 2);
      FUN_02e66950((undefined8 *)(param_1 + 8),param_2);
      return 1;
    }
    uVar4 = *(uint *)(plVar15 + 4);
    uVar6 = (ulong)uVar4;
    plVar3 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar7 + -0xe;
    }
    if (uVar4 == 0) {
      iVar8 = 0;
    }
    else {
      pcVar11 = (char *)plVar15[3];
      uVar12 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        lVar13 = uVar12 - uVar6;
        do {
          iVar9 = (int)*pcVar11;
          if (*pcVar11 <= (char)iVar8) {
            iVar9 = iVar8;
          }
          iVar8 = (int)pcVar11[1];
          if (pcVar11[1] <= (char)iVar9) {
            iVar8 = iVar9;
          }
          iVar9 = (int)pcVar11[2];
          if (pcVar11[2] <= (char)iVar8) {
            iVar9 = iVar8;
          }
          pcVar1 = pcVar11 + 3;
          pcVar11 = pcVar11 + 4;
          iVar8 = (int)*pcVar1;
          if (*pcVar1 <= (char)iVar9) {
            iVar8 = iVar9;
          }
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      iVar9 = iVar8;
      if ((uVar4 & 3) != 0) {
        do {
          iVar8 = (int)*pcVar11;
          if (*pcVar11 <= (char)iVar9) {
            iVar8 = iVar9;
          }
          uVar12 = uVar12 - 1;
          pcVar11 = pcVar11 + 1;
          iVar9 = iVar8;
        } while (uVar12 != 0);
      }
    }
    FUN_02e69160(plVar3[10],plVar3,iVar8);
  }
  return 2;
}


