/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05fc8; name: FUN_02f05fc8
 */


undefined8 FUN_02f05fc8(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*piVar4 == param_2)) {
    piVar6 = piVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x10;
    piVar3 = piVar4;
    do {
      lVar5 = lVar5 + -0x10;
      if (lVar5 == 0) {
        return 0x14;
      }
      piVar1 = piVar3 + 4;
      piVar6 = piVar3 + 4;
      piVar3 = piVar3 + 4;
    } while (*piVar1 != param_2);
  }
  if (piVar6 == piVar4 + (ulong)uVar2 * 4) {
    return 0x14;
  }
  FUN_02f06058(*(long *)(piVar6 + 2) + 8,param_3);
  return 1;
}


