/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003caa40; name: FUN_003caa40
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003caa40(long param_1,uint *param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong *puVar9;
  void *__ptr;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  uint *puVar26;
  long lVar27;
  int iVar28;
  undefined8 uVar29;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  uint7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_003d50e0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x619,1,param_2,
                 param_3);
  }
  if (param_3 == 0) {
    if (param_5 == 0) {
      uVar10 = FUN_003ceb00(*(undefined8 *)(param_1 + 0x78),param_4);
      if ((uVar10 & 1) == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x61d,2,
                     "assertion failed: %s","grpc_cq_begin_op(call->cq, notify_tag)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar19 = *(undefined8 *)(param_1 + 0x78);
      uVar23 = FUN_002ebd50(0x70);
      FUN_003ceba0(uVar19,param_4,0,&LAB_003cbc00,0,uVar23,0);
    }
    else {
      local_c8 = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
      uVar10 = (ulong)uStack_c0 >> 0x20;
      uStack_c0 = CONCAT44((int)uVar10,0x623);
      FUN_00302c34(&local_c8,param_4,0);
    }
    return 0;
  }
  if (7 < *param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x46f,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar21 = (undefined8 *)(param_1 + *(long *)(&DAT_039fddd0 + (long)(int)*param_2 * 8) * 8 + 0xd0);
  plVar20 = (long *)*puVar21;
  if (plVar20 == (long *)0x0) {
    puVar9 = *(ulong **)(param_1 + 0x10);
    do {
      uVar11 = *puVar9;
      uVar10 = uVar11 + 0x180;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar6) {
        *puVar9 = uVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar9[1] < uVar10) {
      plVar20 = (long *)FUN_003f5a34(puVar9,0x180);
    }
    else {
      plVar20 = (long *)((long)puVar9 + uVar11 + 0x20);
    }
    plVar20[2] = 0;
    plVar20[1] = 0;
    plVar20[0x20] = 0;
    plVar20[0x1f] = 0;
    plVar20[0x2f] = 0;
    plVar20[0x1e] = 0;
    plVar20[0x1d] = 0;
    plVar20[0x1c] = 0;
    plVar20[0x1b] = 0;
    plVar20[0x1a] = 0;
    plVar20[0x19] = 0;
    plVar20[0x18] = 0;
    plVar20[0x17] = 0;
    plVar20[0x16] = 0;
    plVar20[0x15] = 0;
    plVar20[0x14] = 0;
    plVar20[0x13] = 0;
    plVar20[0x12] = 0;
    plVar20[0x11] = 0;
    plVar20[0x10] = 0;
    plVar20[0xf] = 0;
    plVar20[0xe] = 0;
    plVar20[0xd] = 0;
    plVar20[0xc] = 0;
    plVar20[0xb] = 0;
    plVar20[10] = 0;
    plVar20[9] = 0;
    plVar20[8] = 0;
    plVar20[7] = 0;
    plVar20[6] = 0;
    plVar20[5] = 0;
    plVar20[4] = 0;
    plVar20[3] = 0;
    plVar20[0x22] = 0;
    plVar20[0x21] = 0;
    plVar20[0x2c] = 0;
    plVar20[0x2b] = 0;
    plVar20[0x2e] = 0;
    plVar20[0x2d] = 0;
    plVar20[0x28] = 0;
    plVar20[0x27] = 0;
    plVar20[0x2a] = 0;
    plVar20[0x29] = 0;
    plVar20[0x24] = 0;
    plVar20[0x23] = 0;
    plVar20[0x26] = 0;
    plVar20[0x25] = 0;
    *puVar21 = plVar20;
    *plVar20 = param_1;
    plVar20[2] = param_1 + 0x100;
    if (plVar20 == (long *)0x0) {
      return 8;
    }
  }
  else {
    if (*plVar20 != 0) {
      return 8;
    }
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_b8 = 0;
    local_c8 = (char *)0x0;
    uStack_c0 = 0;
    plVar20[6] = 0;
    plVar20[5] = 0;
    plVar20[4] = 0;
    plVar20[3] = (ulong)uStack_b7 << 8;
    plVar20[0xd] = 0;
    plVar20[0xc] = 0;
    plVar20[0xb] = 0;
    *plVar20 = param_1;
    plVar20[10] = 0;
    plVar20[9] = 0;
    plVar20[2] = 0;
    plVar20[1] = 0;
    plVar20[2] = param_1 + 0x100;
    plVar20[8] = 0;
    plVar20[7] = 0;
  }
  *(bool *)(plVar20 + 0xf) = param_5 != 0;
  lVar22 = param_1 + 0x198;
  lVar18 = param_1 + 0x280;
  lVar1 = param_1 + 0x6c8;
  puVar21 = (undefined8 *)(param_1 + 0x548);
  lVar24 = 0;
  iVar8 = 0;
  iVar28 = 0;
  plVar20[0xe] = param_4;
  lVar12 = *(long *)(param_2 + 2);
joined_r0x003cac9c:
  if (lVar12 != 0) {
    uVar23 = 1;
    bVar4 = *(byte *)(plVar20 + 3);
joined_r0x003cb6e0:
    if ((bVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb3) = 0;
      FUN_003dff90(lVar22);
      bVar4 = *(byte *)(plVar20 + 3);
    }
    if ((bVar4 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb4) = 0;
      (*(code *)**(undefined8 **)(param_1 + 0x6c8))(lVar1);
      bVar4 = *(byte *)(plVar20 + 3);
    }
    if ((bVar4 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb5) = 0;
      FUN_003dff90(lVar18);
      bVar4 = *(byte *)(plVar20 + 3);
    }
    if ((bVar4 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb6) = 0;
      bVar4 = *(byte *)(plVar20 + 3);
    }
    if ((bVar4 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb7) = 0;
      bVar4 = *(byte *)(plVar20 + 3);
    }
    if ((bVar4 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb8) = 0;
    }
    return uVar23;
  }
  switch(param_2[lVar24 * 0x14]) {
  case 0:
    puVar26 = param_2 + lVar24 * 0x14 + 1;
    uVar17 = 0xfffffe1b;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      uVar17 = 0xfffffe0b;
    }
    if ((uVar17 & *puVar26) == 0) {
      if (*(char *)(param_1 + 0xb3) != '\0') goto LAB_003cb6b8;
      FUN_002f2710(&local_c8);
      *(undefined8 *)(param_1 + 0x550) = uStack_c0;
      *puVar21 = local_c8;
      *(undefined8 *)(param_1 + 0x560) = uStack_b0;
      *(ulong *)(param_1 + 0x558) = CONCAT71(uStack_b7,local_b8);
      FUN_002f2710(&local_c8);
      *(undefined8 *)(param_1 + 0x570) = uStack_c0;
      *(undefined8 *)(param_1 + 0x568) = local_c8;
      *(undefined8 *)(param_1 + 0x580) = uStack_b0;
      *(ulong *)(param_1 + 0x578) = CONCAT71(uStack_b7,local_b8);
      *(undefined4 *)(param_1 + 0x588) = 0;
      if ((char)param_2[lVar24 * 0x14 + 8] == '\0') {
        if ((*(int *)(*(long *)(param_1 + 0x90) + 8) != 0) &&
           (puVar13 = (uint *)(*(long *)(param_1 + 0x90) + 0xc), *(char *)(param_1 + 0xb0) == '\0'))
        goto LAB_003cb14c;
LAB_003cb124:
        lVar12 = 0;
      }
      else {
        puVar13 = param_2 + lVar24 * 0x14 + 9;
        if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_003cb124;
LAB_003cb14c:
        uVar7 = FUN_003f11a0(*puVar13,*(undefined4 *)(param_1 + 0x610));
        lVar12 = FUN_003db7f0();
        if (lVar12 != -0x35010ff23f0011ef) goto LAB_003cb8f8;
        lVar12 = *(long *)PTR_DAT_04373fe0;
        if (lVar12 == 0) goto LAB_003cb920;
        uVar23 = *(undefined8 *)(lVar12 + 0x220);
        uVar29 = *(undefined8 *)(lVar12 + 0x238);
        uVar19 = *(undefined8 *)(lVar12 + 0x230);
        *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(lVar12 + 0x228);
        *puVar21 = uVar23;
        *(undefined8 *)(param_1 + 0x560) = uVar29;
        *(undefined8 *)(param_1 + 0x558) = uVar19;
        FUN_003f1270(&local_c8,uVar7);
        lVar12 = 1;
        *(undefined8 *)(param_1 + 0x570) = uStack_c0;
        *(undefined8 *)(param_1 + 0x568) = local_c8;
        *(undefined8 *)(param_1 + 0x580) = uStack_b0;
        *(ulong *)(param_1 + 0x578) = CONCAT71(uStack_b7,local_b8);
      }
      if ((ulong)(*(long *)(param_2 + lVar24 * 0x14 + 4) + lVar12) >> 0x1f == 0) {
        *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 1;
        *(undefined1 *)(param_1 + 0xb3) = 1;
        iVar8 = FUN_003cbc10(param_1,param_2[lVar24 * 0x14 + 4],
                             *(undefined8 *)(param_2 + lVar24 * 0x14 + 6),0,
                             *(undefined1 *)(param_1 + 0xb0),puVar21);
        if (iVar8 != 0) {
          if (*(char *)(param_1 + 0xb0) == '\0') {
            *(long *)(param_1 + 0x100) = lVar22;
            *(uint *)(param_1 + 0x108) = *puVar26;
          }
          else {
            *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x6c0);
            *(long *)(param_1 + 0x100) = lVar22;
            *(uint *)(param_1 + 0x108) = *puVar26;
            *(long *)(param_1 + 0x110) = param_1 + 0x5b0;
          }
LAB_003cb488:
          iVar8 = 1;
          goto joined_r0x003cad30;
        }
      }
      goto LAB_003cb7a4;
    }
    break;
  case 1:
    uVar17 = param_2[lVar24 * 0x14 + 1];
    if ((uVar17 & 0x3ffffff8) == 0) {
      lVar12 = *(long *)(param_2 + lVar24 * 0x14 + 4);
      if (lVar12 != 0) {
        if (*(char *)(param_1 + 0xb4) != '\0') goto LAB_003cb6b8;
        uVar3 = uVar17 | 0x80000000;
        if (*(int *)(lVar12 + 0x10) < 1) {
          uVar3 = uVar17;
        }
        *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 4;
        *(undefined1 *)(param_1 + 0xb4) = 1;
        FUN_004fefe4(lVar1,*(long *)(param_2 + lVar24 * 0x14 + 4) + 0x18,uVar3);
        puVar25 = *(undefined8 **)(param_1 + 0x128);
        *(long *)(param_1 + 0x128) = lVar1;
        if (puVar25 == (undefined8 *)0x0) {
          iVar8 = 1;
        }
        else {
                    /* try { // try from 003cb048 to 003cb04b has its CatchHandler @ 003cba08 */
          (**(code **)*puVar25)();
          iVar8 = 1;
        }
        goto joined_r0x003cb144;
      }
      uVar23 = 0xb;
      bVar4 = *(byte *)(plVar20 + 3);
      goto joined_r0x003cb6e0;
    }
    break;
  case 2:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb0) != '\0') {
        if (*(char *)(param_1 + 0xb5) != '\0') goto LAB_003cb6b8;
        *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 2;
        iVar8 = 1;
        *(undefined1 *)(param_1 + 0xb5) = 1;
        *(long *)(param_1 + 0x118) = lVar18;
        goto joined_r0x003cb144;
      }
