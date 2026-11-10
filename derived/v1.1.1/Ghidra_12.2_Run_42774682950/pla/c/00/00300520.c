/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00300520; name: FUN_00300520
 */


void FUN_00300520(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte local_108 [16];
  undefined8 local_f8;
  byte local_f0 [8];
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  char *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  byte local_78 [16];
  ulong local_68;
  
  do {
    iVar2 = nnsocketConnect(param_3,param_5,*(undefined4 *)(param_5 + 0x80));
    if (-1 < iVar2) break;
    piVar3 = __errno_location();
  } while (*piVar3 == 4);
  local_a8 = "tcp-client:";
  uStack_a0 = 0xb;
  FUN_00308b60(local_f0,param_5);
  if ((local_f0[0] & 1) == 0) {
    local_d8 = (ulong)local_f0 | 1;
    local_e8 = (ulong)(local_f0[0] >> 1);
  }
  else {
    local_d8 = local_e0;
    if ((long)local_e8 < 0) {
                    /* try { // try from 0030092c to 0030094b has its CatchHandler @ 00300974 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
                    /* try { // try from 003005c8 to 003005d7 has its CatchHandler @ 003009cc */
  local_d0 = local_e8;
  FUN_002eced0(local_78,&local_a8,&local_d8);
  if ((local_f0[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
  }
  uVar1 = (ulong)local_78 | 1;
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_68;
  }
                    /* try { // try from 00300608 to 00300613 has its CatchHandler @ 003009e4 */
  uVar4 = FUN_002f9420(param_3,uVar1,1);
  if (iVar2 < 0) {
                    /* try { // try from 00300690 to 003006bb has its CatchHandler @ 003009e4 */
    piVar3 = __errno_location();
    if (*piVar3 != 0xb) {
      piVar3 = __errno_location();
      if (*piVar3 != 0x73) {
                    /* try { // try from 00300818 to 0030083b has its CatchHandler @ 00300994 */
        piVar3 = __errno_location();
        lVar7 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc",
                             299,*piVar3,"connect");
        if (lVar7 == 0) {
                    /* try { // try from 0030094c to 00300973 has its CatchHandler @ 00300994 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                       "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
          abort();
        }
                    /* try { // try from 00300844 to 0030084f has its CatchHandler @ 0030097c */
        FUN_00308b60(local_108,param_5);
                    /* try { // try from 00300850 to 0030086b has its CatchHandler @ 00300980 */
        FUN_002f3230(&local_a8,local_108);
        uVar6 = FUN_002f1340(lVar7,4,&local_a8);
        if ((local_108[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_f8);
        }
                    /* try { // try from 00300888 to 0030089f has its CatchHandler @ 00300994 */
        FUN_002f9530(uVar4,0,0,"tcp_client_connect_error");
        local_a8 = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc";
        uStack_a0 = CONCAT44(uStack_a0._4_4_,0x130);
                    /* try { // try from 003008ac to 003008bb has its CatchHandler @ 00300978 */
        FUN_002f019c(&local_a8,param_2,uVar6);
        goto LAB_003008bc;
      }
    }
    FUN_002f9ce0(param_1,uVar4);
    puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x130);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[0x23] = 0;
      puVar5[0x22] = 0;
      puVar5[0x25] = 0;
      puVar5[0x24] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x21] = 0;
      puVar5[0x20] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0x19] = 0;
      puVar5[0x18] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
    }
    puVar5[0x23] = param_7;
    puVar5[0x24] = param_2;
    puVar5[4] = uVar4;
    puVar5[0x1f] = param_1;
                    /* try { // try from 0030070c to 00300717 has its CatchHandler @ 00300998 */
    FUN_00308b60(&local_a8,param_5);
    if ((*(byte *)(puVar5 + 0x20) & 1) == 0) {
      *(undefined2 *)(puVar5 + 0x20) = 0;
    }
    else {
      *(undefined1 *)puVar5[0x22] = 0;
      puVar5[0x21] = 0;
      if ((*(byte *)(puVar5 + 0x20) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar5[0x22]);
        puVar5[0x20] = 0;
      }
    }
    puVar5[0x22] = local_98;
    puVar5[0x21] = uStack_a0;
    puVar5[0x20] = local_a8;
                    /* try { // try from 00300764 to 00300813 has its CatchHandler @ 003009e0 */
    FUN_002ef6d0(puVar5);
    *(undefined4 *)(puVar5 + 0x15) = 2;
    puVar5[0x17] = &LAB_00300a10;
    puVar5[0x18] = puVar5;
    puVar5[0x19] = 0;
    *(undefined2 *)(puVar5 + 0x1a) = 0;
    puVar5[0x1d] = 0;
    *(undefined4 *)(puVar5 + 0x1e) = 0;
    puVar5[0x1b] = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc";
    *(undefined4 *)(puVar5 + 0x1c) = 0x13f;
    uVar6 = FUN_002e45d0(param_4);
    puVar5[0x25] = uVar6;
    if (PTR_DAT_043739c0[0x10] != '\0') {
      if ((*(byte *)(puVar5 + 0x20) & 1) == 0) {
        lVar7 = (long)puVar5 + 0x101;
      }
      else {
        lVar7 = puVar5[0x22];
      }
                    /* try { // try from 00300908 to 00300927 has its CatchHandler @ 003009e0 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc",0x143,1,
                   "CLIENT_CONNECT: %s: asynchronously connecting fd %p",lVar7,uVar4);
    }
    FUN_002ef750(puVar5);
    *(undefined2 *)(puVar5 + 0x10) = 0;
    puVar5[0xd] = &LAB_00301040;
    puVar5[0xe] = puVar5;
    puVar5[0xf] = 0;
    puVar5[0x13] = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0;
    puVar5[0x11] = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc";
    *(undefined4 *)(puVar5 + 0x12) = 0x148;
    FUN_002f5c60(puVar5 + 5,param_6,puVar5 + 0xc);
    FUN_002f9710(puVar5[4],puVar5 + 0x16);
    FUN_002ef790(puVar5);
  }
  else {
                    /* try { // try from 0030061c to 0030062b has its CatchHandler @ 003009c8 */
    FUN_00308b60(&local_a8,param_5);
    uVar1 = (ulong)&local_a8 | 1;
    if (((ulong)local_a8 & 1) != 0) {
      uVar1 = local_98;
    }
                    /* try { // try from 00300640 to 0030064b has its CatchHandler @ 003009a0 */
    uVar4 = FUN_00301220(uVar4,param_4,uVar1);
    *param_7 = uVar4;
    if (((ulong)local_a8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_98);
    }
    local_a8 = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_client_posix.cc";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x127);
                    /* try { // try from 0030067c to 0030068b has its CatchHandler @ 0030099c */
    FUN_002f019c(&local_a8,param_2,0);
  }
LAB_003008bc:
  if ((local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


