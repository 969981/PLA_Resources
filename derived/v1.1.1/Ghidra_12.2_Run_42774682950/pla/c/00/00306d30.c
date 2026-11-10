/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00306d30; name: FUN_00306d30
 */


undefined8 * FUN_00306d30(undefined8 param_1,char *param_2)

{
  undefined8 *__s;
  size_t sVar1;
  undefined1 *local_98;
  long local_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  __s = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x250);
  if (__s != (undefined8 *)0x0) {
    memset(__s,0,0x250);
  }
  FUN_002ef5d0(param_1);
  *(undefined4 *)(__s + 7) = 0x30e;
  __s[0xb] = &LAB_00307030;
  __s[0xc] = __s;
  *(undefined4 *)(__s + 0x10) = 0x310;
  __s[0x25] = &LAB_003070e0;
  __s[0x26] = __s;
  *(undefined4 *)(__s + 0x2a) = 0x312;
  *__s = param_1;
  __s[4] = 0;
  *(undefined2 *)(__s + 5) = 0;
  __s[8] = 0;
  *(undefined4 *)(__s + 9) = 0;
  __s[0xd] = 0;
  *(undefined2 *)(__s + 0xe) = 0;
  __s[0x11] = 0;
  *(undefined4 *)(__s + 0x12) = 0;
  __s[0x27] = 0;
  *(undefined2 *)(__s + 0x28) = 0;
  __s[0x2b] = 0;
  *(undefined4 *)(__s + 0x2c) = 0;
  __s[0x30] = 0;
  *(undefined2 *)(__s + 0x31) = 0;
  __s[0x34] = 0;
  *(undefined4 *)(__s + 0x35) = 0;
  __s[0x39] = 0;
  *(undefined2 *)(__s + 0x3a) = 0;
  __s[0x3d] = 0;
  *(undefined4 *)(__s + 0x3e) = 0;
  __s[2] = &LAB_00306f80;
  __s[3] = __s;
  __s[6] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  __s[0xf] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  __s[0x29] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  __s[0x32] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  __s[0x3b] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  *(undefined4 *)(__s + 0x3c) = 0x316;
  __s[0x2e] = &LAB_00307230;
  __s[0x2f] = __s;
  *(undefined4 *)(__s + 0x33) = 0x314;
  __s[0x37] = &LAB_00307390;
  __s[0x38] = __s;
  FUN_002ef6d0(__s + 0x15);
  __s[0x13] = 1;
  __s[0x14] = 0;
  *(undefined1 *)(__s + 0x1e) = 0;
  __s[0x19] = 0;
  *(undefined1 *)(__s + 0x1c) = 0;
  __s[0x1a] = 0;
  __s[0x1b] = 0;
  __s[0x1f] = 0;
  __s[0x1d] = 0;
  __s[0x40] = 0;
  __s[0x3f] = 0;
  __s[0x42] = 0;
  __s[0x41] = 0;
  __s[0x44] = 0;
  __s[0x43] = 0;
  __s[0x46] = 0;
  __s[0x45] = 0;
  __s[0x21] = 0;
  __s[0x20] = 0;
  __s[0x23] = 0;
  __s[0x22] = 0;
  if (param_2 == (char *)0x0) {
    local_68 = "anonymous_resource_user_";
    uStack_60 = 0x18;
    local_90 = FUN_002ed880(__s,auStack_88);
    local_90 = local_90 - (long)auStack_88;
    local_98 = auStack_88;
    if (local_90 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002eced0(&local_38,&local_68,&local_98);
    if ((*(byte *)(__s + 0x47) & 1) == 0) {
      *(undefined2 *)(__s + 0x47) = 0;
    }
    else {
      *(undefined1 *)__s[0x49] = 0;
      __s[0x48] = 0;
      if ((*(byte *)(__s + 0x47) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,__s[0x49]);
        __s[0x47] = 0;
      }
    }
    __s[0x49] = local_28;
    __s[0x48] = uStack_30;
    __s[0x47] = local_38;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_00291910(__s + 0x47,param_2,sVar1);
  }
  return __s;
}


