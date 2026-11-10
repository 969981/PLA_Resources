/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003dedf0; name: FUN_003dedf0
 */


long FUN_003dedf0(long *param_1,ulong *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_80 [4];
  
  lVar6 = *(long *)(*param_2 & 0xfffffffffffffffc);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 0)) {
    if (param_3 != 0x18) goto LAB_003df1d0;
  }
  else {
    uVar5 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28);
    if (0x17 < uVar5) {
      uVar5 = 0x18;
    }
    if (uVar5 != param_3) {
LAB_003df1d0:
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0xf0,2,
                   "assertion failed: %s",
                   "(((((((grpc_mdelem_data*)((storage->md).payload & ~(uintptr_t)3))->key))).refcount != 0L && (((((grpc_mdelem_data*)((storage->md).payload & ~(uintptr_t)3))->key))).refcount->GetType() == grpc_slice_refcount::Type::STATIC) && reinterpret_cast<grpc_core::StaticSliceRefcount*>(((((grpc_mdelem_data*)((storage->md).payload & ~(uintptr_t)3))->key)).refcount) ->index <= static_cast<uint32_t>(GRPC_BATCH_CALLOUTS_COUNT) ? static_cast<grpc_metadata_batch_callouts_index>( reinterpret_cast<grpc_core::StaticSliceRefcount*>( ((((grpc_mdelem_data*)((storage->md).payload & ~(uintptr_t)3))->key)).refcount) ->index) : GRPC_BATCH_CALLOUTS_COUNT) == idx"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar12 = param_1 + 2;
  for (puVar13 = (ulong *)*plVar12; puVar13 != (ulong *)0x0; puVar13 = (ulong *)puVar13[1]) {
    puVar7 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
    uStack_98 = puVar7[1];
    local_a0 = *puVar7;
    uStack_88 = puVar7[3];
    uStack_90 = puVar7[2];
    FUN_003daa20(local_80,&local_a0);
    plVar4 = local_80[0];
    if (local_80[0] != (long *)0x0) {
      if ((((int)local_80[0][1] == 0) && (*(uint *)(local_80[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_80[0] + 5) + 4] != puVar13)) goto LAB_003df1a8;
      plVar3 = (long *)*local_80[0];
      if (plVar3 != (long *)0x0) {
        plVar9 = plVar3 + 1;
        lVar6 = *plVar3;
        do {
          lVar11 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar3,lVar11);
        }
        if (lVar11 < 1) goto LAB_003df180;
        if (lVar11 == 1) {
          (*(code *)plVar4[3])(plVar4[4]);
        }
      }
    }
  }
  if (0x17 < param_3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x6e,2,
                 "assertion failed: %s","idx >= 0 && idx < GRPC_BATCH_CALLOUTS_COUNT");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[(ulong)param_3 + 4] == 0) {
    param_1[1] = param_1[1] + 1;
    param_1[(ulong)param_3 + 4] = (long)param_2;
  }
  else {
    lVar6 = FUN_003e03b0(*param_2);
    if (lVar6 != 0) {
      puVar13 = (ulong *)*plVar12;
      do {
        if (puVar13 == (ulong *)0x0) {
          return lVar6;
        }
        puVar7 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
        uStack_98 = puVar7[1];
        local_a0 = *puVar7;
        uStack_88 = puVar7[3];
        uStack_90 = puVar7[2];
        FUN_003daa20(local_80,&local_a0);
        plVar12 = local_80[0];
        if (local_80[0] != (long *)0x0) {
          if ((((int)local_80[0][1] == 0) && (*(uint *)(local_80[0] + 5) < 0x18)) &&
             ((ulong *)param_1[(ulong)*(uint *)(local_80[0] + 5) + 4] != puVar13))
          goto LAB_003df1a8;
          plVar4 = (long *)*local_80[0];
          if (plVar4 != (long *)0x0) {
            plVar3 = plVar4 + 1;
            lVar11 = *plVar4;
            do {
              lVar10 = *plVar3;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar2) {
                *plVar3 = lVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                           "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar4,lVar10);
            }
            if (lVar10 < 1) goto LAB_003df180;
            if (lVar10 == 1) {
              (*(code *)plVar12[3])(plVar12[4]);
            }
          }
        }
        puVar13 = (ulong *)puVar13[1];
      } while( true );
    }
  }
  FUN_003de0a0(param_1);
  if (*param_2 < 4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0xd2,2,
                 "assertion failed: %s",
                 "!(((grpc_mdelem_data*)((storage->md).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = param_1[3];
  param_2[1] = 0;
  param_2[2] = uVar8;
  if (uVar8 != 0) {
    plVar12 = (long *)(uVar8 + 8);
  }
  param_2[3] = 0;
  *plVar12 = (long)param_2;
  param_1[3] = (long)param_2;
  *param_1 = *param_1 + 1;
  FUN_003de0a0(param_1);
  puVar13 = (ulong *)param_1[2];
  do {
    if (puVar13 == (ulong *)0x0) {
      return 0;
    }
    puVar7 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
    uStack_98 = puVar7[1];
    local_a0 = *puVar7;
    uStack_88 = puVar7[3];
    uStack_90 = puVar7[2];
    FUN_003daa20(local_80,&local_a0);
    plVar12 = local_80[0];
    if (local_80[0] != (long *)0x0) {
      if ((((int)local_80[0][1] == 0) && (*(uint *)(local_80[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_80[0] + 5) + 4] != puVar13)) {
LAB_003df1a8:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x42,2
                     ,"assertion failed: %s","batch->idx.array[callout_idx] == l");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar4 = (long *)*local_80[0];
      if (plVar4 != (long *)0x0) {
        plVar3 = plVar4 + 1;
        lVar6 = *plVar4;
        do {
          lVar11 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar11);
        }
        if (lVar11 < 1) {
LAB_003df180:
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar11 == 1) {
          (*(code *)plVar12[3])(plVar12[4]);
        }
      }
    }
    puVar13 = (ulong *)puVar13[1];
  } while( true );
}


