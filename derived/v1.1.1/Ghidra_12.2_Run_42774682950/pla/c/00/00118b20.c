/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00118b20; name: FUN_00118b20
 */


bool FUN_00118b20(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t __n;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  undefined8 *__src_00;
  undefined8 *puVar19;
  uint *puVar20;
  byte *pbVar22;
  byte *pbVar21;
  undefined8 *local_220;
  undefined8 local_150 [25];
  undefined8 uStack_84;
  int aiStack_7c [7];
  
  if ((long)param_4 - (long)param_3 < 0x10) {
    return false;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x50);
  lVar8 = *(long *)(param_1 + 0x58);
  puVar20 = *(uint **)(param_1 + 0x20);
  pbVar21 = *(byte **)(param_1 + 0x30);
  lVar16 = *(long *)(param_1 + 0x38);
  puVar2 = puVar20 + *(long *)(param_1 + 0x28);
  __src = *(undefined8 **)(param_1 + 0x40);
  __n = *(size_t *)(param_1 + 0x48);
  aiStack_7c[1] = -8;
  aiStack_7c[2] = 0xfffffff8;
  aiStack_7c[3] = 0xfffffff8;
  if (0x14f < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -0x2a;
  }
  puVar2[0] = 3;
  puVar2[1] = 3;
  puVar2[2] = 3;
  puVar2[3] = 3;
  puVar2[4] = 3;
  puVar2[5] = 3;
  puVar2[6] = 3;
  puVar2[7] = 3;
  pbVar3 = pbVar21 + lVar16;
  puVar2[8] = 3;
  puVar2[9] = 3;
  puVar2[10] = 3;
  puVar2[0xb] = 3;
  puVar2[0xc] = 3;
  puVar2[0xd] = 3;
  puVar2[0xe] = 3;
  puVar2[0xf] = 3;
  local_220 = (undefined8 *)((long)__src + __n);
  if (199 < (long)__n) {
    __n = 200;
  }
  __src_00 = (undefined8 *)((long)local_220 - __n);
  memcpy((void *)((long)local_150 - __n),__src_00,__n);
  local_150[0x17] = 0;
  local_150[0x18] = 0;
  local_150[0x15] = 0;
  local_150[0x16] = 0;
  local_150[0] = 0;
  local_150[0x13] = 0;
  local_150[0x14] = 0;
  local_150[0x11] = 0;
  local_150[0x12] = 0;
  local_150[0xf] = 0;
  local_150[0x10] = 0;
  local_150[0xd] = 0;
  local_150[0xe] = 0;
  local_150[0xb] = 0;
  local_150[0xc] = 0;
  local_150[9] = 0;
  local_150[10] = 0;
  local_150[7] = 0;
  local_150[8] = 0;
  local_150[5] = 0;
  local_150[6] = 0;
  local_150[3] = 0;
  local_150[4] = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  puVar11 = puVar5;
  do {
    if ((pbVar3 <= pbVar21) || (param_3 <= param_2)) {
      while( true ) {
        if (pbVar3 <= pbVar21) {
          if (lVar6 != lVar6 + lVar8 * 4) {
            return false;
          }
          if (puVar20 != puVar2) {
            return false;
          }
          if (puVar11 != puVar5 + lVar7) {
            return false;
          }
          if (param_2 < param_4) {
            if ((long)local_220 - (long)__src != (long)param_4 - (long)param_2) {
              return false;
            }
            memcpy(param_2,__src,(long)param_4 - (long)param_2);
            param_2 = param_4;
          }
          return param_2 == param_4;
        }
        if (__src_00 <= __src) {
          if (local_220 <= __src && (long)__src - (long)local_220 != 0) {
            return false;
          }
          __src = (undefined8 *)((long)local_150 + ((long)__src - (long)local_220));
          __src_00 = local_150;
          local_220 = local_150;
        }
        bVar9 = *pbVar21;
        aiStack_7c[4] = *puVar11;
        uVar13 = (ulong)*puVar20;
        puVar4 = puVar20 + 1;
        if (((ulong)bVar9 & 3) != 3) {
          uVar13 = (ulong)bVar9 & 3;
          puVar4 = puVar20;
        }
        if ((long)param_4 + (-0x10 - (long)param_2) < (long)uVar13) break;
        *param_2 = *__src;
        if (((8 < uVar13) && (param_2[1] = __src[1], 0x10 < uVar13)) &&
           (param_2[2] = __src[2], 0x18 < uVar13)) {
          if (((long)__src_00 - (long)__src <= (long)uVar13) &&
             ((long)local_220 - (long)__src < (long)uVar13)) {
            return false;
          }
          lVar16 = 0x1f - uVar13;
          lVar14 = uVar13 - 0x18;
          if (lVar16 < 0) {
            lVar16 = -1;
          }
          uVar15 = lVar14 + lVar16;
          uVar1 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
          param_2 = param_2 + 3;
          __src = __src + 3;
          if ((uVar1 & 7) != 0) {
            lVar16 = -((ulong)uVar1 & 7);
            puVar18 = __src;
            puVar19 = param_2;
            do {
              __src = puVar18 + 1;
              lVar14 = lVar14 + -8;
              lVar16 = lVar16 + 1;
              param_2 = puVar19 + 1;
              *puVar19 = *puVar18;
              puVar18 = __src;
              puVar19 = param_2;
            } while (lVar16 != 0);
          }
          if (0x37 < uVar15) {
            do {
              *param_2 = *__src;
              param_2[1] = __src[1];
              param_2[2] = __src[2];
              param_2[3] = __src[3];
              param_2[4] = __src[4];
              param_2[5] = __src[5];
              param_2[6] = __src[6];
              puVar18 = __src + 7;
              lVar14 = lVar14 + -0x40;
              __src = __src + 8;
              param_2[7] = *puVar18;
              param_2 = param_2 + 8;
            } while (0 < lVar14);
          }
          uVar13 = (uVar13 - 0x20) - (uVar15 & 0xfffffffffffffff8);
        }
        puVar18 = (undefined8 *)((long)param_2 + uVar13);
        __src = (undefined8 *)((long)__src + uVar13);
        uVar13 = (ulong)(bVar9 >> 6);
        uVar17 = *(undefined8 *)((long)&uStack_84 + uVar13 * 4);
        iVar10 = aiStack_7c[uVar13 + 1];
        uVar15 = (ulong)iVar10;
        aiStack_7c[uVar13 + 1] = aiStack_7c[uVar13];
        *(undefined8 *)(aiStack_7c + (uVar13 - 1)) = uVar17;
        aiStack_7c[1] = iVar10;
        if (uVar15 < (ulong)(param_5 - (long)puVar18)) {
          return false;
        }
        uVar13 = (ulong)(bVar9 >> 2) & 0xf;
        puVar19 = (undefined8 *)((long)puVar18 + uVar15);
        if (uVar13 == 0xf) {
          puVar20 = puVar4 + 1;
          if ((long)param_4 + (-8 - (long)puVar18) < (long)(ulong)(*puVar4 + 0xe)) {
            return false;
          }
          param_2 = (undefined8 *)((long)puVar18 + (ulong)(*puVar4 + 0xe));
          *puVar18 = *puVar19;
          puVar18[1] = puVar19[1];
          puVar18[2] = puVar19[2];
          for (puVar18 = puVar18 + 3; puVar18 < param_2; puVar18 = puVar18 + 1) {
            *puVar18 = *(undefined8 *)((long)puVar18 + uVar15);
          }
        }
        else {
          param_2 = (undefined8 *)((long)puVar18 + uVar13 + 2);
          *puVar18 = *puVar19;
          puVar18[1] = puVar19[1];
          puVar20 = puVar4;
        }
        puVar11 = (uint *)((long)puVar11 + ((ulong)((bVar9 >> 6) + 1) & 4));
        if (puVar2 < puVar11) {
          return false;
        }
        pbVar21 = pbVar21 + 1;
        if (puVar2 < puVar20) {
          return false;
        }
      }
      return false;
    }
    if (__src_00 <= __src) {
      if (local_220 <= __src && (long)__src - (long)local_220 != 0) {
        return false;
      }
      __src = (undefined8 *)((long)local_150 + ((long)__src - (long)local_220));
      __src_00 = local_150;
      local_220 = local_150;
    }
    pbVar12 = pbVar3;
    if (7 < (long)pbVar3 - (long)pbVar21) {
      pbVar12 = pbVar21 + 8;
    }
    pbVar22 = pbVar21;
    if (pbVar21 < pbVar12) {
      do {
        pbVar21 = pbVar22 + 1;
        bVar9 = *pbVar22;
        aiStack_7c[4] = *puVar11;
        puVar4 = puVar20 + 1;
        uVar13 = (ulong)*puVar20;
        if (((ulong)bVar9 & 3) != 3) {
          puVar4 = puVar20;
          uVar13 = (ulong)bVar9 & 3;
        }
        *param_2 = *__src;
        if (((8 < uVar13) && (param_2[1] = __src[1], 0x10 < uVar13)) &&
           (param_2[2] = __src[2], 0x18 < uVar13)) {
          if (((long)__src_00 - (long)__src <= (long)uVar13) &&
             (pbVar12 = pbVar21, (long)local_220 - (long)__src < (long)uVar13)) {
            return false;
          }
          if (((long)param_3 - (long)param_2 < (long)uVar13) &&
             (pbVar12 = pbVar21, (long)param_4 + (-0x10 - (long)param_2) < (long)uVar13)) {
            return false;
          }
          lVar16 = 0x1f - uVar13;
          lVar14 = uVar13 - 0x18;
          if (lVar16 < 0) {
            lVar16 = -1;
          }
          uVar15 = lVar14 + lVar16;
          uVar1 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
          param_2 = param_2 + 3;
          __src = __src + 3;
          if ((uVar1 & 7) != 0) {
            lVar16 = -((ulong)uVar1 & 7);
            puVar18 = __src;
            puVar19 = param_2;
            do {
              __src = puVar18 + 1;
              lVar14 = lVar14 + -8;
              lVar16 = lVar16 + 1;
              param_2 = puVar19 + 1;
              *puVar19 = *puVar18;
              puVar18 = __src;
              puVar19 = param_2;
            } while (lVar16 != 0);
          }
          if (0x37 < uVar15) {
            do {
              *param_2 = *__src;
              param_2[1] = __src[1];
              param_2[2] = __src[2];
              param_2[3] = __src[3];
              param_2[4] = __src[4];
              param_2[5] = __src[5];
              param_2[6] = __src[6];
              puVar18 = __src + 7;
              lVar14 = lVar14 + -0x40;
              __src = __src + 8;
              param_2[7] = *puVar18;
              param_2 = param_2 + 8;
            } while (0 < lVar14);
          }
          uVar13 = (uVar13 - 0x20) - (uVar15 & 0xfffffffffffffff8);
        }
        uVar15 = (ulong)(bVar9 >> 6);
        uVar17 = *(undefined8 *)((long)&uStack_84 + uVar15 * 4);
        puVar18 = (undefined8 *)((long)param_2 + uVar13);
        __src = (undefined8 *)((long)__src + uVar13);
        iVar10 = aiStack_7c[uVar15 + 1];
        uVar13 = (ulong)iVar10;
        aiStack_7c[uVar15 + 1] = aiStack_7c[uVar15];
        *(undefined8 *)(aiStack_7c + (uVar15 - 1)) = uVar17;
        aiStack_7c[1] = iVar10;
        if (uVar13 < (ulong)(param_5 - (long)puVar18)) {
          return false;
        }
        uVar15 = (ulong)(bVar9 >> 2) & 0xf;
        puVar11 = (uint *)((long)puVar11 + ((ulong)((bVar9 >> 6) + 1) & 4));
        puVar19 = (undefined8 *)((long)puVar18 + uVar13);
        if (uVar15 == 0xf) {
          puVar20 = puVar4 + 1;
          if ((long)param_4 + (-8 - (long)puVar18) < (long)(ulong)(*puVar4 + 0xe)) {
            return false;
          }
          param_2 = (undefined8 *)((long)puVar18 + (ulong)(*puVar4 + 0xe));
          *puVar18 = *puVar19;
          puVar18[1] = puVar19[1];
          puVar18[2] = puVar19[2];
          for (puVar18 = puVar18 + 3; puVar18 < param_2; puVar18 = puVar18 + 1) {
            *puVar18 = *(undefined8 *)((long)puVar18 + uVar13);
          }
          if (param_3 <= param_2) break;
        }
        else {
          *puVar18 = *puVar19;
          param_2 = (undefined8 *)((long)puVar18 + uVar15 + 2);
          puVar18[1] = puVar19[1];
          puVar20 = puVar4;
        }
        pbVar22 = pbVar21;
      } while (pbVar21 < pbVar12);
    }
    if (puVar2 < puVar20) {
      return false;
    }
    if (puVar2 < puVar11) {
      return false;
    }
  } while( true );
}


