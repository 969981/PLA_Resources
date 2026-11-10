/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02850e64; name: FUN_02850e64
 */


bool FUN_02850e64(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_02c90d14(*(undefined8 *)(param_1 + 0xb8));
  if (lVar1 == 0) {
    FUN_02c90b20(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x58);
    FUN_02c90b50(*(undefined8 *)(param_1 + 0xb8),param_2 & 1);
    FUN_02850ebc(param_1);
  }
  return lVar1 == 0;
}


