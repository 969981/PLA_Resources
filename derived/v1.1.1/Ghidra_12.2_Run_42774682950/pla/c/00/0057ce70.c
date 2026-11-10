/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057ce70; name: FUN_0057ce70
 */


long FUN_0057ce70(int *param_1,char *param_2,undefined8 *param_3)

{
  size_t __n;
  int *piVar1;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  char *local_108;
  undefined8 uStack_100;
  char *local_d8;
  size_t local_d0;
  char *local_a8;
  size_t local_a0;
  void *local_98;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  
  if (*param_1 != 5) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_002f2c60(&local_a8,"JSON value is not an object");
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x25,&local_a8,0,0);
    *param_3 = uVar2;
    return 0;
  }
  local_a8 = (char *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a8 = (char *)CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_a8 | 1);
    if (__n != 0) goto LAB_0057cf40;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_a8 = (char *)(uVar3 | 1);
    local_a0 = __n;
    local_98 = __dest;
LAB_0057cf40:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0057cf58 to 0057cf5f has its CatchHandler @ 0057d15c */
  piVar1 = (int *)FUN_00500624(param_1 + 8,&local_a8);
  if (((ulong)local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  local_d8 = param_2;
  if (param_1 + 10 == piVar1) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    local_a8 = "Property ";
    local_a0 = 9;
    if (param_2 == (char *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = strlen(param_2);
      if ((long)local_d0 < 0) goto LAB_0057cffc;
    }
    local_108 = " not found in JSON object.";
    uStack_100 = 0x1a;
    FUN_002ecfd0(local_78,&local_a8,&local_d8,&local_108);
    uVar3 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar3 = local_68;
    }
                    /* try { // try from 0057d068 to 0057d08b has its CatchHandler @ 0057d148 */
    FUN_002f2ff0(auStack_60,uVar3);
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x2e,auStack_60,0,0);
  }
  else {
    if (piVar1[0xe] == 4) {
      if ((*(byte *)(piVar1 + 0x10) & 1) == 0) {
        return (long)piVar1 + 0x41;
      }
      return *(long *)(piVar1 + 0x14);
    }
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    local_a8 = "Property ";
    local_a0 = 9;
    if (param_2 == (char *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = strlen(param_2);
      if ((long)local_d0 < 0) {
LAB_0057cffc:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
    }
    local_108 = " n JSON object is not a string.";
    uStack_100 = 0x1f;
    FUN_002ecfd0(local_78,&local_a8,&local_d8,&local_108);
    uVar3 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar3 = local_68;
    }
                    /* try { // try from 0057d0d4 to 0057d0f7 has its CatchHandler @ 0057d138 */
    FUN_002f2ff0(auStack_60,uVar3);
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x37,auStack_60,0,0);
  }
  *param_3 = uVar2;
  if ((local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return 0;
}


