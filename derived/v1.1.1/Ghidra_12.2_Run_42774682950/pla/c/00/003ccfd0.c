/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ccfd0; name: FUN_003ccfd0
 */


void FUN_003ccfd0(ulong param_1,uint *param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [8];
  long local_180;
  ulong local_178;
  uint local_54;
  
  lVar3 = FUN_003d9f90(param_1,&LAB_003cd1f0);
  if (lVar3 == 0) {
    *param_2 = 0;
    uVar5 = param_1 & 0xfffffffffffffffc;
    uStack_1a8 = *(undefined8 *)(uVar5 + 0x28);
    local_1b0 = *(undefined8 *)(uVar5 + 0x20);
    uStack_198 = *(undefined8 *)(uVar5 + 0x38);
    uStack_1a0 = *(undefined8 *)(uVar5 + 0x30);
    FUN_00305000(auStack_188);
    uStack_1c8 = uStack_1a8;
    local_1d0 = local_1b0;
    uStack_1b8 = uStack_198;
    uStack_1c0 = uStack_1a0;
    FUN_00304f90(&local_1d0,&DAT_038ee629,auStack_188);
    *param_2 = *param_2 | 1;
    if (local_178 != 0) {
      lVar3 = 0;
      uVar5 = 0;
      if ((param_3 & 1) == 0) {
        do {
          puVar1 = (undefined8 *)(local_180 + lVar3);
          uStack_1e8 = puVar1[1];
          local_1f0 = *puVar1;
          uStack_1d8 = puVar1[3];
          uStack_1e0 = puVar1[2];
          uStack_208 = puVar1[1];
          local_210 = *puVar1;
          uStack_1f8 = puVar1[3];
          uStack_200 = puVar1[2];
          iVar2 = FUN_003f1b90(&local_210,&local_54);
          if (iVar2 == 0) {
            uStack_248 = uStack_1e8;
            local_250 = local_1f0;
            uStack_238 = uStack_1d8;
            uStack_240 = uStack_1e0;
            pvVar4 = (void *)FUN_002f2680(&local_250);
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x35b,0,
                         "Unknown entry in accept encoding metadata: \'%s\'. Ignoring.",pvVar4);
            free(pvVar4);
          }
          else {
            *param_2 = *param_2 | 1 << (ulong)(local_54 & 0x1f);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < local_178);
      }
      else {
        do {
          puVar1 = (undefined8 *)(local_180 + lVar3);
          uStack_1e8 = puVar1[1];
          local_1f0 = *puVar1;
          uStack_1d8 = puVar1[3];
          uStack_1e0 = puVar1[2];
          uStack_228 = puVar1[1];
          local_230 = *puVar1;
          uStack_218 = puVar1[3];
          uStack_220 = puVar1[2];
          iVar2 = FUN_003f1cf0(&local_230,&local_54);
          if (iVar2 == 0) {
            uStack_248 = uStack_1e8;
            local_250 = local_1f0;
            uStack_238 = uStack_1d8;
            uStack_240 = uStack_1e0;
            pvVar4 = (void *)FUN_002f2680(&local_250);
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x35b,0,
                         "Unknown entry in accept encoding metadata: \'%s\'. Ignoring.",pvVar4);
            free(pvVar4);
          }
          else {
            *param_2 = *param_2 | 1 << (ulong)(local_54 & 0x1f);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < local_178);
      }
    }
    FUN_00305020(auStack_188);
    FUN_003da0b0(param_1,&LAB_003cd1f0,(ulong)*param_2 + 1);
  }
  else {
    *param_2 = (int)lVar3 - 1;
  }
  return;
}


