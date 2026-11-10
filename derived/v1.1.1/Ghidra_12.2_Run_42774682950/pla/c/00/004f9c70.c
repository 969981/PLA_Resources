/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9c70; name: FUN_004f9c70
 */


char * FUN_004f9c70(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004c9a20();
  if (iVar1 != 0) {
    return "error";
  }
  uVar2 = FUN_004c9910(param_1);
  if (uVar2 < 0x32) {
    return (&PTR_s_before_SSL_initialization_04184178)[(int)uVar2];
  }
  return "unknown state";
}


