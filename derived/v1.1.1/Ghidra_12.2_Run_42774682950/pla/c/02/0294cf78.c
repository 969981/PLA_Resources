/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294cf78; name: FUN_0294cf78
 */


void FUN_0294cf78(long param_1,ulong param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *local_68;
  
  plVar9 = (long *)*param_3;
  uVar11 = param_2 & 0xffffffff;
  bVar4 = *(byte *)(plVar9 + 0x11);
  if ((ulong)bVar4 != 0) {
    bVar5 = (&DAT_03a7eb48)[param_2 & 0xff];
    uVar14 = 0;
    while( true ) {
      uVar13 = 0;
      if (((uint)uVar14 & 0xff) < 6) {
        uVar13 = (uint)uVar14;
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x50))(plVar9,uVar14 & 0xffffffff);
      if (plVar9 == (long *)0x0) {
        local_68 = (long *)0x0;
        FUN_0294d1d0(param_1,uVar11,uVar13 + bVar5,uVar14 & 0xffffffff,&local_68,
                     param_4 + uVar14 * 0x80);
      }
      else {
        plVar1 = plVar9 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_68 = plVar9;
        FUN_0294d1d0(param_1,uVar11,uVar13 + bVar5,uVar14 & 0xffffffff,&local_68,
                     param_4 + uVar14 * 0x80);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
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
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == bVar4) break;
      plVar9 = (long *)*param_3;
    }
  }
  param_2 = param_2 & 0xff;
  FUN_0294d544(param_1,uVar11);
  pbVar12 = (byte *)(param_1 + param_2 * 0x38 + 0x38);
  if (*pbVar12 != 0) {
    uVar13 = 0;
    uVar11 = 0;
    do {
      lVar15 = *(long *)(param_1 + param_2 * 0x38 + uVar11 * 8 + 8);
      lVar16 = *(long *)(lVar15 + 0x60);
      uVar14 = FUN_02c6cf3c(*(undefined8 *)(lVar16 + 0x98));
      if ((((uVar14 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar16 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar15 + 0x74) != 0)) {
        uVar11 = (ulong)((uint)uVar11 + 1);
      }
      else {
        uVar3 = (uint)uVar11 & 0xff;
        uVar14 = (ulong)uVar3;
        uVar10 = *(undefined8 *)(param_1 + param_2 * 0x38 + uVar14 * 8 + 8);
        if ((int)uVar3 < (int)(*pbVar12 - 1)) {
          do {
            uVar3 = (int)uVar14 + 1;
            lVar15 = param_1 + param_2 * 0x38 + 8;
            *(undefined8 *)(lVar15 + uVar14 * 8) = *(undefined8 *)(lVar15 + (ulong)uVar3 * 8);
            uVar14 = (ulong)(uVar3 & 0xff);
          } while ((int)(uVar3 & 0xff) < (int)(*pbVar12 - 1));
          uVar14 = (ulong)uVar3 & 0xff;
        }
        *(undefined8 *)(param_1 + param_2 * 0x38 + uVar14 * 8 + 8) = uVar10;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *pbVar12);
  }
  return;
}


