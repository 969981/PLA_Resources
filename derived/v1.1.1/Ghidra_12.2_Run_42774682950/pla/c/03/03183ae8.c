/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03183ae8; name: FUN_03183ae8
 */


void FUN_03183ae8(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  void *__src;
  void *__dest;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar13 = *param_1;
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    if (lVar13 != 0) {
      lVar14 = *param_2;
      uVar10 = *(undefined8 *)(lVar14 + 0x20);
      *(undefined8 *)(lVar14 + 0x20) = 0;
      plVar7 = *(long **)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = uVar10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      *(undefined1 *)(lVar13 + 0x30) = 1;
      uVar1 = *(uint *)(lVar13 + 0x40);
      if (0 < (int)uVar1) {
        plVar7 = *(long **)(lVar13 + 0x38);
        if (*plVar7 != 0) {
          lVar11 = **(long **)(lVar14 + 0x38);
          **(long **)(lVar14 + 0x38) = 0;
          plVar8 = (long *)*plVar7;
          *plVar7 = lVar11;
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar9 = plVar8 + 2;
            do {
              lVar11 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          *(undefined1 *)(plVar7 + 2) = 1;
        }
        if (uVar1 != 1) {
          uVar15 = 1;
          do {
            lVar11 = *(long *)(lVar13 + 0x38);
            plVar7 = (long *)(lVar11 + uVar15 * 0x18);
            if (*plVar7 != 0) {
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + uVar15 * 0x18);
              *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar15 * 0x18) = 0;
              plVar8 = (long *)*plVar7;
              *plVar7 = lVar12;
              if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                plVar7 = plVar8 + 2;
                do {
                  lVar12 = *plVar7;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar5) {
                    *plVar7 = lVar12 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar12 + -1 == 0) {
                  (**(code **)(*plVar8 + 0x18))();
                }
              }
              *(undefined1 *)(lVar11 + uVar15 * 0x18 + 0x10) = 1;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar1);
        }
      }
    }
  }
  else {
    if (lVar13 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar10 = *param_3;
      }
      else {
        uVar10 = FUN_0317c11c(param_3);
      }
      FUN_001d530c(uVar10,(int)param_1[3]);
      plVar7 = (long *)*param_1;
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
    }
    plVar8 = (long *)*param_2;
    plVar9 = plVar7;
    if (plVar7 != plVar8) {
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar8 = plVar8 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar7 = (long *)*param_1;
        plVar8 = (long *)*param_2;
      }
      *param_1 = (long)plVar8;
      plVar9 = plVar8;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar8 = plVar7 + 2;
          do {
            lVar13 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
            plVar9 = (long *)*param_1;
            goto joined_r0x03183f08;
          }
        }
        plVar9 = (long *)*param_1;
      }
    }
