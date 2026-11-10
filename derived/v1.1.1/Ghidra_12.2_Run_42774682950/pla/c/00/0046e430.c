/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e430; name: FUN_0046e430
 */


void FUN_0046e430(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_00444880(param_1[2]);
  FUN_00444880(param_1[3]);
  FUN_00444880(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_004006a0((long)param_1 + 0x24,0x90);
  FUN_00444950(param_1[2]);
  FUN_00444950(param_1[3]);
  FUN_00444950(param_1[1]);
  FUN_00400420(param_1,"external/openssl/crypto/hmac/hmac.c",0xa3);
  return;
}


