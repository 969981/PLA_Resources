/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056ff5c; name: FUN_0056ff5c
 */


/* WARNING: Removing unreachable block (ram,0x005701bc) */
/* WARNING: Removing unreachable block (ram,0x00570164) */
/* WARNING: Removing unreachable block (ram,0x0057015c) */
/* WARNING: Removing unreachable block (ram,0x00570044) */
/* WARNING: Removing unreachable block (ram,0x00570448) */
/* WARNING: Removing unreachable block (ram,0x00570118) */
/* WARNING: Removing unreachable block (ram,0x0057016c) */
/* WARNING: Removing unreachable block (ram,0x005701a4) */
/* WARNING: Removing unreachable block (ram,0x005700d4) */

void FUN_0056ff5c(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  ulong *__dest;
  long lVar9;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  byte local_60;
  undefined4 uStack_5f;
  char cStack_5b;
  undefined2 uStack_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  
  *param_1 = 0;
  param_1[0x12] = 0;
  if (*param_2 != 5) {
                    /* try { // try from 0057004c to 00570077 has its CatchHandler @ 005704a8 */
    FUN_002f2c60(&local_60,"malformed JSON in bootstrap file");
    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x78,&local_60,0,0);
    *param_3 = uVar6;
    return;
  }
  local_60 = 0x16;
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  local_50 = 0;
  uStack_5f = s_xds_servers_0388ccde._0_4_;
  cStack_5b = s_xds_servers_0388ccde[4];
  uStack_5a = s_xds_servers_0388ccde._5_2_;
  local_58 = CONCAT31(0x737265,s_xds_servers_0388ccde[7]);
  local_54 = 0;
                    /* try { // try from 0056ffcc to 0056ffd7 has its CatchHandler @ 00570480 */
  piVar3 = (int *)FUN_00572e24(param_2 + 8,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 + 10 == piVar3) {
                    /* try { // try from 00570080 to 005700db has its CatchHandler @ 00570468 */
    FUN_002f2c60(&local_60,"\"xds_servers\" field not present");
    uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0x7f,&local_60,0,0);
LAB_00570144:
    local_78 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,8);
    local_68 = local_78 + 1;
    local_70 = local_78 + 1;
    *local_78 = uVar4;
  }
  else {
    if (piVar3[0xe] != 6) {
                    /* try { // try from 005700dc to 00570107 has its CatchHandler @ 00570464 */
      FUN_002f2c60(&local_60,"\"xds_servers\" field is not an array");
      uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x82,&local_60,0,0);
      goto LAB_00570144;
    }
                    /* try { // try from 0057000c to 0057004b has its CatchHandler @ 0057045c */
    uVar4 = FUN_0057058c(param_1,piVar3 + 0xe);
    if (uVar4 != 0) goto LAB_00570144;
  }
  uStack_5a = 0;
  local_58 = 0;
  local_54 = 0;
  local_60 = 8;
  local_50 = 0;
  uStack_5f = 0x65646f6e;
  cStack_5b = 0;
                    /* try { // try from 005701e8 to 005701f3 has its CatchHandler @ 00570470 */
  piVar3 = (int *)FUN_00572e24(param_2 + 8,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 + 10 == piVar3) {
LAB_0057035c:
    if (local_70 == local_78) goto LAB_00570368;
  }
  else {
    if (piVar3[0xe] == 5) {
                    /* try { // try from 00570224 to 00570263 has its CatchHandler @ 00570458 */
      uVar4 = FUN_00570a04(param_1,piVar3 + 0xe);
      if (uVar4 == 0) goto LAB_0057035c;
      if (local_70 == local_68) {
        lVar9 = (long)local_70 - (long)local_78 >> 3;
        uVar7 = lVar9 + 1;
        if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_005702d8;
      }
    }
    else {
                    /* try { // try from 00570264 to 0057028f has its CatchHandler @ 00570460 */
      FUN_002f2c60(&local_60,"\"node\" field is not an object");
      uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x8b,&local_60,0,0);
      if (local_68 <= local_70) {
        lVar9 = (long)local_70 - (long)local_78 >> 3;
        uVar7 = lVar9 + 1;
        if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00570450 to 00570457 has its CatchHandler @ 00570460 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_005702d8:
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar8 = (long)local_68 - (long)local_78 >> 2;
          if (uVar7 <= uVar8) {
            uVar7 = uVar8;
          }
          if (uVar7 != 0) goto LAB_00570304;
          lVar5 = 0;
        }
        else {
          uVar7 = 0x1fffffffffffffff;
LAB_00570304:
          lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 3);
        }
        puVar1 = (ulong *)(lVar5 + lVar9 * 8);
        *puVar1 = uVar4;
        __n = (long)local_70 - (long)local_78;
        __dest = (ulong *)((long)puVar1 - __n);
        if (0 < (long)__n) {
          memcpy(__dest,local_78,__n);
        }
        bVar2 = local_78 != (ulong *)0x0;
        local_78 = __dest;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        goto LAB_0057035c;
      }
    }
    *local_70 = uVar4;
    local_70 = local_70 + 1;
    if (local_70 == local_78) {
LAB_00570368:
      *param_3 = 0;
      goto joined_r0x00570370;
    }
  }
                    /* try { // try from 0057039c to 005703cb has its CatchHandler @ 0057046c */
  FUN_002f2c60(&local_60,"errors parsing xds bootstrap file");
  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                       ,0x92,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
  if (local_70 != local_78) {
    uVar4 = 0;
    uVar7 = *local_78;
    while( true ) {
      if (4 < uVar7) {
                    /* try { // try from 00570420 to 0057042b has its CatchHandler @ 005704bc */
        FUN_002f0430(uVar7,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
      }
      uVar4 = uVar4 + 1;
      if ((ulong)((long)local_70 - (long)local_78 >> 3) <= uVar4) break;
      uVar7 = local_78[uVar4];
    }
  }
  *param_3 = uVar6;
joined_r0x00570370:
  if (local_78 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


