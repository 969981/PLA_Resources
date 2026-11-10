/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8210; name: FUN_004c8210
 */


void FUN_004c8210(long param_1)

{
  FUN_004c8260();
  FUN_004f5c50(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x30));
  FUN_004f5c50(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x40));
  FUN_004f5c50(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x50));
  FUN_00400420(*(undefined8 *)(param_1 + 0xfb0),"external/openssl/ssl/record/rec_layer_d1.c",0x35);
  *(undefined8 *)(param_1 + 0xfb0) = 0;
  return;
}


