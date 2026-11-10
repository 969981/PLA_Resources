/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e7130; name: FUN_004e7130
 */


undefined8
FUN_004e7130(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [64];
  
  iVar1 = FUN_0041ccc0(param_3);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: hashleni >= 0","external/openssl/ssl/tls13_enc.c",0x162);
  }
  iVar1 = FUN_004e6200(param_1,param_3,param_5,param_7,param_8,param_6,(long)iVar1,param_9,
                       (long)iVar1,1);
  if (iVar1 != 0) {
    iVar1 = FUN_0041cc80(param_4);
    uVar3 = FUN_0041c7b0(param_4);
    if ((uVar3 & 0xf0007) == 7) {
      lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
      if (lVar4 == 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x508) + 0x1f8);
      }
      lVar5 = 0x10;
      if ((*(byte *)(lVar4 + 0x26) & 3) != 0) {
        lVar5 = 8;
      }
      uVar3 = 0xc;
    }
    else {
      iVar2 = FUN_0041cc30(param_4);
      lVar5 = 0;
      uVar3 = (ulong)iVar2;
    }
    iVar1 = FUN_004e6200(param_1,param_3,param_9,&DAT_03a2878d,3,0,0,auStack_90,(long)iVar1,1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_004e6200(param_1,param_3,param_9,&DAT_03a28791,2,0,0,param_10,uVar3,1),
       iVar1 != 0)) {
      iVar1 = FUN_0041b5e0(param_11,param_4,0,0,0,param_2);
      if (((0 < iVar1) && (iVar1 = FUN_0041b980(param_11,9,uVar3 & 0xffffffff,0), iVar1 != 0)) &&
         (((lVar5 == 0 || (iVar1 = FUN_0041b980(param_11,0x11,lVar5,0), iVar1 != 0)) &&
          (iVar1 = FUN_0041b5e0(param_11,0,0,auStack_90,0,0xffffffff), 0 < iVar1)))) {
        return 1;
      }
      FUN_004c99a0(param_1,0x50,0x202,6,"external/openssl/ssl/tls13_enc.c",400);
    }
  }
  FUN_004006a0(auStack_90,0x40);
  return 0;
}


