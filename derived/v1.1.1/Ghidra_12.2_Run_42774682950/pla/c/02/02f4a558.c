/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a558; name: FUN_02f4a558
 */


void FUN_02f4a558(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar4;
  piVar2 = piVar7 + uVar5 * 4;
  piVar6 = piVar7;
  if ((uVar4 != 0) && (*piVar7 != param_2)) {
    lVar3 = uVar5 * 0x10;
    piVar8 = piVar7;
    do {
      lVar3 = lVar3 + -0x10;
      if (lVar3 == 0) {
        return;
      }
      piVar6 = piVar8 + 4;
      piVar1 = piVar8 + 4;
      piVar8 = piVar6;
    } while (*piVar1 != param_2);
  }
  if (piVar2 != piVar6) {
    if (piVar6 < piVar2 + -4) {
      uVar5 = (long)piVar7 + ~(ulong)piVar6 + uVar5 * 0x10 + -0x10;
      piVar7 = piVar6;
      if (((uint)uVar5 >> 4 & 1) == 0) {
        piVar7 = piVar6 + 4;
        *(undefined8 *)piVar6 = *(undefined8 *)piVar7;
        *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar6 + 6);
      }
      if (0xf < uVar5) {
        do {
          *(undefined8 *)piVar7 = *(undefined8 *)(piVar7 + 4);
          *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(piVar7 + 6);
          piVar6 = piVar7 + 8;
          *(undefined8 *)(piVar7 + 4) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar7 + 6) = *(undefined8 *)(piVar7 + 10);
          piVar7 = piVar6;
        } while (piVar6 < piVar2 + -4);
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


