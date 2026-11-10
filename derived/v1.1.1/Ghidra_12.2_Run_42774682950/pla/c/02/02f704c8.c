/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f704c8; name: FUN_02f704c8
 */


void FUN_02f704c8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  FUN_02f9b394();
  uVar9 = DAT_03aae468;
  uVar8 = DAT_03aae460;
  if (0 < (int)param_3) {
    uVar16 = NEON_fmov(0x3f800000,4);
    uVar15 = 0;
    plVar1 = (long *)(param_1 + 0x48);
    do {
      plVar12 = (long *)((long)plVar1 +
                        (ulong)*(ushort *)(param_2 + uVar15 * 2) * 0x40 + *plVar1 + 0x30);
      lVar14 = *plVar12;
      lVar11 = 0;
      if (lVar14 != 0) {
        lVar11 = lVar14 + (long)plVar12;
      }
      lVar11 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x48))();
      if (lVar11 != 0) {
        FUN_02f6e778(param_1,(long)plVar1 +
                             (ulong)*(ushort *)(param_2 + uVar15 * 2) * 0x40 +
                             *(long *)(param_1 + 0x48));
      }
      plVar12 = (long *)((long)plVar1 +
                        (ulong)*(ushort *)(param_2 + uVar15 * 2) * 0x40 + *plVar1 + 0x30);
      lVar14 = *plVar12;
      lVar11 = 0;
      if (lVar14 != 0) {
        lVar11 = lVar14 + (long)plVar12;
      }
      iVar10 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0xc0))();
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar10;
      uVar5 = *(ushort *)(param_2 + uVar15 * 2);
      puVar3 = (undefined8 *)((long)plVar1 + (ulong)uVar5 * 0x40 + *(long *)(param_1 + 0x48));
      plVar12 = puVar3 + 6;
      if ((*plVar12 != 0) && (plVar4 = (long *)(*plVar12 + (long)plVar12), plVar4 != (long *)0x0)) {
        if (plVar4[1] != 0) {
          plVar2 = plVar4 + 2;
          do {
            lVar11 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        *plVar12 = 0;
      }
      uVar13 = *(undefined4 *)(param_1 + 0x58);
      puVar3[4] = uVar16;
      puVar3[2] = 0;
      puVar3[3] = 0x1ffff00000000;
      uVar15 = uVar15 + 1;
      *(undefined4 *)(puVar3 + 5) = 0x3f800000;
      *(undefined4 *)((long)puVar3 + 0x2c) = uVar13;
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(uint *)(param_1 + 0x58) = (uint)uVar5;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    } while (uVar15 != param_3);
  }
  uVar15 = FUN_02f9b898(param_1);
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  uVar13 = 4;
  if ((uVar15 & 1) != 0) {
    uVar13 = 5;
  }
  FUN_02f6ff60(param_1 + 0xa0,param_1,uVar13);
  return;
}