joined_r0x03183f08:
    if (plVar9 != (long *)0x0) {
      lVar13 = param_1[4];
      plVar9[0xd] = param_1[5];
      plVar9[0xc] = lVar13;
      lVar13 = param_1[6];
      plVar9[0xf] = param_1[7];
      plVar9[0xe] = lVar13;
      lVar13 = param_1[8];
      plVar9[0x11] = param_1[9];
      plVar9[0x10] = lVar13;
      lVar13 = param_1[10];
      plVar9[0x13] = param_1[0xb];
      plVar9[0x12] = lVar13;
      lVar13 = param_1[0xc];
      plVar9[0x15] = param_1[0xd];
      plVar9[0x14] = lVar13;
      lVar13 = param_1[0xe];
      plVar9[0x17] = param_1[0xf];
      plVar9[0x16] = lVar13;
      lVar14 = *param_1;
      lVar13 = *(long *)(lVar14 + 0x20);
      lVar11 = *(long *)(lVar13 + 0x68);
      uStack_78 = *(undefined8 *)(lVar11 + 0x98);
      local_80 = *(undefined8 *)(lVar11 + 0x90);
      uStack_68 = *(undefined8 *)(lVar11 + 0xa8);
      uStack_70 = *(undefined8 *)(lVar11 + 0xa0);
      fVar16 = (float)local_80;
      fVar18 = (float)uStack_70;
      fVar17 = (float)((ulong)local_80 >> 0x20);
      fVar20 = (float)((ulong)uStack_70 >> 0x20);
      fVar19 = (float)uStack_78;
      fVar21 = (float)uStack_68;
      if (fVar19 <= fVar21 && (fVar17 <= fVar20 && fVar16 <= fVar18)) {
        fVar24 = (fVar16 + fVar18) * 0.5;
        fVar25 = (fVar17 + fVar20) * 0.5;
        fVar26 = (fVar19 + fVar21) * 0.5;
        fVar16 = (fVar18 - fVar16) * 0.5;
        fVar18 = (fVar20 - fVar17) * 0.5;
        fVar20 = (fVar21 - fVar19) * 0.5;
        fVar29 = (float)*(undefined8 *)(lVar14 + 0x70);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20);
        fVar31 = (float)*(undefined8 *)(lVar14 + 0x78);
        fVar32 = (float)((ulong)*(undefined8 *)(lVar14 + 0x78) >> 0x20);
        fVar27 = (float)*(undefined8 *)(lVar14 + 0x60);
        fVar28 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
        fVar22 = (float)*(undefined8 *)(lVar14 + 0x68);
        fVar23 = (float)((ulong)*(undefined8 *)(lVar14 + 0x68) >> 0x20);
        fVar33 = (float)*(undefined8 *)(lVar14 + 0x80);
        fVar34 = (float)((ulong)*(undefined8 *)(lVar14 + 0x80) >> 0x20);
        fVar35 = (float)*(undefined8 *)(lVar14 + 0x88);
        fVar36 = (float)((ulong)*(undefined8 *)(lVar14 + 0x88) >> 0x20);
        fVar17 = ABS(fVar27 * fVar16) + ABS(fVar29 * fVar18) + ABS(fVar33 * fVar20);
        fVar19 = ABS(fVar28 * fVar16) + ABS(fVar30 * fVar18) + ABS(fVar34 * fVar20);
        fVar21 = ABS(fVar22 * fVar16) + ABS(fVar31 * fVar18) + ABS(fVar35 * fVar20);
        fVar16 = ABS(fVar23 * fVar16) + ABS(fVar32 * fVar18) + ABS(fVar36 * fVar20);
        fVar18 = (float)*(undefined8 *)(lVar14 + 0x90) +
                 fVar33 * fVar26 + fVar27 * fVar24 + fVar29 * fVar25;
        fVar20 = (float)((ulong)*(undefined8 *)(lVar14 + 0x90) >> 0x20) +
                 fVar34 * fVar26 + fVar28 * fVar24 + fVar30 * fVar25;
        fVar27 = (float)*(undefined8 *)(lVar14 + 0x98) +
                 fVar35 * fVar26 + fVar22 * fVar24 + fVar31 * fVar25;
        fVar28 = (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20) +
                 fVar36 * fVar26 + fVar23 * fVar24 + fVar32 * fVar25;
        uStack_70 = CONCAT44(fVar20 + fVar19,fVar18 + fVar17);
        uStack_68 = CONCAT44(fVar28 + fVar16,fVar27 + fVar21);
        local_80 = CONCAT44(fVar20 - fVar19,fVar18 - fVar17);
        uStack_78 = CONCAT44(fVar28 - fVar16,fVar27 - fVar21);
      }
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar10 = *param_3;
      }
      else {
        uVar10 = FUN_0317c11c(param_3);
        lVar13 = *(long *)(*param_1 + 0x20);
      }
      uVar6 = FUN_001d4c1c(uVar10,&local_80,*(undefined4 *)(lVar13 + 0x17c));
      *(undefined4 *)(param_1 + 3) = uVar6;
    }
  }
  lVar13 = param_1[1];
  if ((*(byte *)(param_2 + 0x1c) >> 1 & 1) == 0) {
    if (lVar13 != 0) {
      FUN_031a4908(lVar13,param_2[1]);
      bVar3 = *(byte *)(param_2 + 0x1c);
      goto joined_r0x03183fac;
    }
  }
  else {
    plVar7 = (long *)0x0;
    if (lVar13 != 0) {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar10 = *param_3;
      }
      else {
        uVar10 = FUN_0317c11c(param_3);
      }
      FUN_001d530c(uVar10,(int)param_1[3]);
      plVar7 = (long *)param_1[1];
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
    }
    plVar8 = (long *)param_2[1];
    plVar9 = plVar7;
    if (plVar7 != plVar8) {
      if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
        param_1[1] = (long)plVar8;
      }
      else {
        plVar8 = plVar8 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar7 = (long *)param_1[1];
        plVar8 = (long *)param_2[1];
        param_1[1] = (long)plVar8;
      }
      plVar9 = plVar8;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar8 = plVar7 + 2;
          do {
            lVar13 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
            plVar9 = (long *)param_1[1];
            goto joined_r0x03184128;
          }
        }
        plVar9 = (long *)param_1[1];
      }
    }
