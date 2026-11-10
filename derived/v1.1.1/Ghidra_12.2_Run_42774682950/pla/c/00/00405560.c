/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405560; name: FUN_00405560
 */


undefined8 FUN_00405560(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  plVar2 = (long *)nn::os::GetTlsValue(*puVar3);
  if (plVar2 == (long *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
    plVar2 = (long *)FUN_004002a0(0x10,"external/openssl/crypto/threads_nintendo.cpp",0x71);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    *plVar2 = param_2;
    plVar2[1] = (long)puVar3;
    uVar1 = *puVar3;
  }
  else {
    if (param_2 != 0) {
      *plVar2 = param_2;
      return 1;
    }
    FUN_00400420(plVar2,"external/openssl/crypto/threads_nintendo.cpp",0x68);
    uVar1 = *puVar3;
    plVar2 = (long *)0x0;
  }
  nn::os::SetTlsValue(uVar1,plVar2);
  return 1;
}


