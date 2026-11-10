/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06dc4; name: FUN_02f06dc4
 */


ulong FUN_02f06dc4(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5
                  )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  
  lVar5 = FUN_02f06d0c(param_1,param_3,param_2);
  if (lVar5 == 0) {
    uVar8 = 0x34;
    if ((param_5 & 1) == 0) {
      uVar8 = 1;
    }
    return (ulong)uVar8;
  }
  piVar7 = *(int **)(lVar5 + 8);
  uVar8 = *(uint *)(lVar5 + 0x10);
  piVar11 = piVar7 + uVar8;
  piVar2 = piVar7;
  if ((uVar8 != 0) && (*piVar7 != param_4)) {
    lVar9 = (ulong)uVar8 * 4;
    piVar10 = piVar7;
    do {
      lVar9 = lVar9 + -4;
      if (lVar9 == 0) goto LAB_02f06e88;
      piVar2 = piVar10 + 1;
      piVar1 = piVar10 + 1;
      piVar10 = piVar2;
    } while (*piVar1 != param_4);
  }
  if (piVar2 == piVar11) {
LAB_02f06e88:
    if ((param_5 & 1) == 0) {
      return 1;
    }
    uVar4 = *(uint *)(lVar5 + 0x14);
    if (uVar4 <= uVar8) {
      iVar3 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar3 = 1;
      }
      uVar4 = iVar3 + uVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar4 << 2);
      if (piVar7 == (int *)0x0) goto LAB_02f06edc;
      *(int **)(lVar5 + 8) = piVar7;
      *(uint *)(lVar5 + 0x14) = uVar4;
    }
    if (uVar8 < uVar4) {
      uVar8 = *(uint *)(lVar5 + 0x10);
      *(uint *)(lVar5 + 0x10) = uVar8 + 1;
      if (piVar7 + uVar8 != (int *)0x0) {
        piVar7[uVar8] = param_4;
      }
    }
  }
  else {
    if ((param_5 & 1) != 0) {
      return 1;
    }
    if (1 < uVar8) {
      *piVar2 = piVar11[-1];
      uVar8 = *(uint *)(lVar5 + 0x10);
    }
    *(uint *)(lVar5 + 0x10) = uVar8 - 1;
    piVar11 = piVar2;
  }
LAB_02f06edc:
  uVar6 = FUN_02f057f0(lVar5,param_4,param_5 & 1);
  if ((int)uVar6 != 1) {
    uVar8 = *(uint *)(lVar5 + 0x10);
    if (1 < uVar8) {
      *piVar11 = *(int *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 4 + -4);
      uVar8 = *(uint *)(lVar5 + 0x10);
    }
    *(uint *)(lVar5 + 0x10) = uVar8 - 1;
  }
  return uVar6;
}


