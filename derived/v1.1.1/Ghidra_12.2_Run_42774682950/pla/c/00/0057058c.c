/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057058c; name: FUN_0057058c
 */


undefined8 FUN_0057058c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong *puVar6;
  size_t sVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *__dest;
  long lVar14;
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
  piVar5 = *(int **)(param_2 + 0x38);
  if (*(int **)(param_2 + 0x40) == piVar5) {
    return 0;
  }
  lVar14 = 0;
  uVar10 = 0;
  if (*piVar5 == 5) goto LAB_00570644;
LAB_005706a4:
  local_d8 = 0xe;
  local_e0 = "array element ";
                    /* try { // try from 005706b8 to 005706c3 has its CatchHandler @ 005709b0 */
  lVar3 = FUN_002ed6c0(uVar10,auStack_100);
  lVar3 = lVar3 - (long)auStack_100;
  local_110 = auStack_100;
  if (lVar3 < 0) {
                    /* try { // try from 00570958 to 00570977 has its CatchHandler @ 0057099c */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_138 = 0x11;
  local_140 = " is not an object";
                    /* try { // try from 005706e8 to 005706fb has its CatchHandler @ 005709a8 */
  local_108 = lVar3;
  FUN_002ecfd0(local_b0,&local_e0,&local_110,&local_140);
  puVar6 = (ulong *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    puVar6 = local_a0;
  }
                    /* try { // try from 0057070c to 0057072b has its CatchHandler @ 005709c0 */
  FUN_002f2ff0(auStack_98,puVar6);
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                       ,0x9b,auStack_98,0,0);
  if (local_70 < local_68) {
    *local_70 = uVar4;
    local_70 = local_70 + 1;
    goto joined_r0x00570750;
  }
  lVar3 = (long)local_70 - (long)local_78 >> 3;
  uVar12 = lVar3 + 1;
  if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00570978 to 0057097f has its CatchHandler @ 0057098c */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
    uVar8 = (long)local_68 - (long)local_78 >> 2;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 != 0) goto LAB_0057079c;
    lVar2 = 0;
  }
  else {
    uVar12 = 0x1fffffffffffffff;
LAB_0057079c:
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
  }
  puVar6 = (ulong *)(lVar2 + lVar3 * 8);
  puVar9 = (ulong *)(lVar2 + uVar12 * 8);
  *puVar6 = uVar4;
  sVar7 = (long)local_70 - (long)local_78;
  puVar13 = (ulong *)((long)puVar6 - sVar7);
  if (0 < (long)sVar7) {
    memcpy(puVar13,local_78,sVar7);
  }
  bVar1 = local_78 != (ulong *)0x0;
  local_70 = puVar6 + 1;
  local_78 = puVar13;
  local_68 = puVar9;
  if (bVar1) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
joined_r0x00570750:
  if ((local_b0[0] & 1) == 0) goto LAB_00570614;
  puVar6 = local_a0;
  do {
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
LAB_00570614:
    do {
      while( true ) {
        do {
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x50;
          if ((ulong)((*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 4) *
                     -0x3333333333333333) <= uVar10) {
            if (local_70 == local_78) {
              uVar11 = 0;
              puVar6 = local_78;
              if (local_78 == (ulong *)0x0) {
                return 0;
              }
            }
            else {
                    /* try { // try from 005708ac to 005708db has its CatchHandler @ 005709a0 */
              FUN_002f2c60(&local_e0,"errors parsing \"xds_servers\" array");
              uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                                    ,0xa2,&local_e0,local_78,(long)local_70 - (long)local_78 >> 3);
              puVar6 = local_78;
              if (local_70 != local_78) {
                uVar10 = 0;
                uVar4 = *local_78;
                puVar9 = local_78;
                puVar13 = local_70;
                while( true ) {
                  if (4 < uVar4) {
                    /* try { // try from 0057093c to 00570947 has its CatchHandler @ 005709a4 */
                    FUN_002f0430(uVar4,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",
                                 0xd5);
                    puVar6 = local_78;
                    puVar13 = local_70;
                    puVar9 = local_78;
                  }
                  uVar10 = uVar10 + 1;
                  if ((ulong)((long)puVar13 - (long)puVar9 >> 3) <= uVar10) break;
                  uVar4 = puVar9[uVar10];
                }
              }
              if (puVar6 == (ulong *)0x0) {
                return uVar11;
              }
            }
            local_70 = puVar6;
            FUN_002e2ea0(PTR_LAB_04373088);
            return uVar11;
          }
          piVar5 = (int *)(*(long *)(param_2 + 0x38) + lVar14);
          if (*piVar5 != 5) goto LAB_005706a4;
LAB_00570644:
                    /* try { // try from 00570644 to 0057064f has its CatchHandler @ 005709ac */
          uVar4 = FUN_005713e4(param_1,piVar5,uVar10);
        } while (uVar4 == 0);
        if (local_70 == local_68) break;
        *local_70 = uVar4;
        local_70 = local_70 + 1;
      }
      lVar3 = (long)local_70 - (long)local_78 >> 3;
      uVar12 = lVar3 + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00570980 to 00570987 has its CatchHandler @ 00570988 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar8 = (long)local_68 - (long)local_78 >> 2;
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
        if (uVar12 != 0) goto LAB_00570808;
        lVar2 = 0;
      }
      else {
        uVar12 = 0x1fffffffffffffff;
LAB_00570808:
        lVar2 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
      }
      puVar9 = (ulong *)(lVar2 + lVar3 * 8);
      puVar13 = (ulong *)(lVar2 + uVar12 * 8);
      *puVar9 = uVar4;
      sVar7 = (long)local_70 - (long)local_78;
      __dest = (ulong *)((long)puVar9 - sVar7);
      if (0 < (long)sVar7) {
        memcpy(__dest,local_78,sVar7);
      }
      bVar1 = local_78 == (ulong *)0x0;
      puVar6 = local_78;
      local_78 = __dest;
      local_70 = puVar9 + 1;
      local_68 = puVar13;
    } while (bVar1);
  } while( true );
}


