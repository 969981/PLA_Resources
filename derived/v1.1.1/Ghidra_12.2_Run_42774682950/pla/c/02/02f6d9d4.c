/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6d9d4; name: FUN_02f6d9d4
 */


void FUN_02f6d9d4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  void *__dest;
  long *plVar8;
  undefined8 uVar9;
  void *__src;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [2];
  byte local_68 [8];
  
  if ((*(int *)(param_1 + 0x98) == 0) && (uVar4 = *(uint *)(param_1 + 0x50), 0 < (int)uVar4)) {
    uVar15 = 0;
    plVar10 = (long *)(param_1 + 0x48);
    do {
      lVar11 = (ulong)(uVar15 & 0xffff) * 0x40 + *plVar10;
      if ((*(byte *)((long)plVar10 + lVar11 + 0x1e) & 1) == 0) {
        plVar8 = (long *)((long)plVar10 + lVar11 + 0x30);
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = lVar11 + (long)plVar8;
        }
        iVar7 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0xc0))();
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar7;
      }
      uVar15 = uVar15 + 1;
    } while (uVar4 != uVar15);
  }
  cVar5 = *(char *)(param_1 + 0x100);
  if (cVar5 == '\0') {
    uVar9 = 1;
  }
  else {
    if (cVar5 == '\x02') {
      plVar10 = (long *)(param_1 + 0xe8);
      lVar11 = *plVar10;
      uVar16 = *(undefined8 *)((long)plVar10 + lVar11 + 0x88);
      uVar9 = *(undefined8 *)((long)plVar10 + lVar11 + 0x80);
      uVar18 = *(undefined8 *)((long)plVar10 + lVar11 + 0x98);
      uVar17 = *(undefined8 *)((long)plVar10 + lVar11 + 0x90);
      if ((((float)uVar9 <= (float)uVar17 ||
           (float)((ulong)uVar9 >> 0x20) <= (float)((ulong)uVar17 >> 0x20)) ||
          (float)uVar16 <= (float)uVar18) ||
          (float)((ulong)uVar16 >> 0x20) <= (float)((ulong)uVar18 >> 0x20)) goto LAB_02f6da58;
    }
    else if ((cVar5 != '\x01') || (*(short *)(param_1 + 0xe4) != 0)) goto LAB_02f6da58;
    plVar10 = (long *)(param_1 + 200);
    if ((int)*(uint *)(param_1 + 0xd4) < 0) {
      uVar4 = *(uint *)(param_1 + 0xd4) & 0x7fffffff;
      if ((int)uVar4 <= (int)*(uint *)(param_1 + 0xd0)) {
        uVar4 = *(uint *)(param_1 + 0xd0);
      }
      if (*plVar10 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar10 + (long)plVar10;
      }
      lVar14 = tpidr_el0;
      lVar12 = *(long *)(lVar14 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar12;
      }
      plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,(ulong)uVar4 << 5);
    }
    *(undefined2 *)(param_1 + 0xd8) = 0;
    lVar11 = param_1 + 0xe8;
    *plVar10 = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uVar4 = *(uint *)(param_1 + 0xf0);
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xdc) = 0;
    if (uVar4 != 2) {
      uVar15 = *(uint *)(param_1 + 0xf4);
      if (uVar15 == 0) {
        *(uint *)(param_1 + 0xf4) = uVar4;
        uVar15 = uVar4;
      }
      if ((int)uVar4 < 2) {
        uVar3 = uVar15 & 0x7fffffff;
        if ((int)(uVar15 & 0x7fffffff) <= (int)uVar4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 2) {
          lVar14 = tpidr_el0;
          lVar12 = *(long *)(lVar14 + 0x38d490);
          if (lVar12 == 0) {
            lVar12 = FUN_0333d16c(0,1);
            *(long *)(lVar14 + 0x38d490) = lVar12;
          }
          plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
          __dest = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,0x100,0);
          if (*(long *)(param_1 + 0xe8) == 0) {
            __src = (void *)0x0;
          }
          else {
            __src = (void *)(*(long *)(param_1 + 0xe8) + lVar11);
          }
          memcpy(__dest,__src,(long)*(int *)(param_1 + 0xf0) << 7);
          if ((int)*(uint *)(param_1 + 0xf4) < 0) {
            uVar4 = *(uint *)(param_1 + 0xf4) & 0x7fffffff;
            if ((int)uVar4 <= (int)*(uint *)(param_1 + 0xf0)) {
              uVar4 = *(uint *)(param_1 + 0xf0);
            }
            if (*(long *)(param_1 + 0xe8) == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(param_1 + 0xe8) + lVar11;
            }
            lVar13 = *(long *)(lVar14 + 0x38d490);
            if (lVar13 == 0) {
              lVar13 = FUN_0333d16c(0,1);
              *(long *)(lVar14 + 0x38d490) = lVar13;
            }
            plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,(ulong)uVar4 << 7);
          }
          if (__dest == (void *)0x0) {
            lVar14 = 0;
          }
          else {
            lVar14 = (long)__dest - lVar11;
          }
          *(long *)(param_1 + 0xe8) = lVar14;
          *(undefined4 *)(param_1 + 0xf4) = 0x80000002;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 2;
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + lVar11);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[1] = 0x7f7fffee7f7fffee;
    *puVar2 = 0x7f7fffee7f7fffee;
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = 0xff7fffeeff7fffee;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    puVar2[5] = 0x7f7fffee7f7fffee;
    puVar2[4] = 0x7f7fffee7f7fffee;
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = 0xff7fffeeff7fffee;
    uVar9 = 2;
    puVar2[9] = 0x7f7fffee7f7fffee;
    puVar2[8] = 0x7f7fffee7f7fffee;
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = 0xff7fffeeff7fffee;
    lVar11 = *(long *)(param_1 + 0xe8) + lVar11;
    *(undefined8 *)(lVar11 + 0xe0) = 0;
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    *(undefined2 *)(lVar11 + 0xf0) = 0;
    *(undefined8 *)(lVar11 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)(lVar11 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)(lVar11 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)(lVar11 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)(lVar11 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)(lVar11 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)(lVar11 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0xf8) = 1;
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  FUN_02f992dc(param_1,uVar9);
LAB_02f6da58:
  FUN_02f9b898(param_1);
  if (*(char *)(param_1 + 0x94) != '\0') {
    plVar10 = (long *)(param_1 + 0x48);
    uVar4 = 0;
    do {
      uVar15 = uVar4;
      if (*(int *)(param_1 + 0x50) <= (int)uVar15) {
        return;
      }
      lVar11 = *plVar10;
      uVar4 = uVar15 + 1;
    } while ((*(byte *)((long)plVar10 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar11 + 0x1e) & 1) != 0);
    if (uVar15 + 1 != 0) {
      NEON_fmov(0x3f800000,4);
      do {
        puVar2 = (undefined8 *)((long)plVar10 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar11);
        uStack_88 = puVar2[5];
        local_90 = puVar2[4];
        uStack_a8 = puVar2[1];
        local_b0 = *puVar2;
        uStack_98 = puVar2[3];
        local_a0 = puVar2[2];
        local_80[1] = puVar2[7];
        lVar11 = puVar2[6];
        if (lVar11 == 0) {
          local_80[0] = 0;
        }
        else {
          local_80[0] = (long)(puVar2 + 6) + (lVar11 - (long)local_80);
        }
        lVar11 = local_80[0];
        if (((local_80[0] != 0) && (local_80[0] + (long)local_80 != 0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar8 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = *plVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar11 = local_80[0];
        }
        if (((local_80[0] + (long)local_80 != 0) && (lVar11 != 0)) &&
           (lVar11 = (**(code **)(DAT_0442d3b0 + (ulong)local_68[local_80[0]] * 0x200 + 0x48))(),
           lVar11 != 0)) {
          FUN_02f6df44(param_1,&local_b0,(ulong)(uVar15 & 0xffff));
        }
        if (((local_80[0] != 0) &&
            (plVar8 = (long *)(local_80[0] + (long)local_80), plVar8 != (long *)0x0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar1 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            lVar11 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
        uVar4 = uVar15 + 1;
        do {
          uVar15 = uVar4;
          if (*(int *)(param_1 + 0x50) <= (int)uVar15) {
            return;
          }
          lVar11 = *plVar10;
          uVar4 = uVar15 + 1;
        } while ((*(byte *)((long)plVar10 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar11 + 0x1e) & 1) !=
                 0);
      } while (uVar15 + 1 != 0);
    }
  }
  return;
}


