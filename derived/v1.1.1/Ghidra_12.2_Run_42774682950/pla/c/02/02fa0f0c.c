/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa0f0c; name: FUN_02fa0f0c
 */


/* WARNING: Removing unreachable block (ram,0x02fa11ec) */

void FUN_02fa0f0c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  *(undefined1 *)(param_1 + 3) = 1;
  plVar1 = param_1 + 4;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_042b7de0;
  param_1[4] = param_2 - (long)plVar1;
  lVar10 = 0;
  if (param_2 - (long)plVar1 != 0) {
    lVar10 = param_2;
  }
  plVar15 = param_1 + 5;
  *plVar15 = 0;
  plVar5 = param_1 + 7;
  *plVar5 = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_032d645c(lVar10);
  lVar10 = 0;
  if (param_1[4] != 0) {
    lVar10 = param_1[4] + (long)plVar1;
  }
  iVar9 = *(int *)(lVar10 + 0xd0) + 0x1f;
  uVar7 = *(uint *)(param_1 + 8);
  iVar2 = *(int *)(lVar10 + 0xd0) + 0x3e;
  if (-1 < iVar9) {
    iVar2 = iVar9;
  }
  uVar14 = iVar2 >> 5;
  if (uVar14 == uVar7) goto LAB_02fa0fac;
  if (*(uint *)((long)param_1 + 0x44) == 0) {
    *(uint *)((long)param_1 + 0x44) = uVar7;
    uVar16 = uVar14 - uVar7;
    uVar8 = uVar7;
    if (uVar16 == 0 || (int)uVar14 < (int)uVar7) goto LAB_02fa1274;
  }
  else {
    uVar16 = uVar14 - uVar7;
    uVar8 = *(uint *)((long)param_1 + 0x44);
    if (uVar16 == 0 || (int)uVar14 < (int)uVar7) {
LAB_02fa1274:
      *(uint *)(param_1 + 8) = uVar14;
      goto LAB_02fa0fac;
    }
  }
  uVar4 = uVar8 & 0x7fffffff;
  if ((int)(uVar8 & 0x7fffffff) <= (int)uVar7) {
    uVar4 = uVar7;
  }
  if ((int)uVar4 < (int)uVar14) {
    uVar8 = uVar14 - 1 | (int)(uVar14 - 1) >> 0x10;
    uVar8 = uVar8 | (int)uVar8 >> 8;
    uVar8 = uVar8 | (int)uVar8 >> 4;
    uVar8 = uVar8 | (int)uVar8 >> 2;
    uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
    if ((int)uVar8 < (int)uVar14) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar10 = tpidr_el0;
    lVar11 = *(long *)(lVar10 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar11;
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar6 = (void *)(**(code **)(*plVar12 + 0x10))
                               (plVar12,-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar8 << 2,0);
    pvVar3 = (void *)0x0;
    if (param_1[7] != 0) {
      pvVar3 = (void *)(param_1[7] + (long)plVar5);
    }
    memcpy(pvVar6,pvVar3,(long)*(int *)(param_1 + 8) << 2);
    if ((int)*(uint *)((long)param_1 + 0x44) < 0) {
      uVar4 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
      if ((int)uVar4 <= (int)*(uint *)(param_1 + 8)) {
        uVar4 = *(uint *)(param_1 + 8);
      }
      lVar11 = 0;
      if (param_1[7] != 0) {
        lVar11 = param_1[7] + (long)plVar5;
      }
      lVar13 = *(long *)(lVar10 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar13;
      }
      plVar12 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar11,(ulong)uVar4 << 2);
    }
    lVar10 = 0;
    if (pvVar6 != (void *)0x0) {
      lVar10 = (long)pvVar6 - (long)plVar5;
    }
    *(uint *)((long)param_1 + 0x44) = uVar8 | 0x80000000;
    param_1[7] = lVar10;
  }
  else {
    lVar10 = *plVar5;
  }
  *(uint *)(param_1 + 8) = uVar14;
  if (0 < (int)uVar16) {
    memset((void *)((long)plVar5 + (long)(int)uVar7 * 4 + lVar10),0xff,(ulong)uVar16 << 2);
  }
