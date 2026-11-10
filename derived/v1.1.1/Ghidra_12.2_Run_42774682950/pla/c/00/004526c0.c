/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004526c0; name: FUN_004526c0
 */


void FUN_004526c0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0040c1e0(*param_1);
  FUN_0040c1e0(param_1[1]);
  FUN_0040c1e0(param_1[2]);
  FUN_0040c1e0(param_1[3]);
  FUN_00400180(param_1[9]);
  FUN_00400420(param_1,"external/openssl/crypto/bn/bn_blind.c",0x5a);
  return;
}


