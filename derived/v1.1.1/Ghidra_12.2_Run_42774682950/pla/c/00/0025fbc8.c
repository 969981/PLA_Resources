/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025fbc8; name: FUN_0025fbc8
 */


void FUN_0025fbc8(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5,
                 long param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  fVar38 = *(float *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0xc4) == 0) {
    FUN_0025e9fc(param_1,param_2,&local_a0,param_6 + 0x30);
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(param_2 + 0xb8) +
             (ulong)*(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_5 * 0xa0 + 2) * 0x40);
    local_78 = puVar5[5];
    uStack_88 = puVar5[3];
    uStack_98 = puVar5[1];
    local_a0 = *puVar5;
    local_90 = puVar5[2];
    local_80 = puVar5[4];
    fVar38 = fVar38 * *(float *)(puVar5 + 6);
  }
  uVar18 = param_4[1];
  uVar21 = param_4[3];
  uVar25 = param_4[5];
  uVar29 = param_4[7];
  pbVar9 = *(byte **)(param_3 + 200);
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  fVar23 = (float)puVar5[2];
  fVar14 = (float)local_a0;
  fVar15 = (float)((ulong)local_a0 >> 0x20);
  fVar16 = (float)uStack_98;
  fVar17 = (float)((ulong)uStack_98 >> 0x20);
  fVar19 = (float)*puVar5;
  lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
  fVar27 = (float)puVar5[4];
  uVar7 = lVar6 + 0x3fU & -lVar6;
  fVar20 = (float)((ulong)*puVar5 >> 0x20);
  fVar44 = (float)local_90;
  fVar45 = (float)((ulong)local_90 >> 0x20);
  fVar46 = (float)uStack_88;
  fVar47 = (float)((ulong)uStack_88 >> 0x20);
  fVar24 = (float)((ulong)puVar5[2] >> 0x20);
  fVar28 = (float)((ulong)puVar5[4] >> 0x20);
  fVar22 = (float)puVar5[1];
  fVar39 = (float)local_80;
  fVar40 = (float)((ulong)local_80 >> 0x20);
  fVar41 = (float)local_78;
  fVar43 = (float)((ulong)local_78 >> 0x20);
  fVar26 = (float)puVar5[3];
  fVar42 = (float)puVar5[5];
  fVar30 = fVar14 * fVar19 + fVar44 * fVar20 + fVar39 * fVar22 + 0.0;
  fVar31 = fVar15 * fVar19 + fVar45 * fVar20 + fVar40 * fVar22 + 0.0;
  fVar32 = fVar16 * fVar19 + fVar46 * fVar20 + fVar41 * fVar22 + 0.0;
  fVar33 = (float)((ulong)puVar5[1] >> 0x20) + fVar17 * fVar19 + fVar47 * fVar20 + fVar43 * fVar22;
  fVar34 = fVar14 * fVar23 + fVar44 * fVar24 + fVar39 * fVar26 + 0.0;
  fVar35 = fVar15 * fVar23 + fVar45 * fVar24 + fVar40 * fVar26 + 0.0;
  fVar36 = fVar16 * fVar23 + fVar46 * fVar24 + fVar41 * fVar26 + 0.0;
  fVar37 = (float)((ulong)puVar5[3] >> 0x20) + fVar17 * fVar23 + fVar47 * fVar24 + fVar43 * fVar26;
  fVar39 = fVar14 * fVar27 + fVar44 * fVar28 + fVar39 * fVar42 + 0.0;
  fVar40 = fVar15 * fVar27 + fVar45 * fVar28 + fVar40 * fVar42 + 0.0;
  fVar41 = fVar16 * fVar27 + fVar46 * fVar28 + fVar41 * fVar42 + 0.0;
  fVar42 = (float)((ulong)puVar5[5] >> 0x20) + fVar17 * fVar27 + fVar47 * fVar28 + fVar43 * fVar42;
  fVar14 = (float)*param_4;
  fVar15 = (float)((ulong)*param_4 >> 0x20);
  fVar16 = (float)uVar18;
  fVar17 = (float)param_4[2];
  fVar19 = (float)((ulong)param_4[2] >> 0x20);
  fVar20 = (float)uVar21;
  fVar22 = (float)param_4[4];
  fVar23 = (float)((ulong)param_4[4] >> 0x20);
  fVar26 = (float)param_4[6];
  fVar27 = (float)((ulong)param_4[6] >> 0x20);
  fVar24 = (float)uVar25;
  fVar28 = (float)uVar29;
  if ((*pbVar9 & 1) == 0) {
    lVar6 = *(long *)(pbVar9 + 0x40);
    *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar7;
  }
  else {
    plVar10 = *(long **)(pbVar9 + 0x40);
    do {
      lVar6 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar6 + uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
  puVar5[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                       fVar33 * fVar14 + fVar37 * fVar15 + fVar42 * fVar16,
                       fVar32 * fVar14 + fVar36 * fVar15 + fVar41 * fVar16 + 0.0);
  *puVar5 = CONCAT44(fVar31 * fVar14 + fVar35 * fVar15 + fVar40 * fVar16 + 0.0,
                     fVar30 * fVar14 + fVar34 * fVar15 + fVar39 * fVar16 + 0.0);
  puVar5[3] = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                       fVar33 * fVar17 + fVar37 * fVar19 + fVar42 * fVar20,
                       fVar32 * fVar17 + fVar36 * fVar19 + fVar41 * fVar20 + 0.0);
  puVar5[2] = CONCAT44(fVar31 * fVar17 + fVar35 * fVar19 + fVar40 * fVar20 + 0.0,
                       fVar30 * fVar17 + fVar34 * fVar19 + fVar39 * fVar20 + 0.0);
  puVar5[5] = CONCAT44((float)((ulong)uVar25 >> 0x20) +
                       fVar33 * fVar22 + fVar37 * fVar23 + fVar42 * fVar24,
                       fVar32 * fVar22 + fVar36 * fVar23 + fVar41 * fVar24 + 0.0);
  puVar5[4] = CONCAT44(fVar31 * fVar22 + fVar35 * fVar23 + fVar40 * fVar24 + 0.0,
                       fVar30 * fVar22 + fVar34 * fVar23 + fVar39 * fVar24 + 0.0);
  puVar5[7] = CONCAT44((float)((ulong)uVar29 >> 0x20) +
                       fVar33 * fVar26 + fVar37 * fVar27 + fVar42 * fVar28,
                       fVar32 * fVar26 + fVar36 * fVar27 + fVar41 * fVar28 + 0.0);
  puVar5[6] = CONCAT44(fVar31 * fVar26 + fVar35 * fVar27 + fVar40 * fVar28 + 0.0,
                       fVar30 * fVar26 + fVar34 * fVar27 + fVar39 * fVar28 + 0.0);
  *(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30) = lVar6;
  if (*(short *)(param_6 + 0x10) != 0) {
    uVar7 = 0;
    do {
      pbVar9 = *(byte **)(*(long *)(param_6 + 0x18) + uVar7 * 8);
      bVar2 = *pbVar9;
      if (bVar2 < 2) {
        if (bVar2 == 1) {
          uVar11 = FUN_0025ae80(param_1,pbVar9 + 0x30);
          uVar12 = FUN_0025ae80(param_1,pbVar9 + 0x40);
          uVar13 = FUN_0025ae80(param_1,pbVar9 + 0x50);
          fVar14 = (float)FUN_0025ae80(param_1,pbVar9 + 0x60);
          fVar14 = fVar38 * fVar14;
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) {
LAB_0025fef0:
            lVar6 = *(long *)(pbVar9 + 0x40);
            *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar8;
          }
          else {
            plVar10 = *(long **)(pbVar9 + 0x40);
            do {
              lVar6 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar6 + uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_0025ff14:
          puVar1 = (undefined4 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = fVar14;
          goto LAB_0025fddc;
        }
        if (bVar2 == 0) {
          uVar11 = FUN_0025ae80(param_1,pbVar9 + 8);
          uVar12 = FUN_0025ae80(param_1,pbVar9 + 0x18);
          uVar13 = FUN_0025ae80(param_1,pbVar9 + 0x28);
          fVar14 = (float)FUN_0025ae80(param_1,pbVar9 + 0x38);
          fVar14 = fVar38 * fVar14;
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) goto LAB_0025fef0;
          plVar10 = *(long **)(pbVar9 + 0x40);
          do {
            lVar6 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar6 + uVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_0025ff14;
        }
      }
      else {
        lVar6 = 0;
LAB_0025fddc:
        *(long *)(*(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30 + 8) + uVar7 * 8) =
             lVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_6 + 0x10));
  }
  return;
}


