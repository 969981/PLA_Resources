/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004918; name: FUN_03004918
 */


ulong FUN_03004918(long param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  char *__s;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  short *psVar16;
  uint uVar17;
  short *psVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *local_b0;
  uint *local_a8;
  uint local_a0 [2];
  long local_98;
  code *local_68;
  
  if (*(int *)((long)param_2 + 0x2c) == 0x7fffffff) {
    uVar21 = *(uint *)(param_1 + 0x24) & 0xffffff;
    if (uVar21 != 0xffffff) {
      puVar14 = (uint *)(param_1 + 0x24);
      uVar17 = *(uint *)(param_1 + 0x24);
      do {
        uVar22 = (ulong)uVar21;
        uVar3 = *puVar14;
        if (uVar3 == uVar17) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar5) {
            *puVar14 = uVar17 + 0x1000000 & 0xff000000 |
                       *(uint *)(*(long *)(param_1 + 8) + uVar22 * 0x68 + 0x34) & 0xffffff;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_03004980;
          piVar1 = (int *)(param_1 + 0x28);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          iVar7 = *(int *)(param_1 + 0x2c);
          uVar17 = iVar7 + 1;
          if (uVar17 <= uVar21) {
            uVar21 = uVar21 + 1;
            if (uVar17 <= uVar21) {
              uVar17 = uVar21;
            }
            piVar1 = (int *)(param_1 + 0x2c);
            do {
              if (*piVar1 != iVar7) {
                do {
                  ClearExclusiveLocal();
                  iVar7 = *piVar1;
                  uVar17 = uVar21;
                  if (uVar21 < iVar7 + 1U) {
                    uVar17 = iVar7 + 1;
                  }
                  while (*piVar1 == iVar7) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = uVar17 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_03004a3c;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = uVar17 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
LAB_03004a3c:
          lVar12 = *(long *)(param_1 + 8) + uVar22 * 0x68;
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined8 *)(lVar12 + 0x56) = 0;
          *(undefined8 *)(lVar12 + 0x5e) = 0;
          *(undefined2 *)(lVar12 + 0x66) = 0;
          goto LAB_03004a58;
        }
        ClearExclusiveLocal();
LAB_03004980:
        uVar21 = uVar3 & 0xffffff;
        uVar17 = uVar3;
      } while (uVar21 != 0xffffff);
    }
    return 0x7fffffff;
  }
  iVar7 = FUN_03004e6c();
  if (iVar7 < 0) {
    return 0x7fffffff;
  }
  uVar22 = (ulong)*(uint *)((long)param_2 + 0x2c);
LAB_03004a58:
  lVar23 = *(long *)(param_1 + 8);
  uVar21 = (uint)uVar22;
  lVar12 = lVar23 + (long)(int)uVar21 * 0x68;
  FUN_03005a84(lVar12,param_2[1],param_4,param_2[2],param_5,*param_2,uVar22,
               *(undefined2 *)(param_2 + 3));
  *(undefined4 *)(lVar12 + 0x44) = *(undefined4 *)(param_2 + 5);
  lVar12 = tpidr_el0;
  lVar13 = *(long *)(lVar12 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar13;
  }
  plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,0);
  __s = (char *)(param_2[4] & 0xfffffffffffffffe);
  *puVar9 = &PTR_LAB_042b1370;
  puVar9[1] = 0xffffffff;
  puVar9[2] = 1;
  puVar9[3] = 0;
  puVar6 = PTR_PTR_0434a080;
  if (__s != (char *)0x0) {
    sVar10 = strlen(__s);
    uVar17 = (int)sVar10 + 1;
    puVar11 = (undefined8 *)
              (**(code **)(*(long *)puVar6 + 0x10))
                        (puVar6,(long)((sVar10 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar11 = puVar6;
    *(uint *)(puVar11 + 1) = uVar17;
    memcpy(puVar11 + 2,__s,(ulong)uVar17);
    puVar9[3] = (ulong)(puVar11 + 2) | 1;
  }
  lVar12 = (long)(int)uVar21 * 8;
  plVar8 = *(long **)(*(long *)(param_1 + 0x68) + lVar12);
  *(undefined8 **)(*(long *)(param_1 + 0x68) + lVar12) = puVar9;
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
LAB_03004b08:
    iVar7 = *(int *)(param_1 + 0x8c);
  }
  else {
    plVar2 = plVar8 + 2;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 != 0) goto LAB_03004b08;
    (**(code **)(*plVar8 + 0x18))();
    iVar7 = *(int *)(param_1 + 0x8c);
  }
  if (-1 < iVar7) {
    psVar18 = *(short **)(param_1 + 0x80);
    uVar15 = 0;
    psVar16 = psVar18;
    do {
      if (*psVar16 != -1) break;
      uVar15 = uVar15 + 1;
      psVar16 = psVar16 + 8;
    } while ((long)iVar7 + 1U != uVar15);
    if ((int)uVar15 <= iVar7) {
      uVar15 = uVar15 & 0xffffffff;
      lVar12 = ((long)(uVar22 << 0x20) >> 0x25) * 4;
      do {
        lVar13 = *(long *)((long)psVar18 + ((long)(uVar15 << 0x20) >> 0x1c) + 8);
        if (uVar21 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = *(long *)(lVar13 + 8);
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) & ~(1 << (ulong)(uVar21 & 0x1f));
          iVar7 = *(int *)(param_1 + 0x8c);
        }
        lVar20 = (long)(int)uVar15;
        lVar19 = lVar20 + -1;
        lVar13 = lVar20 << 0x20;
        lVar20 = lVar20 * 0x10;
        do {
          lVar13 = lVar13 + 0x100000000;
          lVar20 = lVar20 + 0x10;
          lVar19 = lVar19 + 1;
          if (iVar7 <= lVar19) break;
        } while (*(short *)(*(long *)(param_1 + 0x80) + lVar20) == -1);
        uVar15 = lVar13 >> 0x20;
        if (iVar7 < (int)((ulong)lVar13 >> 0x20)) break;
        psVar18 = *(short **)(param_1 + 0x80);
      } while( true );
    }
  }
  lVar13 = *(long *)(param_1 + 8);
  lVar12 = (long)(uVar22 << 0x20) >> 0x1d;
  if ((~*(uint *)(lVar13 + uVar22 * 0x68 + 8) & 0xffffff) != 0) {
    lVar19 = *(long *)(lVar13 + uVar22 * 0x68);
    local_a8 = local_a0;
    local_b0 = &LAB_03005964;
    local_68 = FUN_030059b0;
    local_98 = *(long *)(param_1 + 0xa8) + lVar12;
    if (*(long *)(lVar13 + (long)(int)uVar21 * 0x68) != lVar19) {
      local_98 = local_98 + 4;
    }
    local_a0[0] = uVar21;
    FUN_032c18bc(param_1 + 0x90,lVar19,&local_b0);
    if (local_a8 != (uint *)0x0) {
      if (local_68 == (code *)0x1) {
        puVar14 = local_a8 + -2;
        do {
          lVar19 = *(long *)puVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar5) {
            *(long *)puVar14 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 + -1 == 0) goto LAB_03004e08;
      }
      else if (local_68 == (code *)0x0) {
LAB_03004e08:
        FUN_0333dda0();
      }
      else {
        (*local_68)(local_a8,0);
      }
    }
  }
  if ((~*(uint *)(lVar13 + uVar22 * 0x68 + 0x18) & 0xffffff) != 0) {
    lVar19 = *(long *)(lVar13 + uVar22 * 0x68 + 0x10);
    local_a8 = local_a0;
    local_68 = FUN_030059b0;
    local_b0 = &LAB_03005964;
    local_98 = *(long *)(param_1 + 0xa8) + lVar12;
    if (*(long *)(lVar13 + (long)(int)uVar21 * 0x68) != lVar19) {
      local_98 = local_98 + 4;
    }
    local_a0[0] = uVar21;
    FUN_032c18bc(param_1 + 0x90,lVar19,&local_b0);
    if (local_a8 != (uint *)0x0) {
      if (local_68 == (code *)0x1) {
        puVar14 = local_a8 + -2;
        do {
          lVar12 = *(long *)puVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar5) {
            *(long *)puVar14 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 != 0) goto LAB_03004d80;
      }
      else if (local_68 != (code *)0x0) {
        (*local_68)(local_a8,0);
        goto LAB_03004d80;
      }
      FUN_0333dda0();
    }
  }
LAB_03004d80:
  uVar15 = uVar22 | 0x8000000000000000;
  if (param_3 != 0xffffffffffffffff) {
    uVar15 = param_3;
  }
  lVar23 = lVar23 + (long)(int)uVar21 * 0x68;
  *(ulong *)(lVar23 + 0x28) = uVar15;
  *(uint *)(lVar23 + 0x30) = uVar21;
  return uVar22;
}


