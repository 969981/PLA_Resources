/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a77c0; name: FUN_005a77c0
 */


void FUN_005a77c0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_30 [32];
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 == 0) {
    FUN_002f2c60(auStack_30,"Metadata keys cannot be zero length");
    uVar2 = 0x44;
  }
  else if (uVar1 >> 0x20 == 0) {
    pcVar3 = (char *)param_1[2];
    if (*param_1 == 0) {
      pcVar3 = (char *)((long)param_1 + 9);
    }
    if (*pcVar3 != ':') {
      FUN_005a78a0(param_1,&DAT_03a34b5c,"Illegal header key");
      return;
    }
    FUN_002f2c60(auStack_30,"Metadata keys cannot start with :");
    uVar2 = 0x4c;
  }
  else {
    FUN_002f2c60(auStack_30,"Metadata keys cannot be larger than UINT32_MAX");
    uVar2 = 0x48;
  }
  FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/validate_metadata.cc",uVar2,
               auStack_30,0,0);
  return;
}


