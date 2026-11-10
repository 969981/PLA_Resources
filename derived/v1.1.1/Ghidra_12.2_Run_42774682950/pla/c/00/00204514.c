/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204514; name: FUN_00204514
 */


ulong FUN_00204514(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(code **)PTR_DAT_043727c0 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)PTR_DAT_043727c0)(param_1 + 7 + param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = param_1 + 7 + lVar1 & -param_1;
      *(long *)(uVar2 - 8) = lVar1;
    }
  }
  return uVar2;
}


