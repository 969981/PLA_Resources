/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc7c84; name: FUN_02fc7c84
 */


undefined8 FUN_02fc7c84(long *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  if (param_2 != 0) {
    uVar14 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    uVar15 = uVar7 & 0x7fffffff;
    uVar3 = uVar14;
    if ((int)uVar14 < 2) {
      uVar3 = 1;
    }
    uVar10 = uVar14 + param_2;
    uVar1 = uVar15;
    if ((int)uVar15 <= (int)uVar14) {
      uVar1 = uVar14;
    }
    if ((int)uVar1 <= (int)uVar10) {
      uVar14 = uVar10 | (int)uVar10 >> 0x10;
      uVar14 = uVar14 | (int)uVar14 >> 8;
      uVar14 = uVar14 | (int)uVar14 >> 4;
      uVar14 = uVar14 | (int)uVar14 >> 2;
      uVar14 = uVar14 | (int)uVar14 >> 1;
      uVar15 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar10) {
        local_58 = 0;
        local_68 = 0;
        puStack_60 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_68);
      }
      lVar9 = tpidr_el0;
      lVar8 = *(long *)(lVar9 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar8;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(long)(int)uVar15 * 0x30,0);
      pvVar2 = (void *)0x0;
      if (*param_1 != 0) {
        pvVar2 = (void *)(*param_1 + (long)param_1);
      }
      memcpy(pvVar6,pvVar2,(long)(int)param_1[1] * 0x30);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar14 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar14 <= (int)*(uint *)(param_1 + 1)) {
          uVar14 = *(uint *)(param_1 + 1);
        }
        lVar8 = 0;
        if (*param_1 != 0) {
          lVar8 = *param_1 + (long)param_1;
        }
        lVar11 = *(long *)(lVar9 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1,(ulong)uVar14 * 0x30);
          *(long *)(lVar9 + 0x38d490) = lVar11;
        }
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar14 * 0x30);
      }
      if (pvVar6 == (void *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)pvVar6 - (long)param_1;
      }
      uVar14 = *(uint *)(param_1 + 1);
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar15 | 0x80000000;
      uVar15 = uVar15 & 0x7fffffff;
      uVar7 = 1;
    }
    if ((int)uVar14 < (int)uVar15) {
      uVar10 = uVar15;
      if (uVar7 == 0) {
        uVar10 = uVar14 & 0x7fffffff;
        *(uint *)((long)param_1 + 0xc) = uVar14;
      }
      if ((int)uVar10 <= (int)uVar14) {
        uVar10 = uVar14;
      }
      if ((int)uVar10 < (int)uVar15) {
        uVar7 = uVar15 - 1 | (int)(uVar15 - 1) >> 0x10;
        uVar7 = uVar7 | (int)uVar7 >> 8;
        uVar7 = uVar7 | (int)uVar7 >> 4;
        uVar7 = uVar7 | (int)uVar7 >> 2;
        uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
        if ((int)uVar7 < (int)uVar15) {
          local_58 = 0;
          local_68 = 0;
          puStack_60 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_68);
        }
        lVar9 = tpidr_el0;
        lVar8 = *(long *)(lVar9 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(long)(int)uVar7 * 0x30,0);
        pvVar2 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar2 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar6,pvVar2,(long)(int)param_1[1] * 0x30);
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          uVar10 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar10 <= (int)*(uint *)(param_1 + 1)) {
            uVar10 = *(uint *)(param_1 + 1);
          }
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          lVar11 = *(long *)(lVar9 + 0x38d490);
          if (lVar11 == 0) {
            lVar11 = FUN_0333d16c(0,1);
            *(long *)(lVar9 + 0x38d490) = lVar11;
          }
          plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar10 * 0x30);
        }
        lVar9 = 0;
        if (pvVar6 != (void *)0x0) {
          lVar9 = (long)pvVar6 - (long)param_1;
        }
        *param_1 = lVar9;
        *(uint *)((long)param_1 + 0xc) = uVar7 | 0x80000000;
      }
      *(uint *)(param_1 + 1) = uVar15;
    }
    else {
      uVar15 = uVar14;
    }
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    FUN_032c4b00(lVar9 + (long)(int)uVar14 * 0x30,0,(uVar15 - uVar14) * 0x30);
    iVar4 = (int)param_1[1];
    if ((int)uVar3 < iVar4) {
      lVar9 = (long)iVar4 + -1;
      uVar12 = (ulong)uVar3;
      if ((long)uVar12 < lVar9) {
        iVar13 = uVar3 + 1;
      }
      else {
        iVar13 = (int)param_1[2];
      }
      *(int *)((long)param_1 + uVar12 * 0x30 + *param_1) = iVar13;
      while (uVar12 = uVar12 + 1, (long)uVar12 < (long)iVar4) {
        if ((long)uVar12 < lVar9) {
          iVar13 = (int)uVar12 + 1;
        }
        else {
          iVar13 = (int)param_1[2];
        }
        *(int *)((long)param_1 + uVar12 * 0x30 + *param_1) = iVar13;
      }
    }
    *(uint *)(param_1 + 2) = uVar3;
  }
  return 0;
}


