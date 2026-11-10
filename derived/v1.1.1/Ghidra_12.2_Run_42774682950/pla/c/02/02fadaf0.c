/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fadaf0; name: FUN_02fadaf0
 */


void FUN_02fadaf0(long *param_1,int param_2,int param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *__src;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  void *__dest;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  float fVar19;
  long lVar20;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  iVar1 = (int)param_1[1];
  lVar20 = tpidr_el0;
  if (0 < iVar1) {
    lVar11 = 0;
    if (*param_1 != 0) {
      lVar11 = *param_1 + (long)param_1;
    }
    lVar13 = lVar11 + (long)iVar1 * 0x18;
    lVar10 = *(long *)(lVar13 + -0x18);
    if ((int)*(uint *)(lVar13 + -0xc) < 0) {
      uVar6 = *(uint *)(lVar13 + -0xc) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(lVar13 + -0x10)) {
        uVar6 = *(uint *)(lVar13 + -0x10);
      }
      lVar4 = 0;
      if (lVar10 != 0) {
        lVar4 = lVar10 + lVar13 + -0x18;
      }
      lVar10 = *(long *)(lVar20 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar20 + 0x38d490) = lVar10;
      }
      plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,(ulong)uVar6 << 2);
    }
    if (iVar1 != 1) {
      lVar10 = *(long *)(lVar13 + -0x30);
      if ((int)*(uint *)(lVar13 + -0x24) < 0) {
        uVar6 = *(uint *)(lVar13 + -0x24) & 0x7fffffff;
        if ((int)uVar6 <= (int)*(uint *)(lVar13 + -0x28)) {
          uVar6 = *(uint *)(lVar13 + -0x28);
        }
        lVar4 = 0;
        if (lVar10 != 0) {
          lVar4 = lVar10 + lVar13 + -0x30;
        }
        lVar10 = *(long *)(lVar20 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar20 + 0x38d490) = lVar10;
        }
        plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,(ulong)uVar6 << 2);
      }
      if (iVar1 != 2) {
        lVar10 = *(long *)(lVar13 + -0x48);
        if ((int)*(uint *)(lVar13 + -0x3c) < 0) {
          uVar6 = *(uint *)(lVar13 + -0x3c) & 0x7fffffff;
          if ((int)uVar6 <= (int)*(uint *)(lVar13 + -0x40)) {
            uVar6 = *(uint *)(lVar13 + -0x40);
          }
          lVar4 = 0;
          if (lVar10 != 0) {
            lVar4 = lVar10 + lVar13 + -0x48;
          }
          lVar10 = *(long *)(lVar20 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar20 + 0x38d490) = lVar10;
          }
          plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,(ulong)uVar6 << 2);
        }
        if (iVar1 != 3) {
          lVar11 = lVar11 + (long)iVar1 * 0x18;
          iVar1 = iVar1 + -3;
          uVar6 = *(uint *)(lVar11 + -0x54);
          plVar7 = (long *)(lVar11 + -0x60);
          while( true ) {
            if ((int)uVar6 < 0) {
              uVar9 = uVar6 & 0x7fffffff;
              if ((int)(uVar6 & 0x7fffffff) <= (int)*(uint *)(plVar7 + 1)) {
                uVar9 = *(uint *)(plVar7 + 1);
              }
              lVar11 = 0;
              if (*plVar7 != 0) {
                lVar11 = *plVar7 + (long)plVar7;
              }
              lVar10 = *(long *)(lVar20 + 0x38d490);
              if (lVar10 == 0) {
                lVar10 = FUN_0333d16c(0,1);
                *(long *)(lVar20 + 0x38d490) = lVar10;
              }
              plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
              (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,(ulong)uVar9 << 2);
            }
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) break;
            uVar6 = *(uint *)((long)plVar7 + -0xc);
            plVar7 = plVar7 + -3;
          }
        }
      }
    }
  }
  if (param_2 < 0) {
    param_2 = param_2 + 1;
  }
  param_2 = param_2 >> 1;
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  param_3 = param_3 >> 1;
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  uVar6 = 0x21 - (int)LZCOUNT(iVar1 + -1);
  if (iVar1 + -1 == 0) {
    uVar6 = 1;
  }
  uVar9 = *(uint *)((long)param_1 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  if (uVar6 <= (uVar9 & 0x7fffffff)) goto LAB_02fadc58;
  lVar11 = *(long *)(lVar20 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar11;
  }
  plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar6 * 0x18,0);
  plVar7 = (long *)0x0;
  if (*param_1 != 0) {
    plVar7 = (long *)(*param_1 + (long)param_1);
  }
  uVar14 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar15 = plVar8;
    do {
      lVar11 = 0;
      if (*plVar7 != 0) {
        lVar11 = *plVar7 + (long)plVar7;
      }
      lVar10 = 0;
      if (lVar11 != 0) {
        lVar10 = lVar11 - (long)plVar15;
      }
      uVar14 = uVar14 - 1;
      *plVar15 = lVar10;
      *(int *)(plVar15 + 1) = (int)plVar7[1];
      *(undefined4 *)((long)plVar15 + 0xc) = *(undefined4 *)((long)plVar7 + 0xc);
      *plVar7 = 0;
      plVar7[1] = 0;
      *(int *)(plVar15 + 2) = (int)plVar7[2];
      plVar15 = plVar15 + 3;
      plVar7 = plVar7 + 3;
    } while (uVar14 != 0);
  }
  if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
    uVar9 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((int)uVar9 <= (int)*(uint *)(param_1 + 1)) {
      uVar9 = *(uint *)(param_1 + 1);
    }
    lVar11 = 0;
    if (*param_1 != 0) {
      lVar11 = *param_1 + (long)param_1;
    }
    lVar10 = *(long *)(lVar20 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar9 * 0x18);
    if (plVar8 == (long *)0x0) goto LAB_02fadf1c;
