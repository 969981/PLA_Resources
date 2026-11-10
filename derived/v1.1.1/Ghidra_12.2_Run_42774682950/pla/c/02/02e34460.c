/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34460; name: FUN_02e34460
 */


void FUN_02e34460(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_02e07298(lVar1,param_2);
      if (1 < *(uint *)(param_1 + 0x38)) {
        uVar2 = 1;
        lVar1 = 0x20;
        do {
          FUN_02e07298(*(long *)(param_1 + 0x50) + lVar1,param_2);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x20;
        } while (uVar2 < *(uint *)(param_1 + 0x38));
      }
      lVar1 = *(long *)(param_1 + 0x50);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_02e043d4(param_1,param_2);
  return;
}


