/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2cf74; name: FUN_02b2cf74
 */


uint FUN_02b2cf74(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0xd0) + 0xb0) + (param_2 & 0xffffffff) * 0xd0 +
                   0x48);
  uVar15 = *(ulong *)(lVar8 + 8);
  plVar14 = *(long **)(lVar8 + 0x20);
  if (plVar14 == (long *)0x0) {
    uVar9 = *(ulong *)(param_1 + 0x70);
  }
  else {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    uVar9 = *(ulong *)(param_1 + 0x70);
  }
  if (uVar9 == 0) {
    uVar7 = 0;
    goto joined_r0x02b2d1e8;
  }
  uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar12 = uVar9 - 1 & uVar15;
  }
  else {
    uVar12 = uVar15;
    if (uVar9 <= uVar15) {
      uVar12 = 0;
      if (uVar9 != 0) {
        uVar12 = uVar15 / uVar9;
      }
      uVar12 = uVar15 - uVar12 * uVar9;
    }
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x68) + uVar12 * 8);
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if (uVar11 < 2) {
      do {
        if (plVar13[1] == uVar15) {
          if (plVar13[2] == uVar15) goto LAB_02b2d0a0;
        }
        else if ((plVar13[1] & uVar9 - 1) != uVar12) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == uVar15) {
          if (plVar13[2] == uVar15) goto LAB_02b2d0a0;
        }
        else {
          if (uVar9 <= uVar11) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar5 * uVar9;
          }
          if (uVar11 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_02b2d12c:
  uVar7 = 0;
joined_r0x02b2d1e8:
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return uVar7 & 1;
LAB_02b2d0a0:
  plVar13 = (long *)plVar13[6];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pcVar10 = (char *)param_3[5];
    if (*pcVar10 == '\0') {
      local_50 = *param_3;
      local_48 = param_3[1];
      local_40 = param_3[2];
      local_38 = (long *)param_3[3];
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      uVar7 = FUN_02b62580(plVar13,&local_50,*(undefined4 *)(param_3 + 8));
      plVar6 = local_38;
    }
    else {
      local_70 = *param_3;
      local_68 = param_3[1];
      local_60 = param_3[2];
      local_58 = (long *)param_3[3];
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))();
        pcVar10 = (char *)param_3[5];
      }
      local_90 = param_3[4];
      local_80 = param_3[6];
      local_78 = (long *)param_3[7];
      pcStack_88 = pcVar10;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      uVar7 = FUN_02b62868(plVar13,&local_70,&local_90);
      plVar6 = local_58;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
        plVar6 = local_58;
      }
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    goto joined_r0x02b2d1e8;
  }
  goto LAB_02b2d12c;
}


