/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00653308; name: FUN_00653308
 */


void FUN_00653308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x41);
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_unary_call_impl.h",
               0x89);
    cVar1 = *(char *)(param_1 + 0x41);
  }
  if (cVar1 == '\0') {
    puVar4 = *(undefined1 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x160) = param_4;
    *puVar4 = 1;
    *(undefined1 *)(param_1 + 0x100) = 1;
    *(undefined8 *)(param_1 + 0xf0) = param_2;
    *(undefined1 **)(param_1 + 0xe0) = puVar4 + 0xb0;
    *(undefined1 **)(param_1 + 0x110) = puVar4;
    *(undefined1 **)(param_1 + 0x118) = puVar4 + 0xe8;
    *(undefined8 *)(param_1 + 0x120) = param_3;
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x138))(&local_50);
    *(undefined8 *)(param_1 + 0x150) = uStack_38;
    *(undefined8 *)(param_1 + 0x148) = uStack_40;
    *(undefined8 *)(param_1 + 0x140) = uStack_48;
    *(undefined8 *)(param_1 + 0x138) = local_50;
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = param_1 + 0x50;
  }
  else {
    *(undefined1 *)(param_1 + 0x2e0) = 1;
    *(long *)(param_1 + 0x2f0) = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x340) = param_4;
    *(undefined8 *)(param_1 + 0x2d0) = param_2;
    *(undefined8 *)(param_1 + 0x300) = param_3;
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 8) + 0xe8;
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x138))(&local_50);
    *(undefined8 *)(param_1 + 0x330) = uStack_38;
    *(undefined8 *)(param_1 + 0x328) = uStack_40;
    *(undefined8 *)(param_1 + 800) = uStack_48;
    *(undefined8 *)(param_1 + 0x318) = local_50;
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = param_1 + 0x2c0;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,lVar3,param_1 + 0x10);
  return;
}


