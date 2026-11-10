/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec02b0; name: FUN_02ec02b0
 */


void FUN_02ec02b0(undefined8 param_1,undefined8 param_2)

{
  long local_28;
  char local_14 [4];
  
  local_28 = FUN_02ebbfcc(param_1,param_2,local_14);
  if ((local_28 != 0) && (local_14[0] != '\0')) {
    FUN_02ebd0b4(param_1,&local_28);
  }
  return;
}


