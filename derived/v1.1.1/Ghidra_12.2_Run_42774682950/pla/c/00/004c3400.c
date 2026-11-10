/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3400; name: FUN_004c3400
 */


undefined8 FUN_004c3400(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)**(undefined8 **)(param_1 + 0x140) != 0) {
      if (((long *)**(undefined8 **)(param_1 + 0x140))[1] == 0) {
        FUN_004014b0(0x14,0xa8,0xbe,"external/openssl/ssl/ssl_lib.c",0x62e);
        return 0;
      }
      uVar1 = FUN_0044e670();
      return uVar1;
    }
  }
  FUN_004014b0(0x14,0xa8,0xb1,"external/openssl/ssl/ssl_lib.c",0x62a);
  return 0;
}