LAB_02fadc48:
    lVar11 = (long)plVar8 - (long)param_1;
  }
  else {
    if (plVar8 != (long *)0x0) goto LAB_02fadc48;
LAB_02fadf1c:
    lVar11 = 0;
  }
  *param_1 = lVar11;
  uVar9 = uVar6 | 0x80000000;
  *(uint *)((long)param_1 + 0xc) = uVar9;
LAB_02fadc58:
  uVar16 = 0;
  do {
    uVar12 = *(uint *)(param_1 + 1);
    if (uVar9 == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar12;
      uVar9 = uVar12;
    }
    if ((int)uVar12 < (int)(uVar9 & 0x7fffffff)) {
      lVar11 = *param_1;
    }
    else {
      uVar5 = uVar12 | (int)uVar12 >> 0x10;
      uVar5 = uVar5 | (int)uVar5 >> 8;
      uVar5 = uVar5 | (int)uVar5 >> 4;
      uVar5 = uVar5 | (int)uVar5 >> 2;
      uVar5 = uVar5 | (int)uVar5 >> 1;
      uVar9 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar12) {
        local_78 = 0;
        local_68 = 0;
        local_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar11 = *(long *)(lVar20 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar20 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar9 * 0x18,0);
      plVar7 = (long *)0x0;
      if (*param_1 != 0) {
        plVar7 = (long *)(*param_1 + (long)param_1);
      }
      uVar14 = (ulong)*(uint *)(param_1 + 1);
      if (0 < (int)*(uint *)(param_1 + 1)) {
        plVar15 = plVar8;
        do {
          lVar11 = 0;
          if (*plVar7 != 0) {
            lVar11 = *plVar7 + (long)plVar7;
          }
          lVar10 = 0;
          if (lVar11 != 0) {
            lVar10 = lVar11 - (long)plVar15;
          }
          uVar14 = uVar14 - 1;
          *plVar15 = lVar10;
          *(int *)(plVar15 + 1) = (int)plVar7[1];
          *(undefined4 *)((long)plVar15 + 0xc) = *(undefined4 *)((long)plVar7 + 0xc);
          *plVar7 = 0;
          plVar7[1] = 0;
          *(int *)(plVar15 + 2) = (int)plVar7[2];
          plVar15 = plVar15 + 3;
          plVar7 = plVar7 + 3;
        } while (uVar14 != 0);
      }
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar5 <= (int)*(uint *)(param_1 + 1)) {
          uVar5 = *(uint *)(param_1 + 1);
        }
        lVar11 = 0;
        if (*param_1 != 0) {
          lVar11 = *param_1 + (long)param_1;
        }
        lVar10 = *(long *)(lVar20 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1,(ulong)uVar5 * 0x18);
          *(long *)(lVar20 + 0x38d490) = lVar10;
        }
        plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar5 * 0x18);
        if (plVar8 == (long *)0x0) goto LAB_02fae20c;
