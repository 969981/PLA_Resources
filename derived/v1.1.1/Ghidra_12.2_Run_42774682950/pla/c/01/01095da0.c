/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01095da0; name: FUN_01095da0
 */


int * FUN_01095da0(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  ulong *param_6)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_498;
  float local_490 [256];
  
  local_498 = 0;
  local_490[2] = 0.0;
  local_490[3] = 0.0;
  local_490[0] = -1.0;
  local_490[4] = -1.0;
  local_490[6] = 0.0;
  local_490[7] = 0.0;
  local_490[8] = -1.0;
  local_490[10] = 0.0;
  local_490[0xb] = 0.0;
  local_490[0xc] = -1.0;
  local_490[0xe] = 0.0;
  local_490[0xf] = 0.0;
  local_490[0x10] = -1.0;
  local_490[0x12] = 0.0;
  local_490[0x13] = 0.0;
  local_490[0x14] = -1.0;
  local_490[0x16] = 0.0;
  local_490[0x17] = 0.0;
  local_490[0x18] = -1.0;
  local_490[0x1a] = 0.0;
  local_490[0x1b] = 0.0;
  local_490[0x1c] = -1.0;
  local_490[0x1e] = 0.0;
  local_490[0x1f] = 0.0;
  local_490[0x20] = -1.0;
  local_490[0x22] = 0.0;
  local_490[0x23] = 0.0;
  local_490[0x24] = -1.0;
  local_490[0x26] = 0.0;
  local_490[0x27] = 0.0;
  local_490[0x28] = -1.0;
  local_490[0x2a] = 0.0;
  local_490[0x2b] = 0.0;
  local_490[0x2c] = -1.0;
  local_490[0x2e] = 0.0;
  local_490[0x2f] = 0.0;
  local_490[0x30] = -1.0;
  local_490[0x32] = 0.0;
  local_490[0x33] = 0.0;
  local_490[0x34] = -1.0;
  local_490[0x36] = 0.0;
  local_490[0x37] = 0.0;
  local_490[0x38] = -1.0;
  local_490[0x3a] = 0.0;
  local_490[0x3b] = 0.0;
  local_490[0x3c] = -1.0;
  local_490[0x3e] = 0.0;
  local_490[0x3f] = 0.0;
  local_490[0x40] = -1.0;
  local_490[0x42] = 0.0;
  local_490[0x43] = 0.0;
  local_490[0x44] = -1.0;
  local_490[0x46] = 0.0;
  local_490[0x47] = 0.0;
  local_490[0x48] = -1.0;
  local_490[0x4a] = 0.0;
  local_490[0x4b] = 0.0;
  local_490[0x4c] = -1.0;
  local_490[0x4e] = 0.0;
  local_490[0x4f] = 0.0;
  local_490[0x50] = -1.0;
  local_490[0x52] = 0.0;
  local_490[0x53] = 0.0;
  local_490[0x54] = -1.0;
  local_490[0x56] = 0.0;
  local_490[0x57] = 0.0;
  local_490[0x58] = -1.0;
  local_490[0x5a] = 0.0;
  local_490[0x5b] = 0.0;
  local_490[0x5c] = -1.0;
  local_490[0x5e] = 0.0;
  local_490[0x5f] = 0.0;
  local_490[0x60] = -1.0;
  local_490[0x62] = 0.0;
  local_490[99] = 0.0;
  local_490[100] = -1.0;
  local_490[0x66] = 0.0;
  local_490[0x67] = 0.0;
  local_490[0x68] = -1.0;
  local_490[0x6a] = 0.0;
  local_490[0x6b] = 0.0;
  local_490[0x6c] = -1.0;
  local_490[0x6e] = 0.0;
  local_490[0x6f] = 0.0;
  local_490[0x70] = -1.0;
  local_490[0x72] = 0.0;
  local_490[0x73] = 0.0;
  local_490[0x74] = -1.0;
  local_490[0x76] = 0.0;
  local_490[0x77] = 0.0;
  local_490[0x78] = -1.0;
  local_490[0x7a] = 0.0;
  local_490[0x7b] = 0.0;
  local_490[0x7c] = -1.0;
  local_490[0x7e] = 0.0;
  local_490[0x7f] = 0.0;
  local_490[0x80] = -1.0;
  local_490[0x82] = 0.0;
  local_490[0x83] = 0.0;
  local_490[0x84] = -1.0;
  local_490[0x86] = 0.0;
  local_490[0x87] = 0.0;
  local_490[0x88] = -1.0;
  local_490[0x8a] = 0.0;
  local_490[0x8b] = 0.0;
  local_490[0x8c] = -1.0;
  local_490[0x8e] = 0.0;
  local_490[0x8f] = 0.0;
  local_490[0x90] = -1.0;
  local_490[0x92] = 0.0;
  local_490[0x93] = 0.0;
  local_490[0x94] = -1.0;
  local_490[0x96] = 0.0;
  local_490[0x97] = 0.0;
  local_490[0x98] = -1.0;
  local_490[0x9a] = 0.0;
  local_490[0x9b] = 0.0;
  local_490[0x9c] = -1.0;
  local_490[0x9e] = 0.0;
  local_490[0x9f] = 0.0;
  local_490[0xa0] = -1.0;
  local_490[0xa2] = 0.0;
  local_490[0xa3] = 0.0;
  local_490[0xa4] = -1.0;
  local_490[0xa6] = 0.0;
  local_490[0xa7] = 0.0;
  local_490[0xa8] = -1.0;
  local_490[0xaa] = 0.0;
  local_490[0xab] = 0.0;
  local_490[0xac] = -1.0;
  local_490[0xae] = 0.0;
  local_490[0xaf] = 0.0;
  local_490[0xb0] = -1.0;
  local_490[0xb2] = 0.0;
  local_490[0xb3] = 0.0;
  local_490[0xb4] = -1.0;
  local_490[0xb6] = 0.0;
  local_490[0xb7] = 0.0;
  local_490[0xb8] = -1.0;
  local_490[0xba] = 0.0;
  local_490[0xbb] = 0.0;
  local_490[0xbc] = -1.0;
  local_490[0xbe] = 0.0;
  local_490[0xbf] = 0.0;
  local_490[0xc0] = -1.0;
  local_490[0xc2] = 0.0;
  local_490[0xc3] = 0.0;
  local_490[0xc4] = -1.0;
  local_490[0xc6] = 0.0;
  local_490[199] = 0.0;
  local_490[200] = -1.0;
  local_490[0xca] = 0.0;
  local_490[0xcb] = 0.0;
  local_490[0xcc] = -1.0;
  local_490[0xce] = 0.0;
  local_490[0xcf] = 0.0;
  local_490[0xd0] = -1.0;
  local_490[0xd2] = 0.0;
  local_490[0xd3] = 0.0;
  local_490[0xd4] = -1.0;
  local_490[0xd6] = 0.0;
  local_490[0xd7] = 0.0;
  local_490[0xd8] = -1.0;
  local_490[0xda] = 0.0;
  local_490[0xdb] = 0.0;
  local_490[0xdc] = -1.0;
  local_490[0xde] = 0.0;
  local_490[0xdf] = 0.0;
  local_490[0xe0] = -1.0;
  local_490[0xe2] = 0.0;
  local_490[0xe3] = 0.0;
  local_490[0xe4] = -1.0;
  local_490[0xe6] = 0.0;
  local_490[0xe7] = 0.0;
  local_490[0xe8] = -1.0;
  local_490[0xea] = 0.0;
  local_490[0xeb] = 0.0;
  local_490[0xec] = -1.0;
  local_490[0xee] = 0.0;
  local_490[0xef] = 0.0;
  local_490[0xf0] = -1.0;
  local_490[0xf2] = 0.0;
  local_490[0xf3] = 0.0;
  local_490[0xf4] = -1.0;
  local_490[0xf6] = 0.0;
  local_490[0xf7] = 0.0;
  local_490[0xf8] = -1.0;
  local_490[0xfa] = 0.0;
  local_490[0xfb] = 0.0;
  local_490[0xfc] = -1.0;
  uVar5 = *param_1;
  if (uVar5 < 0x41) {
    if (uVar5 == 0) {
      fVar24 = 0.0;
      fVar27 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
    }
    else {
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar22 = 0.0;
      fVar21 = 0.0;
      fVar27 = 0.0;
      fVar24 = 0.0;
      lVar18 = 0;
      iVar19 = 0;
      do {
        uVar17 = (ulong)*(uint *)((long)param_1 + lVar18 + 4);
        lVar1 = (long)param_1 + lVar18 + uVar17 + 4;
        fVar20 = (float)FUN_01096640(lVar1,param_2,param_3);
        if (1.1920929e-07 <= fVar20) {
          lVar8 = lVar18 + (uVar17 - (long)*(int *)((long)param_1 + lVar18 + uVar17 + 4));
          lVar2 = uVar17 + *(ushort *)((long)param_1 + lVar8 + 100);
          lVar2 = lVar2 + (ulong)*(uint *)((long)param_1 + lVar18 + lVar2 + 4);
          lVar9 = lVar18 + (lVar2 - *(int *)((long)param_1 + lVar18 + lVar2 + 4));
          uVar6 = *(ushort *)((long)param_1 + lVar9 + 4);
          uVar7 = *(ushort *)((long)param_1 + lVar8 + 4);
          if ((uVar6 < 5) ||
             (((uVar16 = (ulong)*(ushort *)((long)param_1 + lVar9 + 8), uVar16 == 0 ||
               (*(char *)((long)param_1 + lVar18 + lVar2 + uVar16 + 4) == '\0')) &&
              ((uVar6 < 7 ||
               ((uVar16 = (ulong)*(ushort *)((long)param_1 + lVar9 + 10), uVar16 == 0 ||
                (*(char *)((long)param_1 + lVar18 + lVar2 + uVar16 + 4) == '\0')))))))) {
            fVar26 = fVar26 + fVar20;
            bVar11 = true;
            bVar10 = bVar11;
            if (0x3c < uVar7) goto LAB_01096128;
LAB_01096020:
            fVar27 = fVar27 + fVar20;
          }
          else {
            bVar11 = false;
            bVar10 = false;
            if (uVar7 < 0x3d) goto LAB_01096020;
LAB_01096128:
            uVar16 = (ulong)*(ushort *)((long)param_1 + lVar8 + 0x40);
            bVar10 = bVar11;
            if (uVar16 == 0) goto LAB_01096020;
            fVar23 = fVar21 + fVar20;
            if (!bVar11) {
              fVar23 = fVar21;
            }
            bVar10 = *(char *)((long)param_1 + lVar18 + uVar17 + uVar16 + 4) == '\0';
            if (!bVar10) {
              fVar21 = fVar23;
            }
            fVar23 = fVar27 + fVar20;
            if (!bVar10) {
              fVar23 = fVar27;
              fVar22 = fVar22 + fVar20;
            }
            fVar27 = fVar23;
            bVar10 = (bool)(bVar11 & bVar10);
          }
          fVar25 = fVar25 + fVar20;
          fVar23 = fVar24 + fVar20;
          if (!bVar10) {
            fVar23 = fVar24;
          }
          fVar24 = fVar23;
          lVar2 = (long)iVar19;
          iVar19 = iVar19 + 1;
          *(long *)(local_490 + lVar2 * 4 + -2) = lVar1;
          local_490[lVar2 * 4] = fVar20;
        }
        lVar18 = lVar18 + 4;
      } while ((ulong)uVar5 * 4 != lVar18);
    }
    fVar20 = fVar26;
    if (param_5 != 1) {
      fVar20 = fVar25;
    }
    if (param_4 == 1) {
      if (param_5 == 1) {
        if (1.1920929e-07 <= fVar21) {
          iVar19 = 1;
          bVar11 = true;
        }
        else {
          iVar19 = 0;
          bVar11 = false;
          fVar21 = fVar26;
        }
      }
      else if (1.1920929e-07 <= fVar22) {
        bVar11 = false;
        iVar19 = 1;
        fVar21 = fVar22;
      }
      else {
        iVar19 = 0;
        bVar11 = false;
        fVar21 = fVar25;
      }
    }
    else if (param_4 == 2) {
      bVar11 = param_5 == 1;
      if (!bVar11) {
        fVar24 = fVar27;
      }
      iVar19 = 2;
      fVar21 = fVar24;
    }
    else {
      iVar19 = 0;
      bVar11 = false;
      fVar21 = fVar20;
    }
    if (1.1920929e-07 <= fVar21) {
      if (param_6 == (ulong *)0x0) {
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar18 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar18;
        param_6 = *(ulong **)(lVar18 + 0xd8);
      }
      uVar17 = *param_6;
      uVar16 = param_6[1];
      uVar15 = uVar16 ^ uVar17;
      *param_6 = uVar15 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar15 << 0x10;
      param_6[1] = uVar15 >> 0x1b | uVar15 << 0x25;
      fVar24 = 0.0;
      fVar22 = fVar21 * (float)(uVar16 + uVar17) * 5.421011e-20 + 0.0;
      if (iVar19 != 1) {
        lVar18 = 0;
        do {
          piVar13 = *(int **)((long)local_490 + lVar18 + -8);
          if (piVar13 == (int *)0x0) {
            return (int *)0x0;
          }
          if ((((iVar19 != 2) || (*(ushort *)((long)piVar13 - (long)*piVar13) < 0x3d)) ||
              (uVar17 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[0x1e], uVar17 == 0)) ||
             (*(char *)((long)piVar13 + uVar17) == '\0')) {
            if (bVar11) {
              puVar4 = (uint *)((long)piVar13 +
                               (ulong)*(ushort *)((long)piVar13 + (0x60 - (long)*piVar13)));
              piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
              puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
              if ((4 < *puVar14) &&
                 ((((ulong)puVar14[2] != 0 && (*(char *)((long)piVar3 + (ulong)puVar14[2]) != '\0'))
                  || ((6 < *puVar14 &&
                      (((ulong)puVar14[3] != 0 &&
                       (*(char *)((long)piVar3 + (ulong)puVar14[3]) != '\0'))))))))
              goto LAB_01096308;
            }
            fVar24 = fVar24 + *(float *)((long)local_490 + lVar18);
            if (fVar22 < fVar24) {
              return piVar13;
            }
          }
LAB_01096308:
          lVar18 = lVar18 + 0x10;
          if (lVar18 == 0x400) {
            return (int *)0x0;
          }
        } while( true );
      }
      fVar24 = 0.0;
      lVar18 = 0;
      do {
        piVar13 = *(int **)((long)local_490 + lVar18 + -8);
        if (piVar13 == (int *)0x0) {
          return (int *)0x0;
        }
        puVar14 = (ushort *)((long)piVar13 - (long)*piVar13);
        if (((0x3c < *puVar14) && ((ulong)puVar14[0x1e] != 0)) &&
           (*(char *)((long)piVar13 + (ulong)puVar14[0x1e]) != '\0')) {
          if (bVar11) {
            piVar3 = (int *)((long)((long)piVar13 + (ulong)puVar14[0x30]) +
                            (ulong)*(uint *)((long)piVar13 + (ulong)puVar14[0x30]));
            puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
            if ((4 < *puVar14) &&
               ((((ulong)puVar14[2] != 0 && (*(char *)((long)piVar3 + (ulong)puVar14[2]) != '\0'))
                || ((6 < *puVar14 &&
                    (((ulong)puVar14[3] != 0 &&
                     (*(char *)((long)piVar3 + (ulong)puVar14[3]) != '\0')))))))) goto LAB_010962c4;
          }
          fVar24 = fVar24 + *(float *)((long)local_490 + lVar18);
          if (fVar22 < fVar24) {
            return piVar13;
          }
        }
LAB_010962c4:
        lVar18 = lVar18 + 0x10;
        if (lVar18 == 0x400) {
          return (int *)0x0;
        }
      } while( true );
    }
  }
  return (int *)0x0;
}


