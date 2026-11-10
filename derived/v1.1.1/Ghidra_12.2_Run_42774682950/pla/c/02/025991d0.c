/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025991d0; name: FUN_025991d0
 */


void FUN_025991d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e8);
  lVar2 = *(long *)(lVar1 + 0xe8);
  if ((((lVar2 != 0) && (*(int *)(lVar1 + 0xf0) == *(int *)(lVar2 + 0x2c))) &&
      (lVar1 = FUN_002669c8(), lVar1 != 0)) &&
     ((0 < *(int *)(lVar1 + 0x17c) && (*(char *)(lVar1 + 0xc) != '\0')))) {
    FUN_02c91f14(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  return;
}


