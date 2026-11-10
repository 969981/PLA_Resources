/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623760; name: FUN_02623760
 */


undefined1 FUN_02623760(long param_1)

{
  undefined *puVar1;
  long local_38;
  
  FUN_02623848();
  puVar1 = PTR_DAT_04387a30;
  local_38 = param_1;
  while( true ) {
    if (local_38 == 0) {
      return 0;
    }
    if (local_38 - (long)puVar1 == 0) break;
    local_38 = FUN_026226fc(local_38 - (long)puVar1,local_38);
  }
  return 1;
}


