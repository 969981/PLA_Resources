/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134309c; name: FUN_0134309c
 */


void FUN_0134309c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_01306260(param_1 + 0x180,"pane_L_window_popup_lmap_00");
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  *(undefined4 *)(param_1 + 0x634) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x638) = 0;
  return;
}


