/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0012ee80; name: FUN_0012ee80
 */


undefined8 FUN_0012ee80(long *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *__src;
  size_t __n;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  ulong local_70 [2];
  
  pbVar12 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  __src = (ulong *)param_1[3];
  local_70[0] = 0;
  local_70[1] = 0;
  puVar6 = (ulong *)param_1[4];
  if (__src <= puVar6) {
    uVar11 = *(uint *)(param_1 + 5);
    uVar10 = *(uint *)((long)param_1 + 0x2c);
    __n = (long)puVar6 - (long)__src;
    if (pbVar12 == pbVar2) {
      puVar7 = (ulong *)0x0;
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar7 = (ulong *)0x0;
      piVar13 = (int *)param_1[2];
      do {
        if ((long)__n < 8) {
          if (lVar8 != 0) {
            return 0;
          }
          memcpy(local_70,__src,__n);
          memcpy((void *)((long)(local_70 + 2) - __n),__src,__n);
          lVar8 = 0x10 - __n;
          puVar6 = local_70 + 2;
          puVar7 = __src;
          __src = local_70;
        }
        uVar9 = puVar6[-1];
        bVar3 = *pbVar12;
        if (0xd7 < bVar3) {
          return 0;
        }
        uVar4 = (uint)(bVar3 >> 3);
        uVar1 = uVar4 + uVar11;
        uVar5 = (*__src & 0xff00ff00ff00ff00) >> 8 | (*__src & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        piVar14 = piVar13 + 1;
        *piVar13 = 8 - ((uint)((uVar5 >> 0x20 | uVar5 << 0x20) >> ((ulong)-uVar1 & 0x3f)) &
                        (-1 << (ulong)uVar4 ^ 0xffffffffU) | (bVar3 & 7 | 8) << (ulong)uVar4);
        if (pbVar12 + 1 == pbVar2) {
          pbVar12 = pbVar2;
        }
        else {
          bVar3 = pbVar12[1];
          if (0xd7 < bVar3) {
            return 0;
          }
          uVar11 = (uint)(bVar3 >> 3);
          uVar10 = uVar11 + uVar10;
          piVar13[1] = 8 - ((uint)(uVar9 >> ((ulong)-uVar10 & 0x3f)) &
                            (-1 << (ulong)uVar11 ^ 0xffffffffU) | (bVar3 & 7 | 8) << (ulong)uVar11);
          piVar14 = piVar13 + 2;
          pbVar12 = pbVar12 + 2;
        }
        uVar11 = uVar1 & 7;
        __src = (ulong *)((long)__src + (ulong)(uVar1 >> 3));
        puVar6 = (ulong *)((long)puVar6 - (ulong)(uVar10 >> 3));
        uVar10 = uVar10 & 7;
        __n = (long)puVar6 - (long)__src;
        piVar13 = piVar14;
      } while (pbVar12 != pbVar2);
    }
    if (lVar8 <= (long)((-(ulong)(uVar11 != 0) - (ulong)(uVar10 != 0)) + __n)) {
      if (lVar8 == 0) {
        param_1[3] = (long)__src;
      }
      else {
        param_1[3] = (long)((long)puVar7 + ((long)__src - (long)local_70));
        puVar6 = (ulong *)((long)puVar7 +
                          (long)((long)puVar6 + ((0x10 - lVar8) - (long)(local_70 + 2))));
      }
      param_1[4] = (long)puVar6;
      *(uint *)(param_1 + 5) = uVar11;
      *(uint *)((long)param_1 + 0x2c) = uVar10;
      return 1;
    }
  }
  return 0;
}


