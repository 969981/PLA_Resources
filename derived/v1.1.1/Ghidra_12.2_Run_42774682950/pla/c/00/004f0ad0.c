/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0ad0; name: FUN_004f0ad0
 */


undefined8 FUN_004f0ad0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_28;
  
  lVar2 = FUN_004e30e0(param_2,&local_28);
  if (lVar2 == 0) {
    uVar4 = 0xf7;
    uVar5 = 0x85;
LAB_004f0bd0:
    FUN_004014b0(0x14,0xc1,uVar4,"external/openssl/ssl/ssl_rsa.c",uVar5);
    return 0;
  }
  if (param_1[local_28 * 5 + 4] != 0) {
    lVar2 = FUN_0044e660();
    if (lVar2 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x8d;
      goto LAB_004f0bd0;
    }
    FUN_00422d90(lVar2,param_2);
    FUN_004016d0();
    iVar1 = FUN_00423a50(param_2);
    if (iVar1 == 6) {
      FUN_00423740(param_2);
      uVar3 = FUN_004568b0();
      if ((uVar3 & 1) != 0) goto LAB_004f0b58;
    }
    iVar1 = FUN_0044e670(param_1[local_28 * 5 + 4],param_2);
    if (iVar1 == 0) {
      FUN_00460a80(param_1[local_28 * 5 + 4]);
      param_1[local_28 * 5 + 4] = 0;
      return 0;
    }
  }
LAB_004f0b58:
  FUN_00423420(param_1[local_28 * 5 + 5]);
  FUN_004231b0(param_2);
  (param_1 + local_28 * 5 + 4)[1] = param_2;
  *param_1 = (long)(param_1 + local_28 * 5 + 4);
  return 1;
}


