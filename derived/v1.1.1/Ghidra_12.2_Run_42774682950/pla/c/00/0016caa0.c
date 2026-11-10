/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016caa0; name: FUN_0016caa0
 */


void FUN_0016caa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    FUN_00161510(param_1,lVar1,0x48,0);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    lVar1 = lVar2;
  }
  return;
}


