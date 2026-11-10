/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ec710; name: FUN_003ec710
 */


void FUN_003ec710(long *param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  long local_50;
  undefined8 uStack_48;
  byte *local_40;
  long lStack_38;
  
  plVar8 = (long *)*param_2;
  pbVar16 = (byte *)((long)param_2 + 9);
  if (plVar8 != (long *)0x0) {
    pbVar16 = (byte *)param_2[2];
  }
  uVar3 = param_2[1] & 0xff;
  if (plVar8 != (long *)0x0) {
    uVar3 = param_2[1];
  }
  if (uVar3 != 0) {
    bVar11 = false;
    lVar7 = 0;
    pbVar2 = pbVar16 + uVar3;
    bVar12 = *pbVar16;
    pbVar9 = pbVar16;
    while( true ) {
      pbVar14 = pbVar9 + 1;
      if (((((pbVar14 < pbVar2) && (bVar12 == 0x25)) &&
           ((*pbVar14 - 0x30 < 10 ||
            (uVar13 = *pbVar14 - 0x41,
            uVar13 < 0x26 && (1L << ((ulong)uVar13 & 0x3f) & 0x3f0000003fU) != 0)))) &&
          (pbVar9 + 2 < pbVar2)) &&
         ((uVar13 = (uint)pbVar9[2], uVar13 - 0x30 < 10 ||
          ((uVar13 = uVar13 - 0x41, uVar13 < 0x26 &&
           ((1L << ((ulong)uVar13 & 0x3f) & 0x3f0000003fU) != 0)))))) {
        pbVar14 = pbVar9 + 3;
        bVar11 = true;
      }
      lVar7 = lVar7 + 1;
      if (pbVar14 == pbVar2) break;
      bVar12 = *pbVar14;
      pbVar9 = pbVar14;
    }
    if (bVar11) {
      FUN_002f27f0(&local_50,lVar7);
      pbVar9 = (byte *)((long)&uStack_48 + 1);
      if (local_50 != 0) {
        pbVar9 = local_40;
      }
      if (uVar3 == 0) {
LAB_003ec960:
        pbVar16 = local_40;
        if (local_50 == 0) {
          pbVar16 = (byte *)((long)&uStack_48 + 1);
        }
        uVar3 = uStack_48;
        if (local_50 == 0) {
          uVar3 = uStack_48 & 0xff;
        }
        if (pbVar9 != pbVar16 + uVar3) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/percent_encoding.cc",0xa7,2
                       ,"assertion failed: %s","q == GRPC_SLICE_END_PTR(out)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[1] = uStack_48;
        *param_1 = local_50;
        param_1[3] = lStack_38;
        param_1[2] = (long)local_40;
        return;
      }
      pbVar14 = pbVar16 + 1;
      bVar12 = *pbVar16;
      if (bVar12 == 0x25) goto LAB_003ec858;
      do {
        *pbVar9 = bVar12;
        pbVar16 = pbVar14;
        while( true ) {
          pbVar9 = pbVar9 + 1;
          if (pbVar16 == pbVar2) goto LAB_003ec960;
          pbVar14 = pbVar16 + 1;
          bVar12 = *pbVar16;
          if (bVar12 != 0x25) break;
LAB_003ec858:
          if (pbVar14 < pbVar2) {
            bVar12 = *pbVar14;
            uVar13 = bVar12 - 0x30;
            if (((9 < uVar13) &&
                (uVar15 = bVar12 - 0x41,
                0x25 < uVar15 || (1L << ((ulong)uVar15 & 0x3f) & 0x3f0000003fU) == 0)) ||
               (pbVar2 <= pbVar16 + 2)) goto LAB_003ec8f8;
            bVar4 = pbVar16[2];
            uVar15 = bVar4 - 0x30;
            if ((9 < uVar15) &&
               ((uVar6 = bVar4 - 0x41, 0x25 < uVar6 ||
                ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)))) goto LAB_003ec8f8;
            if (9 < (uVar13 & 0xff)) {
              uVar13 = (uint)bVar12;
              if (uVar13 - 0x41 < 6) {
                uVar13 = uVar13 - 0x37;
              }
              else {
                if (5 < uVar13 - 0x61) goto LAB_003eca08;
                uVar13 = uVar13 - 0x57;
              }
            }
            if (9 < (uVar15 & 0xff)) {
              uVar15 = (uint)bVar4;
              if (uVar15 - 0x41 < 6) {
                uVar15 = uVar15 - 0x37;
              }
              else {
                if (5 < uVar15 - 0x61) {
LAB_003eca08:
                  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/percent_encoding.cc"
                               ,0x56,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar15 = uVar15 - 0x57;
              }
            }
            *pbVar9 = (byte)uVar15 | (byte)(uVar13 << 4);
            pbVar16 = pbVar16 + 3;
          }
          else {
LAB_003ec8f8:
            *pbVar9 = 0x25;
            pbVar16 = pbVar14;
          }
        }
      } while( true );
    }
  }
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *plVar8;
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar8,lVar7,lVar7 + 1);
    }
    if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  lVar7 = *param_2;
  lVar17 = param_2[3];
  lVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  param_1[3] = lVar17;
  param_1[2] = lVar10;
  return;
}


