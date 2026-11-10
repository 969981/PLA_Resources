/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f055a0; name: FUN_02f055a0
 */


void FUN_02f055a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  
  piVar3 = (int *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  piVar2 = piVar3 + (ulong)uVar5 * 4;
  if ((uVar5 != 0) && (*piVar3 != param_2)) {
    lVar6 = (ulong)uVar5 * 0x10;
    piVar4 = piVar3;
    do {
      lVar6 = lVar6 + -0x10;
      piVar3 = piVar2;
      if (lVar6 == 0) break;
      piVar3 = piVar4 + 4;
      piVar1 = piVar4 + 4;
      piVar4 = piVar3;
    } while (*piVar1 != param_2);
  }
  if (piVar2 != piVar3) {
    if (piVar3 < piVar2 + -4) {
      do {
        piVar4 = piVar3 + 4;
        *(undefined8 *)piVar3 = *(undefined8 *)piVar4;
        *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
        piVar3 = piVar4;
      } while (piVar4 < piVar2 + -4);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar5 - 1;
  }
  return;
}


