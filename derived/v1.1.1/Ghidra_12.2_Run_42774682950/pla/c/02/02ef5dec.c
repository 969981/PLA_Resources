/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef5dec; name: FUN_02ef5dec
 */


void FUN_02ef5dec(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x78) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 0x10), lVar1 != 0)) {
    if (param_3 == 0) {
      do {
        FUN_02ecd4e8(param_1,lVar1 + -0x18,param_4,param_5 & 1);
        lVar1 = *(long *)(lVar1 + 0x48);
      } while (lVar1 != 0);
    }
    else {
      do {
        if (*(long *)(lVar1 + 0x10) == param_3) {
          FUN_02ecd4e8(param_1,lVar1 + -0x18,param_4,param_5 & 1);
        }
        lVar1 = *(long *)(lVar1 + 0x48);
      } while (lVar1 != 0);
    }
  }
  return;
}


