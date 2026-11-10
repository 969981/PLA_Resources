/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00381c00; name: FUN_00381c00
 */


long FUN_00381c00(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  undefined **local_70;
  long *plStack_68;
  long local_40;
  undefined *puStack_38;
  undefined1 *local_28;
  
  lVar6 = *(long *)(param_3 + 0x58);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar6 + 0x20) + 0x41) != '\0') goto LAB_00381cbc;
      if (*(char *)(**(long **)(lVar6 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(&local_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 00381c68 to 00381c7b has its CatchHandler @ 00381d98 */
        uVar2 = FUN_0030f3ac(&local_70,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00381c7c to 00381c83 has its CatchHandler @ 00381d94 */
        FUN_0030f41c(&local_28,uVar2);
        FUN_0030f658(&local_70);
      }
    }
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                             (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x30)) >> 4)
                             * -0x55555554)) != *(int *)(param_3 + 0x44)) {
      param_2 = *(long *)(param_1 + 8);
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar1 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x10) +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
      uVar3 = (ulong)uVar1;
      puVar4 = *(ulong **)(param_3 + 0x30);
      if (puVar4 != (ulong *)0x0) {
        puStack_38 = PTR_LAB_04373a98;
        if (*puVar4 != 0xffffffffffffffff) {
          local_70 = &puStack_38;
          plStack_68 = &local_40;
          local_40 = param_3;
          local_28 = (undefined1 *)&local_70;
          std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar3 = (ulong)(uVar1 & 0xfffffffe);
      }
      goto LAB_00381ccc;
    }
  }
LAB_00381cbc:
  uVar3 = FUN_0038fe58(param_1 + 8,param_3);
  uVar3 = uVar3 & 0xffffffff;
LAB_00381ccc:
  return param_2 + uVar3;
}


