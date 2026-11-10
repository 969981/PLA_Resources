/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9c618; name: FUN_02f9c618
 */


void FUN_02f9c618(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    uVar14 = uVar8 & 0x7fffffff;
    uVar2 = uVar3;
    if ((int)uVar3 < 2) {
      uVar2 = 1;
    }
    uVar11 = uVar3 + param_2;
    uVar1 = uVar14;
    if ((int)uVar14 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    if ((int)uVar1 <= (int)uVar11) {
      uVar14 = uVar11 | (int)uVar11 >> 0x10;
      uVar14 = uVar14 | (int)uVar14 >> 8;
      uVar14 = uVar14 | (int)uVar14 >> 4;
      uVar14 = uVar14 | (int)uVar14 >> 2;
      uVar14 = uVar14 | (int)uVar14 >> 1;
      uVar8 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar11) {
        local_58 = 0;
        local_68 = 0;
        puStack_60 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_68);
      }
      lVar13 = tpidr_el0;
      lVar9 = *(long *)(lVar13 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar9;
      }
      plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 |
                                         (ulong)uVar8 << 5,0);
      pvVar7 = (void *)0x0;
      if (*param_1 != 0) {
        pvVar7 = (void *)(*param_1 + (long)param_1);
      }
      memcpy(pvVar6,pvVar7,(long)(int)param_1[1] << 5);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar14 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar14 <= (int)*(uint *)(param_1 + 1)) {
          uVar14 = *(uint *)(param_1 + 1);
        }
        if (*param_1 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *param_1 + (long)param_1;
        }
        lVar10 = *(long *)(lVar13 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar10;
        }
        plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar14 << 5);
      }
      uVar3 = *(uint *)(param_1 + 1);
      lVar13 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar13 = (long)pvVar6 - (long)param_1;
      }
      *param_1 = lVar13;
      uVar14 = uVar8 & 0x7fffffff;
      *(uint *)((long)param_1 + 0xc) = uVar8 | 0x80000000;
      uVar8 = 1;
    }
    if ((int)uVar3 < (int)uVar14) {
      uVar11 = uVar14;
      if (uVar8 == 0) {
        uVar11 = uVar3 & 0x7fffffff;
        *(uint *)((long)param_1 + 0xc) = uVar3;
      }
      if ((int)uVar11 <= (int)uVar3) {
        uVar11 = uVar3;
      }
      if ((int)uVar11 < (int)uVar14) {
        uVar8 = uVar14 - 1 | (int)(uVar14 - 1) >> 0x10;
        uVar8 = uVar8 | (int)uVar8 >> 8;
        uVar8 = uVar8 | (int)uVar8 >> 4;
        uVar8 = uVar8 | (int)uVar8 >> 2;
        uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
        if ((int)uVar8 < (int)uVar14) {
          local_58 = 0;
          local_68 = 0;
          puStack_60 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_68);
        }
        lVar13 = tpidr_el0;
        lVar9 = *(long *)(lVar13 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))
                                   (plVar5,-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 |
                                           (ulong)uVar8 << 5,0);
        pvVar7 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar7 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar6,pvVar7,(long)(int)param_1[1] << 5);
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          uVar11 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar11 <= (int)*(uint *)(param_1 + 1)) {
            uVar11 = *(uint *)(param_1 + 1);
          }
          if (*param_1 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *param_1 + (long)param_1;
          }
          lVar10 = *(long *)(lVar13 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar10;
          }
          plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar11 << 5);
        }
        lVar13 = 0;
        if (pvVar6 != (void *)0x0) {
          lVar13 = (long)pvVar6 - (long)param_1;
        }
        *param_1 = lVar13;
        *(uint *)((long)param_1 + 0xc) = uVar8 | 0x80000000;
      }
      *(uint *)(param_1 + 1) = uVar14;
    }
    else {
      uVar14 = uVar3;
    }
    lVar13 = 0;
    if (*param_1 != 0) {
      lVar13 = *param_1 + (long)param_1;
    }
    FUN_032c4b00(lVar13 + (long)(int)uVar3 * 0x20,0,(uVar14 - uVar3) * 0x20);
    iVar4 = (int)param_1[1];
    if ((int)uVar2 < iVar4) {
      uVar12 = (ulong)uVar2;
      lVar9 = (long)iVar4 + -1;
      lVar13 = uVar12 << 5;
      if ((long)uVar12 < lVar9) goto LAB_02f9c850;
      do {
        uVar14 = (uint)*(ushort *)(param_1 + 2);
        while( true ) {
          uVar12 = uVar12 + 1;
          *(short *)((long)param_1 + lVar13 + *param_1) = (short)uVar14;
          lVar13 = lVar13 + 0x20;
          if ((long)iVar4 <= (long)uVar12) goto LAB_02f9c858;
          if (lVar9 <= (long)uVar12) break;
LAB_02f9c850:
          uVar14 = (int)uVar12 + 1;
        }
      } while( true );
    }
LAB_02f9c858:
    *(short *)(param_1 + 2) = (short)uVar2;
  }
  return;
}


