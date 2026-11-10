/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2cafc; name: FUN_02b2cafc
 */


void FUN_02b2cafc(long param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_80;
  char local_78 [8];
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  long *local_48;
  
  uVar8 = *(ulong *)(param_1 + 0x70);
  if (uVar8 == 0) {
    return;
  }
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = *param_3;
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar10 = uVar8 - 1 & uVar6;
  }
  else {
    uVar10 = uVar6;
    if (uVar8 <= uVar6) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar6 / uVar8;
      }
      uVar10 = uVar6 - uVar10 * uVar8;
    }
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
  if (plVar12 == (long *)0x0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (1 < uVar9) {
    do {
      uVar9 = plVar12[1];
      if (uVar9 == uVar6) {
        if (plVar12[2] == uVar6) goto LAB_02b2cc34;
      }
      else {
        if (uVar8 <= uVar9) {
          uVar5 = 0;
          if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar5 * uVar8;
        }
        if (uVar9 != uVar10) {
          return;
        }
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar12[1] == uVar6) {
      if (plVar12[2] == uVar6) goto LAB_02b2cc34;
    }
    else if ((plVar12[1] & uVar8 - 1) != uVar10) {
      return;
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_02b2ce50:
  local_80 = (long *)plVar11[6];
  if (local_80 != (long *)0x0) {
    plVar11 = local_80 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_80 != (long *)0x0) {
      (**(code **)(*DAT_043ef740 + 0x70))(DAT_043ef740,&local_80,param_4);
      uVar8 = FUN_02b62410(local_80);
      if ((uVar8 & 1) != 0) {
        uVar13 = *param_2;
        local_78[0] = '\0';
        if ((char)local_80[0x23] != '\0') {
          local_70 = local_80[0x24];
          local_68 = local_80[0x25];
          local_60 = local_80[0x26];
          local_58 = (long *)local_80[0x27];
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x18))();
          }
          local_78[0] = '\x01';
        }
        FUN_02ba7ba0(uVar13,0x1f,local_78);
        if (local_78[0] != '\0') {
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          local_78[0] = '\0';
        }
      }
      if (local_80 != (long *)0x0) {
        plVar11 = local_80 + 10;
        do {
          iVar4 = (int)*plVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
    }
  }
  goto joined_r0x02b2cf30;
LAB_02b2cc34:
  local_48 = (long *)plVar12[6];
  if (local_48 == (long *)0x0) {
    return;
  }
  plVar12 = local_48 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *(int *)plVar12 = (int)*plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (local_48 == (long *)0x0) {
    return;
  }
  (**(code **)(*DAT_043ef740 + 0x70))(DAT_043ef740,&local_48,param_4);
  uVar8 = FUN_02b62410(local_48);
  if ((uVar8 & 1) != 0) {
    uVar13 = *param_2;
    local_78[0] = '\0';
    if ((char)local_48[0x23] != '\0') {
      local_70 = local_48[0x24];
      local_68 = local_48[0x25];
      local_60 = local_48[0x26];
      local_58 = (long *)local_48[0x27];
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))();
      }
      local_78[0] = '\x01';
    }
    FUN_02ba7ba0(uVar13,0x1f,local_78);
    cVar2 = '\0';
    if (local_78[0] != '\0') {
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_78[0] = '\0';
      cVar2 = local_78[0];
    }
    goto joined_r0x02b2ce24;
  }
  FUN_02b631a8(local_48);
  lVar7 = local_48[0xb];
  plVar12 = *(long **)(lVar7 + 0x180);
  uVar8 = *(ulong *)(lVar7 + 0x168);
  pcVar1 = *(char **)(lVar7 + 0x170);
  if (plVar12 == (long *)0x0) {
    cVar2 = *pcVar1;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    cVar2 = *pcVar1;
  }
  if (cVar2 != '\0') {
    uVar9 = *(ulong *)(param_1 + 0x70);
    if (uVar9 != 0) {
      uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar10 = uVar9 - 1 & uVar8;
      }
      else {
        uVar10 = uVar8;
        if (uVar9 <= uVar8) {
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = uVar8 / uVar9;
          }
          uVar10 = uVar8 - uVar10 * uVar9;
        }
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar11[1] == uVar8) {
              if (plVar11[2] == uVar8) goto LAB_02b2ce50;
            }
            else if ((plVar11[1] & uVar9 - 1) != uVar10) break;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar11[1];
            if (uVar6 == uVar8) {
              if (plVar11[2] == uVar8) goto LAB_02b2ce50;
            }
            else {
              if (uVar9 <= uVar6) {
                uVar5 = 0;
                if (uVar9 != 0) {
                  uVar5 = uVar6 / uVar9;
                }
                uVar6 = uVar6 - uVar5 * uVar9;
              }
              if (uVar6 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    local_80 = (long *)0x0;
  }
joined_r0x02b2cf30:
  cVar2 = local_78[0];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
    cVar2 = local_78[0];
  }
joined_r0x02b2ce24:
  local_78[0] = cVar2;
  if (local_48 != (long *)0x0) {
    plVar12 = local_48 + 10;
    do {
      iVar4 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