LAB_02fae100:
        lVar11 = (long)plVar8 - (long)param_1;
      }
      else {
        if (plVar8 != (long *)0x0) goto LAB_02fae100;
LAB_02fae20c:
        lVar11 = 0;
      }
      *param_1 = lVar11;
      *(uint *)((long)param_1 + 0xc) = uVar9 | 0x80000000;
    }
    lVar10 = (long)(int)uVar12 * 0x18;
    puVar2 = (undefined8 *)((long)param_1 + lVar10 + lVar11);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    lVar11 = *param_1;
    plVar7 = (long *)((long)param_1 + lVar10 + lVar11);
    *(short *)(plVar7 + 2) = (short)param_2;
    *(short *)((long)plVar7 + 0x12) = (short)param_3;
    uVar5 = param_2 * param_3 * 4;
    puVar17 = (uint *)(plVar7 + 1);
    uVar9 = *puVar17;
    if (uVar9 != uVar5) {
      puVar18 = (uint *)((long)param_1 + (long)(int)uVar12 * 0x18 + lVar11 + 0xc);
      uVar12 = *puVar18;
      if (*puVar18 == 0) {
        *puVar18 = uVar9;
        uVar12 = uVar9;
      }
      if ((int)uVar9 < (int)uVar5) {
        uVar3 = uVar12 & 0x7fffffff;
        if ((int)(uVar12 & 0x7fffffff) <= (int)uVar9) {
          uVar3 = uVar9;
        }
        if ((int)uVar3 < (int)uVar5) {
          uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
          uVar9 = uVar9 | (int)uVar9 >> 8;
          uVar9 = uVar9 | (int)uVar9 >> 4;
          uVar9 = uVar9 | (int)uVar9 >> 2;
          uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
          if ((int)uVar9 < (int)uVar5) {
            local_78 = 0;
            local_68 = 0;
            local_70 = PTR_DAT_04372528;
            FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow",&local_78);
          }
          lVar11 = *(long *)(lVar20 + 0x38d490);
          if (lVar11 == 0) {
            lVar11 = FUN_0333d16c(0,1);
            *(long *)(lVar20 + 0x38d490) = lVar11;
          }
          plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
          __dest = (void *)(**(code **)(*plVar8 + 0x10))
                                     (plVar8,-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                                             (ulong)uVar9 << 2,0);
          __src = (void *)0x0;
          if (*plVar7 != 0) {
            __src = (void *)(*plVar7 + (long)plVar7);
          }
          memcpy(__dest,__src,(long)(int)*puVar17 << 2);
          if ((int)*puVar18 < 0) {
            uVar12 = *puVar18 & 0x7fffffff;
            if ((int)uVar12 <= (int)*puVar17) {
              uVar12 = *puVar17;
            }
            lVar11 = 0;
            if (*plVar7 != 0) {
              lVar11 = *plVar7 + (long)plVar7;
            }
            lVar10 = *(long *)(lVar20 + 0x38d490);
            if (lVar10 == 0) {
              lVar10 = FUN_0333d16c(0,1);
              *(long *)(lVar20 + 0x38d490) = lVar10;
            }
            plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,(ulong)uVar12 << 2);
            if (__dest == (void *)0x0) goto LAB_02fade3c;
LAB_02fadd88:
            lVar11 = (long)__dest - (long)plVar7;
          }
          else {
            if (__dest != (void *)0x0) goto LAB_02fadd88;
LAB_02fade3c:
            lVar11 = 0;
          }
          *plVar7 = lVar11;
          *puVar18 = uVar9 | 0x80000000;
        }
      }
      *puVar17 = uVar5;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == uVar6) {
      lVar20 = *param_4;
      param_1[3] = lVar20;
      param_1[2] = lVar20;
      fVar19 = ((float)*param_5 - (float)*param_4) * 1.5259022e-05;
      *(float *)(param_1 + 4) = fVar19;
      if ((float)*param_5 <= (float)*param_4) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = 1.0 / fVar19;
      }
      *(float *)((long)param_1 + 0x24) = fVar19;
      return;
    }
    iVar1 = param_3 + 2;
    if (-1 < param_3 + 1) {
      iVar1 = param_3 + 1;
    }
    param_3 = iVar1 >> 1;
    iVar1 = param_2 + 2;
    if (-1 < param_2 + 1) {
      iVar1 = param_2 + 1;
    }
    param_2 = iVar1 >> 1;
    uVar9 = *(uint *)((long)param_1 + 0xc);
  } while( true );
}


