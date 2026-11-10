/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00499030; name: FUN_00499030
 */


undefined8 FUN_00499030(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049907c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_0040de30();
  if (lVar3 != 0) {
    FUN_0040e090(lVar3);
    uVar2 = FUN_0040e240(lVar3);
    lVar4 = FUN_0040e240(lVar3);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        lVar5 = FUN_0040c260();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_004990fc;
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        lVar5 = FUN_0040c260();
        *(long *)(param_1 + 0x10) = lVar5;
        if (lVar5 == 0) goto LAB_004990fc;
      }
      if (param_3 < 2) {
        FUN_004014b0(5,0x6a,0x65,"external/openssl/crypto/dh/dh_gen.c",0x51);
      }
      else if (param_3 == 5) {
        iVar1 = FUN_0040c6b0(uVar2,10);
        if (iVar1 != 0) {
          iVar1 = FUN_0040c6b0(lVar4,3);
          goto joined_r0x004991b4;
        }
      }
      else if (param_3 == 2) {
        iVar1 = FUN_0040c6b0(uVar2,0x18);
        if (iVar1 != 0) {
          iVar1 = FUN_0040c6b0(lVar4,0xb);
joined_r0x004991b4:
          if ((((iVar1 != 0) &&
               (iVar1 = FUN_0042a0d0(*(undefined8 *)(param_1 + 8),param_2,1,uVar2,lVar4,param_4),
               iVar1 != 0)) && (iVar1 = FUN_0042a060(param_4,3,0), iVar1 != 0)) &&
             (iVar1 = FUN_0040c6b0(*(undefined8 *)(param_1 + 0x10),param_3), iVar1 != 0)) {
            uVar2 = 1;
            goto LAB_0049911c;
          }
        }
      }
      else {
        iVar1 = FUN_0040c6b0(uVar2,2);
        if (iVar1 != 0) {
          iVar1 = FUN_0040c6b0(lVar4,1);
          goto joined_r0x004991b4;
        }
      }
    }
  }
LAB_004990fc:
  FUN_004014b0(5,0x6a,3,"external/openssl/crypto/dh/dh_gen.c",0x79);
  uVar2 = 0;
LAB_0049911c:
  FUN_0040e1b0(lVar3);
  FUN_0040def0(lVar3);
  return uVar2;
}


