/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308b60; name: FUN_00308b60
 */


void FUN_00308b60(undefined8 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  ulong local_180;
  ulong local_178;
  undefined *local_150;
  undefined8 uStack_148;
  int *local_120;
  undefined8 uStack_118;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d8 [8];
  ulong local_d0;
  ulong local_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (&local_c0 == param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x2e,2,
                 "assertion failed: %s","resolved_addr != resolved_addr4_out");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar3 = *(char *)((long)param_2 + 1);
  if (cVar3 == '\x01') {
    piVar4 = &DAT_0392e337;
  }
  else if (cVar3 == '\x02') {
    piVar4 = &DAT_038e4ebc;
  }
  else {
    if (cVar3 != '\x1c') goto LAB_00308c84;
    if (*(long *)(param_2 + 4) == 0 && *(int *)(param_2 + 8) == -0x10000) {
      piVar4 = &DAT_038e4ebc;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar2 = (undefined4 *)(param_2 + 10);
      puVar1 = param_2 + 1;
      param_2 = &local_c0;
      _local_c0 = CONCAT44(*puVar2,CONCAT22(*puVar1,0x200));
      local_40 = 0x10;
    }
    else {
      piVar4 = &DAT_03970edc;
    }
  }
  if (*piVar4 != 0x78696e75 || (char)piVar4[1] != '\0') {
    FUN_003086d0(local_d8,param_2,0);
    uStack_118 = 4;
    local_150 = &DAT_039b07fe;
    uStack_148 = 1;
    local_120 = piVar4;
    if ((local_d8[0] & 1) == 0) {
      local_180 = (ulong)local_d8 | 1;
      local_d0 = (ulong)(local_d8[0] >> 1);
    }
    else {
      local_180 = local_c8;
      if ((long)local_d0 < 0) {
                    /* try { // try from 00308d18 to 00308d37 has its CatchHandler @ 00308d38 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
    }
                    /* try { // try from 00308ca0 to 00308cb3 has its CatchHandler @ 00308d3c */
    local_178 = local_d0;
    FUN_002ecfd0(&local_f0,&local_120,&local_150,&local_180);
    param_1[2] = local_e0;
    param_1[1] = uStack_e8;
    *param_1 = local_f0;
    if ((local_d8[0] & 1) == 0) {
      return;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_c8);
    return;
  }
LAB_00308c84:
  FUN_002fe930(param_1,param_2);
  return;
}


