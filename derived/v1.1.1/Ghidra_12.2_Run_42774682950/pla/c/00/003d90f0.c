/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d90f0; name: FUN_003d90f0
 */


void FUN_003d90f0(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = PTR_LAB_04373088;
  lVar7 = 0;
  while( true ) {
    FUN_002ef710(&DAT_0439a968 + lVar7 * 0x40);
    uVar4 = (&DAT_0439a998)[lVar7 * 8];
    if (uVar4 != 0) break;
    lVar8 = (&DAT_0439a990)[lVar7 * 8];
    lVar11 = 0;
LAB_003d9208:
    plVar6 = &DAT_0439a9a0 + lVar7 * 8;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + lVar11;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0xfd,0,
                   "WARNING: %lu metadata elements were leaked");
      uVar4 = FUN_002f5aa0();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((&DAT_0439a990)[lVar7 * 8] != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x107,2,
                     "assertion failed: %s","shard->count == 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    free((void *)(&DAT_0439a988)[lVar7 * 8]);
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x10) {
      return;
    }
  }
  lVar11 = 0;
  uVar12 = 0;
  plVar6 = (long *)(&DAT_0439a988)[lVar7 * 8];
  lVar9 = *plVar6;
  if (lVar9 != 0) goto LAB_003d91a4;
  do {
    lVar8 = 0;
    while( true ) {
      uVar12 = uVar12 + 1;
      lVar11 = lVar8 + lVar11;
      lVar8 = (&DAT_0439a990)[lVar7 * 8] - lVar8;
      (&DAT_0439a990)[lVar7 * 8] = lVar8;
      if (uVar4 <= uVar12) {
        lVar11 = -lVar11;
        goto LAB_003d9208;
      }
      plVar6 = (long *)((&DAT_0439a988)[lVar7 * 8] + uVar12 * 8);
      lVar9 = *plVar6;
      if (lVar9 == 0) break;
LAB_003d91a4:
      lVar8 = 0;
      do {
        while( true ) {
          plVar5 = (long *)(lVar9 + 0x80);
          lVar10 = *plVar5;
          if (*(long *)(lVar9 + 0x40) == 0) break;
          lVar9 = lVar10;
          plVar6 = plVar5;
          if (lVar10 == 0) goto LAB_003d91f0;
        }
        *plVar6 = lVar10;
        FUN_003d8d74(lVar9);
        FUN_002e2ea0(puVar3,lVar9);
        lVar8 = lVar8 + 1;
        lVar9 = lVar10;
      } while (lVar10 != 0);
LAB_003d91f0:
      uVar4 = (&DAT_0439a998)[lVar7 * 8];
    }
  } while( true );
}


