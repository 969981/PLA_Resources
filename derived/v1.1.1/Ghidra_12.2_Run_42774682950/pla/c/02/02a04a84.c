/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a04a84; name: FUN_02a04a84
 */


uint FUN_02a04a84(long param_1,long param_2,uint *param_3,ulong param_4,long param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  byte local_760 [4];
  undefined4 local_75c;
  ulong local_758;
  undefined8 local_750;
  undefined7 uStack_748;
  undefined1 local_741;
  undefined6 uStack_740;
  undefined1 uStack_73a;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  uint local_80;
  int local_78;
  undefined1 auStack_60 [16];
  
  if ((((*(byte *)(param_2 + 0x98) & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) != 0)) &&
     (uVar6 = FUN_02951f34(param_2), (uVar6 & 1) != 0)) {
    uStack_740 = 0;
    local_750 = 0;
    uStack_748 = 0;
    local_741 = 0;
    local_718 = 0;
    uStack_730 = 0;
    local_728 = 0;
    uStack_720 = 0;
    local_760[0] = *(byte *)(param_2 + 0x7d);
    local_75c = 2;
    local_758 = (ulong)local_760[0];
    uStack_73a = 1;
    local_738 = 0;
    FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_60,local_760);
  }
  if (((*(ulong *)(param_2 + 0x98) & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) != 0)) {
    uVar5 = 2;
    uVar6 = FUN_0297fdf4(*(undefined8 *)(param_1 + 0x38),param_2,*param_3,2);
    if ((uVar6 & 1) == 0) goto LAB_02a050d8;
    if ((*(ulong *)(param_2 + 0x98) & 7) == 0) goto LAB_02a04ad4;
LAB_02a04c90:
    bVar8 = 0;
  }
  else {
    if ((*(ulong *)(param_2 + 0x98) & 7) != 0) goto LAB_02a04c90;
LAB_02a04ad4:
    if (((*(byte *)(param_2 + 0xa0) & 7) != 0) || ((*(byte *)(param_2 + 0xa8) & 7) == 0))
    goto LAB_02a04c90;
    uVar5 = *param_3;
    uVar6 = FUN_029808dc(*(undefined8 *)(param_1 + 0x38),param_2,(ulong)uVar5);
    lVar9 = DAT_043ecde0;
    if ((uVar6 & 1) != 0) {
LAB_02a04c0c:
      uVar6 = *(ulong *)(DAT_043ecde0 + 8);
      uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar14 = uVar6 ^ uVar13;
        iVar10 = (int)uVar13;
        uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar5 = (int)uVar6 + iVar10 & 0x7f;
        uVar6 = uVar14 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar14 << 0x10;
      } while (99 < uVar5);
      *(ulong *)(DAT_043ecde0 + 8) = uVar6;
      *(ulong *)(lVar9 + 0x10) = uVar13;
      if (uVar5 < 0x14) {
        uStack_740 = 0;
        local_750 = 0;
        uStack_748 = 0;
        local_741 = 0;
        local_718 = 0;
        uStack_730 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_760[0] = *(byte *)(param_2 + 0x7d);
        local_75c = 3;
        local_758 = (ulong)local_760[0];
        uStack_73a = 1;
        local_738 = 0;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_60,local_760);
      }
      goto LAB_02a04c90;
    }
    lVar11 = (&DAT_0428af30)[(ulong)uVar5 * 6];
    if (lVar11 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar11 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (ulong)uVar5 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x5f) ||
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2f], uVar6 == 0)) ||
       (*(char *)((long)piVar1 + uVar6) == '\0')) goto LAB_02a04c0c;
    bVar8 = 1;
  }
  uVar6 = *(ulong *)(param_2 + 0x98);
  if (((uVar6 & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) == 0)) {
    if ((bool)((*(byte *)(param_2 + 0xa8) & 7) != 0 & (bVar8 ^ 1))) {
      uVar5 = 5;
      goto LAB_02a050d8;
    }
    if ((((*(byte *)(param_2 + 0xa8) & 7) == 0) && ((*(byte *)(param_2 + 0xb0) & 7) == 0)) &&
       (((*(byte *)(param_2 + 0xb8) & 7) == 0 && ((*(byte *)(param_2 + 0xc0) & 7) != 0)))) {
      lVar9 = (&DAT_0428af30)[(ulong)*param_3 * 6];
      if (lVar9 == 0) {
        plVar15 = &DAT_0428af30;
      }
      else {
        plVar15 = &DAT_0428af30;
        if (*(char *)(lVar9 + 0x1e1) != '\0') {
          plVar15 = &DAT_0428af30 + (ulong)*param_3 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
      if (((0x86 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
          (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x43], uVar13 != 0)) &&
         (*(char *)((long)piVar1 + uVar13) != '\0')) {
        uStack_740 = 0;
        local_750 = 0;
        uStack_748 = 0;
        local_741 = 0;
        local_718 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_760[0] = *(byte *)(param_2 + 0x7d);
        local_75c = 6;
        uStack_73a = 1;
        local_758 = (ulong)local_760[0];
        local_738 = 0x10203fa01000000;
        uStack_730 = CONCAT44(*param_3,(uint)local_760[0]);
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_60,local_760);
        uVar6 = *(ulong *)(param_2 + 0x98);
      }
    }
  }
  if (((((uVar6 & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) == 0)) &&
      (((*(byte *)(param_2 + 0xa8) & 7) == 0 &&
       (((*(byte *)(param_2 + 0xb0) & 7) == 0 && ((*(byte *)(param_2 + 0xb8) & 7) == 0)))))) &&
     (((*(byte *)(param_2 + 0xc0) & 7) == 0 && ((*(byte *)(param_2 + 200) & 7) != 0)))) {
    lVar9 = (&DAT_0428af30)[(ulong)*param_3 * 6];
    if (lVar9 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar9 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (ulong)*param_3 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0x88 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x44], uVar6 != 0)) &&
       (*(char *)((long)piVar1 + uVar6) != '\0')) {
      uStack_740 = 0;
      local_750 = 0;
      uStack_748 = 0;
      local_741 = 0;
      local_718 = 0;
      local_728 = 0;
      uStack_720 = 0;
      local_760[0] = *(byte *)(param_2 + 0x7d);
      local_75c = 7;
      uStack_73a = 1;
      local_758 = (ulong)local_760[0];
      local_738 = 0x10203ff01000000;
      uStack_730 = CONCAT44(*param_3,(uint)local_760[0]);
      FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_60,local_760);
    }
  }
  if (**(uint **)(*(long *)(param_1 + 8) + 0x58) < 2) {
    bVar8 = *(byte *)(param_2 + 0x7d);
    if (bVar8 < 6) {
      cVar3 = '\0';
    }
    else if (bVar8 < 0xc) {
      cVar3 = '\x02';
    }
    else if (bVar8 < 0x12) {
      cVar3 = '\x01';
    }
    else if (bVar8 < 0x18) {
      cVar3 = '\x03';
    }
    else {
      cVar3 = (bVar8 < 0x1e) << 2;
    }
    if (cVar3 == *(char *)(*(long *)(param_1 + 8) + 0x130)) {
      if ((*(byte *)(param_2 + 0x88) >> 2 & 1) == 0) {
        uVar5 = FUN_029506a8(param_2,0xf);
      }
      else {
        uVar5 = FUN_02c73dc8(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x98));
      }
      bVar8 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x1034);
      if (((uint)bVar8 < (uVar5 & 0xffff)) &&
         (uVar4 = FUN_02954744(DAT_043ecde0,(uVar5 & 0xffff) + (uint)bVar8 + 1), bVar8 <= uVar4)) {
        uVar5 = 0x17;
        goto LAB_02a050d8;
      }
    }
  }
  if ((((param_4 & 1) == 0) && ((*(byte *)(param_5 + 4) >> 3 & 1) == 0)) &&
     (uVar5 = param_3[1], uVar5 != 0)) {
    if (*(uint *)(param_2 + 0x300) == uVar5) {
      uVar5 = 0;
    }
    else if (*(uint *)(param_2 + 0x31c) == uVar5) {
      uVar5 = 1;
    }
    else if (*(uint *)(param_2 + 0x338) == uVar5) {
      uVar5 = 2;
    }
    else {
      if (*(uint *)(param_2 + 0x354) != uVar5) goto LAB_02a04f5c;
      uVar5 = 3;
    }
    if ((*(byte *)(param_2 + 0x368) <= uVar5) ||
       (*(char *)(param_2 + (ulong)uVar5 * 0x1c + 0x304) == '\0')) {
      uVar5 = 1;
      goto LAB_02a050d8;
    }
  }
