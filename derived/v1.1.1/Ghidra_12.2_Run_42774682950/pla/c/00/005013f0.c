/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005013f0; name: FUN_005013f0
 */


void FUN_005013f0(long param_1,long *param_2)

{
  void *__src;
  char *pcVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *__ptr;
  undefined1 *__dest;
  size_t sVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long local_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  long *local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 uStack_68;
  
  puVar2 = *(ulong **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  bVar4 = *(byte *)(param_2 + 2);
  if ((bVar4 >> 3 & 1) != 0) {
    lVar7 = param_2[1];
    puVar3[0x19] = *(undefined8 *)(lVar7 + 0x38);
    puVar3[0x1b] = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 **)(lVar7 + 0x48) = puVar3 + 0x1c;
    bVar4 = *(byte *)(param_2 + 2);
  }
  if ((bVar4 >> 5 & 1) != 0) {
    lVar7 = param_2[1];
    puVar3[0x25] = *(undefined8 *)(lVar7 + 0x70);
    puVar3[0x26] = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 **)(lVar7 + 0x80) = puVar3 + 0x27;
    bVar4 = *(byte *)(param_2 + 2);
  }
  if ((bVar4 & 1) == 0) {
LAB_00501474:
    FUN_003d7c00(param_1,param_2);
  }
  else {
    lVar7 = FUN_003db7f0();
    plVar13 = (long *)PTR_DAT_04373ff0;
    if (lVar7 != -0x35010ff23f0011ef) goto LAB_00501ac8;
    if (*(long *)PTR_DAT_04373ff0 == 0) goto LAB_00501af0;
    uVar18 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + 0x10);
    lVar7 = param_2[1];
    if ((((*(byte *)(param_2 + 2) >> 2 & 1) == 0) || ((*(uint *)(lVar7 + 8) >> 6 & 1) == 0)) ||
       (plVar16 = *(long **)(lVar7 + 0x28), puVar2[2] <= (ulong)*(uint *)(plVar16 + 1))) {
      if ((*(uint *)(lVar7 + 8) >> 4 & 1) != 0) {
        lVar7 = FUN_003db7f0();
        if (lVar7 != -0x35010ff23f0011ef) goto LAB_00501ac8;
        if (*plVar13 == 0) goto LAB_00501af0;
        uVar18 = *(ulong *)(*plVar13 + 0x230);
      }
LAB_0050164c:
      bVar6 = false;
      lVar7 = *(long *)param_2[1];
      lVar19 = *(long *)(lVar7 + 0x28);
joined_r0x00501998:
      if (lVar19 != 0) {
        FUN_003df5e0(lVar7,1);
        lVar7 = *(long *)param_2[1];
      }
      if (*(long *)(lVar7 + 0x40) != 0) {
        FUN_003df5e0(lVar7,4);
        lVar7 = *(long *)param_2[1];
      }
      if (*(long *)(lVar7 + 0x48) != 0) {
        FUN_003df5e0(lVar7,5);
        lVar7 = *(long *)param_2[1];
      }
      if (*(long *)(lVar7 + 0x90) != 0) {
        FUN_003df5e0(lVar7,0xe);
        lVar7 = *(long *)param_2[1];
      }
      if (*(long *)(lVar7 + 0xb8) != 0) {
        FUN_003df5e0(lVar7,0x13);
      }
      if (uVar18 < 4) {
LAB_00501b18:
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata_batch.h",0x7e,2
                     ,"assertion failed: %s",
                     "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = *(undefined8 *)param_2[1];
      puVar3[1] = uVar18;
      lVar7 = FUN_003de570(uVar10,puVar3 + 1,1);
      if (lVar7 == 0) {
        if (*puVar2 < 4) goto LAB_00501b18;
        uVar10 = *(undefined8 *)param_2[1];
        puVar3[5] = *puVar2;
        lVar7 = FUN_003de570(uVar10,puVar3 + 5,4);
        if (lVar7 == 0) {
          uVar10 = *(undefined8 *)param_2[1];
          lVar7 = FUN_003db7f0(0,0);
          if (lVar7 != -0x35010ff23f0011ef) {
LAB_00501ac8:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                         0x13d,2,"assertion failed: %s",
                         "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                        );
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*plVar13 == 0) {
LAB_00501af0:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                         0x13e,2,"assertion failed: %s",
                         "grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar18 = *(ulong *)(*plVar13 + 0x218);
          if (uVar18 < 4) goto LAB_00501b68;
          puVar3[0xd] = uVar18;
          lVar7 = FUN_003dedf0(uVar10,puVar3 + 0xd,5);
          if (lVar7 == 0) {
            uVar10 = *(undefined8 *)param_2[1];
            lVar7 = FUN_003db7f0(0,0);
            if (lVar7 != -0x35010ff23f0011ef) goto LAB_00501ac8;
            if (*plVar13 == 0) goto LAB_00501af0;
            uVar18 = *(ulong *)(*plVar13 + 0x220);
            if (uVar18 < 4) {
LAB_00501b68:
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata_batch.h",
                           0x96,2,"assertion failed: %s",
                           "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar3[0x11] = uVar18;
            lVar7 = FUN_003dedf0(uVar10,puVar3 + 0x11,0xe);
            if (lVar7 == 0) {
              uVar10 = *(undefined8 *)param_2[1];
              uVar18 = FUN_003e0280(puVar2[1],
                                    "external/com_google_grpc_base/src/core/ext/filters/http/client/http_client_filter.cc"
                                    ,0x1cf);
              if (uVar18 < 4) goto LAB_00501b68;
              puVar3[0x15] = uVar18;
              lVar7 = FUN_003dedf0(uVar10,puVar3 + 0x15,0x13);
              if (lVar7 == 0) {
                if (bVar6) {
                  return;
                }
                goto LAB_00501474;
              }
            }
          }
        }
      }
    }
    else {
      puVar3[0x33] = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
                    /* try { // try from 005014ec to 005014f7 has its CatchHandler @ 00501be8 */
      local_80 = plVar16;
      FUN_004ff174(puVar3 + 0x34,&local_80);
      plVar13 = local_80;
      local_80 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
                    /* try { // try from 0050150c to 0050150f has its CatchHandler @ 00501be4 */
        (**(code **)*plVar13)();
      }
      plVar16 = puVar3 + 0x5b;
      FUN_004ff2b0(plVar16,puVar3 + 0x34);
      puVar8 = *(undefined8 **)(param_2[1] + 0x28);
      *(long **)(param_2[1] + 0x28) = plVar16;
      if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 00501538 to 0050153b has its CatchHandler @ 00501be0 */
        (**(code **)*puVar8)();
      }
      puVar3[0x6a] = *param_2;
      *param_2 = (long)(puVar3 + 0x6b);
      puVar3[0x32] = param_2;
      do {
        uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16,0xffffffffffffffff,puVar3 + 0x61);
        if ((uVar9 & 1) == 0) {
          uVar9 = puVar3[0x33];
          uVar14 = (ulong)*(uint *)(puVar3 + 0x5c);
          break;
        }
        lVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,&local_80);
        plVar13 = local_80;
        if (lVar7 != 0) goto LAB_00501a9c;
        uVar9 = uStack_78 & 0xff;
        if (local_80 != (long *)0x0) {
          uVar9 = uStack_78;
        }
        puVar3[0x33] = uVar9 + puVar3[0x33];
        if ((local_80 != (long *)0x0) && (plVar12 = (long *)*local_80, plVar12 != (long *)0x0)) {
          plVar15 = plVar12 + 1;
          lVar7 = *plVar12;
          do {
            lVar19 = *plVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar12,lVar19);
          }
          if (lVar19 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar19 == 1) {
            (*(code *)plVar13[3])(plVar13[4]);
          }
        }
        uVar9 = puVar3[0x33];
        uVar14 = (ulong)*(uint *)(puVar3 + 0x5c);
      } while (uVar9 != uVar14);
      plVar13 = (long *)PTR_DAT_04373ff0;
      if (uVar9 != uVar14) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/client/http_client_filter.cc"
                     ,0x1a0,0,
                     "Request is marked Cacheable but not all data is available.  Falling back to POST"
                    );
        bVar6 = true;
        lVar7 = *(long *)param_2[1];
        lVar19 = *(long *)(lVar7 + 0x28);
        goto joined_r0x00501998;
      }
      lVar7 = FUN_003db7f0();
      if (lVar7 != -0x35010ff23f0011ef) goto LAB_00501ac8;
      if (*plVar13 == 0) goto LAB_00501af0;
      uVar18 = *(ulong *)(*plVar13 + 8);
      uVar9 = **(ulong **)(*(long *)param_2[1] + 0x20) & 0xfffffffffffffffc;
      lVar7 = *(long *)(param_1 + 0x10);
      uStack_78 = *(ulong *)(uVar9 + 0x28);
      plVar13 = *(long **)(uVar9 + 0x20);
      uStack_68 = *(undefined8 *)(uVar9 + 0x38);
      local_70 = *(void **)(uVar9 + 0x30);
      sVar11 = uStack_78 & 0xff;
      if (plVar13 != (long *)0x0) {
        sVar11 = uStack_78;
      }
      local_80 = plVar13;
      lVar19 = FUN_003ecb00(*(undefined4 *)(((long *)param_2[1])[5] + 8),0);
      FUN_002f3318(&local_a0,sVar11 + lVar19 + 1);
      __src = (void *)((ulong)&local_80 | 9);
      if (plVar13 != (long *)0x0) {
        __src = local_70;
      }
      pcVar1 = (char *)((long)&uStack_98 + 1);
      if (local_a0 != 0) {
        pcVar1 = local_90;
      }
      memcpy(pcVar1,__src,sVar11);
      pcVar1[sVar11] = '?';
      __ptr = (undefined1 *)FUN_002ebd50(*(long *)(lVar7 + 0x1d0) + 1);
      __dest = __ptr;
      if (*(long *)(lVar7 + 0x1c0) != 0) {
        plVar13 = *(long **)(lVar7 + 0x1b8);
        lVar19 = 0;
        uVar9 = 0;
        lVar17 = 0;
        if (*plVar13 != 0) goto LAB_00501948;
LAB_00501900:
        memcpy(__dest,(void *)((long)plVar13 + lVar19 + 9),
               (ulong)*(byte *)((long)plVar13 + lVar19 + 8));
        plVar13 = *(long **)(lVar7 + 0x1b8);
        if (*(long *)((long)plVar13 + lVar19) == 0) goto LAB_00501960;
        do {
          uVar14 = *(ulong *)((long)plVar13 + lVar19 + 8);
          while( true ) {
            lVar17 = uVar14 + lVar17;
            uVar9 = uVar9 + 1;
            __dest = __ptr + lVar17;
            lVar19 = lVar19 + 0x20;
            if (*(ulong *)(lVar7 + 0x1c0) <= uVar9) goto LAB_005019a0;
            if (*(long *)((long)plVar13 + lVar19) == 0) goto LAB_00501900;
LAB_00501948:
            memcpy(__dest,*(void **)((long)plVar13 + lVar19 + 0x10),
                   *(size_t *)((long)plVar13 + lVar19 + 8));
            plVar13 = *(long **)(lVar7 + 0x1b8);
            if (*(long *)((long)plVar13 + lVar19) != 0) break;
LAB_00501960:
            uVar14 = (ulong)*(byte *)((long)plVar13 + lVar19 + 8);
          }
        } while( true );
      }
