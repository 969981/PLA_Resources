/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1f00; name: FUN_004c1f00
 */


undefined8 FUN_004c1f00(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  local_28 = 0;
  puVar3 = (undefined4 *)FUN_004dbff0(param_2);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_004c99a0(param_1,0x50,0x22f,0x44,"external/openssl/ssl/s3_lib.c",0x126e);
    lVar4 = 0;
    goto LAB_004c205c;
  }
  uVar1 = *(ushort *)(puVar3 + 2);
  if ((uVar1 & 3) == 2) {
    lVar4 = FUN_004228f0(*puVar3,0);
    if (lVar4 != 0) goto LAB_004c1f48;
LAB_004c2004:
    uVar5 = 0x41;
    uVar6 = 0x1278;
  }
  else {
    lVar4 = FUN_004228f0(0x198,0);
    if (lVar4 == 0) goto LAB_004c2004;
LAB_004c1f48:
    iVar2 = FUN_00470410(lVar4);
    if (iVar2 < 1) {
      uVar6 = 0x127d;
    }
    else {
      if (((uVar1 & 3) == 2) || (iVar2 = FUN_00422a60(lVar4,0x198,6,0x1001,*puVar3,0), 0 < iVar2)) {
        iVar2 = FUN_004704a0(lVar4,&local_28);
        if (iVar2 < 1) {
          FUN_004c99a0(param_1,0x50,0x22f,6,"external/openssl/ssl/s3_lib.c",0x1288);
          FUN_00423420(local_28);
          local_28 = 0;
        }
        goto LAB_004c205c;
      }
      uVar6 = 0x1283;
    }
    uVar5 = 6;
  }
  FUN_004c99a0(param_1,0x50,0x22f,uVar5,"external/openssl/ssl/s3_lib.c",uVar6);
LAB_004c205c:
  FUN_00422a10(lVar4);
  return local_28;
}


