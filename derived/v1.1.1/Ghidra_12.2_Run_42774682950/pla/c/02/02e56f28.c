/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56f28; name: FUN_02e56f28
 */


void FUN_02e56f28(undefined4 *param_1,long param_2)

{
  long lVar1;
  
  FUN_02ea8058(param_1[4],*(undefined8 *)(*(long *)(param_2 + 8) + 0x48),3,0,0xab,0,0,0);
  if (*(long *)(param_1 + 2) != 0) {
    FUN_02f59e60(9);
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  if (5 < *(uint *)(*(long *)(param_2 + 8) + 0x40)) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x28);
    if (lVar1 != 0) {
      FUN_02ef75c4(lVar1,param_1[4]);
    }
  }
  FUN_02e56b44(param_1 + 6);
  return;
}


