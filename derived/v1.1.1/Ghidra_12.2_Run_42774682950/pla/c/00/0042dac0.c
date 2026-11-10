/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042dac0; name: FUN_0042dac0
 */


void FUN_0042dac0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if ((int)param_1[0x13] == 5) {
    FUN_0042f420(param_1[0x14]);
  }
  param_1[0x14] = 0;
  FUN_0040d960(param_1[0x12]);
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
      (**(code **)(*plVar1 + 0x58))(plVar1);
    }
    FUN_00400420(plVar1,"external/openssl/crypto/ec/ec_lib.c",0x255);
  }
  FUN_0040c1e0(param_1[2]);
  FUN_0040c1e0(param_1[3]);
  FUN_00400420(param_1[6],"external/openssl/crypto/ec/ec_lib.c",0x6b);
  FUN_00400420(param_1,"external/openssl/crypto/ec/ec_lib.c",0x6c);
  return;
}


