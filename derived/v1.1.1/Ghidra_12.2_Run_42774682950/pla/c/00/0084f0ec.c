/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f0ec; name: FUN_0084f0ec
 */


long * FUN_0084f0ec(long *param_1,ulong param_2,uint param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  ulong uVar15;
  long lVar16;
  char local_a0 [16];
  char acStack_90 [8];
  char acStack_88 [104];
  
  uVar9 = param_3 & 0xffff;
  if ((param_3 & 0xffff) == 0) {
    sprintf(local_a0,"%08x",(ulong)param_4[3]);
    sprintf(local_a0 + 8,"%08x",(ulong)param_4[2]);
    sprintf(acStack_90,"%08x",(ulong)param_4[1]);
    uVar9 = sprintf(acStack_88,"%08x",(ulong)*param_4);
    return (long *)(ulong)uVar9;
  }
  if (uVar9 == 0xffff) {
    uVar3 = *(ushort *)(param_1 + 6);
    uVar13 = *(ushort *)((long)param_1 + 0x32);
  }
  else {
    uVar3 = *(ushort *)(param_1 + 6);
    if ((int)(uVar9 - uVar3) < 0) {
      *(undefined1 *)(param_1 + 0x97) = 1;
      return param_1;
    }
    uVar13 = *(ushort *)((long)param_1 + 0x32);
    if ((int)(uint)uVar13 < (int)(uVar9 - uVar3)) {
      local_a0[8] = '\0';
      local_a0[9] = '\0';
      local_a0[10] = '\0';
      local_a0[0xb] = '\0';
      local_a0[0] = '\0';
      local_a0[1] = '\0';
      local_a0[2] = '\0';
      local_a0[3] = ' ';
      local_a0[4] = '\0';
      local_a0[5] = '\0';
      local_a0[6] = '\0';
      local_a0[7] = '\0';
      plVar11 = (long *)(**(code **)(*param_1 + 0x30))(param_1,local_a0);
      return plVar11;
    }
  }
  if (uVar13 != 0) {
    uVar4 = *(ushort *)(param_1 + 5);
    uVar7 = 1 << (ulong)((uint)param_2 & 0x1f);
    lVar16 = param_1[4];
    uVar14 = 0;
    uVar15 = param_2 >> 5 & 7;
    uVar5 = uVar3;
    do {
      uVar10 = *(int *)((long)param_1 + 0x2c) + (uint)uVar14;
      uVar2 = 0;
      if (uVar4 <= uVar10) {
        uVar2 = (uint)uVar4;
      }
      uVar12 = (ulong)(uVar10 - uVar2);
      uVar6 = *(ushort *)(lVar16 + uVar12 * 0x5d0 + 0x24);
      if (((uint)uVar6 < (uint)uVar5) || (0x7f < (int)((uint)uVar6 - (uint)uVar3))) break;
      if ((*(char *)(lVar16 + uVar12 * 0x5d0 + 0x28) == '\0') ||
         ((*(uint *)(lVar16 + uVar12 * 0x5d0 + uVar15 * 4 + 0x2c) & uVar7) != 0)) {
        uVar10 = (uint)uVar6;
        if (uVar10 < (param_3 & 0xffff)) {
LAB_0084f1f4:
          lVar1 = lVar16 + uVar12 * 0x5d0 + uVar15 * 4;
          *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) & ~uVar7;
        }
        else if (((param_3 & 0xffff) < uVar10) && (uVar10 = uVar10 + ~uVar9, (int)uVar10 < 0x80)) {
          uVar2 = uVar10 + 0x1f;
          if (-1 < (int)uVar10) {
            uVar2 = uVar10;
          }
          if ((param_4[(int)uVar2 >> 5] & 1 << (ulong)(uVar10 & 0x1f)) != 0) goto LAB_0084f1f4;
        }
      }
      bVar8 = uVar14 < uVar13;
      uVar13 = *(ushort *)((long)param_1 + 0x32);
      if (bVar8) {
        uVar14 = uVar14 + 1;
      }
      uVar5 = uVar6;
    } while (uVar14 < uVar13);
  }
  plVar11 = (long *)FUN_0084bae0(param_1);
  if (((ulong)plVar11 & 1) == 0) {
    plVar11 = (long *)FUN_0084b940(param_1);
    return plVar11;
  }
  return plVar11;
}


