/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bfb80; name: FUN_004bfb80
 */


void FUN_004bfb80(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  FUN_00400420(param_1,"external/openssl/crypto/comp/comp_lib.c",0x38);
  return;
}


