/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00506efc; name: FUN_00506efc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00506efc(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 *******__s;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  size_t sVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 ******ppppppuVar12;
  ulong uVar13;
  long lVar14;
  byte local_a8;
  undefined7 uStack_a7;
  undefined8 *******local_a0 [4];
  ulong local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_04374a08 + 0x10);
  param_1[1] = 0;
  lVar5 = param_2[1];
  lVar14 = *param_2;
  plVar1 = param_1 + 6;
  param_1[5] = param_2[2];
  param_1[4] = lVar5;
  param_1[3] = lVar14;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00506f54 to 00506f5f has its CatchHandler @ 00507438 */
  FUN_003ee80c(plVar1,param_3);
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_4 == (undefined8 *)0x0) {
                    /* try { // try from 00507324 to 0050734b has its CatchHandler @ 00507360 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                 ,0x2e,2,"assertion failed: %s","error != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((int)*plVar1 != 5) {
                    /* try { // try from 00506fd4 to 00506fff has its CatchHandler @ 00507420 */
    FUN_002f2c60(&local_a8,"JSON value is not an object");
    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x31,&local_a8,0,0);
    *param_4 = uVar6;
    return;
  }
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_80 = 0;
  local_78 = (ulong *)0x0;
                    /* try { // try from 00506f9c to 00506fab has its CatchHandler @ 0050741c */
  FUN_005008b8(&local_a8,plVar1,&local_80);
                    /* try { // try from 00506fac to 00506fb7 has its CatchHandler @ 00507364 */
  FUN_00507580(param_1 + 0x10,&local_a8);
  puVar3 = PTR_LAB_04373088;
  uVar4 = CONCAT71(uStack_a7,local_a8);
  if ((local_a8 & 1) == 0) {
    __s = local_a0;
joined_r0x00507014:
    if (uVar4 >> 1 != 0) {
      uVar13 = uVar4 >> 1;
      do {
        uVar9 = uVar13 - 1;
        ppppppuVar12 = __s[uVar13 - 1];
        __s[uVar13 - 1] = (undefined8 ******)0x0;
        if (ppppppuVar12 != (undefined8 ******)0x0) {
          (*(code *)**ppppppuVar12)(ppppppuVar12);
          FUN_002e2ea0(puVar3,ppppppuVar12);
        }
        uVar13 = uVar9;
      } while (uVar9 != 0);
    }
    memset(__s,0xab,(uVar4 >> 1) << 3);
    if ((local_a8 & 1) != 0) goto LAB_00507088;
  }
  else {
    __s = local_a0[0];
    if (local_a0[0] != (undefined8 *******)0x0) goto joined_r0x00507014;
    local_a0[0] = (undefined8 *******)0x0;
LAB_00507088:
    FUN_002e2ea0(PTR_LAB_04373088,local_a0[0]);
  }
  if (local_80 != 0) {
    if (local_70 == local_68) {
      lVar14 = (long)local_70 - (long)local_78 >> 3;
      uVar4 = lVar14 + 1;
      if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 0050734c to 00507353 has its CatchHandler @ 0050735c */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar13 = (long)local_68 - (long)local_78 >> 2;
        if (uVar4 <= uVar13) {
          uVar4 = uVar13;
        }
        if (uVar4 != 0) goto LAB_00507100;
        lVar5 = 0;
      }
      else {
        uVar4 = 0x1fffffffffffffff;
LAB_00507100:
        lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar4 << 3);
      }
      puVar7 = (ulong *)(lVar5 + lVar14 * 8);
      puVar10 = (ulong *)(lVar5 + uVar4 * 8);
      *puVar7 = local_80;
      sVar8 = (long)local_70 - (long)local_78;
      puVar11 = (ulong *)((long)puVar7 - sVar8);
      if (0 < (long)sVar8) {
        memcpy(puVar11,local_78,sVar8);
      }
      bVar2 = local_78 != (ulong *)0x0;
      local_78 = puVar11;
      local_70 = puVar7 + 1;
      local_68 = puVar10;
      if (bVar2) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
    else {
      *local_70 = local_80;
      local_70 = local_70 + 1;
    }
  }
                    /* try { // try from 0050715c to 00507163 has its CatchHandler @ 0050744c */
  uVar4 = FUN_00507790(param_1);
  if (uVar4 == 0) {
LAB_00507234:
    puVar7 = local_78;
    if (local_78 == local_70) goto LAB_005072f0;
  }
  else {
    if (local_70 == local_68) {
      lVar14 = (long)local_70 - (long)local_78 >> 3;
      uVar13 = lVar14 + 1;
      if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 00507354 to 0050735b has its CatchHandler @ 0050744c */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar9 = (long)local_68 - (long)local_78 >> 2;
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        if (uVar13 != 0) goto LAB_005071dc;
        lVar5 = 0;
      }
      else {
        uVar13 = 0x1fffffffffffffff;
LAB_005071dc:
        lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 3);
      }
      puVar7 = (ulong *)(lVar5 + lVar14 * 8);
      puVar10 = (ulong *)(lVar5 + uVar13 * 8);
      *puVar7 = uVar4;
      sVar8 = (long)local_70 - (long)local_78;
      puVar11 = (ulong *)((long)puVar7 - sVar8);
      if (0 < (long)sVar8) {
        memcpy(puVar11,local_78,sVar8);
      }
      bVar2 = local_78 != (ulong *)0x0;
      local_78 = puVar11;
      local_70 = puVar7 + 1;
      local_68 = puVar10;
      if (bVar2) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      goto LAB_00507234;
    }
    *local_70 = uVar4;
    local_70 = local_70 + 1;
    puVar7 = local_78;
    if (local_78 == local_70) goto LAB_005072f0;
  }
                    /* try { // try from 00507240 to 0050726f has its CatchHandler @ 0050744c */
  FUN_002f2c60(&local_a8,"Service config parsing error");
  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                       ,0x3d,&local_a8,local_78,(long)local_70 - (long)local_78 >> 3);
  puVar7 = local_78;
  if (local_70 != local_78) {
    lVar14 = 0;
    uVar4 = *local_78;
    puVar10 = local_78;
    puVar11 = local_70;
    do {
      if (uVar4 < 5) {
        if ((ulong)((long)puVar11 - (long)puVar10 >> 3) <= lVar14 + 1U) break;
      }
      else {
                    /* try { // try from 005072c4 to 005072cf has its CatchHandler @ 00507450 */
        FUN_002f0430(uVar4,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
        puVar7 = local_78;
        puVar11 = local_70;
        puVar10 = local_78;
        if ((ulong)((long)local_70 - (long)local_78 >> 3) <= lVar14 + 1U) break;
      }
      lVar14 = lVar14 + 1;
      uVar4 = puVar10[lVar14];
    } while( true );
  }
  *param_4 = uVar6;
LAB_005072f0:
  if (puVar7 != (ulong *)0x0) {
    local_70 = puVar7;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


