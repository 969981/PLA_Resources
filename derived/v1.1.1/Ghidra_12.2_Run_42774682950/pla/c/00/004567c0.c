/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004567c0; name: FUN_004567c0
 */


undefined8 FUN_004567c0(void *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (int)param_4) {
    uVar1 = 0x6e;
    uVar2 = 0x12;
  }
  else {
    if (param_2 <= (int)param_4) {
      memcpy(param_1,param_3,(ulong)param_4);
      return 1;
    }
    uVar1 = 0x7a;
    uVar2 = 0x17;
  }
  FUN_004014b0(4,0x6b,uVar1,"external/openssl/crypto/rsa/rsa_none.c",uVar2);
  return 0;
}


