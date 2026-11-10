/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003dea10; name: FUN_003dea10
 */


long FUN_003dea10(long *param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70 [4];
  
  plVar12 = param_1 + 2;
  for (puVar13 = (ulong *)*plVar12; puVar13 != (ulong *)0x0; puVar13 = (ulong *)puVar13[1]) {
    puVar6 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
    uStack_88 = puVar6[1];
    local_90 = *puVar6;
    uStack_78 = puVar6[3];
    uStack_80 = puVar6[2];
    FUN_003daa20(local_70,&local_90);
    plVar5 = local_70[0];
    if (local_70[0] != (long *)0x0) {
      if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar13)) goto LAB_003ded98;
      plVar4 = (long *)*local_70[0];
      if (plVar4 != (long *)0x0) {
        plVar9 = plVar4 + 1;
        lVar7 = *plVar4;
        do {
          lVar11 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar4,lVar11);
        }
        if (lVar11 < 1) goto LAB_003ded70;
        if (lVar11 == 1) {
          (*(code *)plVar5[3])(plVar5[4]);
        }
      }
    }
  }
  lVar7 = *(long *)(*param_2 & 0xfffffffffffffffc);
  if (((lVar7 != 0) && (*(int *)(lVar7 + 8) == 0)) &&
     (uVar1 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28), uVar1 < 0x18)) {
    if (param_1[(ulong)uVar1 + 4] == 0) {
      param_1[1] = param_1[1] + 1;
      param_1[(ulong)uVar1 + 4] = (long)param_2;
    }
    else {
      lVar7 = FUN_003e03b0();
      if (lVar7 != 0) {
        puVar13 = (ulong *)*plVar12;
        do {
          if (puVar13 == (ulong *)0x0) {
            return lVar7;
          }
          puVar6 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
          uStack_88 = puVar6[1];
          local_90 = *puVar6;
          uStack_78 = puVar6[3];
          uStack_80 = puVar6[2];
          FUN_003daa20(local_70,&local_90);
          plVar12 = local_70[0];
          if (local_70[0] != (long *)0x0) {
            if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
               ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar13))
            goto LAB_003ded98;
            plVar5 = (long *)*local_70[0];
            if (plVar5 != (long *)0x0) {
              plVar4 = plVar5 + 1;
              lVar11 = *plVar5;
              do {
                lVar10 = *plVar4;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar3) {
                  *plVar4 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,
                             1,"%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar5,lVar10);
              }
              if (lVar10 < 1) goto LAB_003ded70;
              if (lVar10 == 1) {
                (*(code *)plVar12[3])(plVar12[4]);
              }
            }
          }
          puVar13 = (ulong *)puVar13[1];
        } while( true );
      }
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
    puVar6 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
    uStack_88 = puVar6[1];
    local_90 = *puVar6;
    uStack_78 = puVar6[3];
    uStack_80 = puVar6[2];
    FUN_003daa20(local_70,&local_90);
    plVar12 = local_70[0];
    if (local_70[0] != (long *)0x0) {
      if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar13)) {
LAB_003ded98:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x42,2
                     ,"assertion failed: %s","batch->idx.array[callout_idx] == l");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar5 = (long *)*local_70[0];
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        lVar7 = *plVar5;
        do {
          lVar11 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar5,lVar11);
        }
        if (lVar11 < 1) {
LAB_003ded70:
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


