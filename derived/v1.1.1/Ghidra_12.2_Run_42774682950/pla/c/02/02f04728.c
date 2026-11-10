/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04728; name: FUN_02f04728
 */


void FUN_02f04728(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = *(int **)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((uVar2 == 0) || (*piVar3 == param_2)) {
    piVar6 = piVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x10;
    piVar5 = piVar3;
    do {
      lVar4 = lVar4 + -0x10;
      if (lVar4 == 0) {
        return;
      }
      piVar6 = piVar5 + 4;
      piVar1 = piVar5 + 4;
      piVar5 = piVar6;
    } while (*piVar1 != param_2);
  }
  if (piVar6 == piVar3 + (ulong)uVar2 * 4) {
    return;
  }
  FUN_02f03e68(*(undefined8 *)(piVar6 + 2));
  (**(code **)(**(long **)(piVar6 + 2) + 0x18))();
  FUN_02f055a0((undefined8 *)(param_1 + 0x28),param_2);
  return;
}


