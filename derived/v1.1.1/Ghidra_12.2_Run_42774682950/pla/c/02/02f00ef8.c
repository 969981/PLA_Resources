/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f00ef8; name: FUN_02f00ef8
 */


void FUN_02f00ef8(byte param_1,ulong param_2,long param_3,int param_4,long param_5,uint param_6,
                 long param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  void *__s;
  float fVar21;
  float fVar22;
  float afStack_d8 [2];
  undefined8 local_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  size_t local_b0;
  ulong local_a8;
  int local_9c;
  long local_98;
  long local_90;
  int local_84;
  ulong local_80;
  ulong local_78;
  
  uVar19 = param_2 & 0xff;
  local_84 = (int)(char)(&DAT_03a9f3e4)[uVar19];
  local_9c = param_4;
  local_98 = param_5;
  local_90 = param_7;
  lVar8 = FUN_02ef8fe0();
  if (lVar8 != 0) {
    uVar4 = *(uint *)(&DAT_03a9f3d0 + (long)local_84 * 4);
    __s = (void *)((long)afStack_d8 + (8 - (ulong)(uVar4 * 4 + 0xc & 0xfffffff0)));
    iVar18 = (int)uVar19;
    uVar3 = (iVar18 + 3U) * 4 & 0x7f0;
    local_a8 = (ulong)param_1;
    if (param_1 != 0) {
      fVar22 = 1.0 / (float)uVar4;
      local_b0 = (ulong)uVar4 << 2;
      local_b8 = (ulong)(iVar18 + 3U & 0x1fc);
      local_c4 = (uint)(param_6 == 0 || iVar18 == 0);
      local_78 = param_2 & 3;
      lVar20 = uVar19 - local_78;
      local_c0 = (ulong)param_6;
      local_80 = 0;
      local_d0 = (ulong)(iVar18 * 4 + 0xc) & 0x7f0;
      do {
        memset(__s,0,local_b0);
        lVar7 = local_98;
        iVar18 = local_9c;
        uVar6 = local_c0;
        lVar9 = local_80 * local_b8;
        if ((local_c4 & 1) == 0) {
          uVar10 = 0;
          uVar11 = 0;
LAB_02f0108c:
          fVar21 = *(float *)(lVar7 + uVar11 * 4);
          if (uVar19 - 1 < 3) {
            lVar13 = 0;
            uVar12 = local_78;
          }
          else {
            lVar13 = 0;
            lVar2 = param_3 + (ulong)uVar10 * 4;
            lVar17 = 8;
            do {
              pfVar14 = (float *)(lVar2 + lVar17);
              pfVar5 = (float *)((long)__s + (lVar17 - (ulong)uVar3));
              lVar1 = lVar13 * 4;
              lVar13 = lVar13 + 4;
              pfVar5[-2] = pfVar14[-2] * fVar21;
              pfVar5[-1] = *(float *)(lVar2 + lVar1 + 4) * fVar21;
              *pfVar5 = *pfVar14 * fVar21;
              lVar17 = lVar17 + 0x10;
              pfVar5[1] = pfVar14[1] * fVar21;
              uVar12 = local_78;
            } while (lVar20 != lVar13);
          }
          local_78 = uVar12;
          if (uVar12 != 0) {
            lVar17 = lVar13 * 4 + (ulong)uVar10 * 4;
            pfVar14 = (float *)((long)__s + (lVar13 * 4 - (ulong)uVar3));
            do {
              pfVar5 = (float *)(param_3 + lVar17);
              lVar17 = lVar17 + 4;
              *pfVar14 = *pfVar5 * fVar21;
              uVar12 = uVar12 - 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar12 != 0);
          }
          uVar12 = 0;
          if (uVar19 != 1) goto LAB_02f0115c;
          do {
            lVar13 = 0;
            fVar21 = 0.0;
            while( true ) {
              if ((param_2 & 1) != 0) {
                fVar21 = fVar21 + fVar22 * *(float *)((long)__s + (lVar13 * 4 - (ulong)uVar3)) *
                                           *(float *)(lVar8 + (ulong)((int)uVar12 +
                                                                     uVar4 * (int)lVar13) * 4);
              }
              if (ABS(*(float *)((long)__s + uVar12 * 4)) < ABS(fVar21)) {
                *(float *)((long)__s + uVar12 * 4) = fVar21;
              }
              uVar12 = uVar12 + 1;
              if (uVar4 <= uVar12) {
                uVar11 = uVar11 + 1;
                uVar10 = uVar10 + iVar18;
                if (uVar11 == uVar6) goto LAB_02f01010;
                goto LAB_02f0108c;
              }
              if (uVar19 == 1) break;
LAB_02f0115c:
              lVar13 = 0;
              fVar21 = 0.0;
              uVar16 = uVar12 & 0xffffffff;
              do {
                pfVar14 = (float *)((long)__s + (lVar13 * 4 - (ulong)uVar3));
                lVar17 = uVar16 * 4;
                lVar13 = lVar13 + 2;
                iVar15 = (int)uVar16;
                uVar16 = (ulong)(iVar15 + uVar4 * 2);
                fVar21 = fVar21 + fVar22 * *pfVar14 * *(float *)(lVar8 + lVar17) +
                         fVar22 * pfVar14[1] * *(float *)(lVar8 + (ulong)(uVar4 + iVar15) * 4);
              } while (uVar19 - (param_2 & 1) != lVar13);
            }
          } while( true );
        }
LAB_02f01010:
        FUN_02ef9678(local_84,__s,local_90 + lVar9 * 4);
        param_3 = param_3 + local_d0;
        local_80 = local_80 + 1;
      } while (local_80 != local_a8);
    }
  }
  return;
}


