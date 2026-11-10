/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00546fe8; name: FUN_00546fe8
 */


void FUN_00546fe8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *local_50;
  undefined1 auStack_48 [32];
  ulong local_28;
  
  local_28 = param_2;
  if (*(long *)(param_1 + 0x50) == 0) {
    if (4 < param_2) {
      FUN_002f0430(param_2,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                   ,0xca);
      return;
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
      lVar4 = *(long *)(param_1 + 0x70);
    }
    else {
      uVar3 = FUN_002f1480(param_2);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                   ,0xce,1,"resolving_lb=%p: resolver transient failure: %s",param_1,uVar3);
      lVar4 = *(long *)(param_1 + 0x70);
    }
    if (lVar4 == 0) {
      FUN_002f2c60(auStack_48,"Resolver transient failure");
      uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                           ,0xd6,auStack_48,&local_28,1);
      plVar5 = *(long **)(param_1 + 0x48);
      uVar2 = uVar1;
      if (4 < uVar1) {
        uVar2 = FUN_002f03c0(uVar1,
                             "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                             ,0xd7);
      }
      (**(code **)(*plVar5 + 0x20))(plVar5,uVar2);
      plVar5 = *(long **)(param_1 + 0x30);
      local_50 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      if (local_50 != (long *)0x0) {
        *local_50 = (long)(PTR_DAT_04374b68 + 0x10);
        local_50[1] = uVar1;
      }
                    /* try { // try from 005470b4 to 005470c3 has its CatchHandler @ 00547184 */
      (**(code **)(*plVar5 + 0x18))(plVar5,3,&local_50);
      plVar5 = local_50;
      local_50 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)*plVar5)(plVar5);
        FUN_002e2ea0(PTR_LAB_04373088,plVar5);
      }
    }
    if (4 < local_28) {
      FUN_002f0430(local_28,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                   ,0xdc);
    }
  }
  return;
}


