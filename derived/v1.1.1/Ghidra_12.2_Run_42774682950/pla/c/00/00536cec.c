/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536cec; name: FUN_00536cec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536cec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  void *__ptr;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong unaff_x23;
  long lVar12;
  ulong uVar13;
  long lVar14;
  char *__s1;
  ulong uVar15;
  long local_c0 [4];
  long local_a0;
  long local_98;
  ulong *local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *pvStack_70;
  ulong local_68;
  
  *param_1 = 0;
  param_1[1] = param_2;
                    /* try { // try from 00536d1c to 00536d23 has its CatchHandler @ 00537274 */
  FUN_002ef6d0(param_1 + 4);
  uVar7 = *param_3;
  *param_3 = 0;
  param_1[0x1c] = 0;
  uVar11 = 120000;
  param_1[0x1b] = param_1 + 0x1c;
  param_1[9] = uVar7;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  puVar10 = param_1 + 0x19;
  *puVar10 = 0;
  param_1[0x18] = puVar10;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x25] = 20000;
  if ((param_4 == (ulong *)0x0) || (*param_4 == 0)) {
    uVar13 = 1000;
  }
  else {
    bVar8 = false;
    uVar15 = 0;
    uVar13 = 1000;
    lVar14 = 0;
    do {
      lVar9 = param_4[1] + lVar14;
      __s1 = *(char **)(lVar9 + 8);
      iVar5 = strcmp(__s1,"grpc.testing.fixed_reconnect_backoff_ms");
      if (iVar5 == 0) {
        puVar10 = (undefined8 *)((ulong)puVar10 & 0xffffffff00000000 | 0x7fffffff);
                    /* try { // try from 00536dbc to 00536ecb has its CatchHandler @ 005372b4 */
        iVar5 = FUN_002e4c30(lVar9,uVar13 & 0xffffffff | 0x6400000000,puVar10);
        uVar11 = (ulong)iVar5;
        param_1[0x25] = uVar11;
        bVar8 = true;
        uVar13 = uVar11;
      }
      else {
        iVar5 = strcmp(__s1,"grpc.min_reconnect_backoff_ms");
        if (iVar5 == 0) {
          unaff_x23 = unaff_x23 & 0xffffffff00000000 | 0x7fffffff;
          iVar5 = FUN_002e4c30(lVar9,(ulong)*(uint *)(param_1 + 0x25) | 0x6400000000,unaff_x23);
          bVar8 = false;
          param_1[0x25] = (long)iVar5;
        }
        else {
          iVar5 = strcmp(__s1,"grpc.max_reconnect_backoff_ms");
          if (iVar5 == 0) {
            param_3 = (undefined8 *)((ulong)param_3 & 0xffffffff00000000 | 0x7fffffff);
            iVar5 = FUN_002e4c30(lVar9,uVar11 & 0xffffffff | 0x6400000000,param_3);
            bVar8 = false;
            uVar11 = (ulong)iVar5;
          }
          else {
            iVar5 = strcmp(__s1,"grpc.initial_reconnect_backoff_ms");
            if (iVar5 == 0) {
              iVar5 = FUN_002e4c30(lVar9,uVar13 & 0xffffffff | 0x6400000000);
              bVar8 = false;
              uVar13 = (long)iVar5;
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar15 < *param_4);
    if (bVar8) {
      local_78 = _DAT_03889170;
      pvStack_70 = _UNK_03889178;
      goto LAB_00536ef8;
    }
  }
  local_78 = _DAT_03889ab0;
  pvStack_70 = _UNK_03889ab8;
LAB_00536ef8:
                    /* try { // try from 00536f08 to 00536f0f has its CatchHandler @ 00537260 */
  local_80 = uVar13;
  local_68 = uVar11;
  FUN_0053ecc8(param_1 + 0x1e,&local_80);
  *(undefined1 *)(param_1 + 0x26) = 0;
  plVar1 = param_1 + 0x38;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  lVar14 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 00536f38 to 00536f3b has its CatchHandler @ 0053728c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar9 = tpidr_el0;
  lVar9 = *(long *)(lVar9 + 0x30);
  uVar6 = *(uint *)(lVar9 + 0x30);
  if (uVar6 == 0xffffffff) {
                    /* try { // try from 00536f60 to 00536f8f has its CatchHandler @ 0053728c */
    uVar6 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar9 + 0x30) = uVar6;
  }
  plVar2 = (long *)(lVar14 + (ulong)uVar6 * 0x1d50 + 0x20);
  do {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[8] = 0x10000;
  uVar7 = FUN_002fe040();
  param_1[3] = uVar7;
                    /* try { // try from 00536f94 to 00536fab has its CatchHandler @ 00537294 */
  __ptr = (void *)FUN_002ebd50(0x84);
  FUN_005373d0(param_4,__ptr);
  local_90 = (ulong *)0x0;
  local_88 = (void *)0x0;
                    /* try { // try from 00536fb0 to 00536fd7 has its CatchHandler @ 00537288 */
  uVar11 = FUN_00542f94(__ptr,param_4,&local_88,&local_90);
  if ((uVar11 & 1) != 0) {
    if (local_88 == (void *)0x0) {
                    /* try { // try from 005371c0 to 005371e7 has its CatchHandler @ 00537288 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x295,2,"assertion failed: %s","new_address != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    free(__ptr);
    __ptr = local_88;
  }
                    /* try { // try from 00536fdc to 0053702b has its CatchHandler @ 00537298 */
  FUN_005374b0(&local_80,__ptr);
  free(__ptr);
  if (local_90 != (ulong *)0x0) {
    param_4 = local_90;
  }
  uVar7 = FUN_002e4270(param_4,&PTR_s_grpc_subchannel_address_04186148,1,&local_80,1);
  param_1[2] = uVar7;
  free(pvStack_70);
  if (local_90 != (ulong *)0x0) {
    FUN_002e4a10();
  }
  puVar4 = PTR_LAB_04374ba8;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xf] = param_1;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = puVar4;
  param_1[0x12] = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
  *(undefined4 *)(param_1 + 0x13) = 0x2a2;
                    /* try { // try from 00537060 to 0053706b has its CatchHandler @ 0053725c */
  uVar7 = FUN_002e4780(param_1[2],"grpc.enable_channelz");
                    /* try { // try from 0053706c to 00537087 has its CatchHandler @ 00537290 */
  uVar11 = FUN_002e4ee0(uVar7,1);
  uVar7 = FUN_002e4780(param_1[2],"grpc.max_channel_trace_event_memory_per_node");
                    /* try { // try from 00537088 to 00537093 has its CatchHandler @ 00537258 */
  iVar5 = FUN_002e4c30(uVar7,0x1000,0x7fffffff);
  local_98 = (long)iVar5;
  if ((uVar11 & 1) != 0) {
                    /* try { // try from 005370a4 to 005370c7 has its CatchHandler @ 00537284 */
    FUN_002e4780(param_1[2],"grpc.subchannel_address");
    local_a0 = FUN_002e4de0();
    if (local_a0 == 0) {
                    /* try { // try from 005371e8 to 0053720f has its CatchHandler @ 00537284 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x319,2,"assertion failed: %s","addr_str != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar14 = FUN_0053b068(&local_a0,&local_98);
    puVar10 = (undefined8 *)*plVar1;
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = puVar10[1];
      plVar2 = puVar10 + 2;
      do {
        lVar12 = *plVar2;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_c0[0] = lVar14;
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 00537104 to 00537123 has its CatchHandler @ 00537238 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),puVar10 + 1,lVar12);
      }
      if (lVar12 < 1) {
                    /* try { // try from 00537210 to 00537237 has its CatchHandler @ 00537238 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar12 == 1) {
        (**(code **)*puVar10)(puVar10);
        FUN_002e2ea0(PTR_LAB_04373088,puVar10);
      }
    }
    *plVar1 = lVar14;
    local_c0[0] = 0;
    FUN_00535c40(local_c0);
    lVar14 = *plVar1;
                    /* try { // try from 00537148 to 00537167 has its CatchHandler @ 00537254 */
    FUN_002f2c60(local_c0,"subchannel created");
    FUN_003ed490(lVar14 + 0xd8,1,local_c0);
  }
  return;
}


