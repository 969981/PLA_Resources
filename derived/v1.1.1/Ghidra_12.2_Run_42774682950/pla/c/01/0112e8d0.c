/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112e8d0; name: FUN_0112e8d0
 */


ulong FUN_0112e8d0(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  byte bVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  local_a8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if ((int)param_2 < 0x38a) {
    plVar6 = (long *)*(&DAT_043f23a0)[(ulong)param_2 * 4];
    lVar9 = (&DAT_043f23a0)[(ulong)param_2 * 4][1] - (long)plVar6;
    if (lVar9 != 0) {
      bVar7 = 0;
      uVar2 = *(undefined4 *)(&DAT_03a79008 + (long)param_1 * 4);
      bVar12 = 0;
      uVar10 = 0;
      lVar14 = *plVar6;
      while( true ) {
        if (lVar14 != 0) {
          bVar7 = bVar7 + 1;
          *(short *)((long)&local_a8 + (ulong)bVar12 * 2) = (short)uVar10;
          bVar12 = bVar7;
        }
        uVar10 = uVar10 + 1;
        if ((ulong)(lVar9 >> 3) <= uVar10) break;
        lVar14 = plVar6[uVar10];
      }
      if (bVar7 != 0) {
        uVar4 = param_2 | 1;
        uVar1 = 0;
        if (uVar4 != 0x38b) {
          uVar1 = param_2;
        }
        if (param_1 == 0) {
          uVar10 = (ulong)bVar7;
          puVar8 = (ushort *)&local_a8;
          do {
            uVar16 = 0;
            if (uVar4 != 0x38b) {
              uVar16 = (uint)*puVar8;
            }
            uVar5 = (ulong)uVar16;
            if (uVar16 < 0x1c) {
              plVar6 = (&DAT_043f23a0)[(ulong)uVar1 * 4];
              lVar9 = *plVar6;
              uVar13 = plVar6[1] - lVar9 >> 3;
              if ((uVar13 <= uVar5) || (*(long *)(lVar9 + uVar5 * 8) == 0)) goto LAB_0112ea14;
            }
            else {
LAB_0112ea14:
              lVar9 = *DAT_043f23a0;
              uVar5 = 0;
              uVar13 = DAT_043f23a0[1] - lVar9 >> 3;
            }
            if (uVar13 <= uVar5) {
LAB_0112eb48:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            piVar11 = *(int **)(lVar9 + uVar5 * 8);
            if ((0x66 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
               (uVar5 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x33], uVar5 != 0)) {
              uVar3 = *(ushort *)((long)piVar11 + uVar5);
              if (uVar3 != 0) {
                uVar5 = (ulong)(uint)uVar3;
                uVar15 = (uint)uVar3;
                break;
              }
            }
            uVar15 = 0;
            uVar5 = 0;
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar10 != 0);
        }
        else {
          uVar10 = (ulong)bVar7;
          puVar8 = (ushort *)&local_a8;
          do {
            uVar16 = 0;
            if (uVar4 != 0x38b) {
              uVar16 = (uint)*puVar8;
            }
            uVar5 = (ulong)uVar16;
            if (uVar16 < 0x1c) {
              plVar6 = (&DAT_043f23a0)[(ulong)uVar1 * 4];
              lVar9 = *plVar6;
              uVar13 = plVar6[1] - lVar9 >> 3;
              if ((uVar13 <= uVar5) || (*(long *)(lVar9 + uVar5 * 8) == 0)) goto LAB_0112eacc;
            }
            else {
LAB_0112eacc:
              uVar5 = 0;
              lVar9 = *DAT_043f23a0;
              uVar13 = DAT_043f23a0[1] - lVar9 >> 3;
            }
            if (uVar13 <= uVar5) goto LAB_0112eb48;
            piVar11 = *(int **)(lVar9 + uVar5 * 8);
            if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x67) ||
               (uVar5 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x33], uVar5 == 0)) {
              uVar16 = 0;
            }
            else {
              uVar3 = *(ushort *)((long)piVar11 + uVar5);
              uVar16 = (uint)uVar3;
              if (uVar3 != 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = param_2;
                local_64 = *puVar8;
                uVar5 = FUN_02c54af0(&local_70,uVar2);
                uVar15 = (uint)uVar3;
                if ((int)uVar5 != 0) break;
              }
            }
            uVar5 = 0;
            puVar8 = puVar8 + 1;
            uVar10 = uVar10 - 1;
            uVar15 = uVar16;
          } while (uVar10 != 0);
        }
        goto joined_r0x0112ea78;
      }
    }
  }
  uVar5 = 0;
  uVar15 = 0;
joined_r0x0112ea78:
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar15;
  }
  return uVar5;
}


