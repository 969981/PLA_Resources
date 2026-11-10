/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fc0a0; name: FUN_002fc0a0
 */


void FUN_002fc0a0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_002ef750();
  uVar1 = *(ulong *)(param_1 + 0x50);
  if (uVar1 != 0) {
    uVar4 = 0;
    plVar3 = *(long **)(param_1 + 0x60);
    do {
      lVar5 = *plVar3;
      if (lVar5 == param_2) {
        lVar2 = uVar1 - 1;
        *(long *)(param_1 + 0x50) = lVar2;
        *plVar3 = (*(long **)(param_1 + 0x60))[lVar2];
        *(long *)(*(long *)(param_1 + 0x60) + lVar2 * 8) = lVar5;
        FUN_002fc1d0(param_2,"pollset_set",0x532);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_002fc14c;
        goto LAB_002fc128;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
LAB_002fc128:
    uVar1 = 0;
    do {
      FUN_002fc0a0(*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar1 * 8),param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_1 + 0x38));
  }
LAB_002fc14c:
  FUN_002ef790(param_1);
  return;
}


