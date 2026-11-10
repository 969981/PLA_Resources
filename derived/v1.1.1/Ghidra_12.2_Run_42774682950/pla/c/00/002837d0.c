/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002837d0; name: FUN_002837d0
 */


void FUN_002837d0(undefined8 param_1,long param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x32) != '\0') {
    lVar1 = *(long *)(param_2 + (long)param_3 * 8 + 0xb0);
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x1d0);
      FUN_00283580(param_1,param_2,lVar1,param_4);
      lVar1 = lVar2;
    }
  }
  return;
}


