/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004449b0; name: FUN_004449b0
 */


undefined8 FUN_004449b0(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_0041cd60(param_1,2);
  lVar3 = *param_1;
  if (lVar3 != param_2) {
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x44) != 0)) {
      FUN_00400620(param_1[3],(long)*(int *)(lVar3 + 0x44),"external/openssl/crypto/evp/digest.c",
                   0x7b);
      param_1[3] = 0;
    }
    *param_1 = param_2;
    if (((*(byte *)((long)param_1 + 0x11) & 1) == 0) &&
       (iVar1 = *(int *)(param_2 + 0x44), iVar1 != 0)) {
      param_1[5] = *(long *)(param_2 + 0x20);
      lVar3 = FUN_004002a0((long)iVar1,"external/openssl/crypto/evp/digest.c",0x81);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        FUN_004014b0(6,0x80,0x41,"external/openssl/crypto/evp/digest.c",0x83);
        return 0;
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = FUN_00422a60(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 != -2)) && (iVar1 < 1)) {
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00444a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    return uVar2;
  }
  return 1;
}


