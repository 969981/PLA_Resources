/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8260; name: FUN_004c8260
 */


void FUN_004c8260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xfb0);
  lVar1 = FUN_004f5d20(puVar5[6]);
  if (lVar1 != 0) {
    do {
      FUN_00400420(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x46);
      FUN_00400420(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x47);
      FUN_004f5be0(lVar1);
      lVar1 = FUN_004f5d20(puVar5[6]);
    } while (lVar1 != 0);
  }
  lVar1 = FUN_004f5d20(puVar5[8]);
  if (lVar1 != 0) {
    do {
      FUN_00400420(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x4d);
      FUN_00400420(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x4e);
      FUN_004f5be0(lVar1);
      lVar1 = FUN_004f5d20(puVar5[8]);
    } while (lVar1 != 0);
  }
  lVar1 = FUN_004f5d20(puVar5[10]);
  if (lVar1 != 0) {
    do {
      FUN_00400420(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x54);
      FUN_00400420(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x55);
      FUN_004f5be0(lVar1);
      lVar1 = FUN_004f5d20(puVar5[10]);
    } while (lVar1 != 0);
  }
  uVar2 = puVar5[6];
  puVar5[0xc] = 0;
  uVar3 = puVar5[8];
  uVar4 = puVar5[10];
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[6] = uVar2;
  puVar5[8] = uVar3;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[10] = uVar4;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  return;
}


