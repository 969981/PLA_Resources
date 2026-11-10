/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043bfc0; name: FUN_0043bfc0
 */


long FUN_0043bfc0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) || (*(long *)(lVar4 + 0x18) == 0)
     ) {
    uVar2 = 0x43;
    uVar3 = 0x442;
  }
  else {
    iVar1 = FUN_0042d610(lVar4,*param_2,param_3,0);
    if (iVar1 != 0) {
      *param_2 = *param_2 + param_3;
      return lVar4;
    }
    uVar3 = 0x447;
    uVar2 = 0x10;
  }
  FUN_004014b0(0x10,0x98,uVar2,"external/openssl/crypto/ec/ec_asn1.c",uVar3);
  return 0;
}


