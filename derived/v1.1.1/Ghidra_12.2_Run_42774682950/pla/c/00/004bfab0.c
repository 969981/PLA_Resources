/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bfab0; name: FUN_004bfab0
 */


long * FUN_004bfab0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_004002a0(0x30,"external/openssl/crypto/comp/comp_lib.c",0x16);
  if (plVar2 == (long *)0x0) {
    FUN_004014b0(0x29,0x67,0x41,"external/openssl/crypto/comp/comp_lib.c",0x17);
    return (long *)0x0;
  }
  *plVar2 = param_1;
  if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x10))(plVar2), iVar1 != 0)) {
    return plVar2;
  }
  FUN_00400420(plVar2,"external/openssl/crypto/comp/comp_lib.c",0x1c);
  return (long *)0x0;
}


