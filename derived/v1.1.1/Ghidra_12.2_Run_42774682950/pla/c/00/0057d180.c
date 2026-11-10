/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057d180; name: FUN_0057d180
 */


undefined8 FUN_0057d180(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  local_18 = 0;
  lVar1 = FUN_0057ce70(param_1,param_2,&local_18);
  if (local_18 != 0) {
    FUN_002f1e00("Could not copy JSON property",local_18,
                 "external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",0x44);
  }
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_002ec2d0(lVar1);
  *param_3 = uVar2;
  return 1;
}


