/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008592ec; name: FUN_008592ec
 */


void FUN_008592ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_007f2600();
  lVar1 = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  lVar2 = param_1;
  do {
    *(undefined2 *)(lVar2 + 0x39) = 0;
    lVar1 = lVar1 + 4;
    *(undefined1 *)(lVar2 + 0x3b) = 0;
    lVar2 = param_1 + lVar1;
    *(undefined1 *)(lVar2 + 0x38) = 0;
  } while (lVar1 != 0x100);
  lVar1 = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  lVar2 = param_1;
  do {
    *(undefined2 *)(lVar2 + 0x171) = 0;
    *(undefined1 *)(lVar2 + 0x173) = 0;
    lVar1 = lVar1 + 4;
    lVar2 = param_1 + lVar1;
    *(undefined1 *)(lVar2 + 0x170) = 0;
  } while (lVar1 != 0x100);
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0x20;
  return;
}


