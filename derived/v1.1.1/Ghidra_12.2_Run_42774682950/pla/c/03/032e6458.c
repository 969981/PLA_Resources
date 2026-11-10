/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6458; name: FUN_032e6458
 */


ulong FUN_032e6458(long *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_18 [8];
  
  if (*param_1 == 0) {
    uVar2 = (uint)(*param_2 != 0);
  }
  else {
    uVar2 = 0;
    if (*param_2 != 0) {
      uVar1 = FUN_032e64a8(auStack_18,param_1,param_2);
      return uVar1;
    }
  }
  return (ulong)(uVar2 - (*param_1 != 0));
}


