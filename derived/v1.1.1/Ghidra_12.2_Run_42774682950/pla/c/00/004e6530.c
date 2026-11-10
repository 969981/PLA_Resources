/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e6530; name: FUN_004e6530
 */


undefined8
FUN_004e6530(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,ulong param_5,
            undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  ulong local_48;
  
  lVar4 = FUN_004228f0(0x40c,0);
  if (lVar4 == 0) {
    FUN_004c99a0(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",0xa4);
    return 0;
  }
  iVar3 = FUN_0041ccc0(param_2);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: mdleni >= 0","external/openssl/ssl/tls13_enc.c",0xaa);
  }
  local_48 = (ulong)iVar3;
  uVar1 = local_48;
  if (param_4 != (undefined *)0x0) {
    uVar1 = param_5;
  }
  puVar7 = &UNK_03a287a5;
  puVar2 = &UNK_03a287a5;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
  }
  uVar8 = 0;
  if (param_3 == 0) {
LAB_004e6624:
    iVar3 = FUN_00465960(lVar4);
    if ((((iVar3 < 1) || (iVar3 = FUN_00422a60(lVar4,0xffffffff,0x400,0x1007,1,0), iVar3 < 1)) ||
        ((iVar3 = FUN_00422a60(lVar4,0xffffffff,0x400,0x1003,0,param_2), iVar3 < 1 ||
         ((iVar3 = FUN_00422a60(lVar4,0xffffffff,0x400,0x1005,uVar1 & 0xffffffff,puVar2), iVar3 < 1
          || (iVar3 = FUN_00422a60(lVar4,0xffffffff,0x400,0x1004,uVar8,puVar7), iVar3 < 1)))))) ||
       (iVar3 = FUN_00465ba0(lVar4,param_6,&local_48), iVar3 < 1)) {
      FUN_004c99a0(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",0xe2);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    FUN_00422a10(lVar4);
    if (puVar7 == auStack_90) {
      FUN_004006a0(auStack_90,local_48);
    }
  }
  else {
    lVar5 = FUN_00444930();
    if (((lVar5 == 0) || (iVar3 = FUN_004449b0(lVar5,param_2,0), iVar3 < 1)) ||
       (iVar3 = FUN_00444b90(lVar5,auStack_d0,0), iVar3 < 1)) {
      FUN_004c99a0(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",0xc1);
      FUN_00444950(lVar5);
    }
    else {
      FUN_00444950(lVar5);
      iVar3 = FUN_004e6200(param_1,param_2,param_3,"derived",7,auStack_d0,local_48,auStack_90,
                           local_48,1);
      if (iVar3 != 0) {
        uVar8 = local_48 & 0xffffffff;
        puVar7 = auStack_90;
        goto LAB_004e6624;
      }
    }
    FUN_00422a10(lVar4);
    uVar6 = 0;
  }
  return uVar6;
}


