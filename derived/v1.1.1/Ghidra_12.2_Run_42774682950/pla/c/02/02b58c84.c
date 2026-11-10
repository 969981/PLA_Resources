/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b58c84; name: FUN_02b58c84
 */


void FUN_02b58c84(long param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    lVar2 = param_2 + 0x38;
    do {
      FUN_02bb7a60(*(undefined8 *)(param_1 + 0x60),uVar1 & 0xffffffff,lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x48;
    } while (param_3 != uVar1);
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_02b58d1c(param_1,param_2,param_3);
  return;
}


