/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592820; name: FUN_00592820
 */


int FUN_00592820(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5,
                uint param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  int iVar2;
  void *local_50;
  undefined8 local_48;
  
  iVar2 = 2;
  if ((param_1 != 0) && (param_8 != 0)) {
    local_50 = (void *)0x0;
    local_48 = 0;
    iVar2 = FUN_0058f8b0(param_1,param_2,0xc,0x10,param_3 & 1,&local_48,&local_50);
    if (iVar2 == 0) {
      uVar1 = 8;
      if ((param_3 & 1) == 0) {
        uVar1 = 5;
      }
      if ((param_5 & 1) == 0) {
        iVar2 = FUN_00594920(local_48,uVar1,param_4 & 1,param_6 & 1,param_8);
      }
      else {
        iVar2 = FUN_00594350();
      }
      if (iVar2 != 0) {
        FUN_0058f6d0(local_48);
      }
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_zero_copy_grpc_protector.cc"
                   ,0x81,2,"Failed to create AEAD crypter, %s",local_50);
      free(local_50);
      iVar2 = 7;
    }
  }
  return iVar2;
}


