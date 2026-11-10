/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0012ebd0; name: FUN_0012ebd0
 */


undefined8 FUN_0012ebd0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong *__src;
  size_t __n;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  ulong local_70 [2];
  
  pbVar12 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  __src = (ulong *)param_1[3];
  local_70[0] = 0;
  local_70[1] = 0;
  puVar4 = (ulong *)param_1[4];
  if (__src <= puVar4) {
    uVar15 = *(uint *)(param_1 + 5);
    uVar11 = *(uint *)((long)param_1 + 0x2c);
    __n = (long)puVar4 - (long)__src;
    if (pbVar12 == pbVar1) {
      puVar5 = (ulong *)0x0;
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar5 = (ulong *)0x0;
      piVar13 = (int *)param_1[2];
      do {
        if ((long)__n < 8) {
          if (lVar6 != 0) {
            return 0;
          }
          memcpy(local_70,__src,__n);
          memcpy((void *)((long)(local_70 + 2) - __n),__src,__n);
          lVar6 = 0x10 - __n;
          puVar4 = local_70 + 2;
          puVar5 = __src;
          __src = local_70;
        }
        uVar8 = puVar4[-1];
        bVar2 = *pbVar12;
        uVar10 = (*__src & 0xff00ff00ff00ff00) >> 8 | (*__src & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        if (bVar2 < 0xf0) {
          iVar9 = uVar15 + (bVar2 >> 4);
          uVar15 = -0x10 << (ulong)(uint)(bVar2 >> 4);
          uVar7 = iVar9 + 4;
          iVar9 = ((((uint)(uVar10 >> ((ulong)(0x3c - iVar9) & 0x3f)) & (uVar15 ^ 0xffffffff)) +
                   ~uVar15) * 0x10 + 0x10 | bVar2 & 0xf) - 0xf8;
        }
        else {
          uVar7 = bVar2 - 0xe0;
          if (0x1d < uVar7) {
            return 0;
          }
          uVar3 = -1 << (ulong)(uVar7 & 0x1f);
          uVar7 = uVar7 + uVar15;
          iVar9 = (0x7eff00 - uVar3) +
                  ((uint)(uVar10 >> ((ulong)-uVar7 & 0x3f)) & (uVar3 ^ 0xffffffff));
          if (0x3fffffff < iVar9) {
            return 0;
          }
        }
        piVar14 = piVar13 + 1;
        *piVar13 = -iVar9;
        if (pbVar12 + 1 == pbVar1) {
          pbVar12 = pbVar1;
        }
        else {
          bVar2 = pbVar12[1];
          if (bVar2 < 0xf0) {
            uVar15 = -0x10 << (ulong)(bVar2 >> 4);
            iVar9 = uVar11 + (bVar2 >> 4);
            uVar11 = iVar9 + 4;
            iVar9 = ((((uint)(uVar8 >> ((ulong)(0x3c - iVar9) & 0x3f)) & (uVar15 ^ 0xffffffff)) +
                     ~uVar15) * 0x10 + 0x10 | bVar2 & 0xf) - 0xf8;
          }
          else {
            uVar15 = bVar2 - 0xe0;
            if (0x1d < uVar15) {
              return 0;
            }
            uVar11 = uVar15 + uVar11;
            uVar15 = -1 << (ulong)(uVar15 & 0x1f);
            iVar9 = (0x7eff00 - uVar15) +
                    ((uint)(uVar8 >> ((ulong)-uVar11 & 0x3f)) & (uVar15 ^ 0xffffffff));
            if (0x3fffffff < iVar9) {
              return 0;
            }
          }
          piVar13[1] = -iVar9;
          piVar14 = piVar13 + 2;
          pbVar12 = pbVar12 + 2;
        }
        uVar15 = uVar7 & 7;
        __src = (ulong *)((long)__src + (ulong)(uVar7 >> 3));
        puVar4 = (ulong *)((long)puVar4 - (ulong)(uVar11 >> 3));
        uVar11 = uVar11 & 7;
        __n = (long)puVar4 - (long)__src;
        piVar13 = piVar14;
      } while (pbVar12 != pbVar1);
    }
    if (lVar6 <= (long)((-(ulong)(uVar15 != 0) - (ulong)(uVar11 != 0)) + __n)) {
      if (lVar6 == 0) {
        param_1[3] = (long)__src;
      }
      else {
        param_1[3] = (long)((long)puVar5 + ((long)__src - (long)local_70));
        puVar4 = (ulong *)((long)puVar5 +
                          (long)((long)puVar4 + ((0x10 - lVar6) - (long)(local_70 + 2))));
      }
      param_1[4] = (long)puVar4;
      *(uint *)(param_1 + 5) = uVar15;
      *(uint *)((long)param_1 + 0x2c) = uVar11;
      return 1;
    }
  }
  return 0;
}


