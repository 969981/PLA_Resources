/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e8800; name: FUN_030e8800
 */


void FUN_030e8800(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar14 = param_2 & 0xffffff;
  if (uVar14 == 0xffffff) {
    uStack_98 = 0xffffffffffffffff;
  }
  else {
    uStack_98 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar14 * 0xc0 + 0xb0);
  }
  local_a0 = CONCAT26(local_a0._6_2_,0x1d02000010);
  plVar6 = *(long **)(param_1 + 0x7f0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_a0);
  }
  lVar15 = *(long *)(param_1 + 0x38);
  lVar11 = lVar15 + uVar14 * 0xc0;
  puVar12 = (undefined8 *)(lVar11 + 0x60);
  local_78 = *puVar12;
  local_70 = *(undefined8 *)(lVar11 + 0x68);
  uStack_68 = *(undefined8 *)(lVar11 + 0x70);
  if ((*(uint *)(lVar11 + 0x54) >> 1 & 1) == 0) {
    uStack_88 = *(ulong *)(lVar11 + 0x68);
    uStack_90 = *puVar12;
    uStack_98 = uStack_88 >> 0x20;
    local_a0 = *(undefined8 *)(lVar15 + uVar14 * 0xc0 + 0x70);
    FUN_030317f0(param_1,&local_a0,param_2 & 0xffffffff);
    piVar13 = *(int **)(param_1 + 0x138);
    puVar1 = (undefined8 *)(param_1 + 0x138);
    piVar7 = piVar13 + 1;
    do {
      iVar8 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (0xff < iVar8) {
      lVar5 = tpidr_el0;
      do {
        lVar10 = *(long *)(lVar5 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar10;
        }
        plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        piVar7 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x410,0);
        lVar10 = 0;
        do {
          lVar2 = lVar10 + 0x20;
          *(undefined8 *)((long)piVar7 + lVar10 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar10 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar10 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar10 + 0x28) = 0xffffff00ffffff;
          lVar10 = lVar2;
        } while (lVar2 != 0x400);
        if (piVar13 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar13 + 1;
        }
        *piVar7 = iVar8;
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        do {
          if ((int *)*puVar1 != piVar13) {
            ClearExclusiveLocal();
            lVar10 = *(long *)(lVar5 + 0x38d490);
            if (lVar10 == 0) {
              lVar10 = FUN_0333d16c(0,1);
              *(long *)(lVar5 + 0x38d490) = lVar10;
            }
            plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
            (**(code **)(*plVar6 + 0x18))(plVar6,piVar7,0x410);
            goto LAB_030e8a84;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = piVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (piVar13 != (int *)0x0) {
          *(int **)(piVar13 + 2) = piVar7;
        }
LAB_030e8a84:
        piVar13 = (int *)*puVar1;
        piVar7 = piVar13 + 1;
        do {
          iVar8 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while (0xff < iVar8);
    }
    piVar13[(long)iVar8 + 4] = (int)param_2;
  }
  else if (((*(uint *)(lVar11 + 0x54) & 9) == 0) &&
          ((*(byte *)(lVar15 + uVar14 * 0xc0 + 0x88) & 1) != 0)) {
    FUN_03030748(param_1,param_2 & 0xffffffff,0);
  }
  else if ((*(long *)(param_1 + 0x698) != 0) &&
          (pcVar9 = (char *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) +
                             (long)*(int *)(lVar15 + uVar14 * 0xc0 + 0x80) * 0x20 + 0xb),
          *pcVar9 != -1)) {
    *pcVar9 = '\0';
  }
  lVar15 = lVar15 + uVar14 * 0xc0;
  *(undefined2 *)(lVar15 + 0x5e) = 0xffff;
  *(undefined4 *)(lVar15 + 0x5a) = 0xffffffff;
  *(ushort *)(lVar15 + 0x58) = *(ushort *)(lVar15 + 0x58) | 0x200;
  FUN_03103fe8(*(undefined8 *)(param_1 + 0x498),lVar11,&local_78,puVar12);
  return;
}


