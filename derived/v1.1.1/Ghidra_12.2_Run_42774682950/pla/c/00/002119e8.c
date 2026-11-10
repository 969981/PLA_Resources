/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002119e8; name: FUN_002119e8
 */


undefined8 FUN_002119e8(long param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf3;
  iVar1 = FUN_00211710(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_00211e94(param_1);
  }
  return 0;
}


