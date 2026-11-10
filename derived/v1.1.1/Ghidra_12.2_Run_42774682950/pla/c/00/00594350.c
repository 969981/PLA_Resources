/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594350; name: FUN_00594350
 */


int FUN_00594350(long param_1,undefined8 param_2,uint param_3,uint param_4,byte param_5,
                undefined8 *param_6)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (param_6 == (undefined8 *)0x0)) {
    iVar1 = 2;
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_integrity_only_record_protocol.cc"
                 ,0xce,2,"Invalid nullptr arguments to alts_grpc_record_protocol create.");
  }
  else {
    __ptr = (undefined8 *)FUN_002ebd80(0x298);
    iVar1 = FUN_00592f30(__ptr,param_1,param_2,param_3 & 1,1,param_4 & 1);
    if (iVar1 == 0) {
      *(byte *)(__ptr + 0x2c) = param_5 & 1;
      FUN_00305000(__ptr + 0x2d);
      uVar2 = FUN_002ebd50(__ptr[0x29]);
      __ptr[0x52] = uVar2;
      *__ptr = &PTR_FUN_0418a358;
      *param_6 = __ptr;
    }
    else {
      free(__ptr);
    }
  }
  return iVar1;
}


