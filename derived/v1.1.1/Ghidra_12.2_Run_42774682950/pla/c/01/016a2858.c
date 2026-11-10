/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a2858; name: FUN_016a2858
 */


void FUN_016a2858(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar10 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  uVar4 = *puVar10;
  piVar1 = (int *)((long)puVar10 + (ulong)uVar4);
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 != 0)) {
    uVar9 = (ulong)*(uint *)((long)piVar1 + uVar8);
    puVar2 = (uint *)((long)((long)piVar1 + uVar8) + uVar9);
    if (puVar2 != (uint *)0x0) {
      fVar12 = (float)NEON_ucvtf(*puVar2);
      FUN_016a3380(param_1 + 0x78,(long)(fVar12 / *(float *)(param_1 + 0xd8)));
      if (*puVar2 != 0) {
        uVar7 = 0;
        lVar11 = (long)puVar10 + uVar9 + uVar8 + (ulong)uVar4 + 0x10;
        do {
          uVar8 = (ulong)*(uint *)(lVar11 + -0xc);
          lVar6 = lVar11 + uVar8;
          lVar3 = lVar11 + (uVar8 - (long)*(int *)(lVar6 + -0xc));
          if (*(ushort *)(lVar3 + -0xc) < 5) {
            local_90 = 0;
          }
          else {
            uVar9 = (ulong)*(ushort *)(lVar3 + -8);
            local_90 = 0;
            if (uVar9 != 0) {
              local_90 = *(undefined8 *)(lVar11 + uVar8 + uVar9 + -0xc);
            }
          }
          lVar3 = lVar11 + (uVar8 - (long)*(int *)(lVar6 + -0xc));
          if (*(ushort *)(lVar3 + -0xc) < 7) {
            local_88 = 0;
          }
          else {
            uVar9 = (ulong)*(ushort *)(lVar3 + -6);
            local_88 = 0;
            if (uVar9 != 0) {
              local_88 = *(undefined8 *)(lVar11 + uVar8 + uVar9 + -0xc);
            }
          }
          lVar3 = lVar11 + (uVar8 - (long)*(int *)(lVar6 + -0xc));
          uVar13 = 0;
          if (8 < *(ushort *)(lVar3 + -0xc)) {
            uVar9 = (ulong)*(ushort *)(lVar3 + -4);
            uVar13 = 0;
            if (uVar9 != 0) {
              uVar13 = *(undefined4 *)(lVar11 + uVar8 + uVar9 + -0xc);
            }
          }
          lVar3 = lVar11 + (uVar8 - (long)*(int *)(lVar6 + -0xc));
          uVar14 = 0;
          if (10 < *(ushort *)(lVar3 + -0xc)) {
            uVar9 = (ulong)*(ushort *)(lVar3 + -2);
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = *(undefined4 *)(lVar11 + uVar8 + uVar9 + -0xc);
            }
          }
          local_80 = CONCAT44(uVar14,uVar13);
          lVar6 = uVar8 - (long)*(int *)(lVar6 + -0xc);
          if ((*(ushort *)(lVar11 + lVar6 + -0xc) < 0xd) ||
             (uVar9 = (ulong)*(ushort *)(lVar11 + lVar6), uVar9 == 0)) {
LAB_016a2acc:
            local_78 = 4;
          }
          else {
            lVar6 = *(long *)(lVar11 + uVar8 + uVar9 + -0xc);
            if (lVar6 < -0x35a9867ba33d8fd4) {
              if (lVar6 == -0x6ba4a0bc5315e336) {
                local_78 = 2;
              }
              else {
                if (lVar6 != -0x4104b463067176af) goto LAB_016a2acc;
                local_78 = 0;
              }
            }
            else if (lVar6 == -0x2d5d80241cc308c) {
              local_78 = 3;
            }
            else {
              if (lVar6 != -0x35a9867ba33d8fd4) goto LAB_016a2acc;
              local_78 = 1;
            }
          }
          puVar5 = (undefined8 *)FUN_016a2b68(param_1 + 0x78,&local_90);
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 4;
          *(undefined4 *)(puVar5 + 3) = local_78;
          puVar5[1] = local_88;
          puVar5[2] = local_80;
          *puVar5 = local_90;
        } while (uVar7 < *puVar2);
      }
    }
  }
  return;
}


