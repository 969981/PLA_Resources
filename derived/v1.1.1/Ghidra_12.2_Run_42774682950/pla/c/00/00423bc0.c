/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423bc0; name: FUN_00423bc0
 */


void FUN_00423bc0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0041b4a0(*param_1);
  FUN_004006a0(param_1 + 9,0x20);
  FUN_004006a0(param_1 + 1,0x20);
  FUN_004006a0(param_1 + 5,0x20);
  FUN_004006a0(param_1 + 0xd,0x20);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  FUN_0041b550(*param_1);
  FUN_00400420(param_1,"external/openssl/crypto/cmac/cmac.c",0x54);
  return;
}


