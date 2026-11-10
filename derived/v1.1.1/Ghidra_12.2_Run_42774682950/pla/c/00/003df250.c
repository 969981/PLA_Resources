/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003df250; name: FUN_003df250
 */


void FUN_003df250(long *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70 [4];
  
  for (puVar13 = (ulong *)param_1[2]; puVar13 != (ulong *)0x0; puVar13 = (ulong *)puVar13[1]) {
    puVar8 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
    uStack_88 = puVar8[1];
    local_90 = *puVar8;
    uStack_78 = puVar8[3];
    uStack_80 = puVar8[2];
    FUN_003daa20(local_70,&local_90);
    plVar1 = local_70[0];
    if (local_70[0] != (long *)0x0) {
      if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar13)) goto LAB_003df568;
      plVar7 = (long *)*local_70[0];
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 1;
        lVar9 = *plVar7;
        do {
          lVar12 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar7,lVar12);
        }
        if (lVar12 < 1) goto LAB_003df540;
        if (lVar12 == 1) {
          (*(code *)plVar1[3])(plVar1[4]);
        }
      }
    }
  }
  lVar9 = *(long *)(*param_2 & 0xfffffffffffffffc);
  if (((lVar9 != 0) && (*(int *)(lVar9 + 8) == 0)) &&
     (uVar3 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28), uVar3 < 0x18)) {
    param_1[1] = param_1[1] + -1;
    if (param_1[(ulong)uVar3 + 4] == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x8d,2,
                   "assertion failed: %s","batch->idx.array[idx] != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[(ulong)uVar3 + 4] = 0;
  }
  FUN_003de0a0(param_1);
  uVar11 = param_2[1];
  uVar2 = param_2[2];
  if (uVar2 == 0) {
    param_1[2] = uVar11;
  }
  else {
    *(ulong *)(uVar2 + 8) = uVar11;
    uVar11 = param_2[1];
  }
  puVar13 = (ulong *)(param_1 + 3);
  if (uVar11 != 0) {
    puVar13 = (ulong *)(uVar11 + 0x10);
  }
  *puVar13 = uVar2;
  *param_1 = *param_1 + -1;
  FUN_003de0a0(param_1);
  uVar3 = (uint)*param_2 & 3;
  if (1 < uVar3) {
    uVar11 = *param_2 & 0xfffffffffffffffc;
    uVar4 = *(undefined4 *)(uVar11 + 0x48);
    plVar1 = (long *)(uVar11 + 0x40);
    FUN_003d81b0(uVar11,uVar11,uVar11 + 0x20,*(undefined8 *)(uVar11 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x112);
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      FUN_003da320(uVar3,uVar11,uVar4,
                   "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x112);
      puVar13 = (ulong *)param_1[2];
      goto joined_r0x003df520;
    }
  }
  puVar13 = (ulong *)param_1[2];
joined_r0x003df520:
  if (puVar13 != (ulong *)0x0) {
    do {
      puVar8 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_78 = puVar8[3];
      uStack_80 = puVar8[2];
      FUN_003daa20(local_70,&local_90);
      plVar1 = local_70[0];
      if (local_70[0] != (long *)0x0) {
        if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
           ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar13)) {
LAB_003df568:
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x42
                       ,2,"assertion failed: %s","batch->idx.array[callout_idx] == l");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar7 = (long *)*local_70[0];
        if (plVar7 != (long *)0x0) {
          plVar10 = plVar7 + 1;
          lVar9 = *plVar7;
          do {
            lVar12 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar7,lVar12);
          }
          if (lVar12 < 1) {
LAB_003df540:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar12 == 1) {
            (*(code *)plVar1[3])(plVar1[4]);
          }
        }
      }
      puVar13 = (ulong *)puVar13[1];
    } while (puVar13 != (ulong *)0x0);
  }
  return;
}


