/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033410dc; name: FUN_033410dc
 */


void FUN_033410dc(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 8) + param_3 * 8 + 8);
  *param_1 = *(undefined8 *)(param_2 + param_3 * 8 + 0x10);
  param_1[1] = lVar1;
  if (lVar1 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_032e3508();
    param_1[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}


