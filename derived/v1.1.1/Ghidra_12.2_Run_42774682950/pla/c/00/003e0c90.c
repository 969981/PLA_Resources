/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0c90; name: FUN_003e0c90
 */


void FUN_003e0c90(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    plVar4 = *(long **)(param_1 + 200);
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_002f03c0(param_2,"external/com_google_grpc_base/src/core/lib/surface/server.cc",
                           0x3d7);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar2);
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    plVar4 = *(long **)(param_1 + 0xb0);
    plVar1 = *(long **)(param_1 + 0xb8);
    if (plVar4 != plVar1) {
      if (param_2 < 5) {
        do {
          (**(code **)(**(long **)(*plVar4 + 0x38) + 0x18))(*(long **)(*plVar4 + 0x38),param_2);
          plVar5 = plVar4 + 1;
          (**(code **)(**(long **)(*plVar4 + 0x38) + 0x10))();
          plVar4 = plVar5;
        } while (plVar1 != plVar5);
      }
      else {
        do {
          plVar5 = *(long **)(*plVar4 + 0x38);
          uVar3 = FUN_002f03c0(param_2,
                               "external/com_google_grpc_base/src/core/lib/surface/server.cc",0x3da)
          ;
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar3);
          plVar5 = plVar4 + 1;
          (**(code **)(**(long **)(*plVar4 + 0x38) + 0x10))();
          plVar4 = plVar5;
        } while (plVar1 != plVar5);
      }
    }
  }
  if (param_2 < 5) {
    return;
  }
  FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/surface/server.cc",0x3de);
  return;
}


