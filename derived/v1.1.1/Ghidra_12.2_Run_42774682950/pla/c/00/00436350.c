/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00436350; name: FUN_00436350
 */


undefined8
FUN_00436350(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0040c070(param_2);
  if ((iVar1 < 3) || (iVar1 = FUN_0040d2b0(param_2), iVar1 == 0)) {
    FUN_004014b0(0x10,0xa6,0x67,"external/openssl/crypto/ec/ecp_smpl.c",0x90);
    return 0;
  }
  if (param_5 == 0) {
    param_5 = FUN_0040de30();
    lVar4 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar4 = 0;
  }
  FUN_0040e090(param_5);
  lVar2 = FUN_0040e240(param_5);
  if ((lVar2 != 0) && (lVar3 = FUN_0040c5d0(param_1[8],param_2), lVar3 != 0)) {
    FUN_0040cea0(param_1[8],0);
    iVar1 = FUN_00412c30(lVar2,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
        lVar3 = FUN_0040c5d0(param_1[0xc],lVar2);
        if (lVar3 != 0) goto LAB_0043645c;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xc],lVar2,param_5);
        if (iVar1 != 0) {
LAB_0043645c:
          iVar1 = FUN_00412c30(param_1[0xd],param_4,param_2,param_5);
          if ((iVar1 != 0) &&
             (((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
               (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xd],param_1[0xd],param_5),
               iVar1 != 0)) && (iVar1 = FUN_0040bd20(lVar2,3), iVar1 != 0)))) {
            iVar1 = FUN_0040cc60(lVar2,param_1[8]);
            *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
            uVar5 = 1;
            goto LAB_004364cc;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_004364cc:
  FUN_0040e1b0(param_5);
  FUN_0040def0(lVar4);
  return uVar5;
}


