/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00597fd0; name: FUN_00597fd0
 */


void FUN_00597fd0(char *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*param_1 == '\x02') {
LAB_00598008:
    if ((*(long *)(param_2 + 0x48) == 0) &&
       (uVar3 = FUN_005ac230(param_2,param_3), (uVar3 & 1) != 0)) {
      FUN_00598b70(param_3,"chttp2_writing:become");
    }
  }
  else if (*param_1 == '\x01') {
    FUN_00598190(param_2,10);
    goto LAB_00598008;
  }
  if (param_1[1] == '\x01') {
    FUN_00598190(param_2,0xb);
  }
  puVar2 = PTR_PTR_04374ef0;
  if (param_1[2] != '\x02') {
    if (param_1[2] != '\x01') goto LAB_005980a0;
    FUN_00598190(param_2,0xc);
  }
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(puVar2 + 0x6c);
  if (uVar1 < uVar4) {
    if (uVar4 == uVar1) goto LAB_00598088;
LAB_00598114:
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                 *(undefined8 *)(puVar2 + 0x60),uVar1,uVar4);
    if (uVar4 == *(uint *)(param_2 + 0xe64)) goto LAB_005980a0;
  }
  else {
    uVar4 = *(uint *)(puVar2 + 0x70);
    if (uVar1 <= *(uint *)(puVar2 + 0x70)) {
      uVar4 = uVar1;
    }
    if (uVar4 != uVar1) goto LAB_00598114;
LAB_00598088:
    if (uVar4 == *(uint *)(param_2 + 0xe64)) goto LAB_005980a0;
  }
  *(uint *)(param_2 + 0xe64) = uVar4;
  *(undefined1 *)(param_2 + 0xe34) = 1;
LAB_005980a0:
  if (param_1[3] != '\x02') {
    if (param_1[3] != '\x01') {
      return;
    }
    FUN_00598190(param_2,0xc);
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(puVar2 + 0x8c);
  if ((uVar1 <= uVar4) && (uVar1 = *(uint *)(puVar2 + 0x90), uVar4 <= *(uint *)(puVar2 + 0x90))) {
    uVar1 = uVar4;
  }
  if (uVar1 == uVar4) {
    if (uVar1 == *(uint *)(param_2 + 0xe68)) {
      return;
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                 *(undefined8 *)(puVar2 + 0x80),uVar4,uVar1);
    if (uVar1 == *(uint *)(param_2 + 0xe68)) {
      return;
    }
  }
  *(uint *)(param_2 + 0xe68) = uVar1;
  *(undefined1 *)(param_2 + 0xe34) = 1;
  return;
}


