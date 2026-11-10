/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003dfac0; name: FUN_003dfac0
 */


long FUN_003dfac0(long *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70 [4];
  
  for (puVar16 = (ulong *)param_1[2]; puVar16 != (ulong *)0x0; puVar16 = (ulong *)puVar16[1]) {
    puVar8 = (undefined8 *)(*puVar16 & 0xfffffffffffffffc);
    uStack_88 = puVar8[1];
    local_90 = *puVar8;
    uStack_78 = puVar8[3];
    uStack_80 = puVar8[2];
    FUN_003daa20(local_70,&local_90);
    plVar11 = local_70[0];
    if (local_70[0] != (long *)0x0) {
      if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
         ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar16)) goto LAB_003dff0c;
      plVar7 = (long *)*local_70[0];
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 1;
        lVar9 = *plVar7;
        do {
          lVar14 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar7,lVar14);
        }
        if (lVar14 < 1) goto LAB_003dfee4;
        if (lVar14 == 1) {
          (*(code *)plVar11[3])(plVar11[4]);
        }
      }
    }
  }
  plVar11 = (long *)(param_3 & 0xfffffffffffffffc);
  uVar15 = *param_2;
  puVar8 = (undefined8 *)(uVar15 & 0xfffffffffffffffc);
  lStack_a8 = plVar11[1];
  local_b0 = *plVar11;
  lStack_98 = plVar11[3];
  lStack_a0 = plVar11[2];
  uStack_c8 = puVar8[1];
  local_d0 = *puVar8;
  uStack_b8 = puVar8[3];
  uStack_c0 = puVar8[2];
  iVar6 = FUN_002f3a50(&local_b0,&local_d0);
  uVar13 = (uint)uVar15;
  if (iVar6 == 0) {
    lVar9 = *(long *)(*param_2 & 0xfffffffffffffffc);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 8) == 0)) &&
       (uVar2 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28), uVar2 < 0x18)) {
      param_1[1] = param_1[1] + -1;
      if (param_1[(ulong)uVar2 + 4] == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x8d,2
                     ,"assertion failed: %s","batch->idx.array[idx] != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1[(ulong)uVar2 + 4] = 0;
    }
    *param_2 = param_3;
    if (((*plVar11 != 0) && (*(int *)(*plVar11 + 8) == 0)) &&
       (uVar2 = *(uint *)(*plVar11 + 0x28), uVar2 < 0x18)) {
      if (param_1[(ulong)uVar2 + 4] != 0) {
        lVar9 = FUN_003e03b0(param_3);
        if (lVar9 != 0) {
          FUN_003de0a0(param_1);
          uVar15 = param_2[1];
          uVar1 = param_2[2];
          if (uVar1 == 0) {
            param_1[2] = uVar15;
          }
          else {
            *(ulong *)(uVar1 + 8) = uVar15;
            uVar15 = param_2[1];
          }
          puVar16 = (ulong *)(param_1 + 3);
          if (uVar15 != 0) {
            puVar16 = (ulong *)(uVar15 + 0x10);
          }
          *puVar16 = uVar1;
          *param_1 = *param_1 + -1;
          FUN_003de0a0(param_1);
          uVar2 = (uint)*param_2 & 3;
          if (1 < uVar2) {
            uVar15 = *param_2 & 0xfffffffffffffffc;
            uVar3 = *(undefined4 *)(uVar15 + 0x48);
            plVar11 = (long *)(uVar15 + 0x40);
            FUN_003d81b0(uVar15,uVar15,uVar15 + 0x20,*(undefined8 *)(uVar15 + 0x40),
                         "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",
                         0x137);
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 < 1) goto LAB_003dff34;
            if (lVar14 == 1) {
              FUN_003da320(uVar2,uVar15,uVar3,
                           "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",
                           0x137);
            }
          }
        }
        goto joined_r0x003dfc70;
      }
      param_1[1] = param_1[1] + 1;
      param_1[(ulong)uVar2 + 4] = (long)param_2;
    }
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    *param_2 = param_3;
  }
joined_r0x003dfc70:
  if (1 < (uVar13 & 3)) {
    uVar3 = *(undefined4 *)(puVar8 + 9);
    plVar11 = puVar8 + 8;
    FUN_003d81b0(puVar8,puVar8,puVar8 + 4,puVar8[8],
                 "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x13c);
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 < 1) {
LAB_003dff34:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar14 == 1) {
      FUN_003da320(uVar13 & 3,puVar8,uVar3,
                   "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x13c);
      puVar16 = (ulong *)param_1[2];
      goto joined_r0x003dfde0;
    }
  }
  puVar16 = (ulong *)param_1[2];
joined_r0x003dfde0:
  if (puVar16 != (ulong *)0x0) {
    do {
      puVar8 = (undefined8 *)(*puVar16 & 0xfffffffffffffffc);
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_78 = puVar8[3];
      uStack_80 = puVar8[2];
      FUN_003daa20(local_70,&local_90);
      plVar11 = local_70[0];
      if (local_70[0] != (long *)0x0) {
        if ((((int)local_70[0][1] == 0) && (*(uint *)(local_70[0] + 5) < 0x18)) &&
           ((ulong *)param_1[(ulong)*(uint *)(local_70[0] + 5) + 4] != puVar16)) {
LAB_003dff0c:
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x42
                       ,2,"assertion failed: %s","batch->idx.array[callout_idx] == l");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar7 = (long *)*local_70[0];
        if (plVar7 != (long *)0x0) {
          plVar10 = plVar7 + 1;
          lVar14 = *plVar7;
          do {
            lVar12 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar14 != 0) && (*(char *)(lVar14 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar14 + 8),plVar7,lVar12);
          }
          if (lVar12 < 1) {
LAB_003dfee4:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar12 == 1) {
            (*(code *)plVar11[3])(plVar11[4]);
          }
        }
      }
      puVar16 = (ulong *)puVar16[1];
    } while (puVar16 != (ulong *)0x0);
  }
  return lVar9;
}


