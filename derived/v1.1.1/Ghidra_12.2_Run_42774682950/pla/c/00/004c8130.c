/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8130; name: FUN_004c8130
 */


undefined8 FUN_004c8130(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_00400260(0x68,"external/openssl/ssl/record/rec_layer_d1.c",0x17);
  if (lVar1 == 0) {
    FUN_004014b0(0x14,0x27b,0x41,"external/openssl/ssl/record/rec_layer_d1.c",0x18);
    return 0;
  }
  *(long *)(param_1 + 0xfb0) = lVar1;
  uVar2 = FUN_004f5bf0();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  uVar2 = FUN_004f5bf0();
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  lVar3 = FUN_004f5bf0();
  *(long *)(lVar1 + 0x50) = lVar3;
  if (((*(long *)(lVar1 + 0x30) == 0) || (lVar3 == 0)) || (*(long *)(lVar1 + 0x40) == 0)) {
    FUN_004f5c50();
    FUN_004f5c50(*(undefined8 *)(lVar1 + 0x40));
    FUN_004f5c50(*(undefined8 *)(lVar1 + 0x50));
    FUN_00400420(lVar1,"external/openssl/ssl/record/rec_layer_d1.c",0x27);
    *(undefined8 *)(param_1 + 0xfb0) = 0;
    return 0;
  }
  return 1;
}