LAB_003cb6d8:
      uVar23 = 2;
      bVar4 = *(byte *)(plVar20 + 3);
      goto joined_r0x003cb6e0;
    }
    break;
  case 3:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb0) == '\0') {
        if (*(char *)(param_1 + 0xb5) != '\0') goto LAB_003cb6b8;
        if (*(ulong *)(param_2 + lVar24 * 0x14 + 4) >> 0x1f == 0) {
          *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 2;
          *(undefined1 *)(param_1 + 0xb5) = 1;
          if (*(int *)(param_1 + 0x6b8) != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x6d1,2,
                         "assertion failed: %s","call->send_extra_metadata_count == 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined4 *)(param_1 + 0x6b8) = 1;
          puVar26 = param_2 + lVar24 * 0x14 + 8;
          uVar17 = *puVar26;
          if (uVar17 == 2) {
            lVar12 = FUN_003db7f0();
            if (lVar12 != -0x35010ff23f0011ef) {
LAB_003cb8b0:
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h"
                           ,0x13d,2,"assertion failed: %s",
                           "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                          );
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)PTR_DAT_04373ff0 == 0) {
LAB_003cb948:
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h"
                           ,0x13e,2,"assertion failed: %s",
                           "grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(*(long *)PTR_DAT_04373ff0 + 0x1f8);
            uVar17 = *puVar26;
joined_r0x003cb2e4:
            if (uVar17 == 0) goto LAB_003cb298;
LAB_003cb2fc:
            FUN_002f2c60(&local_c8,"Server returned error");
            uVar23 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x6da
                                  ,&local_c8,0,0);
            lVar12 = FUN_002f0d20(uVar23,3,(long)(int)*puVar26);
            puVar26 = param_2 + lVar24 * 0x14 + 10;
            lVar14 = *(long *)puVar26;
          }
          else {
            if (uVar17 == 1) {
              lVar12 = FUN_003db7f0();
              if (lVar12 != -0x35010ff23f0011ef) goto LAB_003cb8b0;
              if (*(long *)PTR_DAT_04373ff0 == 0) goto LAB_003cb948;
              *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(*(long *)PTR_DAT_04373ff0 + 0x1f0);
              uVar17 = *puVar26;
              goto joined_r0x003cb2e4;
            }
            if (uVar17 != 0) {
              uVar23 = FUN_005356a0();
              *(undefined8 *)(param_1 + 0x658) = uVar23;
              uVar17 = *puVar26;
              goto joined_r0x003cb2e4;
            }
            lVar12 = FUN_003db7f0();
            if (lVar12 != -0x35010ff23f0011ef) goto LAB_003cb8b0;
            if (*(long *)PTR_DAT_04373ff0 == 0) goto LAB_003cb948;
            *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(*(long *)PTR_DAT_04373ff0 + 0x1e8);
            if (*puVar26 != 0) goto LAB_003cb2fc;
LAB_003cb298:
            lVar12 = 0;
            puVar26 = param_2 + lVar24 * 0x14 + 10;
            lVar14 = *(long *)puVar26;
          }
          if (lVar14 != 0) {
            lVar14 = FUN_003db7f0();
            if (lVar14 != -0x35010ff23f0011ef) {
LAB_003cb8f8:
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h"
                           ,0x34,2,"assertion failed: %s",
                           "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                          );
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar14 = *(long *)PTR_DAT_04373fe0;
            if (lVar14 == 0) {
LAB_003cb920:
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h"
                           ,0x35,2,"assertion failed: %s",
                           "grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar25 = *(undefined8 **)puVar26;
            plVar15 = (long *)*puVar25;
            if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
              plVar2 = plVar15 + 1;
              do {
                lVar27 = *plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar27 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              lVar16 = *plVar15;
              if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,
                             1,"%s:%p ref %ld -> %ld",*(undefined8 *)(lVar16 + 8),plVar15,lVar27,
                             lVar27 + 1);
              }
              if (lVar27 < 1) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("prior > 0",
                              "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c
                              ,"RefNonZero");
              }
            }
            uVar10 = FUN_003d9520(lVar14 + 0xc0,puVar25);
            *(ulong *)(param_1 + 0x678) = uVar10;
            *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
            lVar14 = 0;
            if (lVar12 != 0) {
              uVar10 = uVar10 & 0xfffffffffffffffc;
              uStack_e8 = *(undefined8 *)(uVar10 + 0x28);
              local_f0 = *(undefined8 *)(uVar10 + 0x20);
              uStack_d8 = *(undefined8 *)(uVar10 + 0x38);
              uStack_e0 = *(undefined8 *)(uVar10 + 0x30);
              __ptr = (void *)FUN_002f2680(&local_f0);
              FUN_002f2ff0(&local_c8);
              lVar14 = FUN_002f1340(lVar12,5,&local_c8);
              free(__ptr);
            }
            lVar12 = lVar14;
          }
          *(long *)(param_1 + 0x9c8) = lVar12;
          iVar8 = FUN_003cbc10(param_1,(uint)*(ulong *)(param_2 + lVar24 * 0x14 + 4),
                               *(undefined8 *)(param_2 + lVar24 * 0x14 + 6),1,1,0,0);
          if (iVar8 != 0) {
            *(long *)(param_1 + 0x118) = lVar18;
            *(long *)(param_1 + 0x120) = param_1 + 0x95c;
            goto LAB_003cb488;
          }
          if (0 < *(int *)(param_1 + 0x6b8)) {
            lVar24 = 0;
            do {
              uVar10 = *(ulong *)(param_1 + lVar24 * 0x20 + 0x658);
              uVar17 = (uint)uVar10 & 3;
              if (1 < uVar17) {
                uVar10 = uVar10 & 0xfffffffffffffffc;
                uVar7 = *(undefined4 *)(uVar10 + 0x48);
                plVar15 = (long *)(uVar10 + 0x40);
                FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                             "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x6f7);
                do {
                  lVar12 = *plVar15;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *plVar15 = lVar12 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar12 < 1) {
                  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",
                               0x104,2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (lVar12 == 1) {
                  FUN_003da320(uVar17,uVar10,uVar7,
                               "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x6f7);
                }
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 < *(int *)(param_1 + 0x6b8));
          }
          *(undefined4 *)(param_1 + 0x6b8) = 0;
        }
LAB_003cb7a4:
        uVar23 = 10;
        bVar4 = *(byte *)(plVar20 + 3);
        goto joined_r0x003cb6e0;
      }
LAB_003cb6c8:
      uVar23 = 3;
      bVar4 = *(byte *)(plVar20 + 3);
      goto joined_r0x003cb6e0;
    }
    break;
  case 4:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb6) != '\0') goto LAB_003cb6b8;
      *(undefined1 *)(param_1 + 0xb6) = 1;
      *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 4);
      *(undefined1 **)(param_1 + 0x8d0) = &LAB_003cc010;
      *(long **)(param_1 + 0x8d8) = plVar20;
      *(undefined8 *)(param_1 + 0x8e0) = 0;
      *(undefined2 *)(param_1 + 0x8e8) = 0;
      *(undefined8 *)(param_1 + 0x900) = 0;
      *(undefined4 *)(param_1 + 0x908) = 0;
      *(char **)(param_1 + 0x8f0) = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
      *(undefined4 *)(param_1 + 0x8f8) = 0x713;
      *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 8;
      *(long *)(param_1 + 0x138) = param_1 + 0x368;
      *(long *)(param_1 + 0x148) = param_1 + 0x8c8;
      if (*(char *)(param_1 + 0xb0) == '\0') {
        *(long *)(param_1 + 0x158) = param_1 + 0x5b0;
      }
