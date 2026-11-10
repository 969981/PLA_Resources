/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6e9f0; name: FUN_02e6e9f0
 */


void FUN_02e6e9f0(long param_1,ulong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
LAB_02e6e9f8:
  uVar4 = param_2 & 0xffffffff;
  do {
    piVar3 = (int *)(param_1 + uVar4 * 0x18);
    piVar7 = piVar3 + 4;
    piVar8 = *(int **)piVar7;
    if (piVar8 == (int *)0x0 || param_3 < piVar8) {
      piVar6 = (int *)0x0;
      piVar9 = piVar8;
    }
    else {
      piVar9 = *(int **)piVar8;
      piVar10 = piVar9;
      if (piVar9 == (int *)0x0 || param_3 < piVar9) {
        piVar6 = piVar8;
      }
      else {
        do {
          piVar9 = *(int **)piVar10;
          piVar6 = piVar10;
          piVar10 = piVar9;
        } while (piVar9 != (int *)0x0 && piVar9 <= param_3);
      }
    }
    if (*(int *)(param_1 + 0x318) - 1 <= uVar4) {
LAB_02e6eac0:
      if (piVar6 != (int *)0x0) {
        piVar7 = piVar6;
      }
      *(int **)param_3 = piVar9;
      *(int **)piVar7 = param_3;
      if (piVar9 == (int *)0x0) {
        *(int **)(param_1 + (uVar4 & 0xffffffff) * 0x18 + 8) = param_3;
      }
      *piVar3 = *piVar3 + 1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x314);
    param_2 = uVar4 + 1;
    iVar2 = 1 << (ulong)(iVar1 + (int)param_2 & 0x1f);
    if (((piVar6 != (int *)0x0) && ((iVar2 - 1U & (int)piVar6 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((long)param_3 - (long)piVar6 == (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar4 & 0x1f))))
    break;
    if (((piVar9 == (int *)0x0) || ((iVar2 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) != 0))
       || ((long)piVar9 - (long)param_3 != (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar4 & 0x1f))))
    goto LAB_02e6eac0;
    if (piVar9 != piVar8) {
      piVar7 = piVar6;
    }
    *(undefined8 *)piVar7 = *(undefined8 *)piVar9;
    puVar5 = (undefined8 *)(param_1 + uVar4 * 0x18 + 8);
    if ((int *)*puVar5 == piVar9) {
      *puVar5 = piVar6;
    }
    *piVar3 = *piVar3 + -1;
    uVar4 = param_2;
  } while( true );
  piVar9 = (int *)0x0;
  piVar10 = piVar8;
  if (((piVar8 != (int *)0x0) && (piVar8 != piVar6)) &&
     ((piVar10 = *(int **)piVar8, piVar9 = piVar8, piVar10 != (int *)0x0 && (piVar10 != piVar6)))) {
    do {
      piVar9 = piVar10;
      piVar10 = *(int **)piVar9;
    } while (piVar10 != (int *)0x0 && piVar10 != piVar6);
  }
  param_3 = piVar6;
  if (piVar10 != (int *)0x0) {
    if (piVar10 != piVar8) {
      piVar7 = piVar9;
    }
    *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
    puVar5 = (undefined8 *)(param_1 + (uVar4 & 0xffffffff) * 0x18 + 8);
    if ((int *)*puVar5 == piVar10) {
      *puVar5 = piVar9;
    }
    *piVar3 = *piVar3 + -1;
  }
  goto LAB_02e6e9f8;
}


