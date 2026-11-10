/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257e530; name: FUN_0257e530
 */


void FUN_0257e530(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x18);
  if (lVar1 != 0) {
    uVar2 = *param_2;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(float *)(lVar1 + 0x30) = (float)uVar2 + -960.0;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 0x10;
    *(float *)(lVar1 + 0x34) = 540.0 - (float)((ulong)uVar2 >> 0x20);
  }
  return;
}


