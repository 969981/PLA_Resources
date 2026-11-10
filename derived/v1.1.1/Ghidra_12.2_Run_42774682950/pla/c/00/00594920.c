/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594920; name: FUN_00594920
 */


int FUN_00594920(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *__ptr;
  
  if ((param_1 == 0) || (param_5 == (undefined8 *)0x0)) {
    iVar1 = 2;
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_privacy_integrity_record_protocol.cc"
                 ,0x83,2,"Invalid nullptr arguments to alts_grpc_record_protocol create.");
  }
  else {
    __ptr = (undefined8 *)FUN_002ebd80(0x160);
    iVar1 = FUN_00592f30(__ptr,param_1,param_2,param_3 & 1,0,param_4 & 1);
    if (iVar1 == 0) {
      *__ptr = &PTR_FUN_0418a370;
      *param_5 = __ptr;
    }
    else {
      free(__ptr);
    }
  }
  return iVar1;
}


