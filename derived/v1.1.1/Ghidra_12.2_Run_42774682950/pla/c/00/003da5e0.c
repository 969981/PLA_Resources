/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da5e0; name: FUN_003da5e0
 */


void FUN_003da5e0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = PTR_LAB_04373088;
  uVar4 = *(ulong *)(param_1 + 0x30);
  if ((long)(uVar4 >> 2) < *(long *)(param_1 + 0x38)) {
    lVar11 = 0;
    if (uVar4 != 0) {
      lVar11 = 0;
      uVar12 = 0;
      plVar6 = *(long **)(param_1 + 0x20);
      lVar10 = *plVar6;
      if (lVar10 != 0) goto LAB_003da65c;
      do {
        lVar13 = 0;
        while( true ) {
          uVar12 = uVar12 + 1;
          lVar11 = lVar13 + lVar11;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar13;
          if (uVar4 <= uVar12) {
            lVar11 = -lVar11;
            goto LAB_003da730;
          }
          plVar6 = (long *)(*(long *)(param_1 + 0x20) + uVar12 * 8);
          lVar10 = *plVar6;
          if (lVar10 == 0) break;
LAB_003da65c:
          lVar13 = 0;
          do {
            while( true ) {
              plVar5 = (long *)(lVar10 + 0x80);
              lVar14 = *plVar5;
              if (*(long *)(lVar10 + 0x40) == 0) break;
              lVar10 = lVar14;
              plVar6 = plVar5;
              if (lVar14 == 0) goto LAB_003da6a8;
            }
            *plVar6 = lVar14;
            FUN_003d8d74(lVar10);
            FUN_002e2ea0(puVar3,lVar10);
            lVar13 = lVar13 + 1;
            lVar10 = lVar14;
          } while (lVar14 != 0);
LAB_003da6a8:
          uVar4 = *(ulong *)(param_1 + 0x30);
        }
      } while( true );
    }
LAB_003da730:
    plVar6 = (long *)(param_1 + 0x38);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + lVar11;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar12 = uVar4 * 2;
    lVar11 = FUN_002ebd80(uVar4 << 4);
    lVar10 = *(long *)(param_1 + 0x30);
    plVar6 = *(long **)(param_1 + 0x20);
    if (lVar10 != 0) {
      lVar13 = 0;
      lVar14 = *plVar6;
      while( true ) {
        while (lVar14 != 0) {
          uVar7 = (ulong)(*(uint *)(lVar14 + 0x48) >> 4);
          uVar4 = 0;
          if (uVar12 != 0) {
            uVar4 = uVar7 / uVar12;
          }
          lVar9 = *(long *)(lVar14 + 0x80);
          lVar8 = (uVar7 - uVar4 * uVar12) * 8;
          *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(lVar11 + lVar8);
          *(long *)(lVar11 + lVar8) = lVar14;
          lVar14 = lVar9;
        }
        lVar13 = lVar13 + 1;
        if (lVar13 == lVar10) break;
        lVar14 = plVar6[lVar13];
      }
    }
    free(plVar6);
    *(long *)(param_1 + 0x20) = lVar11;
    *(ulong *)(param_1 + 0x30) = uVar12;
  }
  return;
}


