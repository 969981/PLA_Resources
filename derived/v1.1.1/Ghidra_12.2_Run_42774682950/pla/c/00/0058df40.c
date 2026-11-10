/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058df40; name: FUN_0058df40
 */


undefined8
FUN_0058df40(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong *param_5,
            undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((param_1 == 0) || (param_6 == (undefined8 *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/alts_frame_protector.cc"
                 ,0x172,2,"Invalid nullptr arguments to alts_create_frame_protector().");
  }
  else {
    local_60 = (void *)0x0;
    puVar2 = (undefined8 *)FUN_002ebd80(0x68);
    local_48 = 0;
    local_58 = 0;
    iVar1 = FUN_0058f8b0(param_1,param_2,0xc,0x10,param_4 & 1,&local_48,&local_60);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_0058f8b0(param_1,param_2,0xc,0x10,param_4 & 1,&local_58,&local_60), iVar1 == 0))
    {
      uVar3 = 8;
      if ((param_4 & 1) == 0) {
        uVar3 = 5;
      }
      iVar1 = FUN_0058ec90(local_48,param_3 & 1,uVar3,puVar2 + 1,&local_60);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0058f710(local_58,param_3 & 1,uVar3,puVar2 + 2,&local_60), iVar1 == 0)) {
        if (param_5 == (ulong *)0x0) {
          uVar4 = 0x4000;
        }
        else {
          uVar4 = *param_5;
          if (0xfffff < uVar4) {
            uVar4 = 0x100000;
          }
          if (uVar4 < 0x401) {
            uVar4 = 0x400;
          }
          *param_5 = uVar4;
        }
        puVar2[9] = uVar4;
        puVar2[10] = uVar4;
        puVar2[7] = 0;
        puVar2[8] = 0;
        uVar3 = FUN_002ebd50(uVar4);
        puVar2[5] = uVar3;
        uVar3 = FUN_002ebd50(uVar4);
        puVar2[6] = uVar3;
        uVar3 = FUN_0058e780(puVar2[1]);
        puVar2[0xb] = uVar3;
        uVar3 = FUN_0058e7e0();
        puVar2[3] = uVar3;
        uVar3 = FUN_0058e9e0();
        puVar2[4] = uVar3;
        *puVar2 = &PTR_LAB_0418a0c0;
        *param_6 = puVar2;
        return 0;
      }
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/alts_frame_protector.cc"
                 ,0x17c,2,"Failed to create ALTS crypters, %s.",local_60);
    free(local_60);
  }
  return 7;
}


