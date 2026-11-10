/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54d0c; name: FUN_02e54d0c
 */


void FUN_02e54d0c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_3 * 0x2b0;
  if (*(long *)(lVar1 + 0x360) != 0) {
    param_1 = param_1 + (ulong)param_3 * 0x2b0;
    FUN_02e55648();
    FUN_02e4c274(param_1 + 0x2d8);
    FUN_02e4c274(param_1 + 0x250);
    FUN_02e4c274(param_1 + 0x1c8);
    FUN_02e4c274(param_1 + 0x140);
    FUN_02e478e4(param_1 + 0xc0);
  }
  *(undefined8 *)(lVar1 + 0x360) = param_2;
  return;
}


