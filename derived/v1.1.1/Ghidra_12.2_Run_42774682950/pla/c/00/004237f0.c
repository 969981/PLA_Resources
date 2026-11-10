/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004237f0; name: FUN_004237f0
 */


undefined8 FUN_004237f0(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_28 = 0;
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] == 0x198) && (*(long *)(param_1 + 4) != 0)) {
      *(long *)(param_1 + 10) = param_2;
    }
    else {
      puVar1 = (undefined4 *)FUN_0043e620(&local_28,0x198);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004014b0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
        return 0;
      }
      *(undefined4 **)(param_1 + 4) = puVar1;
      *(undefined8 *)(param_1 + 6) = local_28;
      *param_1 = *puVar1;
      param_1[1] = 0x198;
      *(long *)(param_1 + 10) = param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
    FUN_0042d050(param_2);
    uVar2 = 1;
  }
  return uVar2;
}


