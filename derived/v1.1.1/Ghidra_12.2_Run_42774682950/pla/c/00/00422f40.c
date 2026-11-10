/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422f40; name: FUN_00422f40
 */


undefined8 FUN_00422f40(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar2 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] == param_2) && (*(long *)(param_1 + 4) != 0)) {
      return 1;
    }
  }
  puVar1 = (undefined4 *)FUN_0043e620(&local_18,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004014b0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined8 *)(param_1 + 6) = local_18;
    *param_1 = *puVar1;
    param_1[1] = param_2;
  }
  return 1;
}