joined_r0x03184128:
    if (plVar9 != (long *)0x0) {
      *(char *)(plVar9 + 8) = (char)param_1[0x10];
      lVar13 = param_1[0x12];
      plVar9[0xb] = param_1[0x13];
      plVar9[10] = lVar13;
      FUN_03175f20(param_1[1],&local_80);
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar10 = *param_3;
      }
      else {
        uVar10 = FUN_0317c11c(param_3);
      }
      uVar6 = FUN_001d4c1c(uVar10,&local_80,*(undefined4 *)(*(long *)(param_1[1] + 0x20) + 0x94));
      *(undefined4 *)(param_1 + 3) = uVar6;
      bVar3 = *(byte *)(param_2 + 0x1c);
      goto joined_r0x03183fac;
    }
  }
  bVar3 = *(byte *)(param_2 + 0x1c);
joined_r0x03183fac:
  if ((bVar3 >> 2 & 1) == 0) {
    lVar13 = param_1[2];
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(param_2[2] + 0x20);
      *(undefined8 *)(param_2[2] + 0x20) = 0;
      plVar7 = *(long **)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = uVar10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar14 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      *(undefined1 *)(lVar13 + 0x30) = 1;
    }
  }
  else {
    plVar9 = (long *)param_1[2];
    plVar7 = (long *)param_2[2];
    plVar8 = plVar9;
    if (plVar9 != plVar7) {
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar7 = plVar7 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar9 = (long *)param_1[2];
        plVar7 = (long *)param_2[2];
      }
      param_1[2] = (long)plVar7;
      plVar8 = plVar7;
      if (plVar9 != (long *)0x0) {
        if (plVar9[1] != 0) {
          plVar7 = plVar9 + 2;
          do {
            lVar13 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        plVar8 = (long *)param_1[2];
      }
    }
    if (plVar8 != (long *)0x0) {
      lVar13 = param_1[4];
      plVar8[9] = param_1[5];
      plVar8[8] = lVar13;
      lVar13 = param_1[6];
      plVar8[0xb] = param_1[7];
      plVar8[10] = lVar13;
      lVar13 = param_1[8];
      plVar8[0xd] = param_1[9];
      plVar8[0xc] = lVar13;
      lVar13 = param_1[10];
      plVar8[0xf] = param_1[0xb];
      plVar8[0xe] = lVar13;
    }
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | *(byte *)(param_2 + 0x1c);
  if (param_2 != param_1) {
    __src = (void *)param_2[0x14];
    iVar2 = (int)param_2[0x15];
    __dest = (void *)param_1[0x14];
    if ((int)(*(uint *)((long)param_1 + 0xac) & 0x3fffffff) < iVar2) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar2,8,__dest,(int)param_1[0x15]);
      param_1[0x14] = (long)__dest;
    }
    memcpy(__dest,__src,(long)iVar2 << 3);
    *(int *)(param_1 + 0x15) = iVar2;
  }
  FUN_032c27dc(param_1 + 0x16,param_2 + 0x16);
  FUN_0317b180(param_1 + 0x18,param_2 + 0x18);
  return;
}


