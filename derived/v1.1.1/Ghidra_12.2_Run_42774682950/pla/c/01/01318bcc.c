/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01318bcc; name: FUN_01318bcc
 */


void FUN_01318bcc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_01306260(param_1 + 0x180,"pane_N_lmap_00");
  uVar1 = *(undefined4 *)(param_1 + 0x1e2c);
  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_1 + 0x1e28);
  *(undefined4 *)(lVar2 + 0x34) = uVar1;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  return;
}


