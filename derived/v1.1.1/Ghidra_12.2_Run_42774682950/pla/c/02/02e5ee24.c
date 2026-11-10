/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5ee24; name: FUN_02e5ee24
 */


bool FUN_02e5ee24(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf4);
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (bVar1 == 0) {
      bVar1 = FUN_02e63038(param_1);
      bVar1 = bVar1 & 1;
    }
    else {
      bVar1 = 1;
    }
    *(byte *)(param_1 + 0xf4) = bVar1;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return bVar1 != 0;
}


