/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e77f0; name: FUN_004e77f0
 */


undefined8 FUN_004e77f0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0xe8) != 0) {
LAB_004e7810:
    if (param_2 == 0) {
      FUN_00403ee0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
      *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0) = 0;
    }
    return 1;
  }
  lVar2 = FUN_00404920(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,&local_28);
  if (lVar2 < 1) {
    uVar4 = 0x14c;
    uVar5 = 0x182;
  }
  else {
    lVar3 = FUN_00444930();
    *(long *)(*(long *)(param_1 + 0xa8) + 0xe8) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x189;
    }
    else {
      lVar3 = FUN_004bda70(param_1);
      if (((lVar3 != 0) &&
          (iVar1 = FUN_004449b0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8),lVar3,0),
          iVar1 != 0)) &&
         (iVar1 = FUN_00444ad0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8),local_28,lVar2),
         iVar1 != 0)) goto LAB_004e7810;
      uVar4 = 0x44;
      uVar5 = 0x191;
    }
  }
  FUN_004c99a0(param_1,0x50,0x125,uVar4,"external/openssl/ssl/s3_enc.c",uVar5);
  return 0;
}


