/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050551c; name: FUN_0050551c
 */


void FUN_0050551c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
  if (param_1[0x22] == (ulong)*(uint *)(plVar1 + 1)) {
    FUN_00505318(param_1,param_2);
    return;
  }
  while( true ) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xffffffffffffffff,param_1 + 0x75);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_60);
    if (uVar2 != 0) break;
    uStack_78 = uStack_58;
    local_80 = local_60;
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    FUN_003052c0(param_1 + 0x1e,&local_80);
    plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
    if (param_1[0x22] == (ulong)*(uint *)(plVar1 + 1)) {
      FUN_00505318(param_1,param_2);
      return;
    }
  }
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    uVar3 = uVar2;
    if (4 < uVar2) {
      uVar3 = FUN_002f03c0(uVar2,
                           "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                           ,0x163);
    }
    FUN_003d5fa0(lVar4,uVar3,*param_1);
    param_1[3] = 0;
  }
  if (uVar2 < 5) {
    return;
  }
  FUN_002f0430(uVar2,
               "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
               ,0x185);
  return;
}


