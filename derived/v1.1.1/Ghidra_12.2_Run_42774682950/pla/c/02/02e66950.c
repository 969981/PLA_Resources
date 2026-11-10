/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e66950; name: FUN_02e66950
 */


void FUN_02e66950(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  
  piVar2 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar5 = piVar2 + (ulong)uVar4 * 6;
  if ((uVar4 != 0) && (*piVar2 != param_2)) {
    lVar6 = (ulong)uVar4 * 0x18;
    piVar3 = piVar2;
    do {
      lVar6 = lVar6 + -0x18;
      if (lVar6 == 0) {
        return;
      }
      piVar2 = piVar3 + 6;
      piVar1 = piVar3 + 6;
      piVar3 = piVar2;
    } while (*piVar1 != param_2);
  }
  if (piVar5 != piVar2) {
    if (piVar2 < piVar5 + -6) {
      do {
        piVar3 = piVar2 + 6;
        *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar2 + 10);
        *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
        *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 8);
        piVar2 = piVar3;
      } while (piVar3 < piVar5 + -6);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


