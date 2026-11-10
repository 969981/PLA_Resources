/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006617a0; name: FUN_006617a0
 */


void FUN_006617a0(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  long *plVar1;
  int local_68 [2];
  byte local_60;
  undefined8 local_50;
  byte local_48;
  undefined8 local_38;
  uint local_28;
  char local_24;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined8 *)(param_1 + 0x410) = param_4;
    local_24 = (char)param_3[1];
    local_28 = *param_3;
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x239);
    *(undefined8 *)(param_1 + 0x410) = param_4;
    local_24 = (char)param_3[1];
    local_28 = *param_3;
  }
  if (local_24 != '\0') {
    local_28 = local_28 | 1;
    *param_3 = local_28;
    *(undefined1 *)(param_1 + 0x401) = 1;
  }
  FUN_006618e8(local_68,param_1 + 0x3b0,param_2,&local_28);
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (local_68[0] != 0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"write_ops_.SendMessage(msg, options).ok()",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x240);
  }
  plVar1 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x380,(undefined8 *)(param_1 + 0x20));
  return;
}


