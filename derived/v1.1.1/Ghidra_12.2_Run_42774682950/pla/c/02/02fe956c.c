/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe956c; name: FUN_02fe956c
 */


void FUN_02fe956c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_1 + 0x40;
  }
  lVar1 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x48))();
  if (lVar1 == 0) {
    return;
  }
  FUN_02fe95d4(lVar1,param_1,&LAB_02fe9554,0);
  return;
}


