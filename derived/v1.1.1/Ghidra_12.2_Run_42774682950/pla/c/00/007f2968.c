/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2968; name: FUN_007f2968
 */


long FUN_007f2968(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar2 + (uVar1 & 0xffffffff);
}


