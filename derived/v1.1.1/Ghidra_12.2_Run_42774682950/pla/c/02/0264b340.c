/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264b340; name: FUN_0264b340
 */


void FUN_0264b340(long param_1,undefined4 param_2)

{
  FUN_01a51334(param_1,&DAT_03a7dbc0,1);
  FUN_01a51334(param_1,&DAT_03a7dbc8,param_2);
  FUN_01a50188(0,param_1,&DAT_03a7dba8);
  FUN_01a50188(0,param_1,&DAT_03a7dbb0);
  FUN_01a50188(0x3f800000,param_1,&DAT_03a7dbb8);
  *(undefined1 *)(param_1 + 0xce9) = 1;
  FUN_01a5bd74(param_1,&DAT_03a7db78,0);
  return;
}


