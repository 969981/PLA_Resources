/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa908; name: FUN_005aa908
 */


long FUN_005aa908(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte local_d8 [16];
  ulong local_c8;
  undefined1 auStack_c0 [32];
  char local_a0 [8];
  long local_98;
  long lStack_90;
  char *local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(param_1 + 0x20);
  cVar2 = PTR_DAT_04374f38[0x10];
  if (cVar2 != '\0') {
    local_88 = "  data recv";
    local_80 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28);
    local_78 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      local_78 = uVar1 & 0xffffffff;
    }
    local_70 = *(undefined8 *)(lVar3 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    local_68 = *(undefined8 *)(param_1 + 8);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    local_98 = lVar3;
    lStack_90 = param_1;
  }
                    /* try { // try from 005aa938 to 005aa93f has its CatchHandler @ 005aab10 */
  local_a0[0] = cVar2;
  lVar3 = FUN_005aa80c(lVar3,param_2);
  if (lVar3 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar5 + (ulong)*(uint *)(*(long *)(lVar4 + 0x20) + 0xe9c);
    if (lVar3 < param_2) {
      if ((long)(lVar5 + (ulong)*(uint *)(*(long *)(lVar4 + 0x20) + 0xe80)) < param_2) {
        puStack_48 = PTR_FUN_04373818;
        puStack_38 = PTR_FUN_04373818;
                    /* try { // try from 005aa980 to 005aa99f has its CatchHandler @ 005aaae4 */
        local_50 = param_2;
        local_40 = lVar3;
        FUN_002e6390(local_d8,"frame of size %ld overflows local window of %ld",0x2f,&local_50,2);
        uVar1 = (ulong)local_d8 | 1;
        if ((local_d8[0] & 1) != 0) {
          uVar1 = local_c8;
        }
                    /* try { // try from 005aa9b4 to 005aa9d7 has its CatchHandler @ 005aaae8 */
        FUN_002f2ff0(auStack_c0,uVar1);
        lVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
                             ,0xfc,auStack_c0,0,0);
        if ((local_d8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_c8);
        }
        goto joined_r0x005aaa6c;
      }
                    /* try { // try from 005aa9fc to 005aaa1b has its CatchHandler @ 005aaae0 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
                   ,0xed,2,
                   "Incoming frame of size %ld exceeds local window size of %ld.\nThe (un-acked, future) window size would be %ld which is not exceeded.\nThis would usually cause a disconnection, but allowing it due tobroken HTTP2 implementations in the wild.\nSee (for example) https://github.com/netty/netty/issues/6520."
                   ,param_2);
      lVar5 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    if (0 < lVar5) {
      *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) - lVar5;
    }
    lVar5 = lVar5 - param_2;
    *(long *)(param_1 + 0x18) = lVar5;
    if (0 < lVar5) {
      *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + lVar5;
    }
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) - param_2;
    lVar3 = 0;
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) - param_2;
  }
joined_r0x005aaa6c:
  if (cVar2 != '\0') {
                    /* try { // try from 005aaa70 to 005aaa77 has its CatchHandler @ 005aab0c */
    FUN_005aa204(local_a0);
  }
  return lVar3;
}


