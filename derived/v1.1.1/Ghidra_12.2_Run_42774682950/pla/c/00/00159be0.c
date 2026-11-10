/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159be0; name: FUN_00159be0
 */


void FUN_00159be0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (1 < (*(uint *)(param_2 + 8) & 0xf) - 3) {
    param_3 = param_2;
  }
  FUN_00159980(param_1,param_3,"concatenate");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x159c08);
  (*pcVar1)();
}