LAB_003cad24:
      iVar28 = iVar28 + 1;
      goto joined_r0x003cad30;
    }
    break;
  case 5:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb7) != '\0') goto LAB_003cb6b8;
      *(undefined1 *)(param_1 + 0xb7) = 1;
      *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 0x10;
      uVar23 = *(undefined8 *)(param_2 + lVar24 * 0x14 + 4);
      *(long **)(param_1 + 0x890) = plVar20;
      *(undefined8 *)(param_1 + 0x898) = 0;
      *(undefined2 *)(param_1 + 0x8a0) = 0;
      *(undefined8 *)(param_1 + 0x8b8) = 0;
      *(undefined4 *)(param_1 + 0x8c0) = 0;
      *(char **)(param_1 + 0x8a8) = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
      *(undefined8 *)(param_1 + 0x810) = uVar23;
      *(long *)(param_1 + 0x160) = param_1 + 0x808;
      *(undefined1 **)(param_1 + 0x888) = &LAB_003cc550;
      *(undefined4 *)(param_1 + 0x8b0) = 0x730;
      iVar28 = iVar28 + 1;
      *(long *)(param_1 + 0x168) = param_1 + 0x880;
      goto joined_r0x003cb144;
    }
    break;
  case 6:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb0) == '\0') goto LAB_003cb6d8;
      if (*(char *)(param_1 + 0xb8) == '\0') {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 4);
        *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 6);
        *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 8);
        *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 10);
        *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 0x20;
        *(long *)(param_1 + 0x170) = param_1 + 0x450;
        *(long *)(param_1 + 0x178) = param_1 + 0x5b8;
        *(undefined1 **)(param_1 + 0x918) = &LAB_003cc5a0;
        *(long **)(param_1 + 0x920) = plVar20;
        *(undefined8 *)(param_1 + 0x928) = 0;
        *(undefined2 *)(param_1 + 0x930) = 0;
        *(undefined8 *)(param_1 + 0x948) = 0;
        *(undefined4 *)(param_1 + 0x950) = 0;
        *(char **)(param_1 + 0x938) = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
        uVar7 = 0x753;
