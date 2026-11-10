/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257d2d0; name: FUN_0257d2d0
 */


void FUN_0257d2d0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = *(int **)(param_1 + 0x630);
  lVar1 = *(long *)(param_1 + 0x638) - (long)piVar3;
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      if (*piVar3 == param_2) {
        *(int *)(param_1 + 0x6fc) = (int)uVar4;
        uVar2 = FUN_025788d4(param_1,*piVar3);
        *(undefined8 *)(param_1 + 0x748) = uVar2;
        FUN_02577adc(param_1);
        FUN_025786c0(param_1);
        if (*(int *)(param_1 + 0x5ac) == 0) {
          FUN_02577d38(param_1);
        }
        else {
          FUN_02578a10(param_1);
        }
        FUN_02579328(param_1);
        FUN_0257a184(param_1);
        FUN_0257a418(param_1);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar4 < (ulong)(lVar1 >> 3));
  }
  return;
}


