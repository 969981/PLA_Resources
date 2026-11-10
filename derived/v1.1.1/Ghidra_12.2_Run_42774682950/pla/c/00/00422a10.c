/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422a10; name: FUN_00422a10
 */


void FUN_00422a10(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_00423420(param_1[2]);
  FUN_00423420(param_1[3]);
  FUN_00400420(param_1,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
  return;
}


