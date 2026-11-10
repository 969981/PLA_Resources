/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00573bd0; name: FUN_00573bd0
 */


undefined8 FUN_00573bd0(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  ulong *puVar17;
  char *local_60 [4];
  undefined8 *local_38;
  
  local_38 = (undefined8 *)0x0;
  if (*param_1 < 2) {
                    /* try { // try from 00573fa0 to 00573fbf has its CatchHandler @ 00574034 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                  "operator[]");
  }
  puVar17 = param_1 + 1;
  puVar13 = puVar17;
  if ((*param_1 & 1) != 0) {
    puVar13 = (ulong *)*puVar17;
  }
  uVar14 = puVar13[3];
  if (1 < uVar14) {
    uVar11 = uVar14 >> 1;
    if ((uVar14 & 1) == 0) {
      uVar14 = 0;
      puVar13 = puVar13 + 6;
      if (uVar11 != 0) {
        do {
          bVar3 = (byte)puVar13[-2];
          uVar2 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar2 = puVar13[-1];
          }
          if (uVar2 == 0xe) {
            pbVar9 = (byte *)((long)puVar13 + -0xf);
            if ((bVar3 & 1) != 0) {
              pbVar9 = (byte *)*puVar13;
            }
            if (*(long *)pbVar9 == 0x645f656c676f6f67 && *(long *)(pbVar9 + 6) == 0x746c75616665645f
               ) goto LAB_00573efc;
          }
          if (uVar11 <= uVar14) {
LAB_00573f80:
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                          0x13e,"operator[]");
          }
          if (uVar2 == 4) {
            pbVar9 = (byte *)((long)puVar13 + -0xf);
            if ((bVar3 & 1) != 0) {
              pbVar9 = (byte *)*puVar13;
            }
            if (*(int *)pbVar9 == 0x656b6166) goto LAB_00573de4;
          }
          uVar14 = uVar14 + 1;
          puVar13 = puVar13 + 0xd;
          if (uVar11 <= uVar14) goto LAB_00573ea0;
        } while (uVar11 != uVar14);
      }
    }
    else {
      lVar12 = 0;
      uVar14 = 0;
      if (uVar11 != 0) {
        do {
          pbVar9 = (byte *)(puVar13[4] + lVar12);
          bVar3 = *pbVar9;
          uVar2 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar2 = *(ulong *)(pbVar9 + 8);
          }
          if (uVar2 == 0xe) {
            pbVar15 = *(byte **)(pbVar9 + 0x10);
            if ((bVar3 & 1) == 0) {
              pbVar15 = pbVar9 + 1;
            }
            if (*(long *)pbVar15 == 0x645f656c676f6f67 &&
                *(long *)(pbVar15 + 6) == 0x746c75616665645f) goto LAB_00573efc;
          }
          if (uVar11 <= uVar14) goto LAB_00573f80;
          if (uVar2 == 4) {
            pbVar15 = *(byte **)(pbVar9 + 0x10);
            if ((bVar3 & 1) == 0) {
              pbVar15 = pbVar9 + 1;
            }
            if (*(int *)pbVar15 == 0x656b6166) goto LAB_00573de4;
          }
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + 0x68;
          if (uVar11 <= uVar14) goto LAB_00573ea0;
        } while (uVar11 != uVar14);
      }
    }
                    /* try { // try from 00573f60 to 00573f9f has its CatchHandler @ 00574028 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                  "operator[]");
  }
                    /* try { // try from 00573c14 to 00573c1b has its CatchHandler @ 00574034 */
  puVar7 = (undefined8 *)FUN_004fcc40(param_2);
  if (puVar7 == (undefined8 *)0x0) {
    if (*param_1 < 2) {
                    /* try { // try from 00573fe0 to 00574027 has its CatchHandler @ 00574034 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                    "operator[]");
    }
    if ((*param_1 & 1) != 0) {
      puVar17 = (ulong *)param_1[1];
    }
    if ((*puVar17 & 1) == 0) {
      pbVar9 = (byte *)((long)puVar17 + 1);
    }
    else {
      pbVar9 = (byte *)puVar17[2];
    }
                    /* try { // try from 00573f08 to 00573f13 has its CatchHandler @ 00574034 */
    uVar10 = FUN_00595070(pbVar9,param_2,0);
    goto LAB_00573f18;
  }
  goto LAB_00573e58;
LAB_00573efc:
                    /* try { // try from 00573efc to 00573eff has its CatchHandler @ 00574028 */
  puVar7 = (undefined8 *)FUN_005778e0();
  goto LAB_00573de8;
LAB_00573de4:
                    /* try { // try from 00573de4 to 00573de7 has its CatchHandler @ 00574028 */
  puVar7 = (undefined8 *)FUN_00574050();
LAB_00573de8:
  puVar6 = local_38;
  if (puVar7 == (undefined8 *)0x0) {
LAB_00573ea0:
                    /* try { // try from 00573ea0 to 00573ecb has its CatchHandler @ 00574030 */
    FUN_002f2c60(local_60,"no supported credential types found");
    uVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_channel_secure.cc"
                         ,0x55,local_60,0,0);
    uVar10 = 0;
    *param_3 = uVar8;
  }
  else {
    if (local_38 != (undefined8 *)0x0) {
      lVar12 = local_38[1];
      plVar1 = local_38 + 2;
      do {
        lVar16 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 00573e24 to 00573e43 has its CatchHandler @ 00574034 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),local_38 + 1,lVar16);
      }
      if (lVar16 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar6)(puVar6);
        FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      }
    }
    local_38 = puVar7;
LAB_00573e58:
    local_60[0] = "grpc.channel_credentials";
                    /* try { // try from 00573e64 to 00573e73 has its CatchHandler @ 0057402c */
    uVar8 = FUN_002e45c0(param_2,local_60,1);
    if (*param_1 < 2) {
                    /* try { // try from 00573fc0 to 00573fdf has its CatchHandler @ 00574038 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                    "operator[]");
    }
    if ((*param_1 & 1) != 0) {
      puVar17 = (ulong *)param_1[1];
    }
    if ((*puVar17 & 1) == 0) {
      pbVar9 = (byte *)((long)puVar17 + 1);
    }
    else {
      pbVar9 = (byte *)puVar17[2];
    }
                    /* try { // try from 00573edc to 00573ef7 has its CatchHandler @ 00574038 */
    uVar10 = FUN_005b5a40(puVar7,pbVar9,uVar8,0);
    FUN_002e4a10(uVar8);
  }
LAB_00573f18:
  FUN_004fb2f8(&local_38);
  return uVar10;
}


