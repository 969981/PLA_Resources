/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003daa7c; name: FUN_003daa7c
 */


void FUN_003daa7c(undefined8 *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  uint uVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar7 = FUN_003da780(param_2,param_3,*(undefined4 *)PTR_DAT_043740a8);
  puVar6 = PTR_DAT_04373fe0;
  if (param_2 == (void *)0x0) {
    uVar22 = 0;
    do {
      lVar9 = FUN_003db7f0();
      if (lVar9 != -0x35010ff23f0011ef) goto LAB_003dae38;
      if (*(long *)puVar6 == 0) goto LAB_003dae60;
      uVar22 = uVar22 + 1;
    } while (uVar22 <= DAT_0439bca4);
  }
  else {
    uVar22 = 0;
    uVar25 = uVar7;
    do {
      lVar9 = (ulong)(uVar25 % 0x1b0) * 8;
      uVar1 = *(uint *)(&DAT_0439af1c + lVar9);
      uVar2 = *(uint *)(&DAT_0439af20 + lVar9);
      lVar9 = FUN_003db7f0();
      if (lVar9 != -0x35010ff23f0011ef) {
LAB_003dae38:
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,
                     2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar9 = *(long *)puVar6;
      if (lVar9 == 0) {
LAB_003dae60:
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,
                     2,"assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((((uVar1 == uVar7) && (uVar2 < 0x6c)) &&
          (puVar23 = (undefined8 *)(lVar9 + (ulong)uVar2 * 0x20), puVar23[1] == param_3)) &&
         (iVar8 = memcmp(param_2,(void *)puVar23[2],param_3), iVar8 == 0)) {
        uVar15 = *puVar23;
        uVar28 = puVar23[3];
        uVar27 = puVar23[2];
        param_1[1] = puVar23[1];
        *param_1 = uVar15;
        param_1[3] = uVar28;
        param_1[2] = uVar27;
        return;
      }
      uVar22 = uVar22 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar22 <= DAT_0439bca4);
  }
  uVar20 = (ulong)(uVar7 & 0x1f);
  FUN_002ef750(&DAT_0439bca8 + uVar20 * 0x38);
  puVar24 = &DAT_0439bcd8 + uVar20 * 7;
  uVar12 = *puVar24;
  uVar21 = 0;
  if (uVar12 != 0) {
    uVar21 = (uVar7 >> 5) / uVar12;
  }
  plVar26 = &DAT_0439bcc8 + uVar20 * 7;
  lVar9 = (ulong)(uVar7 >> 5) - uVar21 * uVar12;
  puVar23 = *(undefined8 **)(*plVar26 + lVar9 * 8);
  if (puVar23 != (undefined8 *)0x0) {
    if (param_2 == (void *)0x0) {
      do {
        puVar23 = (undefined8 *)puVar23[0xe];
      } while (puVar23 != (undefined8 *)0x0);
    }
    else {
      uVar22 = *(uint *)(puVar23 + 0xd);
      while( true ) {
        if (((uVar22 == uVar7) && (puVar23[10] == param_3)) &&
           (iVar8 = memcmp(param_2,puVar23 + 0xf,param_3), iVar8 == 0)) {
          lVar11 = puVar23[0xb];
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x96,1,
                         "%s:%p ref_if_non_zero %ld -> %ld",*(undefined8 *)(lVar11 + 8),
                         puVar23 + 0xb,puVar23[0xc],puVar23[0xc] + 1);
          }
          plVar10 = puVar23 + 0xc;
          lVar11 = *plVar10;
          while (lVar11 != 0) {
            lVar14 = *plVar10;
            if (lVar14 == lVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              lVar11 = lVar14;
              if (cVar3 == '\0') {
                if (puVar23 != (undefined8 *)0x0) goto LAB_003dadfc;
                goto LAB_003dace0;
              }
            }
            else {
              ClearExclusiveLocal();
              lVar11 = lVar14;
            }
          }
        }
        puVar23 = (undefined8 *)puVar23[0xe];
        if (puVar23 == (undefined8 *)0x0) break;
        uVar22 = *(uint *)(puVar23 + 0xd);
      }
    }
  }
LAB_003dace0:
  puVar23 = (undefined8 *)FUN_002ebd50(param_3 + 0x78);
  lVar11 = *plVar26;
  uVar15 = *(undefined8 *)(lVar11 + lVar9 * 8);
  puVar13 = puVar23 + 0xb;
  *puVar13 = 0;
  *(undefined4 *)(puVar23 + 1) = 1;
  *puVar23 = puVar13;
  puVar18 = puVar23 + 5;
  *puVar18 = puVar13;
  puVar6 = PTR_LAB_043740c0;
  puVar23[3] = PTR_LAB_043740c0;
  puVar23[4] = puVar23;
  puVar23[2] = puVar18;
  *(undefined4 *)(puVar23 + 6) = 3;
  puVar23[7] = puVar18;
  puVar23[8] = puVar6;
  puVar23[9] = puVar23;
  puVar23[10] = param_3;
  puVar23[0xc] = 1;
  *(uint *)(puVar23 + 0xd) = uVar7;
  puVar23[0xe] = uVar15;
  if (param_3 != 0) {
    memcpy(puVar23 + 0xf,param_2,param_3);
    lVar11 = *plVar26;
  }
  *(undefined8 **)(lVar11 + lVar9 * 8) = puVar23;
  lVar9 = (&DAT_0439bcd0)[uVar20 * 7];
  (&DAT_0439bcd0)[uVar20 * 7] = lVar9 + 1U;
  uVar21 = *puVar24 * 2;
  if (uVar21 < lVar9 + 1U) {
    lVar9 = FUN_002ebd80(*puVar24 << 4);
    uVar12 = *puVar24;
    plVar10 = (long *)*plVar26;
    if (uVar12 != 0) {
      lVar11 = 0;
      lVar14 = *plVar10;
      while( true ) {
        if (lVar14 != 0) {
          do {
            uVar16 = (ulong)(*(uint *)(lVar14 + 0x68) >> 5);
            uVar5 = 0;
            if (uVar21 != 0) {
              uVar5 = uVar16 / uVar21;
            }
            lVar19 = *(long *)(lVar14 + 0x70);
            lVar17 = (uVar16 - uVar5 * uVar21) * 8;
            *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar9 + lVar17);
            *(long *)(lVar9 + lVar17) = lVar14;
            lVar14 = lVar19;
          } while (lVar19 != 0);
          plVar10 = (long *)*plVar26;
        }
        if (lVar11 + 1U == uVar12) break;
        lVar11 = lVar11 + 1;
        lVar14 = plVar10[lVar11];
      }
    }
    free(plVar10);
    *plVar26 = lVar9;
    *puVar24 = uVar21;
  }
LAB_003dadfc:
  FUN_002ef790(&DAT_0439bca8 + uVar20 * 0x38);
  uVar15 = puVar23[10];
  *param_1 = puVar23;
  param_1[1] = uVar15;
  param_1[2] = puVar23 + 0xf;
  return;
}


