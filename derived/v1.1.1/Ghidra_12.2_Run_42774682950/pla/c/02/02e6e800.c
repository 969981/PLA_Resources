/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6e800; name: FUN_02e6e800
 */


int * FUN_02e6e800(long param_1,uint param_2,long param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x300) +
                  (ulong)((-1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f) & param_5)
                         + param_4));
  if (piVar1 != (int *)0x0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (param_3 != 0) {
    return piVar1;
  }
  if ((*(int *)(param_1 + 0x318) - 1U <= param_2) ||
     (param_5 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f)))) {
    FUN_02e6e9f0(param_1,param_2,piVar1);
    return (int *)0x0;
  }
  piVar2 = (int *)(param_1 + (ulong)param_2 * 0x18);
  piVar4 = piVar2 + 4;
  piVar5 = *(int **)piVar4;
  piVar6 = piVar5;
  piVar8 = (int *)0x0;
  if ((piVar5 == (int *)0x0) || (piVar1 < piVar5)) {
joined_r0x02e6e964:
    piVar7 = piVar8;
    piVar8 = piVar6;
    if (piVar8 != (int *)0x0) goto LAB_02e6e8fc;
LAB_02e6e968:
    if (piVar7 != (int *)0x0) {
      piVar4 = piVar7;
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(int **)piVar4 = piVar1;
  }
  else {
    piVar6 = *(int **)piVar5;
    piVar7 = piVar5;
    piVar8 = piVar6;
    if ((piVar6 != (int *)0x0) &&
       (((piVar6 <= piVar1 && (piVar8 = *(int **)piVar6, piVar7 = piVar6, piVar8 != (int *)0x0)) &&
        (piVar8 <= piVar1)))) {
      piVar7 = *(int **)piVar8;
      piVar6 = piVar7;
      if ((piVar7 == (int *)0x0) || (piVar1 < piVar7)) goto joined_r0x02e6e964;
      piVar8 = *(int **)piVar7;
      if ((piVar8 != (int *)0x0) && (piVar8 <= piVar1)) {
        piVar7 = *(int **)piVar8;
        piVar6 = piVar7;
        if ((piVar7 == (int *)0x0) || (piVar1 < piVar7)) goto joined_r0x02e6e964;
        piVar8 = *(int **)piVar7;
        if ((piVar8 != (int *)0x0) && (piVar8 <= piVar1)) {
          piVar6 = *(int **)piVar8;
          if ((piVar6 == (int *)0x0) || (piVar1 < piVar6)) goto joined_r0x02e6e964;
          do {
            piVar7 = piVar6;
            piVar8 = *(int **)piVar7;
            piVar6 = piVar8;
          } while (piVar8 != (int *)0x0 && piVar8 <= piVar1);
        }
      }
    }
    if (piVar8 == (int *)0x0) goto LAB_02e6e968;
LAB_02e6e8fc:
    if ((long)piVar8 - (long)piVar1 ==
        (ulong)(uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 & 0x1f))) {
      if (piVar8 != piVar5) {
        piVar4 = piVar7;
      }
      *(undefined8 *)piVar4 = *(undefined8 *)piVar8;
      puVar3 = (undefined8 *)(param_1 + (ulong)param_2 * 0x18 + 8);
      if ((int *)*puVar3 == piVar8) {
        *puVar3 = piVar7;
      }
      *piVar2 = *piVar2 + -1;
      return piVar1;
    }
    if (piVar7 != (int *)0x0) {
      piVar4 = piVar7;
    }
    *(int **)piVar1 = piVar8;
    *(int **)piVar4 = piVar1;
    if (piVar8 != (int *)0x0) goto LAB_02e6e9a8;
  }
  *(int **)(param_1 + (ulong)param_2 * 0x18 + 8) = piVar1;
LAB_02e6e9a8:
  *piVar2 = *piVar2 + 1;
  return (int *)0x0;
}


