/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee94c4; name: FUN_02ee94c4
 */


void FUN_02ee94c4(long param_1,undefined4 param_2,undefined4 param_3)

{
  char local_24 [4];
  
  if (*(long *)(param_1 + 8) != 0) {
    local_24[0] = '\0';
    if ((DAT_0440a160 != 0) &&
       (FUN_02ee27c4(DAT_0440a160,param_1,param_2,param_3,local_24), local_24[0] != '\0')) {
      return;
    }
    FUN_02ee952c(param_1,param_2);
  }
  return;
}


