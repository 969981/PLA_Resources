/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c2180; name: FUN_004c2180
 */


uint FUN_004c2180(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_28;
  
  local_28 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_004c99a0(param_1,0x50,0x24e,0x44,"external/openssl/ssl/s3_lib.c",0x12c2);
    return 0;
  }
  uVar2 = FUN_00422780(param_2,0);
  iVar1 = FUN_00465960();
  if (((iVar1 < 1) || (iVar1 = FUN_004659f0(uVar2,param_3), iVar1 < 1)) ||
     (iVar1 = FUN_00465ba0(uVar2,0,&local_28), iVar1 < 1)) {
    FUN_004c99a0(param_1,0x50,0x24e,0x44,"external/openssl/ssl/s3_lib.c",0x12cc);
    uVar7 = 0;
LAB_004c22e0:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00400260(local_28,"external/openssl/ssl/s3_lib.c",0x12d0);
    if (lVar3 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x12d3;
    }
    else {
      iVar1 = FUN_00465ba0(uVar2,lVar3,&local_28);
      if (0 < iVar1) {
        if (param_4 != 0) {
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
              (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
            if (*(int *)(param_1 + 200) == 0) {
              uVar4 = FUN_004bda70(param_1);
              iVar1 = FUN_004e6530(param_1,uVar4,0,0,0,param_1 + 0x134);
              if (iVar1 == 0) {
                uVar7 = 0;
                goto LAB_004c22e4;
              }
            }
            iVar1 = FUN_004e67c0(param_1,lVar3,local_28);
            uVar7 = (uint)(iVar1 != 0);
          }
          else {
            uVar7 = FUN_004c1c90(param_1,lVar3,local_28,0);
          }
          goto LAB_004c22e4;
        }
        lVar6 = *(long *)(param_1 + 0xa8);
        *(long *)(lVar6 + 0x2b8) = lVar3;
        uVar7 = 1;
        *(undefined8 *)(lVar6 + 0x2c0) = local_28;
        goto LAB_004c22e0;
      }
      uVar4 = 0x44;
      uVar5 = 0x12d9;
    }
    FUN_004c99a0(param_1,0x50,0x24e,uVar4,"external/openssl/ssl/s3_lib.c",uVar5);
    uVar7 = 0;
  }
LAB_004c22e4:
  FUN_00400620(lVar3,local_28,"external/openssl/ssl/s3_lib.c",0x12f8);
  FUN_00422a10(uVar2);
  return uVar7;
}


