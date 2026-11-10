/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112edc4; name: FUN_0112edc4
 */


int FUN_0112edc4(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  ushort *puVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar14 = 0;
  uVar15 = 1;
  do {
    local_60 = 0;
    uStack_58 = 0;
    local_88 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    if ((int)(uint)uVar15 < 0x38a) {
      plVar1 = (long *)*(&DAT_043f23a0)[uVar15 * 4];
      lVar12 = (&DAT_043f23a0)[uVar15 * 4][1] - (long)plVar1;
      if (lVar12 != 0) {
        bVar5 = 0;
        bVar7 = 0;
        uVar4 = 0;
        lVar11 = *plVar1;
        while( true ) {
          if (lVar11 != 0) {
            bVar5 = bVar5 + 1;
            *(short *)((long)&local_88 + (ulong)bVar7 * 2) = (short)uVar4;
            bVar7 = bVar5;
          }
          uVar4 = uVar4 + 1;
          if ((ulong)(lVar12 >> 3) <= uVar4) break;
          lVar11 = plVar1[uVar4];
        }
        if (bVar5 != 0) {
          uVar2 = (uint)uVar15 | 1;
          uVar4 = (ulong)bVar5;
          puVar6 = (ushort *)&local_88;
          do {
            uVar8 = 0;
            if (uVar2 != 0x38b) {
              uVar8 = (uint)*puVar6;
            }
            uVar9 = (ulong)uVar8;
            if (uVar8 < 0x1c) {
              uVar13 = 0;
              if (uVar2 != 0x38b) {
                uVar13 = uVar15;
              }
              lVar12 = *(&DAT_043f23a0)[uVar13 * 4];
              uVar13 = (&DAT_043f23a0)[uVar13 * 4][1] - lVar12 >> 3;
              if ((uVar13 <= uVar9) || (*(long *)(lVar12 + uVar9 * 8) == 0)) goto LAB_0112eeec;
            }
            else {
LAB_0112eeec:
              lVar12 = *DAT_043f23a0;
              uVar9 = 0;
              uVar13 = DAT_043f23a0[1] - lVar12 >> 3;
            }
            if (uVar13 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            piVar10 = *(int **)(lVar12 + uVar9 * 8);
            if (((0x66 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
                (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x33], uVar9 != 0)) &&
               (*(short *)((long)piVar10 + uVar9) != 0)) {
              if ((*(short *)(param_1 + 0x6c + uVar15 * 0x58 + 0x7a) != 0) &&
                 (((*(byte *)(param_1 + 0x6c + uVar15 * 0x58 + 0x70) >> 1 & 1) == 0 ||
                  (iVar3 = FUN_0112eff0(param_1,uVar15 & 0xffffffff), iVar3 != 0)))) {
                iVar14 = iVar14 + 1;
              }
              break;
            }
            uVar4 = uVar4 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 != 0);
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 0x38a) {
      return iVar14;
    }
  } while( true );
}


