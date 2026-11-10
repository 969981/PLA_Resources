/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005719f4; name: FUN_005719f4
 */


undefined8 FUN_005719f4(void *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  void *pvVar3;
  int *piVar4;
  ulong *puVar5;
  size_t sVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *__dest;
  long lVar13;
  char *local_140;
  undefined8 local_138;
  undefined1 *local_110;
  long local_108;
  undefined1 auStack_100 [32];
  char *local_e0;
  undefined8 local_d8;
  byte local_b0 [16];
  ulong *local_a0;
  undefined1 auStack_98 [32];
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  piVar4 = *(int **)(param_2 + 0x38);
  if (*(int **)(param_2 + 0x40) == piVar4) {
    return 0;
  }
  lVar13 = 0;
  uVar9 = 0;
  if (*piVar4 == 5) goto LAB_00571aac;
LAB_00571b0c:
  local_d8 = 0xe;
  local_e0 = "array element ";
                    /* try { // try from 00571b20 to 00571b2b has its CatchHandler @ 00571e18 */
  lVar2 = FUN_002ed6c0(uVar9,auStack_100);
  lVar2 = lVar2 - (long)auStack_100;
  local_110 = auStack_100;
  if (lVar2 < 0) {
                    /* try { // try from 00571dc0 to 00571ddf has its CatchHandler @ 00571e04 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_138 = 0x11;
  local_140 = " is not an object";
                    /* try { // try from 00571b50 to 00571b63 has its CatchHandler @ 00571e10 */
  local_108 = lVar2;
  FUN_002ecfd0(local_b0,&local_e0,&local_110,&local_140);
  puVar5 = (ulong *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    puVar5 = local_a0;
  }
                    /* try { // try from 00571b74 to 00571b93 has its CatchHandler @ 00571e28 */
  FUN_002f2ff0(auStack_98,puVar5);
  pvVar3 = (void *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                                ,0xcf,auStack_98,0,0);
  if (local_70 < local_68) {
    *local_70 = (ulong)pvVar3;
    local_70 = local_70 + 1;
    param_1 = pvVar3;
    goto joined_r0x00571bb8;
  }
  lVar2 = (long)local_70 - (long)local_78 >> 3;
  uVar11 = lVar2 + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00571de0 to 00571de7 has its CatchHandler @ 00571df4 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
    uVar7 = (long)local_68 - (long)local_78 >> 2;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 != 0) goto LAB_00571c04;
    param_1 = (void *)0x0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_00571c04:
    param_1 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
  }
  puVar5 = (ulong *)((long)param_1 + lVar2 * 8);
  puVar8 = (ulong *)((long)param_1 + uVar11 * 8);
  *puVar5 = (ulong)pvVar3;
  sVar6 = (long)local_70 - (long)local_78;
  puVar12 = (ulong *)((long)puVar5 - sVar6);
  if (0 < (long)sVar6) {
    param_1 = memcpy(puVar12,local_78,sVar6);
  }
  bVar1 = local_78 != (ulong *)0x0;
  local_70 = puVar5 + 1;
  local_78 = puVar12;
  local_68 = puVar8;
  if (bVar1) {
    param_1 = (void *)FUN_002e2ea0(PTR_LAB_04373088);
  }
joined_r0x00571bb8:
  if ((local_b0[0] & 1) == 0) goto LAB_00571a7c;
  puVar5 = local_a0;
  do {
    param_1 = (void *)FUN_002e2ea0(PTR_LAB_04373088,puVar5);
LAB_00571a7c:
    do {
      while( true ) {
        do {
          uVar9 = uVar9 + 1;
          lVar13 = lVar13 + 0x50;
          if ((ulong)((*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 4) *
                     -0x3333333333333333) <= uVar9) {
            if (local_70 == local_78) {
              uVar10 = 0;
              puVar5 = local_78;
              if (local_78 == (ulong *)0x0) {
                return 0;
              }
            }
            else {
                    /* try { // try from 00571d14 to 00571d43 has its CatchHandler @ 00571e08 */
              FUN_002f2c60(&local_e0,"errors parsing \"channel_creds\" array");
              uVar10 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                                    ,0xd6,&local_e0,local_78,(long)local_70 - (long)local_78 >> 3);
              puVar5 = local_78;
              if (local_70 != local_78) {
                uVar9 = 0;
                uVar11 = *local_78;
                puVar8 = local_78;
                puVar12 = local_70;
                while( true ) {
                  if (4 < uVar11) {
                    /* try { // try from 00571da4 to 00571daf has its CatchHandler @ 00571e0c */
                    FUN_002f0430(uVar11,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",
                                 0xd5);
                    puVar5 = local_78;
                    puVar12 = local_70;
                    puVar8 = local_78;
                  }
                  uVar9 = uVar9 + 1;
                  if ((ulong)((long)puVar12 - (long)puVar8 >> 3) <= uVar9) break;
                  uVar11 = puVar8[uVar9];
                }
              }
              if (puVar5 == (ulong *)0x0) {
                return uVar10;
              }
            }
            local_70 = puVar5;
            FUN_002e2ea0(PTR_LAB_04373088);
            return uVar10;
          }
          piVar4 = (int *)(*(long *)(param_2 + 0x38) + lVar13);
          if (*piVar4 != 5) goto LAB_00571b0c;
LAB_00571aac:
                    /* try { // try from 00571aac to 00571ab7 has its CatchHandler @ 00571e14 */
          param_1 = (void *)FUN_00571e6c(param_1,piVar4,uVar9,param_3);
        } while (param_1 == (void *)0x0);
        if (local_70 == local_68) break;
        *local_70 = (ulong)param_1;
        local_70 = local_70 + 1;
      }
      lVar2 = (long)local_70 - (long)local_78 >> 3;
      uVar11 = lVar2 + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00571de8 to 00571def has its CatchHandler @ 00571df0 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar7 = (long)local_68 - (long)local_78 >> 2;
        if (uVar11 <= uVar7) {
          uVar11 = uVar7;
        }
        if (uVar11 != 0) goto LAB_00571c70;
        pvVar3 = (void *)0x0;
      }
      else {
        uVar11 = 0x1fffffffffffffff;
LAB_00571c70:
        pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
      }
      puVar8 = (ulong *)((long)pvVar3 + lVar2 * 8);
      puVar12 = (ulong *)((long)pvVar3 + uVar11 * 8);
      *puVar8 = (ulong)param_1;
      sVar6 = (long)local_70 - (long)local_78;
      __dest = (ulong *)((long)puVar8 - sVar6);
      param_1 = pvVar3;
      if (0 < (long)sVar6) {
        param_1 = memcpy(__dest,local_78,sVar6);
      }
      bVar1 = local_78 == (ulong *)0x0;
      puVar5 = local_78;
      local_78 = __dest;
      local_70 = puVar8 + 1;
      local_68 = puVar12;
    } while (bVar1);
  } while( true );
}


