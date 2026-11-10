/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ec3c0; name: FUN_003ec3c0
 */


void FUN_003ec3c0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  long local_80;
  undefined8 uStack_78;
  byte *local_70;
  long lStack_68;
  
  plVar17 = (long *)*param_2;
  pbVar25 = (byte *)((long)param_2 + 9);
  if (plVar17 != (long *)0x0) {
    pbVar25 = (byte *)param_2[2];
  }
  uVar3 = param_2[1] & 0xff;
  if (plVar17 != (long *)0x0) {
    uVar3 = param_2[1];
  }
  if ((long)uVar3 < 1) goto LAB_003ec640;
  pbVar2 = pbVar25 + uVar3;
  pbVar18 = pbVar2;
  if (pbVar2 <= pbVar25 + 1) {
    pbVar18 = pbVar25 + 1;
  }
  uVar21 = (long)pbVar18 - (long)pbVar25;
  if (uVar21 < 4) {
    lVar15 = 0;
    bVar11 = false;
    pbVar18 = pbVar25;
LAB_003ec540:
    do {
      pbVar20 = pbVar18 + 1;
      bVar14 = (1 << ((ulong)*pbVar18 & 7) & (uint)*(byte *)(param_3 + (ulong)(*pbVar18 >> 3))) == 0
      ;
      lVar24 = 3;
      if (!bVar14) {
        lVar24 = 1;
      }
      lVar15 = lVar24 + lVar15;
      bVar11 = (bool)(bVar11 | bVar14);
      pbVar18 = pbVar20;
    } while (pbVar20 < pbVar2);
  }
  else {
    uVar22 = uVar21 & 0xfffffffffffffffc;
    lVar24 = 0;
    lVar19 = 0;
    lVar23 = 0;
    lVar15 = 0;
    bVar6 = 0;
    bVar7 = 0;
    bVar8 = 0;
    bVar9 = 0;
    pbVar18 = pbVar25 + uVar22;
    pbVar20 = pbVar25 + 3;
    uVar16 = uVar22;
    do {
      bVar11 = (1 << ((ulong)pbVar20[-3] & 7) & (uint)*(byte *)(param_3 + (ulong)(pbVar20[-3] >> 3))
               ) == 0;
      lVar4 = 3;
      if (!bVar11) {
        lVar4 = 1;
      }
      bVar14 = (1 << ((ulong)pbVar20[-2] & 7) & (uint)*(byte *)(param_3 + (ulong)(pbVar20[-2] >> 3))
               ) == 0;
      lVar5 = 3;
      if (!bVar14) {
        lVar5 = 1;
      }
      bVar12 = (1 << ((ulong)pbVar20[-1] & 7) & (uint)*(byte *)(param_3 + (ulong)(pbVar20[-1] >> 3))
               ) == 0;
      lVar24 = lVar4 + lVar24;
      lVar4 = 3;
      if (!bVar12) {
        lVar4 = 1;
      }
      bVar13 = (1 << ((ulong)*pbVar20 & 7) & (uint)*(byte *)(param_3 + (ulong)(*pbVar20 >> 3))) == 0
      ;
      lVar19 = lVar5 + lVar19;
      lVar5 = 3;
      if (!bVar13) {
        lVar5 = 1;
      }
      lVar23 = lVar4 + lVar23;
      lVar15 = lVar5 + lVar15;
      bVar6 = bVar6 | bVar11;
      bVar7 = bVar7 | bVar14;
      bVar8 = bVar8 | bVar12;
      bVar9 = bVar9 | bVar13;
      uVar16 = uVar16 - 4;
      pbVar20 = pbVar20 + 4;
    } while (uVar16 != 0);
    bVar11 = (bool)(bVar9 | bVar8 | bVar7 | bVar6);
    lVar15 = lVar15 + lVar23 + lVar19 + lVar24;
    if (uVar21 != uVar22) goto LAB_003ec540;
  }
  if (bVar11) {
    FUN_002f27f0(&local_80,lVar15);
    pbVar18 = (byte *)((long)&uStack_78 + 1);
    if (local_80 != 0) {
      pbVar18 = local_70;
    }
    if (0 < (long)uVar3) {
      do {
        while (bVar6 = *pbVar25,
              (1 << (ulong)(bVar6 & 7) & (uint)*(byte *)(param_3 + (ulong)(bVar6 >> 3))) == 0) {
          *pbVar18 = 0x25;
          pbVar18[1] = "0123456789ABCDEF"[*pbVar25 >> 4];
          pbVar20 = pbVar25 + 1;
          pbVar18[2] = "0123456789ABCDEF"[(ulong)*pbVar25 & 0xf];
          pbVar18 = pbVar18 + 3;
          pbVar25 = pbVar20;
          if (pbVar2 <= pbVar20) goto LAB_003ec614;
        }
        pbVar20 = pbVar18 + 1;
        *pbVar18 = bVar6;
        pbVar25 = pbVar25 + 1;
        pbVar18 = pbVar20;
      } while (pbVar25 < pbVar2);
    }
LAB_003ec614:
    pbVar25 = local_70;
    if (local_80 == 0) {
      pbVar25 = (byte *)((long)&uStack_78 + 1);
    }
    uVar3 = uStack_78;
    if (local_80 == 0) {
      uVar3 = uStack_78 & 0xff;
    }
    if (pbVar18 != pbVar25 + uVar3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/percent_encoding.cc",0x48,2,
                   "assertion failed: %s","q == GRPC_SLICE_END_PTR(out)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = lStack_68;
    param_1[2] = (long)local_70;
    return;
  }
LAB_003ec640:
  if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
    plVar1 = plVar17 + 1;
    do {
      lVar24 = *plVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar24 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar19 = *plVar17;
    if ((lVar19 != 0) && (*(char *)(lVar19 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar19 + 8),plVar17,lVar24,lVar24 + 1);
    }
    if (lVar24 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  lVar24 = *param_2;
  lVar23 = param_2[3];
  lVar19 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar24;
  param_1[3] = lVar23;
  param_1[2] = lVar19;
  return;
}


