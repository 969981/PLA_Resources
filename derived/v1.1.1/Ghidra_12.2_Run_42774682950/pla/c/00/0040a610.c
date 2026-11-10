/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a610; name: FUN_0040a610
 */


void FUN_0040a610(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) >> 4 & 1) == 0)) {
      FUN_004006a0(*(long *)(param_1 + 2),(long)*param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 4);
    if (((uint)uVar1 >> 4 & 1) == 0) {
      FUN_00400420(*(undefined8 *)(param_1 + 2),"external/openssl/crypto/asn1/asn1_lib.c",0x14a);
    }
    if (((uint)uVar1 >> 7 & 1) == 0) {
      FUN_00400420(param_1,"external/openssl/crypto/asn1/asn1_lib.c",0x14c);
      return;
    }
  }
  return;
}


