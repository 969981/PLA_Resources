/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085eba8; name: FUN_0085eba8
 */


void FUN_0085eba8(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_007f20f8();
  lVar1 = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  lVar2 = param_1;
  do {
    *(undefined2 *)(lVar2 + 0xe1) = 0;
    lVar1 = lVar1 + 4;
    *(undefined1 *)(lVar2 + 0xe3) = 0;
    lVar2 = param_1 + lVar1;
    *(undefined1 *)(lVar2 + 0xe0) = 0;
  } while (lVar1 != 0x100);
  *(undefined8 *)(param_1 + 0xcc) = 0;
  memset((void *)(param_1 + 0x1e8),0,0x200);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


