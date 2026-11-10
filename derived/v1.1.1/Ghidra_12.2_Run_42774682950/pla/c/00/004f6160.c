/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f6160; name: FUN_004f6160
 */


ulong FUN_004f6160(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_3 != 1) {
    uVar6 = FUN_004f5e00(param_1);
    return uVar6;
  }
  lVar3 = FUN_00414570(param_2,&DAT_03948cf6);
  if (lVar3 == 0) {
    FUN_004014b0(0xb,0x84,2,"external/openssl/crypto/x509/by_file.c",199);
    uVar7 = 0;
    goto LAB_004f62bc;
  }
  lVar4 = FUN_004f63a0(lVar3,0,0,&DAT_03996322);
  FUN_00403ee0(lVar3);
  if (lVar4 == 0) {
    FUN_004014b0(0xb,0x84,9,"external/openssl/crypto/x509/by_file.c",0xcd);
    uVar7 = 0;
    goto LAB_004f62bc;
  }
  iVar1 = FUN_00407950(lVar4);
  if (iVar1 < 1) {
LAB_004f628c:
    FUN_004014b0(0xb,0x84,0x88,"external/openssl/crypto/x509/by_file.c",0xdf);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    iVar1 = 0;
    do {
      plVar5 = (long *)FUN_00407970(lVar4,iVar1);
      if (*plVar5 != 0) {
        iVar2 = FUN_0046b0a0(*(undefined8 *)(param_1 + 0x18));
        if (iVar2 == 0) goto LAB_004f62ac;
        uVar7 = uVar7 + 1;
      }
      if (plVar5[1] != 0) {
        iVar2 = FUN_0046b230(*(undefined8 *)(param_1 + 0x18));
        if (iVar2 == 0) goto LAB_004f62ac;
        uVar7 = uVar7 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(lVar4);
    } while (iVar1 < iVar2);
    if (uVar7 == 0) goto LAB_004f628c;
  }
LAB_004f62ac:
  FUN_004078c0(lVar4,PTR_FUN_043747c8);
LAB_004f62bc:
  return (ulong)uVar7;
}


