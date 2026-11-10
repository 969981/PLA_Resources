/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e6200; name: FUN_004e6200
 */


undefined8
FUN_004e6200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
            int param_10)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_1e0 [52];
  undefined1 auStack_1ac [324];
  undefined4 local_68 [2];
  
  uVar1 = param_9;
  lVar5 = FUN_004228f0(0x40c,0);
  iVar2 = param_10;
  if (lVar5 == 0) {
    return 0;
  }
  if (0xf9 < param_5) {
    if (param_10 == 0) {
      FUN_004014b0(0x14,0x231,0x16f,"external/openssl/ssl/tls13_enc.c",0x3c);
    }
    else {
      FUN_004c99a0(param_1,0x50,0x231,0x44,"external/openssl/ssl/tls13_enc.c",0x36);
    }
    FUN_00422a10(lVar5);
    return 0;
  }
  uVar3 = FUN_0041ccc0(param_2);
  iVar4 = FUN_004cb030(auStack_1e0,auStack_1ac,0x143,0);
  if ((((iVar4 != 0) && (iVar4 = FUN_004cb590(auStack_1e0,uVar1 & 0xffffffff,2), iVar4 != 0)) &&
      (iVar4 = FUN_004cac70(auStack_1e0,1), iVar4 != 0)) &&
     (((iVar4 = FUN_004cb7f0(auStack_1e0,"tls13 ",6), iVar4 != 0 &&
       (iVar4 = FUN_004cb7f0(auStack_1e0,param_4,param_5), iVar4 != 0)) &&
      (iVar4 = FUN_004cade0(auStack_1e0), iVar4 != 0)))) {
    uVar6 = 0;
    if (param_6 != 0) {
      uVar6 = param_7;
    }
    iVar4 = FUN_004cb8e0(auStack_1e0,param_6,uVar6,1);
    if (((iVar4 != 0) && (iVar4 = switchD_004bf1a8::caseD_42(auStack_1e0,local_68), iVar4 != 0)) &&
       (iVar4 = FUN_004cb3b0(auStack_1e0), iVar4 != 0)) {
      iVar4 = FUN_00465960(lVar5);
      if ((((iVar4 < 1) || (iVar4 = FUN_00422a60(lVar5,0xffffffff,0x400,0x1007,2,0), iVar4 < 1)) ||
          (iVar4 = FUN_00422a60(lVar5,0xffffffff,0x400,0x1003,0,param_2), iVar4 < 1)) ||
         ((iVar4 = FUN_00422a60(lVar5,0xffffffff,0x400,0x1005,uVar3,param_3), iVar4 < 1 ||
          (iVar4 = FUN_00422a60(lVar5,0xffffffff,0x400,0x1006,local_68[0],auStack_1ac), iVar4 < 1)))
         ) {
        FUN_00422a10(lVar5);
      }
      else {
        iVar4 = FUN_00465ba0(lVar5,param_8,&param_9);
        FUN_00422a10(lVar5);
        if (0 < iVar4) {
          return 1;
        }
      }
      if (iVar2 == 0) {
        uVar6 = 0x66;
        goto LAB_004e6484;
      }
      uVar6 = 100;
      goto LAB_004e6438;
    }
  }
  FUN_00422a10(lVar5);
  FUN_004cbb80(auStack_1e0);
  if (iVar2 == 0) {
    uVar6 = 0x53;
LAB_004e6484:
    FUN_004014b0(0x14,0x231,0x44,"external/openssl/ssl/tls13_enc.c",uVar6);
    return 0;
  }
  uVar6 = 0x51;
LAB_004e6438:
  FUN_004c99a0(param_1,0x50,0x231,0x44,"external/openssl/ssl/tls13_enc.c",uVar6);
  return 0;
}


