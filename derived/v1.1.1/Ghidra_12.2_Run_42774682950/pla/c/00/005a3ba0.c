/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a3ba0; name: FUN_005a3ba0
 */


ulong FUN_005a3ba0(uint *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  byte *pbVar1;
  byte bVar2;
  void *__ptr;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  void *local_b0;
  byte local_a8 [16];
  ulong local_98;
  undefined1 auStack_90 [32];
  ulong local_70;
  undefined *puStack_68;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_2 + 8);
  do {
    plVar12 = *(long **)(param_3 + 8);
    if (*plVar12 == 0) {
      pbVar15 = (byte *)((long)plVar12 + 9);
      uVar10 = (ulong)*(byte *)(plVar12 + 1);
      if (uVar10 != 0) goto LAB_005a3bfc;
LAB_005a3cfc:
      FUN_00306180(param_3);
    }
    else {
      uVar10 = plVar12[1];
      pbVar15 = (byte *)plVar12[2];
      if (uVar10 == 0) goto LAB_005a3cfc;
LAB_005a3bfc:
      if (*param_1 < 7) {
        pbVar1 = pbVar15 + uVar10;
        switch(*param_1) {
        case 0:
          lVar6 = *(long *)(param_2 + 0x1d0) + 1;
          *(long *)(param_2 + 0x1d0) = lVar6;
          bVar2 = *pbVar15;
          local_70 = (ulong)bVar2;
          *(byte *)(param_1 + 1) = bVar2;
          uVar7 = 0;
          if (bVar2 != 0) {
            if (bVar2 != 1) {
              puStack_68 = PTR_FUN_043739e8;
              FUN_002e6390(local_a8,"Bad GRPC frame type 0x%02x",0x1a,&local_70,1);
              uVar10 = (ulong)local_a8 | 1;
              if ((local_a8[0] & 1) != 0) {
                uVar10 = local_98;
              }
                    /* try { // try from 005a3f04 to 005a3f27 has its CatchHandler @ 005a4200 */
              FUN_002f2ff0(auStack_90,uVar10);
              uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                                   ,0x85,auStack_90,0,0);
              *(undefined8 *)(param_1 + 4) = uVar5;
              if ((local_a8[0] & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_98);
                uVar5 = *(undefined8 *)(param_1 + 4);
              }
              uVar5 = FUN_002f0d20(uVar5,2,*(undefined4 *)(param_2 + 200));
              *(undefined8 *)(param_1 + 4) = uVar5;
              local_b0 = (void *)FUN_00304ac0(plVar12,3);
                    /* try { // try from 005a3f6c to 005a3f87 has its CatchHandler @ 005a41e4 */
              FUN_002f3150(auStack_90,&local_b0);
              uVar5 = FUN_002f1340(uVar5,6,auStack_90);
              __ptr = local_b0;
              *(undefined8 *)(param_1 + 4) = uVar5;
              local_b0 = (void *)0x0;
              if (__ptr != (void *)0x0) {
                    /* try { // try from 005a3f98 to 005a3f9f has its CatchHandler @ 005a41e0 */
                free(__ptr);
                uVar5 = *(undefined8 *)(param_1 + 4);
              }
              uVar5 = FUN_002f0d20(uVar5,4,0);
              *(undefined8 *)(param_1 + 4) = uVar5;
              *param_1 = 6;
              FUN_00306180(param_3);
              uVar10 = *(ulong *)(param_1 + 4);
              if (uVar10 < 5) {
                return uVar10;
              }
              uVar10 = FUN_002f03c0(uVar10,
                                    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                                    ,0x90);
              return uVar10;
            }
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 6) = uVar7;
          if (uVar10 != 1) {
            pbVar13 = pbVar15 + 1;
            goto LAB_005a3c90;
          }
          uVar8 = 1;
          break;
        case 1:
          lVar6 = *(long *)(param_2 + 0x1d0);
          pbVar13 = pbVar15;
LAB_005a3c90:
          lVar6 = lVar6 + 1;
          *(long *)(param_2 + 0x1d0) = lVar6;
          pbVar14 = pbVar13 + 1;
          uVar8 = (uint)*pbVar13 << 0x18;
          param_1[2] = uVar8;
          if (pbVar14 != pbVar1) goto LAB_005a3cac;
          uVar8 = 2;
          break;
        case 2:
          lVar6 = *(long *)(param_2 + 0x1d0);
          uVar8 = param_1[2];
          pbVar14 = pbVar15;
LAB_005a3cac:
          lVar6 = lVar6 + 1;
          *(long *)(param_2 + 0x1d0) = lVar6;
          pbVar13 = pbVar14 + 1;
          uVar8 = uVar8 | (uint)*pbVar14 << 0x10;
          param_1[2] = uVar8;
          if (pbVar13 != pbVar1) goto LAB_005a3cc8;
          uVar8 = 3;
          break;
        case 3:
          lVar6 = *(long *)(param_2 + 0x1d0);
          uVar8 = param_1[2];
          pbVar13 = pbVar15;
LAB_005a3cc8:
          lVar6 = lVar6 + 1;
          *(long *)(param_2 + 0x1d0) = lVar6;
          pbVar14 = pbVar13 + 1;
          param_1[2] = uVar8 | (uint)*pbVar13 << 8;
          if (pbVar14 != pbVar1) goto LAB_005a3d18;
          uVar8 = 4;
          break;
        case 4:
          lVar6 = *(long *)(param_2 + 0x1d0);
          pbVar14 = pbVar15;
LAB_005a3d18:
          *(long *)(param_2 + 0x1d0) = lVar6 + 1;
          if (param_5 == (long *)0x0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0xb5,2,"assertion failed: %s","stream_out != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(long *)(param_1 + 8) != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0xb6,2,"assertion failed: %s","p->parsing_frame == nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_1[2] = param_1[2] | (uint)*pbVar14;
          if (*(long *)(lVar11 + 0x15c0) != 0) {
            FUN_003e78a4();
          }
          *param_1 = 5;
          uVar8 = param_1[6];
          lVar6 = FUN_002e2e80(PTR_FUN_04373078,0xd8);
          if (lVar6 != 0) {
            FUN_0059c03c(lVar6,lVar11,param_2,param_1[2],(uint)((char)uVar8 != '\0') << 0x1f);
          }
          *(long *)(param_1 + 8) = lVar6;
          puVar3 = (undefined8 *)*param_5;
          *param_5 = lVar6;
          if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 005a3da4 to 005a3da7 has its CatchHandler @ 005a422c */
            (**(code **)*puVar3)();
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x30) == 0) {
            uVar4 = FUN_0059ca78(*(long *)(param_1 + 8),0,1);
            if (4 < uVar4) {
              FUN_002f0430(uVar4,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                           ,0xc5);
            }
            param_1[8] = 0;
            param_1[9] = 0;
            *param_1 = 0;
            *(undefined1 *)(param_2 + 0x7d8) = 1;
          }
          else {
            *(undefined1 *)(param_2 + 0x7d8) = 1;
          }
          if (pbVar14 + 1 != pbVar1) {
            FUN_003062c0(param_3,(long)(pbVar14 + 1) - (long)pbVar15,uVar10);
            return 0;
          }
LAB_005a4084:
          FUN_00306180(param_3);
          return 0;
        case 5:
          lVar11 = *(long *)(param_1 + 8);
          if (lVar11 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0xd2,2,"assertion failed: %s","p->parsing_frame != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (param_4 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0xd3,2,"assertion failed: %s","slice_out != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar8 = param_1[2];
          uVar9 = (uint)uVar10;
          if (uVar8 == uVar9) {
            *(ulong *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + (uVar10 & 0xffffffff);
            lStack_c8 = plVar12[1];
            local_d0 = *plVar12;
            lStack_b8 = plVar12[3];
            lStack_c0 = plVar12[2];
            FUN_002f3570(auStack_90,&local_d0,0,uVar10);
            uVar4 = FUN_0059c90c(lVar11,auStack_90,param_4);
            if ((uVar4 == 0) && (uVar4 = FUN_0059ca78(*(undefined8 *)(param_1 + 8),0,1), uVar4 == 0)
               ) {
              param_1[8] = 0;
              param_1[9] = 0;
              *param_1 = 0;
            }
LAB_005a40f0:
            FUN_00306180(param_3);
            return uVar4;
          }
          if (uVar9 < uVar8) {
            *(ulong *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + (uVar10 & 0xffffffff);
            lStack_e8 = plVar12[1];
            local_f0 = *plVar12;
            lStack_d8 = plVar12[3];
            lStack_e0 = plVar12[2];
            FUN_002f3570(auStack_90,&local_f0,0,uVar10);
            uVar10 = FUN_0059c90c(lVar11,auStack_90,param_4);
            if (uVar10 != 0) {
              return uVar10;
            }
            param_1[2] = param_1[2] - uVar9;
            uVar4 = 0;
            goto LAB_005a40f0;
          }
          if (uVar9 <= uVar8) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0xf9,2,"assertion failed: %s","remaining > p->frame_size");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(ulong *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + (ulong)uVar8;
          lStack_108 = plVar12[1];
          local_110 = *plVar12;
          lStack_f8 = plVar12[3];
          lStack_100 = plVar12[2];
          FUN_002f3570(auStack_90,&local_110,0);
          lVar11 = FUN_0059c90c(lVar11,auStack_90,param_4);
          if (lVar11 == 0) {
            uVar4 = FUN_0059ca78(*(undefined8 *)(param_1 + 8),0,1);
            if (uVar4 == 0) {
              param_1[8] = 0;
              param_1[9] = 0;
              *param_1 = 0;
              FUN_003062c0(param_3,param_1[2],uVar10);
              return 0;
            }
            goto LAB_005a40f0;
          }
          goto LAB_005a4084;
        case 6:
          *param_1 = 6;
          FUN_00306180(param_3);
          uVar10 = *(ulong *)(param_1 + 4);
          if (uVar10 < 5) {
            return uVar10;
          }
          uVar10 = FUN_002f03c0(uVar10,
                                "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                                ,0x77);
          return uVar10;
        }
        *param_1 = uVar8;
        goto LAB_005a3cfc;
      }
    }
    if (*(long *)(param_3 + 0x10) == 0) {
      return 0;
    }
  } while( true );
}


