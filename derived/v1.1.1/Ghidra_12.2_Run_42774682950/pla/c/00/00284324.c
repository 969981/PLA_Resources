/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00284324; name: FUN_00284324
 */


void FUN_00284324(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x12a8);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    do {
      if (lVar2 == param_2) {
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x90);
    } while (lVar2 != 0);
    if (lVar1 != 0) {
      *(long *)(*(long *)(param_1 + 0x12b0) + 0x90) = param_2;
      goto LAB_00284364;
    }
  }
  *(long *)(param_1 + 0x12a8) = param_2;
LAB_00284364:
  *(long *)(param_1 + 0x12b0) = param_2;
  *(undefined8 *)(param_2 + 0x90) = 0;
  return;
}


