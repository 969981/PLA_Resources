/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e59124; name: FUN_02e59124
 */


void FUN_02e59124(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  *(undefined4 *)(param_8 + 0x18) = 0;
  *(undefined2 *)(param_8 + 0xc) = 0;
  if ((int)param_1[1] != 0) {
    uVar9 = 0;
    lVar1 = param_8 + 0x10;
    do {
      lVar13 = *param_1;
      plVar16 = (long *)(lVar13 + uVar9 * 0x90);
      lVar4 = FUN_02e5312c(param_6,*(undefined8 *)(plVar16[*(uint *)(plVar16 + 0x10) - 1] + 0x40),
                           &local_70);
      if (((lVar4 != 0 && (char)local_70 != '\0') && (*(int *)(lVar4 + 0x20) != 0)) &&
         (*(char *)(lVar4 + 0x15) == '\0')) {
        lVar5 = FUN_02e5312c(param_3,*(undefined8 *)(*plVar16 + 0x40),&local_70);
        if (((lVar5 != 0 && (char)local_70 != '\0') && (uVar7 = *(uint *)(lVar5 + 0x20), uVar7 != 0)
            ) && (*(char *)(lVar5 + 0x15) == '\0')) {
          lVar12 = *(long *)(lVar5 + 0x18);
          if (*(uint *)(plVar16 + 0x10) < 2) {
            lVar13 = lVar12;
            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_02e594dc;
            uVar11 = 0;
            while (lVar13 = lVar13 + 0x8c, lVar13 != lVar12 + (ulong)uVar7 * 0x8c) {
              if ((int)uVar11 != 0) {
LAB_02e594dc:
                lVar12 = *(long *)(lVar4 + 0x18) + 0x6c;
                do {
                  puVar6 = (undefined8 *)FUN_02e447a8(lVar1);
                  if (puVar6 != (undefined8 *)0x0) {
                    uVar2 = *(undefined4 *)(param_2 + 1);
                    *puVar6 = *param_2;
                    *(undefined4 *)(puVar6 + 1) = uVar2;
                    FUN_02e57f1c(puVar6,lVar13,lVar13 + 0x6c,param_4);
                    lVar15 = lVar12;
                    if (*(int *)(lVar12 + 0xc) != 0) {
                      lVar15 = lVar12 + -0x60;
                    }
                    FUN_02e581bc(puVar6,plVar16,0,lVar15,1);
                    FUN_02e57f1c(puVar6,lVar12 + -0x6c,lVar12,param_7);
                    FUN_02e5880c(puVar6,param_5);
                    if (*(float *)((long)puVar6 + 0x7c) < 0.001) {
                      *(undefined1 *)(param_8 + 0xc) = 1;
                    }
                  }
                  uVar11 = (ulong)*(uint *)(lVar4 + 0x20);
                  lVar15 = lVar12 + 0x20;
                  lVar12 = lVar12 + 0x8c;
                } while (lVar15 != *(long *)(lVar4 + 0x18) + uVar11 * 0x8c);
                lVar12 = *(long *)(lVar5 + 0x18);
                uVar7 = *(uint *)(lVar5 + 0x20);
              }
            }
          }
          else {
            lVar13 = lVar13 + uVar9 * 0x90;
            do {
              if (*(uint *)(lVar4 + 0x20) == 0) {
                lVar15 = 0;
              }
              else {
                lVar10 = (ulong)*(uint *)(lVar4 + 0x20) * 0x8c;
                fVar17 = 3.4028235e+38;
                lVar8 = *(long *)(lVar4 + 0x18);
                lVar14 = 0;
                do {
                  bVar3 = fVar17 <= *(float *)(lVar8 + 0x80);
                  fVar17 = (float)NEON_fminnm(*(float *)(lVar8 + 0x80),fVar17);
                  lVar15 = lVar8;
                  if (bVar3) {
                    lVar15 = lVar14;
                  }
                  lVar8 = lVar8 + 0x8c;
                  lVar10 = lVar10 + -0x8c;
                  lVar14 = lVar15;
                } while (lVar10 != 0);
              }
              lVar8 = FUN_02e52ab8(*(long *)(lVar13 + 0x48),*plVar16,*(undefined8 *)(lVar13 + 8));
              if (lVar8 == 0) {
                puVar6 = (undefined8 *)FUN_02e447a8(lVar1);
                if (puVar6 != (undefined8 *)0x0) {
                  uVar2 = *(undefined4 *)(param_2 + 1);
                  *puVar6 = *param_2;
                  *(undefined4 *)(puVar6 + 1) = uVar2;
                  FUN_02e57f1c(puVar6,lVar12,lVar12 + 0x6c,param_4);
                  local_70 = *(undefined4 *)(param_5 + 0x18);
                  local_6c = *(undefined4 *)(param_5 + 0x1c);
                  local_68 = *(undefined4 *)(param_5 + 0x20);
                  FUN_02e581bc(puVar6,plVar16,0,&local_70,0);
                  FUN_02e57f1c(puVar6,lVar15,lVar15 + 0x6c,param_7);
                  FUN_02e5880c(puVar6,param_5);
                  if (*(float *)((long)puVar6 + 0x7c) < 0.001) {
                    *(undefined1 *)(param_8 + 0xc) = 1;
                  }
                }
              }
              else if (*(int *)(lVar8 + 0x18) != 0) {
                lVar10 = *(long *)(lVar8 + 0x10);
                do {
                  puVar6 = (undefined8 *)FUN_02e447a8(lVar1);
                  if (puVar6 != (undefined8 *)0x0) {
                    uVar2 = *(undefined4 *)(param_2 + 1);
                    *puVar6 = *param_2;
                    *(undefined4 *)(puVar6 + 1) = uVar2;
                    FUN_02e57f1c(puVar6,lVar12,lVar12 + 0x6c,param_4);
                    FUN_02e58074(puVar6,lVar10,*plVar16,*(undefined8 *)(lVar13 + 8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x40),
                                 *(undefined8 *)(*(long *)(lVar13 + 0x48) + 0x40));
                    local_70 = *(undefined4 *)(param_5 + 0x18);
                    local_6c = *(undefined4 *)(param_5 + 0x1c);
                    local_68 = *(undefined4 *)(param_5 + 0x20);
                    FUN_02e581bc(puVar6,plVar16,1,&local_70,1);
                    FUN_02e57f1c(puVar6,lVar15,lVar15 + 0x6c,param_7);
                    FUN_02e5880c(puVar6,param_5);
                    if (*(float *)((long)puVar6 + 0x7c) < 0.001) {
                      *(undefined1 *)(param_8 + 0xc) = 1;
                    }
                  }
                  lVar10 = lVar10 + 0x8c;
                } while (lVar10 != *(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar8 + 0x18) * 0x8c);
              }
              lVar12 = lVar12 + 0x8c;
            } while (lVar12 != *(long *)(lVar5 + 0x18) + (ulong)*(uint *)(lVar5 + 0x20) * 0x8c);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 1));
    if ((*(uint *)(param_1 + 1) != 0) && (*(int *)(param_8 + 0x18) == 0)) {
      *(undefined1 *)(param_8 + 0xd) = 1;
      FUN_02e58d54(param_8,param_2,param_5);
    }
  }
  return;
}


