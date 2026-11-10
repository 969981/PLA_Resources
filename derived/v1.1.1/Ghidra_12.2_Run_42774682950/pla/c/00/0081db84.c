/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081db84; name: FUN_0081db84
 */


void FUN_0081db84(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  char *__dest;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0;
  int local_e8;
  char local_e4 [132];
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = param_1 + 0x12;
    FUN_0082481c(plVar11);
  }
  local_108 = PTR_DAT_043773d0 + 0x10;
  local_100 = "";
  local_f0 = local_e4;
  local_f8 = PTR_DAT_04377b50 + 0x10;
  local_e8 = 0x80;
  FUN_0081f2c0(&local_f8);
  __dest = local_f0;
  local_f8 = PTR_DAT_04377b58 + 0x10;
  (**(code **)(local_108 + 0x18))(&local_108);
  pcVar6 = local_100;
  puVar4 = PTR_DAT_04377b60;
  if (__dest != local_100) {
    (**(code **)(local_108 + 0x18))(&local_108);
    cVar2 = *puVar4;
    if (*local_100 == cVar2) {
LAB_0081dc94:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081dc94;
        uVar5 = uVar10 + 1;
      } while (local_100[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081dc94;
    }
    iVar1 = (int)uVar5;
    if (local_e8 <= (int)uVar5) {
      iVar1 = local_e8 + -1;
    }
    memcpy(__dest,pcVar6,(long)iVar1);
    __dest[iVar1] = cVar2;
  }
  local_f8 = PTR_DAT_04377b68 + 0x10;
  if ((int)param_3 < 1) {
    cVar2 = *puVar4;
  }
  else {
    FUN_0081f2c0(&local_f8);
    cVar2 = *puVar4;
    if (*local_f0 == cVar2) {
LAB_0081dd24:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081dd24;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081dd24;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  (**(code **)(param_1[4] + 0x18))(param_1 + 4);
  FUN_0081f374(&local_f8,"- name: \"%s\"\n",param_1[5]);
  FUN_00821cc8(param_2,&local_f8);
  *local_f0 = cVar2;
  if (0 < (int)param_3) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (*local_f0 == cVar2) {
LAB_0081de54:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081de54;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081de54;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_0081f374(&local_f8,"  start_address: 0x%016llX\n",uVar3);
  FUN_00821cc8(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_0081f374(&local_f8,"  end_address: 0x%016llX\n",uVar3);
    FUN_00821cc8(param_2,&local_f8);
    *local_f0 = cVar2;
    lVar12 = param_1[8];
    if (lVar12 != 0) goto LAB_0081e180;
LAB_0081e000:
    puVar4 = &DAT_039a2e36;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (*local_f0 == cVar2) {
LAB_0081df78:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081df78;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081df78;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_0081f374(&local_f8,"  end_address: 0x%016llX\n",uVar3);
    FUN_00821cc8(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (*local_f0 == cVar2) {
LAB_0081e0e0:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081e0e0;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081e0e0;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    lVar12 = param_1[8];
    if (lVar12 == 0) goto LAB_0081e000;
LAB_0081e180:
    (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))((long *)(lVar12 + 0x20));
    puVar4 = *(undefined **)(lVar12 + 0x28);
  }
  FUN_0081f374(&local_f8,"  parent: %s\n",puVar4);
  FUN_00821cc8(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_0081f374(&local_f8,"  direction: %s\n",pcVar6);
    FUN_00821cc8(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (*local_f0 == cVar2) {
LAB_0081e220:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081e220;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081e220;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_0081f374(&local_f8,"  direction: %s\n",pcVar6);
    FUN_00821cc8(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (*local_f0 == cVar2) {
LAB_0081e364:
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x80000) goto LAB_0081e364;
        uVar5 = uVar10 + 1;
      } while (local_f0[uVar10 + 1] != cVar2);
      if (uVar10 >> 0x13 != 0) goto LAB_0081e364;
    }
    uVar7 = (uint)uVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulong)uVar8;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar9 = lVar12 + 4;
          builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
          lVar12 = lVar9;
        } while (uVar10 - uVar5 != lVar9);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + lVar9 + (int)uVar7;
        do {
          uVar5 = uVar5 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(uVar8 + uVar7);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_0081f374(&local_f8,"  size: %llu\n",uVar3);
  FUN_00821cc8(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_0081f374(&local_f8,"  free_size: %llu\n",uVar3);
    FUN_00821cc8(param_2,&local_f8);
    pcVar6 = local_f0;
    goto LAB_0081e674;
  }
  (**(code **)(local_f8 + 0x18))(&local_f8);
  if (*local_f0 == cVar2) {
LAB_0081e48c:
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      if (uVar10 == 0x80000) goto LAB_0081e48c;
      uVar5 = uVar10 + 1;
    } while (local_f0[uVar10 + 1] != cVar2);
    if (uVar10 >> 0x13 != 0) goto LAB_0081e48c;
  }
  uVar7 = (uint)uVar5;
  uVar8 = param_3;
  if ((int)(local_e8 - uVar7) <= (int)param_3) {
    uVar8 = local_e8 + ~uVar7;
  }
  if (0 < (int)uVar8) {
    uVar10 = (ulong)uVar8;
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar9 = 0;
    }
    else {
      lVar12 = 0;
      do {
        lVar9 = lVar12 + 4;
        builtin_strncpy(local_f0 + lVar12 + (int)uVar7,"    ",4);
        lVar12 = lVar9;
      } while (uVar10 - uVar5 != lVar9);
    }
    if ((uVar8 & 3) != 0) {
      pcVar6 = local_f0 + lVar9 + (int)uVar7;
      do {
        uVar5 = uVar5 - 1;
        *pcVar6 = ' ';
        pcVar6 = pcVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  local_f0[(int)(uVar8 + uVar7)] = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  FUN_0081f374(&local_f8,"  free_size: %llu\n",uVar3);
  FUN_00821cc8(param_2,&local_f8);
  *local_f0 = cVar2;
  (**(code **)(local_f8 + 0x18))(&local_f8);
  if (*local_f0 == cVar2) {
LAB_0081e5e0:
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      if (uVar10 == 0x80000) goto LAB_0081e5e0;
      uVar5 = uVar10 + 1;
    } while (local_f0[uVar10 + 1] != cVar2);
    if (uVar10 >> 0x13 != 0) goto LAB_0081e5e0;
  }
  uVar8 = (uint)uVar5;
  if ((int)(local_e8 - uVar8) <= (int)param_3) {
    param_3 = local_e8 + ~uVar8;
  }
  if (0 < (int)param_3) {
    uVar10 = (ulong)param_3;
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar9 = 0;
    }
    else {
      lVar12 = 0;
      do {
        lVar9 = lVar12 + 4;
        builtin_strncpy(local_f0 + lVar12 + (int)uVar8,"    ",4);
        lVar12 = lVar9;
      } while (uVar10 - uVar5 != lVar9);
    }
    if ((param_3 & 3) != 0) {
      pcVar6 = local_f0 + lVar9 + (int)uVar8;
      do {
        uVar5 = uVar5 - 1;
        *pcVar6 = ' ';
        pcVar6 = pcVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  pcVar6 = local_f0 + (int)(param_3 + uVar8);
LAB_0081e674:
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_0081f374(&local_f8,"  max_allocatable_size: %llu\n",uVar3);
  FUN_00821cc8(param_2,&local_f8);
  if (plVar11 != (long *)0x0) {
    FUN_00824824(plVar11);
  }
  return;
}


