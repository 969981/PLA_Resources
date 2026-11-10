/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e89230; name: FUN_02e89230
 */


void FUN_02e89230(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  piVar7 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar4;
  piVar1 = piVar7 + uVar5 * 2;
  piVar3 = piVar7;
  if (uVar4 != 0) {
    lVar8 = uVar5 << 3;
    piVar2 = piVar7;
    do {
      if ((*param_2 == *piVar2) && (piVar3 = piVar2, (char)param_2[1] == (char)piVar2[1])) break;
      lVar8 = lVar8 + -8;
      piVar2 = piVar2 + 2;
      piVar3 = piVar1;
    } while (lVar8 != 0);
  }
  if (piVar1 != piVar3) {
    if (piVar3 < piVar1 + -2) {
      uVar6 = (long)piVar7 + ~(ulong)piVar3 + uVar5 * 8 + -8;
      uVar4 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
      uVar5 = (ulong)uVar4 & 3;
      if ((uVar4 & 3) != 0) {
        piVar7 = piVar3;
        do {
          piVar3 = piVar7 + 2;
          *(undefined8 *)piVar7 = *(undefined8 *)piVar3;
          uVar5 = uVar5 - 1;
          piVar7 = piVar3;
        } while (uVar5 != 0);
      }
      if (0x17 < uVar6) {
        do {
          *(undefined8 *)piVar3 = *(undefined8 *)(piVar3 + 2);
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 4);
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar3 + 6);
          piVar7 = piVar3 + 8;
          *(undefined8 *)(piVar3 + 6) = *(undefined8 *)piVar7;
          piVar3 = piVar7;
        } while (piVar7 < piVar1 + -2);
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


