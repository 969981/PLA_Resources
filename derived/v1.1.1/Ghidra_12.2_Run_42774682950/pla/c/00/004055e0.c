/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004055e0; name: FUN_004055e0
 */


undefined8 FUN_004055e0(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  nn::os::FreeTlsSlot(*puVar1);
  FUN_00400420(puVar1,"external/openssl/crypto/threads_nintendo.cpp",0x8a);
  *param_1 = 0;
  return 1;
}


