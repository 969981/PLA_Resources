/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe89b0; name: FUN_02fe89b0
 */


void FUN_02fe89b0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  
  uVar4 = *(undefined1 *)(param_2 + 0x19);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  puVar1 = param_1 + 8;
  *(undefined1 *)(param_1 + 3) = 0x11;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_042babd0;
  lVar10 = 0;
  if (param_2 != 0) {
    lVar10 = param_2 - (long)puVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = lVar10;
  uVar3 = *(ushort *)(param_2 + 0x1a) & 0x8080;
  *(ushort *)((long)param_1 + 0x1a) = uVar3;
  *param_1 = &PTR_LAB_042baa28;
  *(ushort *)((long)param_1 + 0x1a) = uVar3 | *(ushort *)(param_2 + 0x1a) & 0x8010;
  if (lVar10 != 0) {
    lVar10 = lVar10 + (long)puVar1;
  }
  uVar14 = *param_3;
  puVar12 = param_1 + 10;
  param_1[0xb] = param_3[1];
  *puVar12 = uVar14;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar10 + 0x20);
  iVar5 = *(int *)(lVar10 + 0x40);
  if (iVar5 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (long)iVar5 + lVar10 + 0x40;
  }
  FUN_02ffe20c(lVar9,*(undefined4 *)(lVar10 + 0x44),param_4,puVar12,param_1 + 4,param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fVar13 = (float)*puVar12;
  fVar15 = (float)((ulong)*puVar12 >> 0x20);
  uVar16 = -(uint)(fVar15 < 0.0);
  uVar17 = -(uint)((float)param_1[0xb] < 0.0);
  *param_1 = &PTR_LAB_042bab10;
  uVar11 = uVar16 & 2;
  uVar8 = (uVar11 + (fVar13 < 0.0) | uVar17 & 4) - (uVar11 >> 1);
  uVar11 = 0;
  if ((float)param_1[0xb] == fVar13 && fVar15 == fVar13) {
    uVar11 = (uint)((-(uint)(fVar13 < 0.0) & uVar16 & uVar17) == 0);
  }
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  *(uint *)((long)param_1 + 0x5c) =
       (uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x17 & 2 | uVar11 | 0x3f000000;
  lVar10 = param_1[8];
  if (lVar10 != 0) {
    lVar10 = lVar10 + (long)puVar1;
  }
  if (*(long *)(lVar10 + 8) != 0) {
    plVar2 = (long *)(lVar10 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  return;
}


