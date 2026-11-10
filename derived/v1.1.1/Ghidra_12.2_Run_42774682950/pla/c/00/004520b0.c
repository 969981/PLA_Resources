/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004520b0; name: FUN_004520b0
 */


undefined8 FUN_004520b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x4;
  undefined4 in_w5;
  undefined4 *puVar2;
  
  uVar1 = FUN_00446a60(*param_1);
  if ((int)uVar1 != 0) {
    if (in_x4 != 0) {
      FUN_00400420(*(undefined8 *)(param_1[1] + 8),"external/openssl/crypto/x509/x_pubkey.c",0x159);
      puVar2 = (undefined4 *)param_1[1];
      *puVar2 = in_w5;
      *(long *)(puVar2 + 2) = in_x4;
      *(ulong *)(puVar2 + 4) = *(ulong *)(puVar2 + 4) & 0xfffffffffffffff0 | 8;
    }
    uVar1 = 1;
  }
  return uVar1;
}


