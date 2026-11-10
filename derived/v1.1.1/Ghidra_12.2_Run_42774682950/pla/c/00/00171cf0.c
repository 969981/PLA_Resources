/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00171cf0; name: FUN_00171cf0
 */


void FUN_00171cf0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0015cc60(param_1,5,0x38);
  *(undefined2 *)(lVar1 + 10) = 0xff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined **)(lVar1 + 0x18) = &DAT_039c62f0;
  return;
}


