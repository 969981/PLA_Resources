/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01353d7c; name: FUN_01353d7c
 */


void FUN_01353d7c(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong unaff_x25;
  float fVar14;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long *local_68 [3];
  int local_44;
  
  plVar10 = (long *)*param_4;
  local_44 = param_2;
  if (plVar10 != (long *)0x0) {
    unaff_x25 = plVar10[0xb];
    if (*(undefined8 **)(unaff_x25 + 0x18) == (undefined8 *)0x0) goto LAB_01354138;
    if (*(long *)(unaff_x25 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(unaff_x25 + 0x18))();
      *(undefined8 *)(unaff_x25 + 0x10) = uVar7;
    }
    piVar1 = (int *)(unaff_x25 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0 = *param_3;
  local_98 = param_3[1];
  local_90 = param_3[2];
  local_88 = (long *)param_3[3];
  local_80 = plVar10;
  local_78 = param_5;
  uStack_74 = param_6;
  if (local_88 == (long *)0x0) {
    if (plVar10 == (long *)0x0) goto LAB_013540f4;
LAB_01353e14:
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01354138:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_70 = 0;
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  else {
    (**(code **)(*local_88 + 0x18))();
    if (plVar10 != (long *)0x0) goto LAB_01353e14;
LAB_013540f4:
    local_70 = 0;
  }
  uVar13 = *(ulong *)(param_1 + 0x70);
  plVar2 = (long *)(param_1 + 0x68);
  uVar11 = (ulong)param_2;
  if (uVar13 != 0) {
    uVar8 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      unaff_x25 = uVar13 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar13 <= uVar11) {
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar11 / uVar13;
        }
        unaff_x25 = uVar11 - uVar6 * uVar13;
      }
    }
    plVar9 = *(long **)(*plVar2 + unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          plVar9 = (long *)*plVar9;
          if ((plVar9 == (long *)0x0) ||
             (plVar9[1] != uVar11 && (plVar9[1] & uVar13 - 1) != unaff_x25)) goto LAB_01353ee4;
        } while ((int)plVar9[2] != param_2);
      }
      else {
        do {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01353ee4;
          uVar8 = plVar9[1];
          if (uVar8 != uVar11) {
            if (uVar13 <= uVar8) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar8 / uVar13;
              }
              uVar8 = uVar8 - uVar6 * uVar13;
            }
            if (uVar8 != unaff_x25) goto LAB_01353ee4;
          }
        } while (*(int *)(plVar9 + 2) != param_2);
      }
      goto LAB_01353f98;
    }
  }
LAB_01353ee4:
  FUN_01354150(local_68,plVar2,uVar11,&local_44,&local_a0);
  fVar14 = (float)(*(long *)(param_1 + 0xc0) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 200) * (float)uVar13 < fVar14)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar8 = (ulong)(fVar14 / *(float *)(param_1 + 200));
    if (uVar8 <= uVar13) {
      uVar8 = uVar13;
    }
    FUN_0135432c(plVar2,uVar8);
    uVar13 = *(ulong *)(param_1 + 0x70);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      unaff_x25 = uVar11;
    }
    else {
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = uVar11 / uVar13;
      }
      unaff_x25 = uVar11 - uVar8 * uVar13;
    }
  }
  plVar10 = *(long **)(*plVar2 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(param_1 + 0x98);
    *local_68[0] = *plVar10;
    *plVar10 = (long)local_68[0];
    *(long **)(*(long *)(param_1 + 0x68) + unaff_x25 * 8) = plVar10;
    if (*local_68[0] != 0) {
      uVar11 = *(ulong *)(*local_68[0] + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar11 = uVar11 & uVar13 - 1;
      }
      else if (uVar13 <= uVar11) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = uVar11 / uVar13;
        }
        uVar11 = uVar11 - uVar8 * uVar13;
      }
      *(long **)(*plVar2 + uVar11 * 8) = local_68[0];
    }
  }
  else {
    *local_68[0] = *plVar10;
    *plVar10 = (long)local_68[0];
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  plVar10 = local_80;
LAB_01353f98:
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return;
}