LAB_02a04f5c:
  plVar15 = &DAT_0428af30 + (ulong)*param_3 * 6;
  lVar9 = *plVar15;
  if (lVar9 == 0) {
    plVar12 = &DAT_0428af30;
  }
  else {
    plVar12 = &DAT_0428af30;
    if (*(char *)(lVar9 + 0x1e1) != '\0') {
      plVar12 = plVar15;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
      (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar6 == 0)) ||
     (*(char *)((long)piVar1 + uVar6) == '\0')) {
    uVar5 = 0x25;
    goto LAB_02a050d8;
  }
  if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x106c) != '\0') {
    plVar12 = &DAT_0428af30;
    if ((lVar9 != 0) && (plVar12 = &DAT_0428af30, *(char *)(lVar9 + 0x1e1) != '\0')) {
      plVar12 = plVar15;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
    if (((0x66 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x33], uVar6 != 0)) &&
       (*(char *)((long)piVar1 + uVar6) != '\0')) {
      uVar5 = 0x1b;
      goto LAB_02a050d8;
    }
  }
  uVar5 = FUN_0298023c(*(undefined8 *)(param_1 + 0x38),param_2,(ulong)*param_3,0x20,param_3,0);
  if ((uVar5 & 0xff) != 0) goto LAB_02a050d8;
  if (((*(byte *)(param_2 + 900) >> 6 & 1) != 0) && (*param_3 == 0x108)) {
    uVar5 = 8;
    goto LAB_02a050d8;
  }
  if ((*(byte *)(param_2 + 900) >> 4 & 1) != 0) {
    uVar5 = 7;
    goto LAB_02a050d8;
  }
  uVar6 = *(ulong *)(param_2 + 0x108);
  if (((uVar6 & 7) != 0) && (uVar5 = *param_3, uVar5 != 0xa5)) {
    switch((uint)uVar6 & 7) {
    case 1:
    case 2:
    case 3:
      uVar7 = (uint)(uVar6 >> 0xe);
      break;
    case 4:
      uVar7 = (uint)(uVar6 >> 0x14);
      break;
    default:
      if (uVar5 != 0) goto LAB_02a051d0;
      goto LAB_02a050c8;
    }
    if (uVar5 == (uVar7 & 0xffff)) {
LAB_02a050c8:
      uVar5 = 10;
      goto LAB_02a050d8;
    }
  }
