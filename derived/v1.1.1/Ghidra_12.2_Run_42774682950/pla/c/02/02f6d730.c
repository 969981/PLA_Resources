/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6d730; name: FUN_02f6d730
 */


void FUN_02f6d730(long *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  void *__dest;
  void *__src;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = uVar4 << 1;
  if (uVar4 == 0) {
    uVar11 = 1;
  }
  uVar3 = uVar4 + param_2;
  if ((int)(uVar4 + param_2) <= (int)uVar11) {
    uVar3 = uVar11;
  }
  if (uVar4 != uVar3) {
    uVar11 = *(uint *)((long)param_1 + 0xc);
    if (uVar11 == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar4;
      uVar11 = uVar4;
    }
    if ((int)uVar4 < (int)uVar3) {
      uVar2 = uVar11 & 0x7fffffff;
      if ((int)(uVar11 & 0x7fffffff) <= (int)uVar4) {
        uVar2 = uVar4;
      }
      if ((int)uVar2 < (int)uVar3) {
        uVar11 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
        uVar11 = uVar11 | (int)uVar11 >> 8;
        uVar11 = uVar11 | (int)uVar11 >> 4;
        uVar11 = uVar11 | (int)uVar11 >> 2;
        uVar11 = (uVar11 | (int)uVar11 >> 1) + 1;
        if ((int)uVar11 < (int)uVar3) {
          local_48 = 0;
          local_58 = 0;
          puStack_50 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_58);
        }
        lVar5 = tpidr_el0;
        lVar9 = *(long *)(lVar5 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar9;
        }
        plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        __dest = (void *)(**(code **)(*plVar8 + 0x10))
                                   (plVar8,-(ulong)(uVar11 >> 0x1f) & 0xffffffc000000000 |
                                           (ulong)uVar11 << 6,0);
        if (*param_1 == 0) {
          __src = (void *)0x0;
        }
        else {
          __src = (void *)(*param_1 + (long)param_1);
        }
        memcpy(__dest,__src,(long)(int)param_1[1] << 6);
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
            uVar2 = *(uint *)(param_1 + 1);
          }
          if (*param_1 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *param_1 + (long)param_1;
          }
          lVar10 = *(long *)(lVar5 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar10;
          }
          plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,(ulong)uVar2 << 6);
        }
        lVar5 = 0;
        if (__dest != (void *)0x0) {
          lVar5 = (long)__dest - (long)param_1;
        }
        *param_1 = lVar5;
        *(uint *)((long)param_1 + 0xc) = uVar11 | 0x80000000;
      }
    }
    *(uint *)(param_1 + 1) = uVar3;
  }
  uVar7 = DAT_03aae468;
  uVar6 = DAT_03aae460;
  if ((int)uVar4 < (int)uVar3) {
    uVar13 = NEON_fmov(0x3f800000,4);
    uVar11 = uVar4;
    do {
      puVar1 = (undefined8 *)((long)param_1 + (ulong)(uVar11 & 0xffff) * 0x40 + *param_1);
      if ((int)uVar11 < (int)(uVar3 - 1)) {
        iVar12 = uVar11 + 1;
      }
      else {
        iVar12 = (int)param_1[2];
      }
      uVar11 = uVar11 + 1;
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[4] = uVar13;
      *(undefined4 *)(puVar1 + 5) = 0x3f800000;
      *(int *)((long)puVar1 + 0x2c) = iVar12;
      puVar1[2] = 0;
      puVar1[3] = 0x1ffff00000000;
      puVar1[6] = 0;
      puVar1[7] = 0;
    } while ((int)uVar11 < (int)uVar3);
  }
  *(uint *)(param_1 + 2) = uVar4;
  return;
}


