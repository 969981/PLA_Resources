/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4d58; name: FUN_007e4d58
 */


void FUN_007e4d58(void)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)PTR_DAT_04377420;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FUN_007e64a8(puVar1 + 0x17);
  FUN_007e59c4(puVar1 + 4);
  memset((void *)*puVar1,0,0x458);
  memset((void *)puVar1[1],0,0x498);
  memset((void *)puVar1[2],0,0x2750);
  puVar1[3] = 0x400000000;
  *(undefined1 *)(puVar1 + 0xb0) = 0;
  *(undefined2 *)(puVar1 + 0xb5) = 0;
  FUN_007e4464(puVar1 + 0xb1);
  return;
}


