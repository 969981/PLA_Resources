/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3930; name: FUN_004c3930
 */


undefined8 FUN_004c3930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar2 = 0x114;
    uVar3 = 0x776;
  }
  else {
    if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x84) < 0xb) &&
         ((1 << (ulong)(*(uint *)(param_1 + 0x84) & 0x1f) & 0x502U) != 0)) {
        FUN_004014b0(0x14,0x20c,0x42,"external/openssl/ssl/ssl_lib.c",0x783);
        return 0;
      }
      FUN_004c9ab0(param_1,1);
      if (((*(byte *)(param_1 + 0x5d1) & 1) == 0) || (lVar1 = FUN_00406eb0(), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004c3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      local_40 = 1;
      local_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
      local_58 = param_1;
      uStack_50 = param_2;
      local_48 = param_3;
      uVar2 = FUN_004c3790(param_1,&local_58,&LAB_004c3890);
      *param_4 = *(undefined8 *)(param_1 + 0x17d0);
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar2 = 0xcf;
    uVar3 = 0x77c;
  }
  FUN_004014b0(0x14,0x20c,uVar2,"external/openssl/ssl/ssl_lib.c",uVar3);
  return 0xffffffff;
}


