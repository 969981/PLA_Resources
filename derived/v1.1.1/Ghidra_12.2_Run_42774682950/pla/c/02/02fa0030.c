/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa0030; name: FUN_02fa0030
 */


/* WARNING: Removing unreachable block (ram,0x02fa0204) */

void FUN_02fa0030(undefined8 *param_1,long param_2)

{
  long *plVar1;
  void *__src;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  void *__dest;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar1 = param_1 + 4;
  *param_1 = &PTR_LAB_042b7ca0;
  param_1[1] = 0xffffffff;
  param_1[4] = param_2 - (long)plVar1;
  lVar7 = 0;
  if (param_2 - (long)plVar1 != 0) {
    lVar7 = param_2;
  }
  plVar12 = param_1 + 5;
  *plVar12 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_032d645c(lVar7);
  lVar7 = 0;
  if (param_1[4] != 0) {
    lVar7 = param_1[4] + (long)plVar1;
  }
  plVar5 = (long *)(lVar7 + 0x48);
  uVar13 = 0;
  do {
    uVar11 = uVar13;
    if (*(int *)(lVar7 + 0x50) <= (int)uVar11) {
      uVar13 = 0;
      goto LAB_02fa0128;
    }
    uVar13 = uVar11 + 1;
  } while ((*(byte *)((long)plVar5 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0);
  uVar13 = 0;
  if (uVar11 + 1 != 0) {
    do {
      if (uVar13 <= (uVar11 & 0xffff)) {
        uVar13 = uVar11 & 0xffff;
      }
      uVar4 = uVar11 + 1;
      do {
        uVar11 = uVar4;
        if (*(int *)(lVar7 + 0x50) <= (int)uVar11) goto LAB_02fa0128;
        uVar4 = uVar11 + 1;
      } while ((*(byte *)((long)plVar5 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0
              );
    } while (uVar11 + 1 != 0);
  }
LAB_02fa0128:
  iVar6 = uVar13 + 1;
  FUN_02fa1fe0(param_1 + 7,0,iVar6,1);
  uVar11 = *(uint *)(param_1 + 6);
  uVar4 = iVar6 - uVar11;
  if (uVar4 != 0) {
    uVar2 = *(uint *)((long)param_1 + 0x34);
    if (uVar2 == 0) {
      *(uint *)((long)param_1 + 0x34) = uVar11;
      uVar2 = uVar11;
    }
    if ((int)uVar13 < (int)uVar11) {
      *(int *)(param_1 + 6) = iVar6;
    }
    else {
      uVar3 = uVar2 & 0x7fffffff;
      if ((int)(uVar2 & 0x7fffffff) <= (int)uVar11) {
        uVar3 = uVar11;
      }
      if ((int)uVar13 < (int)uVar3) {
        lVar7 = *plVar12;
      }
      else {
        uVar3 = uVar13 | (int)uVar13 >> 8;
        uVar3 = uVar3 | (int)uVar3 >> 4;
        uVar3 = uVar3 | (int)uVar3 >> 2;
        uVar3 = uVar3 | (int)uVar3 >> 1;
        uVar2 = uVar3 + 1;
        if (uVar3 < uVar13) {
          local_68 = 0;
          local_78 = 0;
          puStack_70 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_78);
        }
        lVar7 = tpidr_el0;
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar2 << 3,0);
        __src = (void *)0x0;
        if (param_1[5] != 0) {
          __src = (void *)(param_1[5] + (long)plVar12);
        }
        memcpy(__dest,__src,(long)*(int *)(param_1 + 6) << 3);
        if ((int)*(uint *)((long)param_1 + 0x34) < 0) {
          uVar13 = *(uint *)((long)param_1 + 0x34) & 0x7fffffff;
          if ((int)uVar13 <= (int)*(uint *)(param_1 + 6)) {
            uVar13 = *(uint *)(param_1 + 6);
          }
          lVar8 = 0;
          if (param_1[5] != 0) {
            lVar8 = param_1[5] + (long)plVar12;
          }
          lVar10 = *(long *)(lVar7 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar10;
          }
          plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar13 << 3);
        }
        lVar7 = 0;
        if (__dest != (void *)0x0) {
          lVar7 = (long)__dest - (long)plVar12;
        }
        *(uint *)((long)param_1 + 0x34) = uVar2 | 0x80000000;
        param_1[5] = lVar7;
      }
      *(int *)(param_1 + 6) = iVar6;
      if (0 < (int)uVar4) {
        memset((void *)((long)plVar12 + (long)(int)uVar11 * 8 + lVar7),0,(ulong)uVar4 << 3);
      }
    }
  }
  lVar8 = *plVar1;
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + (long)plVar1;
  }
  iVar6 = *(int *)(lVar7 + 0x50);
  plVar5 = (long *)(lVar7 + 0x48);
  uVar13 = 0;
  do {
    uVar11 = uVar13;
    if (iVar6 <= (int)uVar11) {
      return;
    }
    uVar13 = uVar11 + 1;
  } while ((*(byte *)((long)plVar5 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0);
  if (uVar11 + 1 != 0) {
    while( true ) {
      lVar10 = 0;
      if (lVar8 != 0) {
        lVar10 = lVar8 + (long)plVar1;
      }
      plVar9 = (long *)(lVar10 + 0x48 +
                       (ulong)(uVar11 & 0xffff) * 0x40 + *(long *)(lVar10 + 0x48) + 0x30);
      lVar10 = *plVar9;
      lVar8 = 0;
      if (lVar10 != 0) {
        lVar8 = lVar10 + (long)plVar9;
      }
      if (*(char *)(lVar8 + 0x19) == '\x03') {
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar8 + 0x18) * 0x200 + 200))(&local_78);
        *(undefined8 *)((long)plVar12 + (ulong)(uVar11 & 0xffff) * 8 + *plVar12) = local_78;
        local_78 = 0;
        iVar6 = *(int *)(lVar7 + 0x50);
      }
      uVar13 = uVar11 + 1;
      do {
        uVar11 = uVar13;
        if (iVar6 <= (int)uVar11) {
          return;
        }
        uVar13 = uVar11 + 1;
      } while ((*(byte *)((long)plVar5 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar5 + 0x1e) & 1) != 0
              );
      if (uVar11 + 1 == 0) break;
      lVar8 = *plVar1;
    }
  }
  return;
}