LAB_003cad18:
        *(undefined4 *)(param_1 + 0x940) = uVar7;
        *(long *)(param_1 + 0x180) = param_1 + 0x910;
        goto LAB_003cad24;
      }
LAB_003cb6b8:
      uVar23 = 8;
      bVar4 = *(byte *)(plVar20 + 3);
      goto joined_r0x003cb6e0;
    }
    break;
  case 7:
    if (param_2[lVar24 * 0x14 + 1] == 0) {
      if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_003cb6c8;
      if (*(char *)(param_1 + 0xb8) == '\0') {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(param_2 + lVar24 * 0x14 + 4);
        *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 0x20;
        *(long *)(param_1 + 0x170) = param_1 + 0x450;
        *(long *)(param_1 + 0x178) = param_1 + 0x5b8;
        *(undefined1 **)(param_1 + 0x918) = &LAB_003cc5a0;
        uVar7 = 0x771;
        *(long **)(param_1 + 0x920) = plVar20;
        *(undefined8 *)(param_1 + 0x928) = 0;
        *(undefined2 *)(param_1 + 0x930) = 0;
        *(undefined8 *)(param_1 + 0x948) = 0;
        *(undefined4 *)(param_1 + 0x950) = 0;
        *(char **)(param_1 + 0x938) = "external/com_google_grpc_base/src/core/lib/surface/call.cc";
        goto LAB_003cad18;
      }
      goto LAB_003cb6b8;
    }
    break;
  default:
