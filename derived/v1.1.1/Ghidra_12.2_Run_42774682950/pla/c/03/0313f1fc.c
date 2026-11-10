/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0313f1fc; name: FUN_0313f1fc
 */


/* WARNING: Removing unreachable block (ram,0x0313f324) */

long FUN_0313f1fc(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  char *__s;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  puVar6 = PTR_PTR_0434a080;
  uVar15 = *(ulong *)(param_1 + 0x20);
  __s = (char *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffe);
  if ((char *)(uVar15 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      sVar8 = strlen(__s);
      uVar12 = (int)sVar8 + 1;
      puVar9 = (undefined8 *)
               (**(code **)(*(long *)puVar6 + 0x10))
                         (puVar6,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar9 = puVar6;
      *(uint *)(puVar9 + 1) = uVar12;
      memcpy(puVar9 + 2,__s,(ulong)uVar12);
      *(ulong *)(param_1 + 0x20) = (ulong)(puVar9 + 2) | 1;
    }
    if ((uVar15 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar7 = *(long *)(lVar18 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar7;
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      *(undefined8 *)(uVar15 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
    }
  }
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  puVar6 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_0313f61c;
  uVar12 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
  uVar2 = *(uint *)(param_2 + 0x38);
  lVar18 = *(long *)(param_2 + 0x30);
  if ((int)uVar12 < (int)uVar2) {
    plVar16 = *(long **)(param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x38);
    uVar15 = (ulong)uVar3;
    local_88 = 8;
    local_90 = (long)(int)uVar2 << 3;
    local_84 = uVar2;
    if ((int)uVar2 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      if ((int)uVar12 <= (int)local_84) goto LAB_0313f2a0;
LAB_0313f2ac:
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      if ((int)uVar2 < (int)uVar12) goto LAB_0313f2ac;
LAB_0313f2a0:
      if (0x3fffffff < (int)local_84) goto LAB_0313f2ac;
    }
    uVar12 = *(uint *)(param_1 + 0x3c);
    lVar7 = (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_90,&local_90);
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        lVar14 = 0;
LAB_0313f404:
        *(long *)(lVar7 + lVar14 * 8) = plVar16[lVar14];
        plVar16[lVar14] = 0;
      }
      else {
        lVar14 = 0;
        plVar10 = plVar16 + 1;
        do {
          plVar17 = (long *)(lVar7 + lVar14 * 8);
          lVar14 = lVar14 + 2;
          *plVar17 = plVar10[-1];
          plVar10[-1] = 0;
          plVar17[1] = *plVar10;
          *plVar10 = 0;
          plVar10 = plVar10 + 2;
        } while (uVar15 - (uVar15 & 1) != lVar14);
        if ((uVar3 & 1) != 0) goto LAB_0313f404;
      }
      uVar19 = 0;
      plVar10 = (long *)*plVar16;
      while( true ) {
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar17 = plVar10 + 2;
          do {
            lVar14 = *plVar17;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        uVar19 = uVar19 + 1;
        if (uVar19 == uVar15) break;
        plVar10 = (long *)plVar16[uVar19];
      }
    }
    if (-1 < (int)uVar12) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,plVar16,((ulong)uVar12 & 0x3fffffff) << 3);
    }
    if (local_90 < 0x1fffffff8) {
      uVar11 = (undefined4)(local_90 >> 3);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar11;
    *(long *)(param_1 + 0x30) = lVar7;
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if ((int)uVar2 < (int)uVar12) {
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 8);
    plVar17 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar12 * 8 + -8);
    plVar10 = (long *)*plVar17;
    if (plVar10 != (long *)0x0) goto LAB_0313f4d8;
LAB_0313f4c8:
    if (plVar17 != plVar16) {
      while( true ) {
        plVar17 = plVar17 + -1;
        plVar10 = (long *)*plVar17;
        if (plVar10 == (long *)0x0) break;
LAB_0313f4d8:
        if (plVar10[1] == 0) break;
        plVar1 = plVar10 + 2;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 + -1 != 0) break;
        (**(code **)(*plVar10 + 0x18))();
        if (plVar17 == plVar16) goto LAB_0313f50c;
      }
      goto LAB_0313f4c8;
    }
LAB_0313f50c:
    uVar12 = *(uint *)(param_1 + 0x38);
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if ((int)uVar2 <= (int)uVar12) {
    uVar12 = uVar2;
  }
  if ((lVar7 != lVar18) && (0 < (int)uVar12)) {
    uVar15 = 0;
    do {
      lVar14 = uVar15 * 8;
      plVar10 = *(long **)(lVar7 + lVar14);
      plVar16 = *(long **)(lVar18 + lVar14);
      if (plVar10 != plVar16) {
        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
          plVar16 = plVar16 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar10 = *(long **)(lVar7 + lVar14);
          plVar16 = *(long **)(lVar18 + lVar14);
        }
        *(long **)(lVar7 + uVar15 * 8) = plVar16;
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar16 = plVar10 + 2;
          do {
            lVar14 = *plVar16;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar12);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (0 < (int)(uVar2 - uVar12)) {
    iVar13 = 0;
    plVar16 = (long *)(lVar18 + (long)(int)uVar12 * 8);
    plVar10 = (long *)(lVar7 + (long)(int)uVar12 * 8);
    do {
      lVar18 = *plVar16;
      *plVar10 = lVar18;
      if ((lVar18 != 0) && (*(long *)(lVar18 + 8) != 0)) {
        plVar17 = (long *)(lVar18 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      iVar13 = iVar13 + 1;
      plVar16 = plVar16 + 1;
      plVar10 = plVar10 + 1;
    } while (iVar13 != uVar2 - uVar12);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
LAB_0313f61c:
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}


