/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041eda0; name: FUN_0041eda0
 */


int * FUN_0041eda0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  
  if (((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)FUN_0040a450(), piVar2 == (int *)0x0)) {
    FUN_004014b0(0xd,0xc6,0x41,"external/openssl/crypto/asn1/asn_pack.c",0x16);
    return (int *)0x0;
  }
  plVar3 = (long *)(piVar2 + 2);
  FUN_00400420(*plVar3,"external/openssl/crypto/asn1/asn_pack.c",0x1d);
  *plVar3 = 0;
  iVar1 = FUN_0041f020(param_1,plVar3,param_2);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    FUN_004014b0(0xd,0xc6,0x70,"external/openssl/crypto/asn1/asn_pack.c",0x21);
  }
  else {
    if (*plVar3 != 0) {
      if (param_3 == (long *)0x0) {
        return piVar2;
      }
      if (*param_3 == 0) {
        *param_3 = (long)piVar2;
        return piVar2;
      }
      return piVar2;
    }
    FUN_004014b0(0xd,0xc6,0x41,"external/openssl/crypto/asn1/asn_pack.c",0x25);
  }
  if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
    FUN_0040a4b0(piVar2);
  }
  return (int *)0x0;
}


