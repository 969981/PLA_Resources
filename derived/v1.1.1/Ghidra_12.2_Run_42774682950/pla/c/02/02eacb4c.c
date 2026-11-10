/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacb4c; name: FUN_02eacb4c
 */


void FUN_02eacb4c(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_0440a440 == 0) || (*DAT_0440a438 == param_1)) {
    piVar5 = DAT_0440a438;
  }
  else {
    lVar6 = (ulong)DAT_0440a440 * 0x28;
    piVar7 = DAT_0440a438;
    do {
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) goto LAB_02eacbbc;
      piVar1 = piVar7 + 10;
      piVar5 = piVar7 + 10;
      piVar7 = piVar7 + 10;
    } while (*piVar1 != param_1);
  }
  if (piVar5 == DAT_0440a438 + (ulong)DAT_0440a440 * 10) {
LAB_02eacbbc:
    piVar5 = (int *)FUN_02eacdcc();
    if (piVar5 == (int *)0x0) {
      return;
    }
    *piVar5 = param_1;
  }
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(piVar5 + 2) = *param_2;
  *(undefined8 *)(piVar5 + 6) = uVar2;
  *(undefined8 *)(piVar5 + 8) = uVar4;
  *(undefined8 *)(piVar5 + 4) = uVar3;
  return;
}


