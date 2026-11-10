/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9cd0; name: FUN_004f9cd0
 */


char * FUN_004f9cd0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004c9a20();
  if (iVar1 != 0) {
    return "SSLERR";
  }
  uVar2 = FUN_004c9910(param_1);
  if (uVar2 < 0x32) {
    return (&PTR_s_PINIT_04184308)[(int)uVar2];
  }
  return "UNKWN ";
}


