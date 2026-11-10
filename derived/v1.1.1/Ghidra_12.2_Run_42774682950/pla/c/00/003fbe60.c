/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fbe60; name: FUN_003fbe60
 */


uint FUN_003fbe60(char *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  ulong local_68;
  ulong local_60;
  void *local_58;
  void *local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  local_40 = param_3;
  local_38 = param_4;
  if (param_4 == 0) {
LAB_003fc09c:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"!empty()\"","external/com_google_absl\\absl/strings/string_view.h",
                  0x139,"operator()");
  }
  local_38 = param_4;
  if (*(char *)(param_3 + (param_4 - 1)) == '.') {
    local_38 = param_4 - 1;
  }
  uVar4 = param_2 - 1;
  if ((param_1[uVar4] == '.') && (param_2 = uVar4, uVar4 == 0)) {
    return 0;
  }
  uVar4 = FUN_002ee7f0(param_3,local_38,param_1,param_2);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (*param_1 != '*') {
    return 0;
  }
  if ((param_2 < 3) || (param_1[1] != '.')) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x6eb,2,
                 "Invalid wildchar entry.");
    return 0;
  }
  uVar4 = FUN_002fee98(&local_40,0x2e,0);
  if (uVar4 == 0xffffffffffffffff) {
    return 0;
  }
  if (local_38 - 2 <= uVar4) {
    return 0;
  }
  if (local_38 <= uVar4) {
    FUN_002ee770("absl::string_view::substr");
LAB_003fc0c8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_48 = local_38 - (uVar4 + 1);
  if ((long)local_48 < 0) goto LAB_003fc0c8;
  local_50 = (void *)(local_40 + uVar4 + 1);
  uVar2 = FUN_002fee98(&local_50,0x2e,0);
  uVar4 = local_48;
  pvVar3 = local_50;
  if ((uVar2 != 0xffffffffffffffff) && (uVar5 = local_48 - 1, uVar2 != uVar5)) {
    if (local_48 != 0) {
      if (*(char *)((long)local_50 + uVar5) == '.') {
        local_48 = uVar5;
      }
      uVar1 = FUN_002ee7f0(local_50,local_48,param_1 + 2,param_2 - 2);
      return uVar1 & 1;
    }
    goto LAB_003fc09c;
  }
  if (local_50 == (void *)0x0) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
  }
  else {
    local_58 = (void *)0x0;
    local_68 = 0;
    local_60 = 0;
    if (0xffffffffffffffef < local_48) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_48 < 0x17) {
      local_68 = (ulong)(byte)((int)local_48 << 1);
      __dest = (void *)((ulong)&local_68 | 1);
      if (local_48 != 0) goto LAB_003fc038;
    }
    else {
      uVar2 = local_48 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
      local_68 = uVar2 | 1;
      local_60 = uVar4;
      local_58 = __dest;
LAB_003fc038:
      memcpy(__dest,pvVar3,uVar4);
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
    if ((local_68 & 1) != 0) {
      pvVar3 = local_58;
      goto LAB_003fc064;
    }
  }
  pvVar3 = (void *)((ulong)&local_68 | 1);
LAB_003fc064:
                    /* try { // try from 003fc064 to 003fc07f has its CatchHandler @ 003fc0f0 */
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x6f6,2,
               "Invalid toplevel subdomain: %s",pvVar3);
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return 0;
}


