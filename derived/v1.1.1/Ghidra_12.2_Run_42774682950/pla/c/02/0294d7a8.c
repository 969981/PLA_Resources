/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294d7a8; name: FUN_0294d7a8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0294d7a8(long param_1,long *param_2,uint param_3,long param_4)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  bVar4 = *(byte *)((long *)*param_2 + 0x11);
  (**(code **)(*(long *)*param_2 + 0x70))();
  if ((ulong)bVar4 == 0) {
    return;
  }
  bVar5 = (&DAT_03a7eb48)[(ulong)param_3 & 0xff];
  param_1 = param_1 + ((ulong)param_3 & 0xff) * 0x38;
  uVar11 = 0;
  pbVar1 = (byte *)(param_1 + 0x38);
  param_1 = param_1 + 8;
  do {
    uVar3 = 0;
    if (((uint)uVar11 & 0xff) < 6) {
      uVar3 = (uint)uVar11;
    }
    lVar9 = 0;
    while (lVar12 = *(long *)(param_1 + lVar9 * 8),
          (uint)*(byte *)(lVar12 + 0x7d) != (uVar3 + bVar5 & 0xff)) {
      lVar9 = lVar9 + 1;
      if ((uint)bVar4 == (uint)lVar9) goto LAB_0294d828;
    }
    plVar10 = (long *)*param_2;
    if (plVar10 == (long *)0x0) {
      if ((uint)*pbVar1 <= ((uint)lVar9 & 0xff)) {
        lVar12 = 0;
      }
      FUN_02950f48(lVar12,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar2 = plVar10 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((uint)lVar9 & 0xff) < (uint)*pbVar1) {
      lVar9 = *(long *)(param_1 + lVar9 * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_02950f48(lVar9,1);
    (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(lVar9 + 0x60));
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    *(byte *)(param_4 + uVar11) = *(byte *)(lVar12 + 0x87) >> 7;
LAB_0294d828:
    uVar11 = uVar11 + 1;
    if (uVar11 == bVar4) {
      return;
    }
  } while( true );
}


