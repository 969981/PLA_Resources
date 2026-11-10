/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed9ad0; name: FUN_02ed9ad0
 */


undefined4 FUN_02ed9ad0(long param_1,undefined4 *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *__dest;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *__src;
  uint uVar12;
  void *pvVar13;
  float fVar14;
  long local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  long *local_48;
  
  uVar12 = *(ushort *)(param_1 + 0xaa) & 0x3ff;
  lVar7 = param_1 + 0x30;
  if (((*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) ||
      ((*(ushort *)(param_1 + 0xaa) & 0x3ff) == 0)) ||
     (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) == 0)) {
    plVar9 = *(long **)(param_1 + 0x78);
  }
  else {
    local_80 = *(long *)(param_2 + 2);
    local_68 = 0xff;
    local_60 = 0xff;
    local_70 = 0;
    local_78 = 0;
    fVar14 = 0.0;
    local_58 = 0;
    uVar12 = *(uint *)(DAT_0440a160 + 0x20);
    if (uVar12 != 0) {
      uVar3 = (int)lVar7 + 0x10;
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = uVar3 / uVar12;
      }
      for (plVar9 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar3 - uVar4 * uVar12) * 8)
          ; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
        if ((*plVar9 == lVar7) && ((int)plVar9[1] == 0x10)) {
          if (*(int *)((long)plVar9 + 0x4c) == 3) {
            fVar14 = (float)FUN_02eb1180(DAT_0440a160,plVar9,&local_80);
          }
          else {
            fVar14 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    uVar12 = (uint)fVar14;
    plVar9 = *(long **)(param_1 + 0x78);
  }
  if (plVar9 == (long *)0x0) {
    return 1;
  }
  lVar6 = *(long *)(param_2 + 2);
  plVar8 = (long *)*plVar9;
  uVar3 = *(uint *)(plVar9 + 1);
  if ((uVar3 == 0) || (*plVar8 == lVar6)) {
    plVar9 = plVar8;
  }
  else {
    lVar10 = (ulong)uVar3 * 0x10;
    plVar11 = plVar8;
    do {
      lVar10 = lVar10 + -0x10;
      if (lVar10 == 0) {
        local_48 = (long *)0x0;
        goto LAB_02ed9b8c;
      }
      plVar9 = plVar11 + 2;
      plVar1 = plVar11 + 2;
      plVar11 = plVar9;
    } while (*plVar1 != lVar6);
  }
  plVar11 = plVar9 + 1;
  local_48 = (long *)0x0;
  if ((plVar9 == plVar8 + (ulong)uVar3 * 2) || (local_48 = plVar11, (param_3 & 1) == 0)) {
    if (plVar9 == plVar8 + (ulong)uVar3 * 2) {
LAB_02ed9b8c:
      uVar12 = *(ushort *)(param_1 + 0xaa) & 0x3ff;
      if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) &&
          ((*(ushort *)(param_1 + 0xaa) & 0x3ff) != 0)) &&
         (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
        local_68 = 0xff;
        local_60 = 0xff;
        local_70 = 0;
        fVar14 = 0.0;
        local_78 = 0;
        local_58 = 0;
        uVar12 = *(uint *)(DAT_0440a160 + 0x20);
        local_80 = lVar6;
        if (uVar12 != 0) {
          uVar3 = (int)lVar7 + 0x10;
          uVar4 = 0;
          if (uVar12 != 0) {
            uVar4 = uVar3 / uVar12;
          }
          for (plVar9 = *(long **)(*(long *)(DAT_0440a160 + 0x18) +
                                  (ulong)(uVar3 - uVar4 * uVar12) * 8); plVar9 != (long *)0x0;
              plVar9 = (long *)plVar9[2]) {
            if ((*plVar9 == lVar7) && ((int)plVar9[1] == 0x10)) {
              if (*(int *)((long)plVar9 + 0x4c) == 3) {
                fVar14 = (float)FUN_02eb1180(DAT_0440a160,plVar9,&local_80);
              }
              else {
                fVar14 = (float)FUN_02eb1334();
              }
              break;
            }
          }
        }
        uVar12 = (uint)fVar14;
        lVar6 = *(long *)(param_2 + 2);
      }
      uVar5 = FUN_02ed9ebc(param_1,lVar6,&local_48,uVar12);
      plVar11 = local_48;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    lVar7 = *plVar11;
    if (lVar7 == 0) {
      return 1;
    }
    uVar12 = (uint)*(ushort *)(lVar7 + 0x58);
    if (*(char *)((long)param_2 + 0x1d) != '\0') {
      if (uVar12 == 0) {
        return 1;
      }
      if ((int)uVar12 <=
          (int)(((uint)*(ushort *)(lVar7 + 0x70) - (uint)*(ushort *)(lVar7 + 0x72)) -
               (uint)*(ushort *)((long)param_2 + 0x1a))) {
        local_80 = 0;
        uVar5 = FUN_02f105dc(*param_2,lVar7 + 0x48,uVar12,lVar6,*(uint *)(param_1 + 0xaa) >> 10 & 1,
                             *(uint *)(param_1 + 0xaa) >> 0xb & 1,&local_80,1);
        *(short *)((long)param_2 + 0x1a) = *(short *)((long)param_2 + 0x1a) + 1;
        goto joined_r0x02ed9d6c;
      }
    }
    uVar5 = 1;
  }
joined_r0x02ed9d6c:
  if (plVar11 == (long *)0x0) {
    return uVar5;
  }
  if (uVar12 == 0) {
    return uVar5;
  }
  pvVar13 = *(void **)(param_2 + 4);
  if (pvVar13 == (void *)0x0) {
    return uVar5;
  }
  uVar3 = *(uint *)((long)pvVar13 + 0x10);
  uVar12 = *(uint *)((long)pvVar13 + 0x14);
  lVar7 = 0;
  if (*plVar11 != 0) {
    lVar7 = *plVar11 + 0x48;
  }
  if (uVar3 < uVar12) goto LAB_02ed9c70;
  iVar2 = uVar12 + (uVar12 >> 1);
  __src = *(void **)((long)pvVar13 + 8);
  if (uVar12 == 0) {
    iVar2 = 1;
  }
  uVar12 = iVar2 + uVar12;
  if (uVar12 < 2) {
    __dest = pvVar13;
    if (__src == (void *)0x0) goto LAB_02ed9c64;
LAB_02ed9c58:
    if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ed9c64;
    memcpy(__dest,__src,((ulong)uVar3 & 0x1fffffff) << 3);
    if (pvVar13 != __src) {
      (*DAT_0442d158)(0,__src);
    }
  }
  else {
    __dest = (void *)(*DAT_0442d140)(0,(ulong)uVar12 << 3,4);
    if (__src != (void *)0x0) goto LAB_02ed9c58;
LAB_02ed9c64:
    if (__dest == (void *)0x0) {
      return uVar5;
    }
  }
  *(void **)((long)pvVar13 + 8) = __dest;
  *(uint *)((long)pvVar13 + 0x14) = uVar12;
LAB_02ed9c70:
  if (uVar3 < uVar12) {
    plVar9 = (long *)(*(long *)((long)pvVar13 + 8) + (ulong)*(uint *)((long)pvVar13 + 0x10) * 8);
    *(uint *)((long)pvVar13 + 0x10) = *(uint *)((long)pvVar13 + 0x10) + 1;
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar7;
    }
  }
  return uVar5;
}


