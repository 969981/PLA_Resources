/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319e430; name: FUN_0319e430
 */


void FUN_0319e430(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  do {
    iVar1 = *(int *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 4);
    uVar3 = (ulong)param_3;
    uVar7 = param_2;
    do {
      while( true ) {
        piVar2 = (int *)(param_1 + (long)(int)uVar7 * 4);
        uVar7 = uVar7 - 1;
        do {
          uVar8 = uVar7;
          piVar4 = piVar2;
          uVar7 = uVar8 + 1;
          piVar2 = piVar4 + 1;
        } while (*piVar4 < iVar1);
        iVar6 = *(int *)(param_1 + (long)(int)uVar3 * 4);
        uVar3 = (ulong)(int)uVar3;
        if (iVar1 < iVar6) {
          do {
            iVar6 = *(int *)(param_1 + -4 + uVar3 * 4);
            uVar3 = uVar3 - 1;
          } while (iVar1 < iVar6);
        }
        uVar5 = (uint)uVar3;
        if ((int)uVar7 <= (int)uVar5) break;
        uVar3 = uVar3 & 0xffffffff;
        if ((int)uVar5 < (int)uVar7) goto LAB_0319e4c8;
      }
      if (uVar5 != uVar7) {
        *(int *)(param_1 + uVar3 * 4) = *piVar4;
        *piVar4 = iVar6;
      }
      uVar5 = uVar5 - 1;
      uVar3 = (ulong)uVar5;
      uVar7 = uVar8 + 2;
    } while ((int)uVar7 <= (int)uVar5);
LAB_0319e4c8:
    if ((int)param_2 < (int)uVar5) {
      FUN_0319e430(param_1);
    }
    param_2 = uVar7;
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  } while( true );
}


