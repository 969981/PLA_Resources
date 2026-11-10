/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00409be0; name: FUN_00409be0
 */


void FUN_00409be0(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00400420(*param_1,"external/openssl/crypto/asn1/a_object.c",0x164);
      FUN_00400420(param_1[1],"external/openssl/crypto/asn1/a_object.c",0x165);
      uVar1 = *(uint *)(param_1 + 4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00400420(param_1[3],"external/openssl/crypto/asn1/a_object.c",0x16a);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      FUN_00400420(param_1,"external/openssl/crypto/asn1/a_object.c",0x16f);
      return;
    }
  }
  return;
}


