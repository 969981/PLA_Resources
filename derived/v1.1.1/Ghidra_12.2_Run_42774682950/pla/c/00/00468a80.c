/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00468a80; name: FUN_00468a80
 */


void FUN_00468a80(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_0046bc40();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_0046c4a0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_004078c0(*(undefined8 *)(param_1 + 0x98),PTR_FUN_04374180);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_00400e80(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00400420(param_1,"external/openssl/crypto/x509/x509_vfy.c",0x89c);
  return;
}