joined_r0x003cad30:
joined_r0x003cb144:
    if (lVar24 + 1 == param_3) {
      plVar15 = (long *)(param_1 + 0x9e0);
      if (*(char *)((long)PTR_DAT_04373fd8 + 0x10) != '\0') {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                     "%s %p:%p REF %s",*(undefined8 *)(param_1 + 0xa38),plVar15,
                     *(undefined8 *)(param_1 + 0xa00),"completion");
      }
      plVar2 = (long *)(param_1 + 0x9e8);
      do {
        lVar22 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar18 = *plVar15;
      if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar18 + 8),plVar15,
                     "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar22
                     ,lVar22 + 1,"completion");
      }
      if (lVar22 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x89,"RefNonZero");
      }
      if ((param_5 == 0) &&
         (uVar10 = FUN_003ceb00(*(undefined8 *)(param_1 + 0x78),param_4), (uVar10 & 1) == 0)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x77c,2,
                     "assertion failed: %s","grpc_cq_begin_op(call->cq, notify_tag)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar20[0x2e] = (long)(iVar28 + iVar8);
      if (iVar8 != 0) {
        *(undefined2 *)(plVar20 + 0x29) = 0;
        plVar20[0x26] = (long)&LAB_003cc9e0;
        plVar20[0x27] = (long)plVar20;
        plVar20[0x28] = 0;
        plVar20[0x2c] = 0;
        *(undefined4 *)(plVar20 + 0x2d) = 0;
        plVar20[0x2a] = (long)"external/com_google_grpc_base/src/core/lib/surface/call.cc";
        *(undefined4 *)(plVar20 + 0x2b) = 0x782;
        plVar20[1] = (long)(plVar20 + 0x25);
      }
      *(undefined8 *)(param_1 + 0xc0) = 1;
      plVar20[0x1d] = (long)&LAB_003cbb90;
      plVar20[0x1e] = (long)(plVar20 + 1);
      plVar20[0x1f] = 0;
      plVar20[4] = param_1;
      *(undefined2 *)(plVar20 + 0x20) = 0;
      plVar20[0x23] = 0;
      *(undefined4 *)(plVar20 + 0x24) = 0;
      plVar20[0x21] = (long)"external/com_google_grpc_base/src/core/lib/surface/call.cc";
      *(undefined4 *)(plVar20 + 0x22) = 0x284;
      FUN_003d6e50(param_1 + 0x18,plVar20 + 0x1c,0,
                   "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x286,
                   "executing batch");
      return 0;
    }
    lVar24 = lVar24 + 1;
    lVar12 = *(long *)(param_2 + lVar24 * 0x14 + 2);
    goto joined_r0x003cac9c;
  }
  uVar23 = 9;
  bVar4 = *(byte *)(plVar20 + 3);
  goto joined_r0x003cb6e0;
}


