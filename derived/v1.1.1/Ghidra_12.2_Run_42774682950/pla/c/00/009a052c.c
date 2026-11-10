/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a052c; name: FUN_009a052c
 */


void FUN_009a052c(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  byte local_54 [4];
  
  local_54[0] = (byte)param_3;
  local_88 = *(long **)(param_2 + 8);
  local_68 = (long *)FUN_009bb918(local_88,&local_88,local_54);
  if (local_68 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    lVar14 = local_68[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_009a095c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    param_3 = (uint)local_54[0];
    plVar16 = local_68;
  }
  if ((param_3 - 6 & 0xff) < 0x18) {
    FUN_00923c68(*(undefined8 *)(param_2 + 0x330));
    uVar10 = FUN_00935f8c();
    if (((uVar10 & 1) != 0) && (uVar10 = *(ulong *)(param_2 + 0xd8), uVar10 != 0)) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar13 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uVar11 = (ulong)(uVar10 - 1 != 0);
      if (uVar13 < 2) {
        uVar11 = (ulong)~(uint)uVar10 & 1;
      }
      plVar12 = *(long **)(*(long *)(param_2 + 0xd0) + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar12[1] == 1) {
              if ((int)plVar12[2] == 1) goto LAB_009a0848;
            }
            else if ((plVar12[1] & uVar10 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar12[1];
            if (uVar13 == 1) {
              if ((int)plVar12[2] == 1) goto LAB_009a0848;
            }
            else {
              if (uVar10 <= uVar13) {
                uVar7 = 0;
                if (uVar10 != 0) {
                  uVar7 = uVar13 / uVar10;
                }
                uVar13 = uVar13 - uVar7 * uVar10;
              }
              if (uVar13 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_009a0778;
  }
LAB_009a05c8:
  local_88 = (long *)0x4fc5062f7dbfda76;
  pcStack_80 = "bin/effect/battle/sequence/ee620.wbin";
  local_78 = 0x25;
  local_70 = (long *)0x0;
  FUN_00adc9e8(plVar16,&local_88,*(undefined8 *)(param_2 + 8));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  lVar14 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0),param_3);
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_02c5d638(*(undefined8 *)(*(long *)(lVar14 + 0x70) + 0x60));
  }
  (**(code **)(*plVar16 + 0xe0))(plVar16,0,uVar8);
  goto LAB_009a0648;
LAB_009a0848:
  FUN_00923c68(*(undefined8 *)(param_2 + 0x330));
  uVar10 = FUN_00935f9c();
  if ((uVar10 & 1) != 0) goto LAB_009a05c8;
LAB_009a0778:
  local_88 = (long *)0xf1a57b26d1e3db93;
  pcStack_80 = "bin/effect/battle/sequence/ee621.wbin";
  local_78 = 0x25;
  local_70 = (long *)0x0;
  FUN_00adc9e8(plVar16,&local_88,*(undefined8 *)(param_2 + 8));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
LAB_009a0648:
  lVar14 = plVar16[0xb];
  local_88 = plVar16;
  if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_009a095c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar14 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
    *(undefined8 *)(lVar14 + 0x10) = uVar9;
  }
  plVar16 = local_88;
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined4 *)(local_88 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_88);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar14 = FUN_0099d310(plVar16 + 10), lVar14 != 0)) {
    uVar8 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar14 + 0xf0) = uVar8;
    plVar3 = *(long **)(lVar14 + 0x80);
    for (plVar12 = *(long **)(lVar14 + 0x78); plVar12 != plVar3; plVar12 = plVar12 + 1) {
      puVar17 = *(undefined8 **)(*plVar12 + 0xe0);
      puVar4 = *(undefined8 **)(*plVar12 + 0xe8);
      if ((puVar17 != puVar4) &&
         ((**(code **)(*(long *)*puVar17 + 0x90))(uVar8), puVar17 + 1 != puVar4)) {
        (**(code **)(*(long *)puVar17[1] + 0x90))(uVar8);
        for (puVar17 = puVar17 + 2; puVar17 != puVar4; puVar17 = puVar17 + 1) {
          (**(code **)(*(long *)*puVar17 + 0x90))(uVar8);
        }
      }
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar14 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_68);
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_009a095c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar14;
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


