/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003df5e0; name: FUN_003df5e0
 */


void FUN_003df5e0(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70 [4];
  
  for (puVar14 = (ulong *)param_1[2]; puVar14 != (ulong *)0x0; puVar14 = (ulong *)puVar14[1]) {
    puVar9 = (undefined8 *)(*puVar14 & 0xfffffffffffffffc);
    uStack_88 = puVar9[1];
    local_90 = *puVar9;
    uStack_78 = puVar9[3];
    uStack_80 = puVar9[2];
    FUN_003daa20(local_70,&local_90);
    plVar1 = local_70[0];
    if (local_70[0] != (long *)0x0) {
      if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar14)) goto LAB_003df8d0;
      plVar8 = (long *)*local_70[0];
      if (plVar8 != (long *)0x0) {
        plVar11 = plVar8 + 1;
        lVar10 = *plVar8;
        do {
          lVar13 = *plVar11;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar8,lVar13);
        }
        if (lVar13 < 1) goto LAB_003df8a8;
        if (lVar13 == 1) {
          (*(code *)plVar1[3])(plVar1[4]);
        }
      }
    }
  }
  puVar14 = (ulong *)param_1[(param_2 & 0xffffffff) + 4];
  if (puVar14 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x11a,2,
                 "assertion failed: %s","storage != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[1] = param_1[1] + -1;
  param_1[(param_2 & 0xffffffff) + 4] = 0;
  FUN_003de0a0(param_1);
  uVar12 = puVar14[1];
  uVar4 = puVar14[2];
  if (uVar4 == 0) {
    param_1[2] = uVar12;
  }
  else {
    *(ulong *)(uVar4 + 8) = uVar12;
    uVar12 = puVar14[1];
  }
  puVar3 = (ulong *)(param_1 + 3);
  if (uVar12 != 0) {
    puVar3 = (ulong *)(uVar12 + 0x10);
  }
  *puVar3 = uVar4;
  *param_1 = *param_1 + -1;
  FUN_003de0a0(param_1);
  uVar2 = (uint)*puVar14 & 3;
  if (1 < uVar2) {
    uVar12 = *puVar14 & 0xfffffffffffffffc;
    uVar5 = *(undefined4 *)(uVar12 + 0x48);
    plVar1 = (long *)(uVar12 + 0x40);
    FUN_003d81b0(uVar12,uVar12,uVar12 + 0x20,*(undefined8 *)(uVar12 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x11e);
    do {
      lVar10 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar10 == 1) {
      FUN_003da320(uVar2,uVar12,uVar5,
                   "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x11e);
      puVar14 = (ulong *)param_1[2];
      goto joined_r0x003df888;
    }
  }
  puVar14 = (ulong *)param_1[2];
joined_r0x003df888:
  if (puVar14 != (ulong *)0x0) {
    do {
      puVar9 = (undefined8 *)(*puVar14 & 0xfffffffffffffffc);
      uStack_88 = puVar9[1];
      local_90 = *puVar9;
      uStack_78 = puVar9[3];
      uStack_80 = puVar9[2];
      FUN_003daa20(local_70,&local_90);
      plVar1 = local_70[0];
      if (local_70[0] != (long *)0x0) {
        if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
           ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar14)) {
LAB_003df8d0:
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x42
                       ,2,"assertion failed: %s","batch->idx.array[callout_idx] == l");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar8 = (long *)*local_70[0];
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          lVar10 = *plVar8;
          do {
            lVar13 = *plVar11;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *plVar11 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar8,lVar13);
          }
          if (lVar13 < 1) {
LAB_003df8a8:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar13 == 1) {
            (*(code *)plVar1[3])(plVar1[4]);
          }
        }
      }
      puVar14 = (ulong *)puVar14[1];
    } while (puVar14 != (ulong *)0x0);
  }
  return;
}


