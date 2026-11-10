/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0da0; name: FUN_004f0da0
 */


undefined8 FUN_004f0da0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x43;
    uVar2 = 0x131;
  }
  else {
    iVar1 = FUN_004e0190(0,param_1,param_2,0,1);
    if (iVar1 == 1) {
      uVar2 = FUN_004f0930(*(undefined8 *)(param_1 + 0x140),param_2);
      return uVar2;
    }
    uVar2 = 0x136;
  }
  FUN_004014b0(0x14,0xab,iVar1,"external/openssl/ssl/ssl_rsa.c",uVar2);
  return 0;
}


