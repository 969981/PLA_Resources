/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c060; name: FUN_0043c060
 */


ulong FUN_0043c060(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x43;
    uVar5 = 0x454;
LAB_0043c0c4:
    FUN_004014b0(0x10,0x97,uVar3,"external/openssl/crypto/ec/ec_asn1.c",uVar5);
  }
  else {
    uVar2 = FUN_0043c3f0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 == (long *)0x0) || (uVar2 == 0)) goto LAB_0043c0d0;
    lVar4 = *param_2;
    if (lVar4 == 0) {
      lVar4 = FUN_00400260(uVar2,"external/openssl/crypto/ec/ec_asn1.c",0x460);
      *param_2 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0x41;
        uVar5 = 0x461;
        goto LAB_0043c0c4;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    lVar4 = FUN_0043c3f0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x34),lVar4,uVar2,0);
    if (lVar4 != 0) {
      if (!bVar1) {
        *param_2 = *param_2 + uVar2;
      }
      goto LAB_0043c0d0;
    }
    FUN_004014b0(0x10,0x97,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x468);
    if (bVar1) {
      FUN_00400420(*param_2,"external/openssl/crypto/ec/ec_asn1.c",0x46a);
      uVar2 = 0;
      *param_2 = 0;
      goto LAB_0043c0d0;
    }
  }
  uVar2 = 0;
LAB_0043c0d0:
  return uVar2 & 0xffffffff;
}


