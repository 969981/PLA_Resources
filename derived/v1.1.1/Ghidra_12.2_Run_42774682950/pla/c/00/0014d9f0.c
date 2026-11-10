/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014d9f0; name: FUN_0014d9f0
 */


/* WARNING: Type propagation algorithm not settling */

uint * FUN_0014d9f0(uint *param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar4 = *(ulong *)(param_2 + 2);
  puVar6 = *(uint **)(param_1 + 6);
  uVar7 = uVar4 & 0xfffffffffffffff8;
  puVar1 = (uint *)((long)param_2 + uVar7);
  if (((uVar4 & 3) == 1 || param_2 < puVar6) || puVar1 <= param_2) goto LAB_0014de88;
  uVar9 = *(ulong *)(puVar1 + 2);
  if ((uVar9 & 1) == 0) goto LAB_0014de88;
  if ((uVar4 & 3) == 0) {
    if (param_3 < 0x100) {
      return (uint *)0x0;
    }
    if ((uVar7 < param_3 + 8) || ((ulong)(DAT_0438e1a0 * 2) < uVar7 - param_3)) {
      param_2 = (uint *)0x0;
    }
    return param_2;
  }
  uVar3 = uVar7 - param_3;
  if (param_3 <= uVar7) {
    if (uVar3 < 0x20) {
      return param_2;
    }
    *(ulong *)(param_2 + 2) = uVar4 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar3 | 3;
    *(ulong *)(puVar1 + 2) = *(ulong *)(puVar1 + 2) | 1;
    goto LAB_0014dac4;
  }
  if (*(uint **)(param_1 + 10) == puVar1) {
    uVar9 = (*(long *)(param_1 + 4) + uVar7) - param_3;
    if (*(long *)(param_1 + 4) + uVar7 < param_3 || uVar9 == 0) {
      return (uint *)0x0;
    }
    *(ulong *)(param_2 + 2) = uVar4 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar9 | 1;
    *(ulong *)(param_1 + 10) = (long)param_2 + param_3;
    *(ulong *)(param_1 + 4) = uVar9;
    return param_2;
  }
  if (*(uint **)(param_1 + 8) == puVar1) {
    uVar7 = *(long *)(param_1 + 2) + uVar7;
    uVar9 = uVar7 - param_3;
    if (uVar7 < param_3) {
      return (uint *)0x0;
    }
    if (uVar9 < 0x20) {
      *(ulong *)(param_2 + 2) = uVar4 & 1 | uVar7 | 2;
      uVar9 = 0;
      lVar5 = 0;
      *(ulong *)((long)param_2 + uVar7 + 8) = *(ulong *)((long)param_2 + uVar7 + 8) | 1;
    }
    else {
      lVar5 = (long)param_2 + param_3;
      puVar2 = (ulong *)((long)param_2 + uVar7);
      *(ulong *)(param_2 + 2) = uVar4 & 1 | param_3 | 2;
      *(ulong *)(lVar5 + 8) = uVar9 | 1;
      *puVar2 = uVar9;
      puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
    }
    *(ulong *)(param_1 + 2) = uVar9;
    *(long *)(param_1 + 8) = lVar5;
    return param_2;
  }
  if (((uint)uVar9 >> 1 & 1) != 0) {
    return (uint *)0x0;
  }
  uVar7 = (uVar9 & 0xfffffffffffffff8) + uVar7;
  uVar3 = uVar7 - param_3;
  if (uVar7 < param_3) {
    return (uint *)0x0;
  }
  if (uVar9 < 0x100) {
    puVar8 = *(uint **)(puVar1 + 6);
    if (((puVar8 == puVar1) || (puVar10 = *(uint **)(puVar1 + 4), puVar10 == puVar1)) ||
       ((uVar9 & 0xfffffffffffffff8) != (uVar9 & 0xfffffff8))) goto LAB_0014de88;
    if ((puVar10 != param_1 + (uVar9 >> 3 & 0x7fffffff) * 4 + 0x12) &&
       ((puVar10 < puVar6 || (*(uint **)(puVar10 + 6) != puVar1)))) goto LAB_0014de88;
    if (puVar8 == puVar10) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar9 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else {
      if ((puVar8 != param_1 + (uVar9 >> 3 & 0x7fffffff) * 4 + 0x12) &&
         ((puVar8 < puVar6 || (*(uint **)(puVar8 + 4) != puVar1)))) goto LAB_0014de88;
      *(uint **)(puVar10 + 6) = puVar8;
      *(uint **)(puVar8 + 4) = puVar10;
    }
  }
  else {
    puVar8 = *(uint **)(puVar1 + 6);
    uVar4 = *(ulong *)(puVar1 + 0xc);
    if (puVar8 == puVar1) {
      puVar12 = *(uint **)(puVar1 + 10);
      puVar10 = puVar1 + 10;
      if (puVar12 == (uint *)0x0) {
        puVar12 = *(uint **)(puVar1 + 8);
        puVar10 = puVar1 + 8;
        if (puVar12 == (uint *)0x0) {
          puVar8 = (uint *)0x0;
          goto joined_r0x0014dd50;
        }
      }
      do {
        do {
          puVar8 = puVar12;
          puVar11 = puVar10;
          puVar12 = *(uint **)(puVar8 + 10);
          puVar10 = puVar8 + 10;
        } while (puVar12 != (uint *)0x0);
        puVar12 = *(uint **)(puVar8 + 8);
        puVar10 = puVar8 + 8;
      } while (puVar12 != (uint *)0x0);
      if (puVar11 < puVar6) goto LAB_0014de88;
      puVar11[0] = 0;
      puVar11[1] = 0;
    }
    else {
      puVar10 = *(uint **)(puVar1 + 4);
      if (((puVar10 < puVar6) || (*(uint **)(puVar10 + 6) != puVar1)) ||
         (*(uint **)(puVar8 + 4) != puVar1)) goto LAB_0014de88;
      *(uint **)(puVar10 + 6) = puVar8;
      *(uint **)(puVar8 + 4) = puVar10;
    }
joined_r0x0014dd50:
    if (uVar4 != 0) {
      if (*(uint **)(param_1 + (ulong)puVar1[0xe] * 2 + 0x96) == puVar1) {
        *(uint **)(param_1 + (ulong)puVar1[0xe] * 2 + 0x96) = puVar8;
        if (puVar8 == (uint *)0x0) {
          param_1[1] = param_1[1] & (1 << (ulong)(puVar1[0xe] & 0x1f) ^ 0xffffffffU);
        }
        else {
LAB_0014dda0:
          if (puVar8 < *(uint **)(param_1 + 6)) {
LAB_0014de88:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(ulong *)(puVar8 + 0xc) = uVar4;
          uVar4 = *(ulong *)(puVar1 + 8);
          if (uVar4 != 0) {
            if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_0014de88;
            *(ulong *)(puVar8 + 8) = uVar4;
            *(uint **)(uVar4 + 0x30) = puVar8;
          }
          uVar4 = *(ulong *)(puVar1 + 10);
          if (uVar4 != 0) {
            if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_0014de88;
            *(ulong *)(puVar8 + 10) = uVar4;
            *(uint **)(uVar4 + 0x30) = puVar8;
          }
        }
      }
      else {
        if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_0014de88;
        lVar5 = 0x20;
        if (*(uint **)(uVar4 + 0x20) != puVar1) {
          lVar5 = 0x28;
        }
        *(uint **)(uVar4 + lVar5) = puVar8;
        if (puVar8 != (uint *)0x0) goto LAB_0014dda0;
      }
    }
  }
  if (uVar3 < 0x20) {
    *(ulong *)(param_2 + 2) = uVar7 | *(ulong *)(param_2 + 2) & 1 | 2;
    *(ulong *)((long)param_2 + uVar7 + 8) = *(ulong *)((long)param_2 + uVar7 + 8) | 1;
    return param_2;
  }
  *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2) & 1 | param_3 | 2;
  *(ulong *)((long)param_2 + param_3 + 8) = uVar3 | 3;
  *(ulong *)((long)param_2 + uVar7 + 8) = *(ulong *)((long)param_2 + uVar7 + 8) | 1;
LAB_0014dac4:
  FUN_0014f5d0(param_1,(long)param_2 + param_3,uVar3);
  return param_2;
}


