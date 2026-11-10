/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fe4f4; name: FUN_004fe4f4
 */


void FUN_004fe4f4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char *local_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)param_1[0x22];
  uVar4 = param_1[0x27];
  uVar5 = (ulong)*(uint *)(plVar1 + 1);
  while( true ) {
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar5 - uVar4,param_1 + 0x19);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar2 = (**(code **)(**(long **)param_1[0x22] + 0x20))(*(long **)param_1[0x22],&local_50);
    if (lVar2 != 0) break;
    local_70[0] = local_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    FUN_003052c0(param_1 + 0x23,local_70);
    plVar1 = *(long **)param_1[0x22];
    uVar4 = param_1[0x27];
    uVar5 = (ulong)*(uint *)(plVar1 + 1);
    if (uVar4 == uVar5) {
      FUN_004fe2c0(param_1);
      return;
    }
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar3 = param_1[0x7b];
    *(undefined1 *)(param_1 + 0x70) = 0;
    param_1[0x7b] = 0;
    FUN_003d6e50(*param_1,param_1 + 0x71,uVar3,
                 "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                 ,300,"Continuing OnRecvTrailingMetadataReady");
  }
  uVar3 = param_1[0x18];
  param_1[0x18] = 0;
  local_50 = 
  "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
  ;
  uStack_48 = 0x123;
  FUN_00302c34(&local_50,uVar3,lVar2);
  return;
}


