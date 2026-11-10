/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021e818; name: FUN_0021e818
 */


void FUN_0021e818(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372898 + 0x10;
  *param_1 = (long)(PTR_DAT_04372890 + 0x10);
  param_1[5] = (long)puVar1;
  FUN_0021f4b4(param_1 + 5,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_0021f4f8(param_1);
  return;
}


