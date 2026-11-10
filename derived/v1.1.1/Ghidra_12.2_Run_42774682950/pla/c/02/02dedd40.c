/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dedd40; name: FUN_02dedd40
 */


/* WARNING: Removing unreachable block (ram,0x02dee03c) */

void FUN_02dedd40(int *param_1,uint param_2,long param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  ushort *__dest;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ushort *__src;
  ulong uVar12;
  ulong uVar13;
  ulong __n;
  uint *local_a0;
  long *plStack_98;
  uint local_8c;
  long local_88;
  ushort *local_80;
  ushort *puStack_78;
  uint local_70;
  undefined1 local_68;
  
  local_80 = (ushort *)0x0;
  uVar3 = param_1[0x1a];
  uVar12 = (ulong)uVar3;
  *param_1 = 0;
  uVar10 = (long)(int)((*(uint *)(*(long *)(param_1 + 10) + 4) & 0x7ffffffe) << 1) *
           (long)param_1[8] + 0xf;
  uVar13 = 0;
  local_a0 = param_5;
  plStack_98 = param_4;
  local_8c = param_2;
  local_88 = param_3;
  do {
    if (uVar12 < uVar13 + 2) {
LAB_02dedf94:
      param_1[1] = 0x2e;
      param_1[3] = (int)uVar13;
      lVar8 = **(long **)(param_1 + 0xc);
      if (lVar8 != 0) {
        lVar11 = 0;
        while( true ) {
          uVar1 = *(uint *)(*(long *)(param_1 + 10) + (long)param_1[0x13] * 4);
          uVar3 = uVar1 + 3;
          if (-1 < (int)uVar1) {
            uVar3 = uVar1;
          }
          memcpy(*(void **)(*(long *)(param_1 + 0xe) + lVar11 * 8),
                 (void *)(lVar8 + (long)((int)uVar3 >> 2) * 4),(ulong)(uVar3 & 0xfffffffc));
          if ((long)param_1[8] <= lVar11 + 1) break;
          lVar8 = *(long *)(*(long *)(param_1 + 0xc) + lVar11 * 8 + 8);
          lVar11 = lVar11 + 1;
        }
        *(undefined1 *)(param_1 + 0x16) = 1;
      }
      goto joined_r0x02dee064;
    }
    iVar9 = param_1[0x1b];
    if (local_80 != (ushort *)0x0) {
      (*DAT_0442d150)(5);
    }
    __src = (ushort *)(local_88 + uVar13) + 1;
    uVar5 = *(ushort *)(local_88 + uVar13);
    __n = (ulong)uVar5;
    if ((local_8c & 0xffff) < (uint)uVar5) {
LAB_02dee028:
      param_1[0] = 0;
      param_1[1] = 2;
      return;
    }
    if ((param_1[2] == 4) || (uVar2 = uVar13 + 2 + __n, uVar12 < uVar2)) {
      local_80 = (ushort *)0x0;
      goto LAB_02dedf94;
    }
    if (uVar12 < uVar2 + 8) {
      __dest = (ushort *)(*DAT_0442d138)(5,__n + 8);
      if (__dest == (ushort *)0x0) goto LAB_02dee028;
      memcpy(__dest,__src,__n);
      local_80 = __dest;
      puStack_78 = __dest;
    }
    else {
      local_80 = (ushort *)0x0;
      puStack_78 = __src;
    }
    local_70 = (uint)uVar5;
    uVar1 = (int)uVar13 + local_70 + 2;
    uVar13 = (ulong)uVar1;
    local_68 = (char)iVar9 != '\0' && uVar1 == uVar3;
    if ((bool)local_68) {
      param_1[2] = 4;
    }
    FUN_02dee470(param_1 + 4,&puStack_78,(long)&local_a0 - (uVar10 & 0xfffffffffffffff0),
                 uVar10 & 0xfffffff0);
    plVar7 = plStack_98;
    puVar6 = local_a0;
    iVar9 = param_1[0x11] - param_1[0x10];
  } while (iVar9 == 0);
  param_1[3] = uVar1;
  iVar4 = param_1[8];
  uVar3 = iVar9 * iVar4 * 4;
  if ((*plStack_98 == 0) || (*local_a0 < uVar3)) {
    if (*plStack_98 != 0) {
      (*DAT_0442d158)(5);
    }
    lVar8 = (*DAT_0442d140)(5,uVar3,0x10);
    *plVar7 = lVar8;
    if (lVar8 == 0) {
      param_1[1] = 2;
      param_1[0x19] = 0;
      goto joined_r0x02dee064;
    }
    *puVar6 = uVar3;
    iVar4 = param_1[8];
    uVar3 = param_1[0x18];
  }
  else {
    uVar3 = param_1[0x18];
  }
  if ((uVar3 >> 0xf & 1) == 0) {
    iVar4 = iVar4 + 1;
  }
  else {
    iVar4 = (uVar3 >> 0xd & 1) + (uVar3 >> 0xc & 1) + (uVar3 >> 0xe & 1);
  }
  FUN_02dee220(param_1 + 4,*plVar7,iVar9,iVar4);
  param_1[0x19] = iVar9;
  *param_1 = iVar9;
  if ((param_1[2] == 4) && (param_1[0x11] <= param_1[0x10])) {
    iVar9 = 0x11;
  }
  else {
    iVar9 = 0x2d;
  }
  param_1[1] = iVar9;
joined_r0x02dee064:
  if (local_80 != (ushort *)0x0) {
    (*DAT_0442d150)(5);
  }
  return;
}


