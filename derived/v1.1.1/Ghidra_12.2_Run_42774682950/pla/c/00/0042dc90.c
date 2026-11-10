/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042dc90; name: FUN_0042dc90
 */


void FUN_0042dc90(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x60);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_00400620(param_1,0x30,"external/openssl/crypto/ec/ec_lib.c",0x261);
  return;
}