LAB_02a051d0:
  if ((*(byte *)(param_2 + 0x118) & 7) != 0) {
    lVar9 = (&DAT_0428af30)[(ulong)*param_3 * 6];
    if (lVar9 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar9 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (ulong)*param_3 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0x62 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x31], uVar6 != 0)) &&
       (*(char *)((long)piVar1 + uVar6) != '\0')) {
      uVar5 = 0xe;
      goto LAB_02a050d8;
    }
  }
  if ((*(byte *)(param_2 + 0x160) & 7) != 0) {
    lVar9 = (&DAT_0428af30)[(ulong)*param_3 * 6];
    if (lVar9 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar9 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (ulong)*param_3 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0x5a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2d], uVar6 != 0)) &&
       (*(char *)((long)piVar1 + uVar6) != '\0')) {
      uVar5 = 0x22;
      goto LAB_02a050d8;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  uVar5 = *param_3;
  if (*(int *)(lVar9 + 0x1b0) != 0) {
    lVar11 = (&DAT_0428af30)[(ulong)uVar5 * 6];
    if (lVar11 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar11 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (ulong)uVar5 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if (((0x5c < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2e], uVar6 != 0)) &&
       (*(char *)((long)piVar1 + uVar6) != '\0')) {
      uVar5 = 0x15;
      goto LAB_02a050d8;
    }
  }
  if (uVar5 == 0xa5) {
LAB_02a05314:
    if ((*(ulong *)(param_2 + 0xd0) & 7) != 0) {
      uVar7 = (uint)*(ulong *)(param_2 + 0xd0);
      uVar5 = uVar7 & 7;
      if (((uVar5 == 4) || (uVar5 == 2)) &&
         ((uVar5 = uVar7 >> 8 & 0x3f, uVar5 != 0 &&
          (bVar8 = *(char *)(param_2 + 0x240) + 1, *(byte *)(param_2 + 0x240) = bVar8,
          uVar5 <= bVar8)))) {
        uStack_740 = 0;
        local_750 = 0;
        uStack_748 = 0;
        local_741 = 0;
        local_718 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_760[0] = *(byte *)(param_2 + 0x7d);
        local_75c = 8;
        uStack_73a = 1;
        local_758 = (ulong)local_760[0];
        local_738 = 0x82007601000000;
        uStack_730 = (ulong)local_760[0];
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_60,local_760);
      }
      else {
        FUN_02a3b590(*(undefined8 *)(param_1 + 0x20),param_2);
        lVar9 = DAT_043ecde0;
        uVar6 = *(ulong *)(DAT_043ecde0 + 8);
        uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
        do {
          uVar14 = uVar6 ^ uVar13;
          iVar10 = (int)uVar13;
          uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
          uVar5 = (int)uVar6 + iVar10 & 0x7f;
          uVar6 = uVar14 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar14 << 0x10;
        } while (99 < uVar5);
        *(ulong *)(DAT_043ecde0 + 8) = uVar6;
        *(ulong *)(lVar9 + 0x10) = uVar13;
        if (uVar5 < 0x21) {
          uVar5 = 6;
          goto LAB_02a050d8;
        }
      }
    }
    uVar6 = *(ulong *)(param_2 + 0x98);
    if ((uVar6 & 7) != 0) {
      plVar15 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = (int)*plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_009463f0(local_760,plVar15 + 0xc);
      FUN_00945e04(local_760);
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 10;
        do {
          iVar10 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      lVar9 = DAT_043ecde0;
      uVar6 = *(ulong *)(DAT_043ecde0 + 8);
      uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar14 = uVar6 ^ uVar13;
        iVar10 = (int)uVar13;
        uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar5 = (int)uVar6 + iVar10 & 0x7f;
        uVar6 = uVar14 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar14 << 0x10;
      } while (99 < uVar5);
      *(ulong *)(DAT_043ecde0 + 8) = uVar6;
      *(ulong *)(lVar9 + 0x10) = uVar13;
      if (uVar5 < local_80) {
        uVar5 = 3;
        goto LAB_02a050d8;
      }
      uVar6 = *(ulong *)(param_2 + 0x98);
    }
    if ((((((uVar6 & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) == 0)) &&
         ((*(byte *)(param_2 + 0xa8) & 7) == 0)) &&
        (((*(byte *)(param_2 + 0xb0) & 7) == 0 && ((*(byte *)(param_2 + 0xb8) & 7) == 0)))) &&
       ((*(byte *)(param_2 + 0xc0) & 7) != 0)) {
      plVar15 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = (int)*plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_009463f0(local_760,plVar15 + 0xc);
      FUN_00945e04(local_760);
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 10;
        do {
          iVar10 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      cVar3 = FUN_0296eaa8(*(undefined8 *)(param_1 + 0x38));
      lVar9 = DAT_043ecde0;
      uVar6 = *(ulong *)(DAT_043ecde0 + 8);
      uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar14 = uVar6 ^ uVar13;
        iVar10 = (int)uVar13;
        uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar5 = (int)uVar6 + iVar10 & 0x7f;
        uVar6 = uVar14 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar14 << 0x10;
      } while (99 < uVar5);
      *(ulong *)(DAT_043ecde0 + 8) = uVar6;
      *(ulong *)(lVar9 + 0x10) = uVar13;
      if (uVar5 < (uint)(local_78 << (cVar3 == '\r'))) {
        uVar5 = 4;
        goto LAB_02a050d8;
      }
    }
    if ((*(byte *)(param_2 + 0xd8) & 7) == 0) {
      uVar5 = 0;
    }
    else {
      FUN_02a3b684(*(undefined8 *)(param_1 + 0x20),param_2);
      lVar9 = DAT_043ecde0;
      uVar6 = *(ulong *)(DAT_043ecde0 + 8);
      uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar14 = uVar6 ^ uVar13;
        iVar10 = (int)uVar13;
        uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar7 = (int)uVar6 + iVar10 & 0x7f;
        uVar6 = uVar14 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar14 << 0x10;
      } while (99 < uVar7);
      *(ulong *)(DAT_043ecde0 + 8) = uVar6;
      *(ulong *)(lVar9 + 0x10) = uVar13;
      uVar5 = 0;
      if (uVar7 < 0x32) {
        uVar5 = 9;
      }
    }
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x158);
    if ((uVar6 & 7) == 0) {
LAB_02a053f4:
      if (((*(byte *)(param_2 + 0x170) & 7) == 0) || (*(uint *)(param_2 + 0x378) == uVar5)) {
        if ((*(int *)(lVar9 + 0x1bc) == 0) &&
           (((*(byte *)(param_2 + 0x138) & 7) == 0 &&
            (uVar6 = *(ulong *)(param_2 + 0x180), (uVar6 & 7) != 0)))) {
          switch((uint)uVar6 & 7) {
          case 1:
          case 2:
          case 3:
            uVar7 = (uint)(uVar6 >> 0xe);
            break;
          case 4:
            uVar7 = (uint)(uVar6 >> 0x14);
            break;
          default:
            if (uVar5 != 0) goto LAB_02a056a0;
            goto LAB_02a05420;
          }
          if (uVar5 != (uVar7 & 0xffff)) goto LAB_02a056a0;
        }
LAB_02a05420:
        if ((*(byte *)(param_2 + 0xf8) & 7) != 0) {
          lVar11 = (&DAT_0428af30)[(ulong)uVar5 * 6];
          if (lVar11 == 0) {
            plVar15 = &DAT_0428af30;
          }
          else {
            plVar15 = &DAT_0428af30;
            if (*(char *)(lVar11 + 0x1e1) != '\0') {
              plVar15 = &DAT_0428af30 + (ulong)uVar5 * 6;
            }
          }
          piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250)
                          );
          if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
              (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar6 == 0)) ||
             (*(char *)((long)piVar1 + uVar6) == '\0')) {
            uVar5 = 0xb;
            goto LAB_02a050d8;
          }
        }
        if ((*(int *)(lVar9 + 0x1b4) != 0) &&
           (uVar6 = FUN_02941608(lVar9,*(undefined8 *)(param_1 + 8),
                                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 8),param_2),
           (uVar6 & 1) != 0)) {
          uVar5 = 0xd;
          goto LAB_02a050d8;
        }
        goto LAB_02a05314;
      }
    }
    else {
      lVar11 = (uVar6 & 7) - 1;
      if ((uint)lVar11 < 4) {
        uVar7 = (uint)(uVar6 >> (*(ulong *)(&DAT_03888260 + lVar11 * 8) & 0x3f));
        if ((uVar7 & 0xffff) == 0xa5) goto LAB_02a053f4;
      }
      else {
        uVar7 = 0;
      }
      if (uVar5 == (uVar7 & 0xffff)) goto LAB_02a053f4;
    }
LAB_02a056a0:
    uVar5 = 0x12;
  }
LAB_02a050d8:
  return uVar5;
}


