/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f51a0; name: FUN_003f51a0
 */


undefined8 FUN_003f51a0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_48;
  undefined8 local_40;
  undefined *local_38;
  
  puVar1 = PTR_DAT_04373fe8;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0xcf,1,"grpc_auth_context_find_properties_by_name(ctx=%p, name=%s)",param_1,param_2
                );
  }
  if ((param_1 == 0) || (param_2 == (undefined *)0x0)) {
    local_38 = (undefined *)0x0;
    local_48 = 0;
  }
  else {
    local_48 = param_1;
    local_38 = param_2;
  }
  local_40 = 0;
  puVar2 = (undefined8 *)FUN_003f5320(&local_48);
  if (puVar1[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0x9a,1,"grpc_auth_context_set_peer_identity_property_name(ctx=%p, name=%s)",param_1
                 ,param_2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = &DAT_038da8c3;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc",
                 0x9c,2,"Property name %s not found in auth context.",puVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x30) = *puVar2;
  }
  return uVar3;
}


