/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ce30; name: FUN_0041ce30
 */


int FUN_0041ce30(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *__src;
  
  if ((*param_1 == 4) && (*(long *)(param_1 + 2) != 0)) {
    __src = (void *)FUN_0040a6f0();
    iVar2 = FUN_0040a6e0(*(undefined8 *)(param_1 + 2));
    iVar1 = iVar2;
    if (param_3 <= iVar2) {
      iVar1 = param_3;
    }
    memcpy(param_2,__src,(long)iVar1);
  }
  else {
    FUN_004014b0(0xd,0x87,0x6d,"external/openssl/crypto/asn1/evp_asn1.c",0x24);
    iVar2 = -1;
  }
  return iVar2;
}


