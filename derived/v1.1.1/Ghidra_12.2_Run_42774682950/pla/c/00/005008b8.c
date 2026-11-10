/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005008b8; name: FUN_005008b8
 */


void FUN_005008b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  ulong local_80 [4];
  
  *param_1 = 0;
  puVar3 = PTR_LAB_04373088;
  puVar2 = PTR_FUN_04373078;
  local_90 = (ulong *)0x0;
  local_88 = (ulong *)0x0;
  local_98 = (ulong *)0x0;
  uVar8 = *DAT_0439ebb0;
  if (uVar8 < 2) {
    return;
  }
  uVar13 = 0;
  if (uVar8 >> 1 != 0) {
    do {
      local_80[0] = 0;
      if ((uVar8 & 1) == 0) {
        puVar7 = DAT_0439ebb0 + 1;
      }
      else {
        puVar7 = (ulong *)DAT_0439ebb0[1];
      }
                    /* try { // try from 00500964 to 00500973 has its CatchHandler @ 00500be0 */
      (**(code **)(*(long *)puVar7[uVar13] + 0x10))
                (&local_a0,(long *)puVar7[uVar13],param_2,local_80);
      if (local_80[0] != 0) {
        if (local_90 == local_88) {
          lVar12 = (long)local_90 - (long)local_98 >> 3;
          uVar8 = lVar12 + 1;
          if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 00500b7c to 00500b83 has its CatchHandler @ 00500b84 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_88 - (long)local_98 >> 3) < 0xfffffffffffffff) {
            uVar9 = (long)local_88 - (long)local_98 >> 2;
            if (uVar8 <= uVar9) {
              uVar8 = uVar9;
            }
            if (uVar8 != 0) goto LAB_005009dc;
            lVar5 = 0;
          }
          else {
            uVar8 = 0x1fffffffffffffff;
LAB_005009dc:
            lVar5 = FUN_002e2e80(puVar2,uVar8 << 3);
          }
          puVar7 = (ulong *)(lVar5 + lVar12 * 8);
          puVar10 = (ulong *)(lVar5 + uVar8 * 8);
          *puVar7 = local_80[0];
          __n = (long)local_90 - (long)local_98;
          puVar11 = (ulong *)((long)puVar7 - __n);
          if (0 < (long)__n) {
            memcpy(puVar11,local_98,__n);
          }
          bVar1 = local_98 != (ulong *)0x0;
          local_98 = puVar11;
          local_90 = puVar7 + 1;
          local_88 = puVar10;
          if (bVar1) {
            FUN_002e2ea0(puVar3);
          }
        }
        else {
          *local_90 = local_80[0];
          local_90 = local_90 + 1;
        }
      }
                    /* try { // try from 00500a30 to 00500a3b has its CatchHandler @ 00500ba4 */
      FUN_00501244(param_1,&local_a0);
      puVar4 = local_a0;
      local_a0 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_002e2ea0(puVar3,puVar4);
      }
      uVar13 = uVar13 + 1;
      uVar8 = *DAT_0439ebb0;
      if (uVar8 >> 1 <= uVar13) {
        puVar7 = local_90;
        if (local_98 == local_90) goto LAB_00500b24;
                    /* try { // try from 00500a74 to 00500aa3 has its CatchHandler @ 00500b9c */
        FUN_002f2c60(local_80,"Global Params");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config_parser.cc"
                             ,0x3e,local_80,local_98,(long)local_90 - (long)local_98 >> 3);
        puVar7 = local_98;
        if (local_90 == local_98) goto LAB_00500b1c;
        lVar12 = 0;
        uVar8 = *local_98;
        puVar10 = local_98;
        puVar11 = local_90;
        goto joined_r0x00500ad8;
      }
    } while (uVar13 < uVar8 >> 1);
  }
                    /* try { // try from 00500b5c to 00500b7b has its CatchHandler @ 00500b98 */
  local_80[0] = 0;
                    /* WARNING: Subroutine does not return */
  __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                "operator[]");
joined_r0x00500ad8:
  if (uVar8 < 5) {
    if ((ulong)((long)puVar11 - (long)puVar10 >> 3) <= lVar12 + 1U) goto LAB_00500b1c;
  }
  else {
                    /* try { // try from 00500af8 to 00500b03 has its CatchHandler @ 00500ba0 */
    FUN_002f0430(uVar8,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
    puVar7 = local_98;
    puVar11 = local_90;
    puVar10 = local_98;
    if ((ulong)((long)local_90 - (long)local_98 >> 3) <= lVar12 + 1U) {
LAB_00500b1c:
      *param_3 = uVar6;
LAB_00500b24:
      if (puVar7 == (ulong *)0x0) {
        return;
      }
      local_90 = puVar7;
      FUN_002e2ea0(PTR_LAB_04373088,puVar7);
      return;
    }
  }
  lVar12 = lVar12 + 1;
  uVar8 = puVar10[lVar12];
  goto joined_r0x00500ad8;
}


