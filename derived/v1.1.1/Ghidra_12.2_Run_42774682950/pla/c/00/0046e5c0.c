/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e5c0; name: FUN_0046e5c0
 */


long FUN_0046e5c0(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined1 auStack_90 [64];
  undefined4 local_44;
  
  lVar1 = 0x439e958;
  if (param_6 != 0) {
    lVar1 = param_6;
  }
  plVar4 = (long *)FUN_0046e390();
  if (plVar4 != (long *)0x0) {
    puVar2 = &DAT_03a0c8ec;
    if (param_3 != 0 || param_2 != (undefined *)0x0) {
      puVar2 = param_2;
    }
    iVar3 = FUN_0046dda0(plVar4,puVar2,param_3,param_1,0);
    if (((((iVar3 != 0) && (*plVar4 != 0)) &&
         (iVar3 = FUN_00444ad0(plVar4[1],param_4,param_5), iVar3 != 0)) &&
        ((*plVar4 != 0 && (iVar3 = FUN_00444b90(plVar4[1],auStack_90,&local_44), iVar3 != 0)))) &&
       ((iVar3 = FUN_00444d20(plVar4[1],plVar4[3]), iVar3 != 0 &&
        ((iVar3 = FUN_00444ad0(plVar4[1],auStack_90,local_44), iVar3 != 0 &&
         (iVar3 = FUN_00444b90(plVar4[1],lVar1,param_7), iVar3 != 0)))))) {
      FUN_00444880(plVar4[2]);
      FUN_00444880(plVar4[3]);
      FUN_00444880(plVar4[1]);
      *plVar4 = 0;
      *(undefined4 *)(plVar4 + 4) = 0;
      FUN_004006a0((long)plVar4 + 0x24,0x90);
      FUN_00444950(plVar4[2]);
      FUN_00444950(plVar4[3]);
      FUN_00444950(plVar4[1]);
      FUN_00400420(plVar4,"external/openssl/crypto/hmac/hmac.c",0xa3);
      return lVar1;
    }
  }
  FUN_0046e430(plVar4);
  return 0;
}


