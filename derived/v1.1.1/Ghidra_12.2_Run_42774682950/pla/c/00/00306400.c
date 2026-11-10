/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00306400; name: FUN_00306400
 */


undefined8 * FUN_00306400(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 *local_98;
  long local_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x140);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x25] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x26] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  FUN_002ef5c0(puVar1,1);
  uVar2 = FUN_002f45b0();
  puVar1[2] = uVar2;
  puVar1[5] = 0;
  puVar1[4] = 0x7fffffffffffffff;
  puVar1[3] = 0x7fffffffffffffff;
  puVar1[6] = 0x7fffffffffffffff;
  FUN_002ef6d0(puVar1 + 7);
  puVar1[0xb] = DAT_0388a820;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  puVar1[1] = 0;
  if (param_1 == (char *)0x0) {
    local_68 = "anonymous_pool_";
    uStack_60 = 0xf;
    local_90 = FUN_002ed880(puVar1,auStack_88);
    local_90 = local_90 - (long)auStack_88;
    local_98 = auStack_88;
    if (local_90 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002eced0(&local_38,&local_68,&local_98);
    if ((*(byte *)(puVar1 + 0x25) & 1) == 0) {
      *(undefined2 *)(puVar1 + 0x25) = 0;
    }
    else {
      *(undefined1 *)puVar1[0x27] = 0;
      puVar1[0x26] = 0;
      if ((*(byte *)(puVar1 + 0x25) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar1[0x27]);
        puVar1[0x25] = 0;
      }
    }
    puVar1[0x27] = local_28;
    puVar1[0x26] = uStack_30;
    puVar1[0x25] = local_38;
  }
  else {
    sVar3 = strlen(param_1);
    FUN_00291910(puVar1 + 0x25,param_1,sVar3);
  }
  puVar1[0xe] = &LAB_003065f0;
  puVar1[0x12] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  puVar1[0x1b] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  *(undefined4 *)(puVar1 + 0x13) = 0x29a;
  *(undefined4 *)(puVar1 + 0x1c) = 0x29c;
  puVar1[0xf] = puVar1;
  puVar1[0x10] = 0;
  *(undefined2 *)(puVar1 + 0x11) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x19] = 0;
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1d] = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  puVar1[0x17] = &LAB_00306ba0;
  puVar1[0x18] = puVar1;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  return puVar1;
}


