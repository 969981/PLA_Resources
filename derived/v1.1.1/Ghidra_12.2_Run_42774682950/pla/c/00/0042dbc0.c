/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042dbc0; name: FUN_0042dbc0
 */


void FUN_0042dbc0(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  if ((int)param_1[0x13] == 5) {
    FUN_0042f420(param_1[0x14]);
  }
  param_1[0x14] = 0;
  FUN_0040d960(param_1[0x12]);
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar2 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*plVar2 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(plVar2);
    }
    FUN_00400620(plVar2,0x30,"external/openssl/crypto/ec/ec_lib.c",0x261);
  }
  FUN_0040c140(param_1[2]);
  FUN_0040c140(param_1[3]);
  FUN_00400620(param_1[6],param_1[7],"external/openssl/crypto/ec/ec_lib.c",0x7e);
  FUN_00400620(param_1,0xa8,"external/openssl/crypto/ec/ec_lib.c",0x7f);
  return;
}


