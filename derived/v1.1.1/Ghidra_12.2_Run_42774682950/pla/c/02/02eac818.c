/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eac818; name: FUN_02eac818
 */


undefined4 FUN_02eac818(int param_1,int param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = (param_1 << 4 | 1U) + param_2 * 0x10000;
  if ((DAT_0440a440 == 0) || (*DAT_0440a438 == iVar2)) {
    piVar5 = DAT_0440a438;
  }
  else {
    lVar4 = (ulong)DAT_0440a440 * 0x28;
    piVar6 = DAT_0440a438;
    do {
      lVar4 = lVar4 + -0x28;
      if (lVar4 == 0) goto LAB_02eac888;
      piVar1 = piVar6 + 10;
      piVar5 = piVar6 + 10;
      piVar6 = piVar6 + 10;
    } while (*piVar1 != iVar2);
  }
  if (piVar5 != DAT_0440a438 + (ulong)DAT_0440a440 * 10) {
    return 2;
  }
LAB_02eac888:
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    return 0x1f;
  }
  lVar4 = FUN_02eacb4c(iVar2,param_3);
  uVar3 = 1;
  if (lVar4 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}


