/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3acf0; name: FUN_02f3acf0
 */


void FUN_02f3acf0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  int *piVar10;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_02f3acf0(*(long *)(param_1 + 0x80),param_2);
  }
  plVar9 = *(long **)(param_1 + 0xf8);
  if ((plVar9 != (long *)0x0) && ((int)plVar9[1] != 0)) {
    piVar10 = (int *)*plVar9;
    uVar2 = *(uint *)(param_2 + 1);
    while( true ) {
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar2;
        piVar5 = (int *)*param_2;
        piVar8 = piVar5 + uVar4 * 6;
        piVar6 = piVar5;
        do {
          if (*piVar6 == *piVar10) {
            if (1 < (uint)uVar4) {
              uVar1 = *(undefined8 *)(piVar8 + -6);
              uVar7 = *(undefined8 *)(piVar8 + -2);
              *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar8 + -4);
              *(undefined8 *)(piVar6 + 4) = uVar7;
              *(undefined8 *)piVar6 = uVar1;
              uVar4 = (ulong)*(uint *)(param_2 + 1);
              piVar5 = (int *)*param_2;
            }
            uVar2 = (int)uVar4 - 1;
            uVar4 = (ulong)uVar2;
            *(uint *)(param_2 + 1) = uVar2;
          }
          else {
            piVar6 = piVar6 + 6;
          }
          piVar8 = piVar5 + uVar4 * 6;
        } while (piVar8 != piVar6);
      }
      puVar3 = (undefined8 *)FUN_02f3afc4(param_2);
      if (puVar3 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)piVar10;
        uVar7 = *(undefined8 *)(piVar10 + 4);
        puVar3[1] = *(undefined8 *)(piVar10 + 2);
        puVar3[2] = uVar7;
        *puVar3 = uVar1;
      }
      piVar10 = piVar10 + 6;
      if (piVar10 == (int *)(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x18)) break;
      uVar2 = *(uint *)(param_2 + 1);
    }
  }
  return;
}