LAB_005019a0:
      *__dest = 0;
      FUN_003ecb50(pcVar1 + sVar11 + 1,__ptr,*(undefined4 *)(*(long *)(param_2[1] + 0x28) + 8),1,0);
      free(__ptr);
      pcVar1 = (char *)((long)&uStack_98 + 1);
      if (local_a0 != 0) {
        pcVar1 = local_90;
      }
      sVar11 = strlen(pcVar1);
      FUN_002f3480(&local_c0,&local_a0,0,sVar11);
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      uStack_88 = uStack_a8;
      local_90 = pcStack_b0;
      lVar7 = FUN_003db7f0();
      plVar13 = (long *)PTR_DAT_04373ff0;
      if (lVar7 != -0x35010ff23f0011ef) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,
                     2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = *(long *)PTR_DAT_04373fe0;
      if (lVar7 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,
                     2,"assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar9 != 0) {
        FUN_003d86a4(uVar9,lVar7,&local_a0);
      }
      lVar7 = FUN_003dfac0(*(long *)param_2[1],*(undefined8 *)(*(long *)param_2[1] + 0x20),uVar9 | 2
                          );
      if (lVar7 == 0) {
        *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfb;
        (**(code **)*plVar16)(plVar16,0);
        goto LAB_0050164c;
      }
    }
LAB_00501a9c:
    FUN_003d5fa0(puVar3[0x32],lVar7,*puVar3);
  }
  return;
}


