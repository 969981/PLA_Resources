/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2ed58; name: FUN_02f2ed58
 */


void FUN_02f2ed58(long param_1,long *param_2)

{
  long lVar1;
  
  *(long **)(param_1 + 8) = param_2;
  lVar1 = param_2[3];
  *(long *)(param_1 + 0xe8) = lVar1;
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN_02f1c270(param_1 + 0x10,lVar1 + 0x240,param_1 + 0xb0,DAT_042ab258);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}


