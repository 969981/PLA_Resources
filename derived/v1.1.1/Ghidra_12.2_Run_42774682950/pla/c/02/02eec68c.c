/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eec68c; name: FUN_02eec68c
 */


void FUN_02eec68c(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe8);
    do {
      (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != *(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(long **)(param_1 + 0xf8) == (long *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x116);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf8) = 0;
    bVar1 = *(byte *)(param_1 + 0x116);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  if (DAT_0440a128 != 0) {
    FUN_02e85e80(DAT_0440a128,param_1);
    FUN_02e85c80(DAT_0440a128,param_1);
  }
  FUN_02ed50e8(param_1,0,0,0,4);
  return;
}


