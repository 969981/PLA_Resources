/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289b220; name: FUN_0289b220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289b220(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  float local_54;
  
  lVar14 = *param_2;
  lVar12 = tpidr_el0;
  lVar9 = *(long *)(lVar12 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar9;
  }
  plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x2a0,0);
  FUN_031a61b8(lVar9,lVar14);
  plVar8 = *(long **)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar9;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar13 = plVar8 + 2;
      do {
        lVar9 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    lVar9 = *(long *)(param_1 + 0x70);
  }
  fVar16 = *(float *)(param_1 + 0x78);
  if (*(float *)(lVar9 + 0xc0) * 0.5 != fVar16) {
    local_58 = *(undefined4 *)(lVar9 + 0x23c);
    local_60 = 0x8000010;
    local_5c = 0x2b;
    local_54 = fVar16;
    FUN_031aa380(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_60);
    *(undefined1 *)(lVar9 + 0x199) = 1;
    *(float *)(lVar9 + 0xc0) = fVar16 + fVar16;
    if ((*(int *)(lVar9 + 0x40) == 1) && (*(int *)(lVar9 + 0x28) != 0)) {
      FUN_031a7148(lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x70);
  }
  fVar16 = *(float *)(param_1 + 0x8c);
  if (*(float *)(lVar9 + 0xa0) != fVar16) {
    local_58 = *(undefined4 *)(lVar9 + 0x23c);
    local_60 = 0x8000010;
    local_5c = 0x34;
    local_54 = fVar16;
    FUN_031aa380(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_60);
    *(undefined1 *)(lVar9 + 0x199) = 1;
    *(float *)(lVar9 + 0xa0) = fVar16;
    if ((*(int *)(lVar9 + 0x40) == 1) && (*(int *)(lVar9 + 0x28) != 0)) {
      FUN_031a7148(lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x70);
    fVar16 = *(float *)(param_1 + 0x8c);
  }
  puVar10 = (undefined8 *)(*param_4 + (long)(int)fVar16 * 0xc);
  FUN_031a6b70(lVar9,*puVar10,*(undefined4 *)(puVar10 + 1));
  lVar9 = *(long *)(param_1 + 0x70);
  fVar16 = *(float *)(param_1 + 0x7c);
  if (*(float *)(lVar9 + 0x158) != fVar16) {
    local_58 = *(undefined4 *)(lVar9 + 0x23c);
    local_60 = 0x8000010;
    local_5c = 0x3b;
    local_54 = fVar16;
    FUN_031aa380(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_60);
    *(undefined1 *)(lVar9 + 0x199) = 1;
    *(float *)(lVar9 + 0x158) = fVar16;
    if ((*(int *)(lVar9 + 0x40) == 1) && (*(int *)(lVar9 + 0x28) != 0)) {
      FUN_031a7148(lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x70);
  }
  fVar16 = *(float *)(param_1 + 0x80);
  if (*(float *)(lVar9 + 0x160) != fVar16) {
    local_58 = *(undefined4 *)(lVar9 + 0x23c);
    local_60 = 0x8000010;
    local_5c = 0x3d;
    local_54 = fVar16;
    FUN_031aa380(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_60);
    *(undefined1 *)(lVar9 + 0x199) = 1;
    *(float *)(lVar9 + 0x160) = fVar16;
    if ((*(int *)(lVar9 + 0x40) == 1) && (*(int *)(lVar9 + 0x28) != 0)) {
      FUN_031a7148(lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x70);
  }
  fVar16 = *(float *)(param_1 + 0x84);
  if (*(float *)(lVar9 + 0x15c) != fVar16) {
    local_58 = *(undefined4 *)(lVar9 + 0x23c);
    local_60 = 0x8000010;
    local_5c = 0x3c;
    local_54 = fVar16;
    FUN_031aa380(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_60);
    *(float *)(lVar9 + 0x15c) = fVar16;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_031a6c80(*(undefined8 *)(param_1 + 0x70));
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    FUN_031a6d6c(*(undefined8 *)(param_1 + 0x70));
  }
  *(long *)(*(long *)(param_1 + 0x70) + 0x18) = param_1;
  fVar16 = *(float *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  lVar9 = *(long *)(lVar12 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar9;
  }
  plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x110,0);
  *puVar10 = &PTR_LAB_0433aed8;
  *(undefined8 *)((long)puVar10 + 0xbc) = 0x3f8000003dcccccd;
  *(float *)((long)puVar10 + 0xac) = fVar16 * 4.0;
  *(undefined8 *)((long)puVar10 + 0xcc) = 0x42c800003f800000;
  *(undefined8 *)((long)puVar10 + 0xd4) = 0x3f000000;
  puVar10[0x1e] = 0x8000000000000000;
  uVar7 = _UNK_0388a138;
  uVar15 = _DAT_0388a130;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  *(undefined1 *)(puVar10 + 0x1f) = 1;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0xffffffffffffffff;
  *(undefined4 *)(puVar10 + 0x17) = 0xf;
  *(undefined8 *)((long)puVar10 + 0xc4) = 0x3dcccccd3c23d70a;
  *(undefined4 *)(puVar10 + 0x14) = uVar2;
  *(undefined4 *)(puVar10 + 0x15) = uVar1;
  *(float *)((long)puVar10 + 0xa4) = fVar16;
  *(undefined4 *)(puVar10 + 0x16) = uVar2;
  *(undefined4 *)((long)puVar10 + 0xb4) = uVar2;
  *(undefined4 *)(puVar10 + 0xc) = 0x5f7ffff0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xf] = uVar7;
  puVar10[0xe] = uVar15;
  plVar8 = *(long **)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar10;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar13 = plVar8 + 2;
      do {
        lVar9 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x170);
  }
  puVar10[3] = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x188);
  uVar2 = *(undefined4 *)(param_1 + 0x184);
  lVar9 = *(long *)(param_1 + 0x170);
  *(undefined4 *)(lVar9 + 0xac) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(lVar9 + 0xb0) = uVar2;
  *(undefined4 *)(lVar9 + 0xb4) = uVar1;
  lVar14 = *param_2;
  lVar9 = *(long *)(lVar12 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar9;
  }
  plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,0);
  *puVar10 = &PTR_FUN_042723a8;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  puVar10[3] = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar8 = (long *)(lVar14 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar15 = NEON_fmov(0x40a00000,4);
  *(undefined4 *)(puVar10 + 4) = 0;
  puVar10[5] = 0;
  *(undefined1 *)(puVar10 + 6) = 1;
  puVar10[7] = uVar15;
  plVar8 = *(long **)(param_1 + 0x1a8);
  *(undefined8 **)(param_1 + 0x1a8) = puVar10;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar13 = plVar8 + 2;
      do {
        lVar12 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x1a8);
  }
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_1 + 0x8c);
  *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x38) =
       CONCAT44(*(undefined4 *)(param_1 + 0x3e4),*(undefined4 *)(param_1 + 0x3e4));
  lVar12 = *(long *)(param_1 + 0x170);
  plVar13 = *(long **)(param_1 + 0x1a8);
  plVar8 = *(long **)(lVar12 + 0xe0);
  if (plVar8 != plVar13) {
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,lVar12);
    }
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar8 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = *(long **)(lVar12 + 0xe0);
    *(long **)(lVar12 + 0xe0) = plVar13;
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        plVar13 = plVar8 + 2;
        do {
          lVar9 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      plVar13 = *(long **)(lVar12 + 0xe0);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13,lVar12);
    }
  }
  FUN_0327ec28(*param_3,*(undefined8 *)(param_1 + 0x170));
  uVar15 = *(undefined8 *)(param_1 + 0x198);
  uVar1 = *(undefined4 *)(param_1 + 0x194);
  uVar2 = *(undefined4 *)(param_1 + 0x1a0);
  uVar3 = *(undefined4 *)(param_1 + 0x1a4);
  lVar12 = *(long *)(param_1 + 0x170);
  *(float *)(lVar12 + 0xbc) =
       *(float *)(param_1 + 400) *
       (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
  *(undefined4 *)(lVar12 + 0xc0) = uVar1;
  *(undefined8 *)(lVar12 + 0xc4) = 0x3dcccccd3c23d70a;
  *(undefined8 *)(lVar12 + 0xcc) = uVar15;
  *(undefined4 *)(lVar12 + 0xd4) = uVar2;
  *(undefined4 *)(lVar12 + 0xd8) = uVar3;
  lVar12 = *(long *)(param_1 + 0x170);
  if (*(char *)(param_1 + 0x3e1) == '\0') {
    if (*(char *)(lVar12 + 0xf8) != '\0') {
      lVar9 = *(long *)(lVar12 + 0x100);
      *(undefined1 *)(lVar12 + 0xf8) = 0;
      if (lVar9 != 0) {
        *(undefined4 *)
         (*(long *)(*(long *)(lVar9 + 0x60) + (long)*(int *)(lVar9 + 0x68) * 8 + -8) + 0x10c) =
             *(undefined4 *)(lVar12 + 0x10c);
        iVar4 = *(int *)(lVar12 + 0x10c);
        lVar12 = (long)*(int *)(lVar9 + 0x68) + -1;
        iVar11 = (int)lVar12;
        *(int *)(lVar9 + 0x68) = iVar11;
        if (iVar11 != iVar4) {
          *(undefined8 *)(*(long *)(lVar9 + 0x60) + (long)iVar4 * 8) =
               *(undefined8 *)(*(long *)(lVar9 + 0x60) + lVar12 * 8);
        }
      }
    }
  }
  else if ((*(char *)(lVar12 + 0xf8) == '\0') &&
          (*(undefined1 *)(lVar12 + 0xf8) = 1, *(long *)(lVar12 + 0x100) != 0)) {
    FUN_0327f20c();
  }
  FUN_0289bd24(*(long *)(param_1 + 0x70) + 600,param_1,&LAB_0289bdf8,0);
  FUN_0289be4c(*(long *)(param_1 + 0x70) + 0x260,param_1,&LAB_0289bf20,0);
  FUN_0289bf7c(*(long *)(param_1 + 0x70) + 0x268,param_1,&LAB_0289c050,0);
  FUN_0289c0ac(*(long *)(param_1 + 0x70) + 0x270,param_1,&LAB_0289c180,0);
  FUN_0289c184(*(long *)(param_1 + 0x70) + 0x278,param_1,&LAB_0289c258,0);
  FUN_0289c25c(*(long *)(param_1 + 0x70) + 0x280,param_1,&LAB_0289c330,0);
  FUN_0289c334(*(long *)(param_1 + 0x70) + 0x288,param_1,&LAB_0289c408,0);
  *(undefined4 *)(param_1 + 0x68) = 2;
  return;
}


