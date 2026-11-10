/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003dae88; name: FUN_003dae88
 */


void FUN_003dae88(long *param_1,long *param_2)

{
  size_t __n;
  void *__src;
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  void *pvVar23;
  ulong *puVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    uVar22 = (ulong)*(byte *)(param_2 + 1);
    lVar10 = (long)param_2 + 9;
  }
  else {
    if (*(int *)(lVar10 + 8) == 1) {
      uVar7 = *(uint *)(lVar10 + 0x68);
      goto LAB_003daf00;
    }
    if (*(int *)(lVar10 + 8) == 0) {
      lVar10 = *param_2;
      lVar14 = param_2[3];
      lVar11 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar10;
      param_1[3] = lVar14;
      param_1[2] = lVar11;
      return;
    }
    uVar22 = param_2[1];
    lVar10 = param_2[2];
  }
  uVar7 = FUN_003da780(lVar10,uVar22,*(undefined4 *)PTR_DAT_043740a8);
LAB_003daf00:
  puVar6 = PTR_DAT_04373fe0;
  uVar20 = 0;
  uVar26 = uVar7;
  do {
    lVar10 = (ulong)(uVar26 % 0x1b0) * 8;
    uVar1 = *(uint *)(&DAT_0439af1c + lVar10);
    uVar2 = *(uint *)(&DAT_0439af20 + lVar10);
    lVar10 = FUN_003db7f0();
    if (lVar10 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)puVar6 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (((uVar1 == uVar7) && (uVar2 < 0x6c)) &&
       ((plVar25 = (long *)(*(long *)puVar6 + (ulong)uVar2 * 0x20), *plVar25 == *param_2 ||
        (iVar8 = FUN_002f3c80(param_2,plVar25), iVar8 == 0)))) {
      lVar10 = *plVar25;
      lVar14 = plVar25[3];
      lVar11 = plVar25[2];
      param_1[1] = plVar25[1];
      *param_1 = lVar10;
      param_1[3] = lVar14;
      param_1[2] = lVar11;
      return;
    }
    uVar20 = uVar20 + 1;
    uVar26 = uVar26 + 1;
  } while (uVar20 <= DAT_0439bca4);
  uVar27 = (ulong)(uVar7 & 0x1f);
  FUN_002ef750(&DAT_0439bca8 + uVar27 * 0x38);
  puVar24 = &DAT_0439bcd8 + uVar27 * 7;
  uVar12 = *puVar24;
  uVar22 = 0;
  if (uVar12 != 0) {
    uVar22 = (uVar7 >> 5) / uVar12;
  }
  lVar10 = (ulong)(uVar7 >> 5) - uVar22 * uVar12;
  plVar25 = &DAT_0439bcc8 + uVar27 * 7;
  puVar21 = *(undefined8 **)(*plVar25 + lVar10 * 8);
  if (puVar21 != (undefined8 *)0x0) {
    uVar20 = *(uint *)(puVar21 + 0xd);
    while( true ) {
      if (uVar20 == uVar7) {
        local_70 = puVar21 + 0xf;
        uStack_78 = puVar21[10];
        local_80 = puVar21;
        if ((puVar21 == (undefined8 *)*param_2) ||
           (iVar8 = FUN_002f3c80(param_2,&local_80), iVar8 == 0)) {
          lVar11 = puVar21[0xb];
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x96,1,
                         "%s:%p ref_if_non_zero %ld -> %ld",*(undefined8 *)(lVar11 + 8),
                         puVar21 + 0xb,puVar21[0xc],puVar21[0xc] + 1);
          }
          plVar9 = puVar21 + 0xc;
          lVar11 = *plVar9;
          while (lVar11 != 0) {
            lVar14 = *plVar9;
            if (lVar14 == lVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              lVar11 = lVar14;
              if (cVar3 == '\0') {
                if (puVar21 == (undefined8 *)0x0) goto LAB_003db0dc;
                goto LAB_003db21c;
              }
            }
            else {
              ClearExclusiveLocal();
              lVar11 = lVar14;
            }
          }
        }
      }
      puVar21 = (undefined8 *)puVar21[0xe];
      if (puVar21 == (undefined8 *)0x0) break;
      uVar20 = *(uint *)(puVar21 + 0xd);
    }
  }
LAB_003db0dc:
  lVar11 = *param_2;
  pvVar23 = (void *)param_2[2];
  __n = param_2[1] & 0xff;
  if (lVar11 != 0) {
    __n = param_2[1];
  }
  puVar21 = (undefined8 *)FUN_002ebd50(__n + 0x78);
  lVar14 = *plVar25;
  uVar15 = *(undefined8 *)(lVar14 + lVar10 * 8);
  puVar13 = puVar21 + 0xb;
  *puVar13 = 0;
  *(undefined4 *)(puVar21 + 1) = 1;
  *puVar21 = puVar13;
  puVar18 = puVar21 + 5;
  *puVar18 = puVar13;
  puVar6 = PTR_LAB_043740c0;
  puVar21[3] = PTR_LAB_043740c0;
  puVar21[4] = puVar21;
  puVar21[2] = puVar18;
  *(undefined4 *)(puVar21 + 6) = 3;
  puVar21[7] = puVar18;
  puVar21[8] = puVar6;
  puVar21[9] = puVar21;
  puVar21[10] = __n;
  puVar21[0xc] = 1;
  *(uint *)(puVar21 + 0xd) = uVar7;
  puVar21[0xe] = uVar15;
  if (__n != 0) {
    __src = (void *)((long)param_2 + 9);
    if (lVar11 != 0) {
      __src = pvVar23;
    }
    memcpy(puVar21 + 0xf,__src,__n);
    lVar14 = *plVar25;
  }
  *(undefined8 **)(lVar14 + lVar10 * 8) = puVar21;
  lVar10 = (&DAT_0439bcd0)[uVar27 * 7];
  (&DAT_0439bcd0)[uVar27 * 7] = lVar10 + 1U;
  uVar22 = *puVar24 * 2;
  if (uVar22 < lVar10 + 1U) {
    lVar10 = FUN_002ebd80(*puVar24 << 4);
    uVar12 = *puVar24;
    plVar9 = (long *)*plVar25;
    if (uVar12 != 0) {
      lVar11 = 0;
      lVar14 = *plVar9;
      while( true ) {
        if (lVar14 != 0) {
          do {
            uVar16 = (ulong)(*(uint *)(lVar14 + 0x68) >> 5);
            uVar5 = 0;
            if (uVar22 != 0) {
              uVar5 = uVar16 / uVar22;
            }
            lVar19 = *(long *)(lVar14 + 0x70);
            lVar17 = (uVar16 - uVar5 * uVar22) * 8;
            *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar10 + lVar17);
            *(long *)(lVar10 + lVar17) = lVar14;
            lVar14 = lVar19;
          } while (lVar19 != 0);
          plVar9 = (long *)*plVar25;
        }
        if (lVar11 + 1U == uVar12) break;
        lVar11 = lVar11 + 1;
        lVar14 = plVar9[lVar11];
      }
    }
    free(plVar9);
    *plVar25 = lVar10;
    *puVar24 = uVar22;
  }
LAB_003db21c:
  FUN_002ef790(&DAT_0439bca8 + uVar27 * 0x38);
  lVar10 = puVar21[10];
  *param_1 = (long)puVar21;
  param_1[1] = lVar10;
  param_1[2] = (long)(puVar21 + 0xf);
  return;
}


