/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06b88; name: FUN_02f06b88
 */


undefined4 FUN_02f06b88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*piVar3 == param_2)) {
    piVar5 = piVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x10;
    piVar6 = piVar3;
    do {
      lVar4 = lVar4 + -0x10;
      if (lVar4 == 0) {
        return 0;
      }
      piVar1 = piVar6 + 4;
      piVar5 = piVar6 + 4;
      piVar6 = piVar6 + 4;
    } while (*piVar1 != param_2);
  }
  if (piVar5 == piVar3 + (ulong)uVar2 * 4) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(piVar5 + 2) + 4);
}