LAB_02fa0fac:
  lVar10 = 0;
  if (*plVar1 != 0) {
    lVar10 = *plVar1 + (long)plVar1;
  }
  plVar5 = (long *)(lVar10 + 0x48);
  uVar7 = 0;
  do {
    uVar14 = uVar7;
    if (*(int *)(lVar10 + 0x50) <= (int)uVar14) {
      uVar7 = 0;
      goto LAB_02fa1124;
    }
    uVar7 = uVar14 + 1;
  } while ((*(byte *)((long)plVar5 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0);
  uVar7 = 0;
  if (uVar14 + 1 != 0) {
    do {
      if (uVar7 <= (uVar14 & 0xffff)) {
        uVar7 = uVar14 & 0xffff;
      }
      uVar16 = uVar14 + 1;
      do {
        uVar14 = uVar16;
        if (*(int *)(lVar10 + 0x50) <= (int)uVar14) goto LAB_02fa1124;
        uVar16 = uVar14 + 1;
      } while ((*(byte *)((long)plVar5 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0
              );
    } while (uVar14 + 1 != 0);
  }
LAB_02fa1124:
  uVar14 = *(uint *)(param_1 + 6);
  iVar9 = uVar7 + 1;
  uVar16 = iVar9 - uVar14;
  if (uVar16 != 0) {
    uVar8 = *(uint *)((long)param_1 + 0x34);
    if (uVar8 == 0) {
      *(uint *)((long)param_1 + 0x34) = uVar14;
      uVar8 = uVar14;
    }
    if ((int)uVar7 < (int)uVar14) {
      *(int *)(param_1 + 6) = iVar9;
    }
    else {
      uVar4 = uVar8 & 0x7fffffff;
      if ((int)(uVar8 & 0x7fffffff) <= (int)uVar14) {
        uVar4 = uVar14;
      }
      if ((int)uVar7 < (int)uVar4) {
        lVar10 = *plVar15;
      }
      else {
        uVar4 = uVar7 | (int)uVar7 >> 8;
        uVar4 = uVar4 | (int)uVar4 >> 4;
        uVar4 = uVar4 | (int)uVar4 >> 2;
        uVar4 = uVar4 | (int)uVar4 >> 1;
        uVar8 = uVar4 + 1;
        if (uVar4 < uVar7) {
          local_68 = 0;
          local_78 = 0;
          puStack_70 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_78);
        }
        lVar10 = tpidr_el0;
        lVar11 = *(long *)(lVar10 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar11;
        }
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar8 << 3,0);
        pvVar3 = (void *)0x0;
        if (param_1[5] != 0) {
          pvVar3 = (void *)(param_1[5] + (long)plVar15);
        }
        memcpy(pvVar6,pvVar3,(long)*(int *)(param_1 + 6) << 3);
        if ((int)*(uint *)((long)param_1 + 0x34) < 0) {
          uVar7 = *(uint *)((long)param_1 + 0x34) & 0x7fffffff;
          if ((int)uVar7 <= (int)*(uint *)(param_1 + 6)) {
            uVar7 = *(uint *)(param_1 + 6);
          }
          lVar11 = 0;
          if (param_1[5] != 0) {
            lVar11 = param_1[5] + (long)plVar15;
          }
          lVar13 = *(long *)(lVar10 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar10 + 0x38d490) = lVar13;
          }
          plVar5 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,(ulong)uVar7 << 3);
        }
        lVar10 = 0;
        if (pvVar6 != (void *)0x0) {
          lVar10 = (long)pvVar6 - (long)plVar15;
        }
        *(uint *)((long)param_1 + 0x34) = uVar8 | 0x80000000;
        param_1[5] = lVar10;
      }
      *(int *)(param_1 + 6) = iVar9;
      if (0 < (int)uVar16) {
        memset((void *)((long)plVar15 + (long)(int)uVar14 * 8 + lVar10),0,(ulong)uVar16 << 3);
      }
    }
  }
  lVar11 = *plVar1;
  lVar10 = 0;
  if (lVar11 != 0) {
    lVar10 = lVar11 + (long)plVar1;
  }
  iVar9 = *(int *)(lVar10 + 0x50);
  plVar5 = (long *)(lVar10 + 0x48);
  uVar7 = 0;
  do {
    uVar14 = uVar7;
    if (iVar9 <= (int)uVar14) {
      return;
    }
    uVar7 = uVar14 + 1;
  } while ((*(byte *)((long)plVar5 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0);
  if (uVar14 + 1 != 0) {
    while( true ) {
      lVar13 = 0;
      if (lVar11 != 0) {
        lVar13 = lVar11 + (long)plVar1;
      }
      plVar12 = (long *)(lVar13 + 0x48 +
                        (ulong)(uVar14 & 0xffff) * 0x40 + *(long *)(lVar13 + 0x48) + 0x30);
      lVar13 = *plVar12;
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar13 + (long)plVar12;
      }
      if (*(char *)(lVar11 + 0x19) == '\x03') {
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 200))(&local_78);
        *(undefined8 *)((long)plVar15 + (ulong)(uVar14 & 0xffff) * 8 + *plVar15) = local_78;
        local_78 = 0;
        iVar9 = *(int *)(lVar10 + 0x50);
      }
      uVar7 = uVar14 + 1;
      do {
        uVar14 = uVar7;
        if (iVar9 <= (int)uVar14) {
          return;
        }
        uVar7 = uVar14 + 1;
      } while ((*(byte *)((long)plVar5 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0
              );
      if (uVar14 + 1 == 0) break;
      lVar11 = *plVar1;
    }
  }
  return;
}


