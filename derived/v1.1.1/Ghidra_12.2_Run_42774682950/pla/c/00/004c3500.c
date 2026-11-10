/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3500; name: FUN_004c3500
 */


undefined8 FUN_004c3500(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_38 [5];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_004014b0(0x14,0xb4,0x90,"external/openssl/ssl/ssl_lib.c",0xdff);
    return 0xffffffff;
  }
  FUN_004c9ab0(param_1,0xffffffff);
  (**(code **)(*(long *)(param_1 + 8) + 0x60))(param_1,0);
  iVar1 = FUN_004c9920(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_004c9950(param_1), iVar1 == 0)) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x5d1) & 1) == 0) || (lVar2 = FUN_00406eb0(), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004c3568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x30))(param_1);
    return uVar3;
  }
  local_38[0] = param_1;
  uVar3 = FUN_004c3790(param_1,local_38,&LAB_004c4f40);
  return uVar3;
}


