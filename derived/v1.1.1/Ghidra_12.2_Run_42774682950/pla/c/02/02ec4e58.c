/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4e58; name: FUN_02ec4e58
 */


void FUN_02ec4e58(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = 0xff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + 0x1c);
  bVar1 = *(byte *)(param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((long)param_2 + 9);
  if (bVar1 - 0x80 < 0x21 && (1L << ((ulong)(bVar1 - 0x80) & 0x3f) & 0x100010001U) != 0) {
    uVar2 = *(undefined1 *)((long)param_2 + 10);
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 3);
  param_1[5] = param_2[5];
  return;
}


