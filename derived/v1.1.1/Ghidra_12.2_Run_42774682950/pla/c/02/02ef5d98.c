/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef5d98; name: FUN_02ef5d98
 */


void FUN_02ef5d98(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x78) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 0x10); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x48)) {
      FUN_02ecd4e8(param_1,lVar1 + -0x18,param_3,0);
    }
  }
  return;
}


