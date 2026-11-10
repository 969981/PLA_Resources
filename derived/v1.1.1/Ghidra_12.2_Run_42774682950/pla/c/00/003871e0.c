/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003871e0; name: FUN_003871e0
 */


void FUN_003871e0(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 auStack_80 [48];
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  long *plStack_38;
  undefined ***local_28;
  
  FUN_0030f640(auStack_80,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
               ,0x86);
                    /* try { // try from 00387218 to 003872e7 has its CatchHandler @ 00387310 */
  uVar1 = FUN_0030f3ac(auStack_80,
                       "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                      );
  uVar1 = FUN_0030f3ac(uVar1,param_3);
  uVar1 = FUN_0030f3ac(uVar1,"\n  Message type: ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0030f3ac(uVar1,"\n  Field       : ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_2 + 8));
  uVar1 = FUN_0030f3ac(uVar1,
                       "\n  Problem     : Field is not the right type for this message:\n    Expected  : "
                      );
  uVar1 = FUN_0030f3ac(uVar1,(&PTR_s_INVALID_CPPTYPE_04153e58)[param_4]);
  uVar1 = FUN_0030f3ac(uVar1,"\n    Field type: ");
  puVar2 = *(ulong **)(param_2 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_04373a98;
    local_50 = param_2;
    if (*puVar2 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      plStack_38 = &local_50;
      local_28 = &local_40;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  uVar1 = FUN_0030f3ac(uVar1,(&PTR_s_INVALID_CPPTYPE_04153e58)
                             [*(uint *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_2 + 0x38) * 4)]);
                    /* try { // try from 003872e8 to 003872ef has its CatchHandler @ 0038730c */
  FUN_0030f41c(&local_40,uVar1);
  FUN_0030f658(auStack_80);
  return;
}


