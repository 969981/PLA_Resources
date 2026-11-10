/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3660; name: FUN_004c3660
 */


undefined8 FUN_004c3660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_004014b0(0x14,0x20b,0x114,"external/openssl/ssl/ssl_lib.c",0x6b6);
    uVar1 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) {
    if ((*(int *)(param_1 + 0x84) == 8) || (*(int *)(param_1 + 0x84) == 1)) {
      FUN_004014b0(0x14,0x20b,0x42,"external/openssl/ssl/ssl_lib.c",0x6c1);
      uVar1 = 0;
    }
    else {
      FUN_004c9ab0(param_1,0);
      if (((*(byte *)(param_1 + 0x5d1) & 1) == 0) || (lVar2 = FUN_00406eb0(), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004c3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x38))(param_1,param_2,param_3,param_4);
        return uVar1;
      }
      local_40 = 0;
      local_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x38);
      local_58 = param_1;
      uStack_50 = param_2;
      local_48 = param_3;
      uVar1 = FUN_004c3790(param_1,&local_58,&LAB_004c3890);
      *param_4 = *(undefined8 *)(param_1 + 0x17d0);
    }
  }
  else {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return uVar1;
}


