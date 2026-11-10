/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8430; name: FUN_004c8430
 */


undefined8 FUN_004c8430(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = FUN_004f5dc0(*(undefined8 *)(param_2 + 8));
  if (99 < uVar2) {
    return 0;
  }
  puVar3 = (undefined8 *)FUN_00400260(0x88,"external/openssl/ssl/record/rec_layer_d1.c",0x94);
  lVar4 = FUN_004f5b70(param_3,puVar3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar4 == 0)) {
    FUN_00400420(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0x97);
    FUN_004f5be0(lVar4);
    FUN_004c99a0(param_1,0x50,0xf7,0x44,"external/openssl/ssl/record/rec_layer_d1.c",0x9a);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x1740);
    puVar3[1] = *(undefined8 *)(param_1 + 0x1748);
    *puVar3 = uVar6;
    uVar7 = *(undefined8 *)(param_1 + 0x820);
    uVar6 = *(undefined8 *)(param_1 + 0x818);
    uVar9 = *(undefined8 *)(param_1 + 0x830);
    uVar8 = *(undefined8 *)(param_1 + 0x828);
    puVar3[6] = *(undefined8 *)(param_1 + 0x838);
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    uVar7 = *(undefined8 *)(param_1 + 0xd68);
    uVar6 = *(undefined8 *)(param_1 + 0xd60);
    uVar9 = *(undefined8 *)(param_1 + 0xd78);
    uVar8 = *(undefined8 *)(param_1 + 0xd70);
    uVar11 = *(undefined8 *)(param_1 + 0xd88);
    uVar10 = *(undefined8 *)(param_1 + 0xd80);
    uVar12 = *(undefined8 *)(param_1 + 0xd50);
    puVar3[10] = *(undefined8 *)(param_1 + 0xd58);
    puVar3[9] = uVar12;
    puVar3[0x10] = uVar11;
    puVar3[0xf] = uVar10;
    puVar3[0xe] = uVar9;
    puVar3[0xd] = uVar8;
    puVar3[0xc] = uVar7;
    puVar3[0xb] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xd40);
    puVar3[8] = *(undefined8 *)(param_1 + 0xd48);
    puVar3[7] = uVar6;
    *(undefined8 **)(lVar4 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x828) = 0;
    *(undefined8 *)(param_1 + 0x820) = 0;
    *(undefined8 *)(param_1 + 0x818) = 0;
    memset((void *)(param_1 + 0xd40),0,0xa10);
    iVar1 = FUN_004c97a0(param_1);
    if (iVar1 != 0) {
      lVar5 = FUN_004f5c60(*(undefined8 *)(param_2 + 8),lVar4);
      if (lVar5 == 0) {
        FUN_00400420(puVar3[2],"external/openssl/ssl/record/rec_layer_d1.c",0xbe);
        FUN_00400420(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0xbf);
        FUN_004f5be0(lVar4);
      }
      return 1;
    }
    FUN_00400420(puVar3[2],"external/openssl/ssl/record/rec_layer_d1.c",0xb6);
    FUN_00400420(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0xb7);
    FUN_004f5be0(lVar4);
  }
  return 0xffffffff;
}


