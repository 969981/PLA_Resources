/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001af760; name: FUN_001af760
 */


long FUN_001af760(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *__src;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  FUN_001b01f4();
  uVar11 = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x35) = uVar11;
  if (param_2 != param_1) {
    lVar17 = 0;
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar17 = *(long *)(param_2 + 0x40) + param_2 + 0x40;
    }
    plVar19 = (long *)(param_1 + 0x40);
    uVar10 = *(uint *)(param_2 + 0x48);
    lVar16 = *plVar19;
    lVar6 = tpidr_el0;
    uVar15 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
    uVar5 = uVar15;
    if ((int)uVar15 <= (int)uVar10) {
      uVar5 = uVar10;
    }
    if ((lVar17 == 0) || (uVar5 == 0)) {
      iVar4 = *(int *)(param_1 + 0x48);
      if (0 < iVar4) {
        lVar17 = 0;
        if (lVar16 != 0) {
          lVar17 = lVar16 + (long)plVar19;
        }
        lVar17 = lVar17 + (long)iVar4 * 0x60;
        uVar15 = *(uint *)(lVar17 + -0x54);
        plVar8 = (long *)(lVar17 + -0x60);
        while( true ) {
          if ((int)uVar15 < 0) {
            uVar5 = uVar15 & 0x7fffffff;
            if ((int)(uVar15 & 0x7fffffff) <= (int)*(uint *)(plVar8 + 1)) {
              uVar5 = *(uint *)(plVar8 + 1);
            }
            lVar17 = 0;
            if (*plVar8 != 0) {
              lVar17 = *plVar8 + (long)plVar8;
            }
            lVar16 = *(long *)(lVar6 + 0x38d490);
            if (lVar16 == 0) {
              lVar16 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar16;
            }
            plVar7 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar17,(ulong)uVar5 << 2);
          }
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) break;
          uVar15 = *(uint *)((long)plVar8 + -0x54);
          plVar8 = plVar8 + -0xc;
        }
      }
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        uVar15 = *(uint *)(param_1 + 0x4c) & 0x7fffffff;
        if ((int)uVar15 <= (int)*(uint *)(param_1 + 0x48)) {
          uVar15 = *(uint *)(param_1 + 0x48);
        }
        lVar17 = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar17 = *(long *)(param_1 + 0x40) + (long)plVar19;
        }
        lVar16 = *(long *)(lVar6 + 0x38d490);
        if (lVar16 == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar16;
        }
        plVar8 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar17,(ulong)uVar15 * 0x60);
      }
      *plVar19 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      uVar20 = *(uint *)(param_1 + 0x48);
      lVar13 = 0;
      if (lVar16 != 0) {
        lVar13 = lVar16 + (long)plVar19;
      }
      if (0 < (int)uVar20) {
        lVar16 = lVar13 + (long)(int)uVar20 * 0x60;
        uVar15 = *(uint *)(lVar16 + -0x54);
        plVar8 = (long *)(lVar16 + -0x60);
        while( true ) {
          if ((int)uVar15 < 0) {
            uVar10 = uVar15 & 0x7fffffff;
            if ((int)(uVar15 & 0x7fffffff) <= (int)*(uint *)(plVar8 + 1)) {
              uVar10 = *(uint *)(plVar8 + 1);
            }
            lVar16 = 0;
            if (*plVar8 != 0) {
              lVar16 = *plVar8 + (long)plVar8;
            }
            lVar12 = *(long *)(lVar6 + 0x38d490);
            if (lVar12 == 0) {
              lVar12 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar12;
            }
            plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar16,(ulong)uVar10 << 2);
          }
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) break;
          uVar15 = *(uint *)((long)plVar8 + -0x54);
          plVar8 = plVar8 + -0xc;
        }
        uVar10 = *(uint *)(param_2 + 0x48);
        uVar15 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
        uVar20 = *(uint *)(param_1 + 0x48);
      }
      if ((int)uVar15 <= (int)uVar10) {
        uVar15 = uVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x4c) & 0x7fffffff;
      if ((int)uVar2 <= (int)uVar20) {
        uVar2 = uVar20;
      }
      if (uVar15 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x4c) < 0) {
          lVar16 = 0;
          if (*plVar19 != 0) {
            lVar16 = *plVar19 + (long)plVar19;
          }
          lVar13 = *(long *)(lVar6 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar13;
          }
          plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar16,(ulong)uVar2 * 0x60);
        }
        lVar16 = *(long *)(lVar6 + 0x38d490);
        if (lVar16 == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar16;
        }
        plVar8 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
        lVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,(ulong)uVar5 * 0x60,0);
        uVar10 = *(uint *)(param_2 + 0x48);
      }
      if (0 < (int)uVar10) {
        lVar16 = 0;
        uVar18 = (ulong)uVar10;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar16);
          plVar8 = (long *)(lVar17 + lVar16);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar12 = plVar8[5];
          puVar1[3] = plVar8[3];
          puVar1[5] = lVar12;
          lVar12 = plVar8[2];
          puVar1[4] = plVar8[4];
          puVar1[2] = lVar12;
          uVar15 = *(uint *)(plVar8 + 1);
          pvVar3 = (void *)0x0;
          if (*plVar8 != 0) {
            pvVar3 = (void *)(*plVar8 + (long)plVar8);
          }
          if ((0 < (int)uVar15) && (pvVar3 != (void *)0x0)) {
            uVar5 = uVar15 - 1 | (int)(uVar15 - 1) >> 0x10;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
            if ((int)uVar5 < (int)uVar15) {
              local_78 = 0;
              local_68 = 0;
              local_70 = PTR_DAT_04372528;
              FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                           "Capacity reservation overflow",&local_78);
              uVar21 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
              lVar12 = *(long *)(lVar6 + 0x38d490);
            }
            else {
              uVar21 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
              lVar12 = *(long *)(lVar6 + 0x38d490);
            }
            if (lVar12 == 0) {
              lVar12 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar12;
            }
            plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
            pvVar9 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar21,0);
            if (0 < (int)*(uint *)(puVar1 + 1)) {
              __src = (void *)0x0;
              if (*(long *)(lVar13 + lVar16) != 0) {
                __src = (void *)(*(long *)(lVar13 + lVar16) + (long)puVar1);
              }
              memcpy(pvVar9,__src,(ulong)*(uint *)(puVar1 + 1) << 2);
            }
            if ((int)*(uint *)((long)puVar1 + 0xc) < 0) {
              uVar10 = *(uint *)((long)puVar1 + 0xc) & 0x7fffffff;
              if ((int)uVar10 <= (int)*(uint *)(puVar1 + 1)) {
                uVar10 = *(uint *)(puVar1 + 1);
              }
              lVar12 = 0;
              if (*(long *)(lVar13 + lVar16) != 0) {
                lVar12 = *(long *)(lVar13 + lVar16) + (long)puVar1;
              }
              lVar14 = *(long *)(lVar6 + 0x38d490);
              if (lVar14 == 0) {
                lVar14 = FUN_0333d16c(0,1);
                *(long *)(lVar6 + 0x38d490) = lVar14;
              }
              plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
              (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,(ulong)uVar10 << 2);
            }
            lVar12 = 0;
            if (pvVar9 != (void *)0x0) {
              lVar12 = (long)pvVar9 - (long)puVar1;
            }
            *(long *)(lVar13 + lVar16) = lVar12;
            *(uint *)(puVar1 + 1) = uVar15;
            *(uint *)((long)puVar1 + 0xc) = uVar5 | 0x80000000;
            memcpy((void *)(lVar12 + (long)puVar1),pvVar3,(ulong)uVar15 << 2);
          }
          *(int *)(puVar1 + 9) = (int)plVar8[9];
          *(undefined4 *)((long)puVar1 + 0x4c) = *(undefined4 *)((long)plVar8 + 0x4c);
          *(int *)(puVar1 + 10) = (int)plVar8[10];
          *(undefined4 *)((long)puVar1 + 0x54) = *(undefined4 *)((long)plVar8 + 0x54);
          *(char *)(puVar1 + 0xb) = (char)plVar8[0xb];
          *(undefined1 *)((long)puVar1 + 0x59) = *(undefined1 *)((long)plVar8 + 0x59);
          *(undefined1 *)((long)puVar1 + 0x5a) = *(undefined1 *)((long)plVar8 + 0x5a);
          *(undefined1 *)((long)puVar1 + 0x5b) = *(undefined1 *)((long)plVar8 + 0x5b);
          *(undefined2 *)((long)puVar1 + 0x5c) = *(undefined2 *)((long)plVar8 + 0x5c);
          *(undefined1 *)((long)puVar1 + 0x5e) = *(undefined1 *)((long)plVar8 + 0x5e);
          *(undefined1 *)((long)puVar1 + 0x5f) = *(undefined1 *)((long)plVar8 + 0x5f);
          FUN_032c4a00(puVar1 + 6,plVar8 + 6,0x18);
          lVar16 = lVar16 + 0x60;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      lVar17 = 0;
      if (lVar13 != 0) {
        lVar17 = lVar13 - (long)plVar19;
      }
      *(long *)(param_1 + 0x40) = lVar17;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      uVar15 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
      if ((int)uVar15 <= (int)*(uint *)(param_2 + 0x48)) {
        uVar15 = *(uint *)(param_2 + 0x48);
      }
      *(uint *)(param_1 + 0x4c) = uVar15 | 0x80000000;
    }
    if (param_2 != param_1) {
      pvVar3 = (void *)0x0;
      if (*(long *)(param_2 + 0x50) != 0) {
        pvVar3 = (void *)(*(long *)(param_2 + 0x50) + param_2 + 0x50);
      }
      plVar19 = (long *)(param_1 + 0x50);
      uVar5 = *(uint *)(param_2 + 0x58);
      lVar17 = *plVar19;
      uVar15 = *(uint *)(param_2 + 0x5c) & 0x7fffffff;
      if ((int)uVar15 <= (int)uVar5) {
        uVar15 = uVar5;
      }
      if ((pvVar3 == (void *)0x0) || (uVar15 == 0)) {
        if ((int)*(uint *)(param_1 + 0x5c) < 0) {
          uVar15 = *(uint *)(param_1 + 0x5c) & 0x7fffffff;
          if ((int)uVar15 <= (int)*(uint *)(param_1 + 0x58)) {
            uVar15 = *(uint *)(param_1 + 0x58);
          }
          lVar16 = 0;
          if (lVar17 != 0) {
            lVar16 = lVar17 + (long)plVar19;
          }
          lVar17 = *(long *)(lVar6 + 0x38d490);
          if (lVar17 == 0) {
            lVar17 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar17;
          }
          plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar16,(ulong)uVar15 << 2);
        }
        *plVar19 = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        pvVar9 = (void *)0x0;
        if (lVar17 != 0) {
          pvVar9 = (void *)(lVar17 + (long)plVar19);
        }
        uVar10 = *(uint *)(param_1 + 0x5c) & 0x7fffffff;
        if ((int)uVar10 <= (int)*(uint *)(param_1 + 0x58)) {
          uVar10 = *(uint *)(param_1 + 0x58);
        }
        if (uVar15 != uVar10) {
          if ((int)*(uint *)(param_1 + 0x5c) < 0) {
            lVar17 = *(long *)(lVar6 + 0x38d490);
            if (lVar17 == 0) {
              lVar17 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar17;
            }
            plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
            (**(code **)(*plVar8 + 0x18))(plVar8,pvVar9,(ulong)uVar10 << 2);
          }
          lVar17 = *(long *)(lVar6 + 0x38d490);
          if (lVar17 == 0) {
            lVar17 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar17;
          }
          plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
          pvVar9 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,(ulong)uVar15 << 2,0);
          uVar5 = *(uint *)(param_2 + 0x58);
        }
        memcpy(pvVar9,pvVar3,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
        lVar17 = 0;
        if (pvVar9 != (void *)0x0) {
          lVar17 = (long)pvVar9 - (long)plVar19;
        }
        *(long *)(param_1 + 0x50) = lVar17;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        uVar15 = *(uint *)(param_2 + 0x5c) & 0x7fffffff;
        if ((int)uVar15 <= (int)*(uint *)(param_2 + 0x58)) {
          uVar15 = *(uint *)(param_2 + 0x58);
        }
        *(uint *)(param_1 + 0x5c) = uVar15 | 0x80000000;
      }
      plVar19 = (long *)(param_1 + 0x60);
      lVar17 = *plVar19;
      lVar16 = *(long *)(param_2 + 0x60);
      uVar15 = *(uint *)(param_2 + 0x68);
      pvVar3 = (void *)0x0;
      if (lVar16 != 0) {
        pvVar3 = (void *)(lVar16 + param_2 + 0x60);
      }
      uVar5 = *(uint *)(param_2 + 0x6c) & 0x7fffffff;
      if ((int)uVar5 <= (int)uVar15) {
        uVar5 = uVar15;
      }
      if ((pvVar3 == (void *)0x0) || (uVar5 == 0)) {
        if ((int)*(uint *)(param_1 + 0x6c) < 0) {
          uVar15 = *(uint *)(param_1 + 0x6c) & 0x7fffffff;
          if ((int)uVar15 <= (int)*(uint *)(param_1 + 0x68)) {
            uVar15 = *(uint *)(param_1 + 0x68);
          }
          lVar16 = 0;
          if (lVar17 != 0) {
            lVar16 = lVar17 + (long)plVar19;
          }
          lVar17 = *(long *)(lVar6 + 0x38d490);
          if (lVar17 == 0) {
            lVar17 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar17;
          }
          plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar16,uVar15 << 1);
        }
        *plVar19 = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        pvVar9 = (void *)0x0;
        if (lVar17 != 0) {
          pvVar9 = (void *)(lVar17 + (long)plVar19);
        }
        uVar10 = *(uint *)(param_1 + 0x6c) & 0x7fffffff;
        if ((int)uVar10 <= (int)*(uint *)(param_1 + 0x68)) {
          uVar10 = *(uint *)(param_1 + 0x68);
        }
        if (uVar5 != uVar10) {
          if ((int)*(uint *)(param_1 + 0x6c) < 0) {
            pvVar9 = (void *)0x0;
            if (lVar17 != 0) {
              pvVar9 = (void *)(lVar17 + (long)plVar19);
            }
            lVar17 = *(long *)(lVar6 + 0x38d490);
            if (lVar17 == 0) {
              lVar17 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar17;
            }
            plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
            (**(code **)(*plVar8 + 0x18))(plVar8,pvVar9,uVar10 << 1);
          }
          lVar17 = *(long *)(lVar6 + 0x38d490);
          if (lVar17 == 0) {
            lVar17 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar17;
          }
          plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
          pvVar9 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar5 << 1,0);
          uVar15 = *(uint *)(param_2 + 0x68);
        }
        memcpy(pvVar9,pvVar3,-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1);
        lVar17 = 0;
        if (pvVar9 != (void *)0x0) {
          lVar17 = (long)pvVar9 - (long)plVar19;
        }
        *(long *)(param_1 + 0x60) = lVar17;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
        uVar15 = *(uint *)(param_2 + 0x6c) & 0x7fffffff;
        if ((int)uVar15 <= (int)*(uint *)(param_2 + 0x68)) {
          uVar15 = *(uint *)(param_2 + 0x68);
        }
        *(uint *)(param_1 + 0x6c) = uVar15 | 0x80000000;
      }
    }
  }
  return param_1;
}


