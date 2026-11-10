/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01441aa8; name: FUN_01441aa8
 */


undefined8 FUN_01441aa8(float param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long local_70;
  char *pcStack_68;
  long local_60;
  long *local_58;
  
  if (**(char **)(param_2 + 0x130) == '\0') {
    return 0;
  }
  if (*(int *)(param_2 + 0x120) != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x188);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      local_70 = -0x7be00ad1dbfc3e5b;
      pcStack_68 = "_felt_a_sign";
      local_60 = 0xc;
      local_58 = (long *)0x0;
      uVar14 = NEON_ucvtf(*(undefined4 *)(param_2 + 0x124));
      uVar6 = FUN_01442514(uVar14,param_2,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if ((uVar6 & 1) == 0) {
        *(int *)(param_2 + 0x124) = *(int *)(param_2 + 0x124) + 1;
        if (param_3 != 0) {
          if (param_1 < 100.0) {
            return 0;
          }
          lVar9 = *(long *)(param_2 + 0x170);
          if (lVar9 != 0) {
            *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
          }
          *(undefined4 *)(param_2 + 0x124) = 0;
          goto LAB_01442268;
        }
        local_98 = (long *)0xeff12139e5a64892;
        pcStack_90 = "_close_felt_a_sign";
        local_88 = 0x12;
        local_80 = (long *)0x0;
        if (**(char **)(param_2 + 0x150) != '\0') {
          FUN_014417ec(&local_78,param_2 + 0x148,&local_98);
          plVar4 = local_78;
          if (local_78 == (long *)0x0) {
            local_70 = *(long *)PTR_DAT_04379c88;
LAB_01442300:
            pcStack_68 = *(char **)PTR_PTR_04379d00;
            if (local_78 != (long *)0x0) goto LAB_01441fb0;
LAB_01442310:
            local_60 = 0;
          }
          else {
            local_70 = local_78[0xb];
            if (local_78 == (long *)0x0) goto LAB_01442300;
            pcStack_68 = (char *)local_78[0xc];
            if (local_78 == (long *)0x0) goto LAB_01442310;
LAB_01441fb0:
            local_60 = local_78[0xd];
          }
          local_58 = (long *)0x0;
          if (local_78 == (long *)0x0) {
            local_58 = local_78;
          }
          else {
            (**(code **)(*local_78 + 0x18))(local_78);
            local_58 = plVar4;
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
          }
          FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_70);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
        }
        *(undefined4 *)(param_2 + 0x124) = 0;
        goto LAB_01441ffc;
      }
      *(undefined4 *)(param_2 + 0x124) = 0;
      if (param_3 == 1) {
        local_98 = (long *)0x841ff52e2403c1a5;
        pcStack_90 = "_felt_a_sign";
        local_88 = 0xc;
        local_80 = (long *)0x0;
        if (**(char **)(param_2 + 0x150) == '\0') {
          return 0;
        }
        FUN_014417ec(&local_78,param_2 + 0x148,&local_98);
        plVar4 = local_78;
        if (local_78 == (long *)0x0) {
          local_70 = *(long *)PTR_DAT_04379c88;
        }
        else {
          local_70 = local_78[0xb];
          if (local_78 != (long *)0x0) {
            pcStack_68 = (char *)local_78[0xc];
            goto joined_r0x014422e4;
          }
        }
        pcStack_68 = *(char **)PTR_PTR_04379d00;
joined_r0x014422e4:
        if (local_78 == (long *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = local_78[0xd];
        }
        local_58 = (long *)0x0;
        if (local_78 == (long *)0x0) {
          local_58 = local_78;
        }
        else {
          (**(code **)(*local_78 + 0x18))(local_78);
          local_58 = plVar4;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
        }
        FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_70);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
        if (local_80 == (long *)0x0) {
          return 0;
        }
        (**(code **)(*local_80 + 0x20))();
        return 0;
      }
      local_98 = (long *)0xeff12139e5a64892;
      pcStack_90 = "_close_felt_a_sign";
      local_88 = 0x12;
      local_80 = (long *)0x0;
      if (**(char **)(param_2 + 0x150) == '\0') goto LAB_01441ffc;
      FUN_014417ec(&local_78,param_2 + 0x148,&local_98);
      plVar4 = local_78;
      if (local_78 == (long *)0x0) {
        local_70 = *(long *)PTR_DAT_04379c88;
LAB_01442328:
        pcStack_68 = *(char **)PTR_PTR_04379d00;
        if (local_78 != (long *)0x0) goto LAB_01442114;
LAB_01442338:
        local_60 = 0;
      }
      else {
        local_70 = local_78[0xb];
        if (local_78 == (long *)0x0) goto LAB_01442328;
        pcStack_68 = (char *)local_78[0xc];
        if (local_78 == (long *)0x0) goto LAB_01442338;
LAB_01442114:
        local_60 = local_78[0xd];
      }
      local_58 = (long *)0x0;
      if (local_78 == (long *)0x0) {
        local_58 = local_78;
      }
      else {
        (**(code **)(*local_78 + 0x18))(local_78);
        local_58 = plVar4;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
      }
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_70);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
LAB_01441ffc:
      *(undefined4 *)(param_2 + 0x188) = 2;
      return 0;
    }
    if (iVar2 != 2) {
      return 0;
    }
    local_70 = -0x100edec61a59b76e;
    pcStack_68 = "_close_felt_a_sign";
    local_60 = 0x12;
    local_58 = (long *)0x0;
    if (**(char **)(param_2 + 0x150) != '\0') {
      FUN_014417ec(&local_98,param_2 + 0x148,&local_70);
      plVar4 = local_98;
      if (local_98 == (long *)0x0) {
        lVar9 = *(long *)PTR_DAT_04379c88;
      }
      else {
        lVar9 = local_98[0xb];
        if ((local_98 != (long *)0x0) &&
           ((**(code **)(*local_98 + 0x18))(local_98), local_98 != (long *)0x0)) {
          (**(code **)(*local_98 + 0x20))();
        }
      }
      lVar12 = *(long *)(param_2 + 0x58);
      plVar13 = *(long **)(lVar12 + 0x1a0);
      lVar7 = *(long *)(lVar12 + 0x1a8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      if ((lVar7 != 0) && (*plVar13 != lVar9)) {
        lVar11 = lVar7 * 0x30;
        plVar10 = plVar13 + lVar7 * 6;
        plVar8 = plVar13;
        do {
          lVar11 = lVar11 + -0x30;
          plVar13 = plVar10;
          if (lVar11 == 0) break;
          plVar13 = plVar8 + 6;
          plVar1 = plVar8 + 6;
          plVar8 = plVar13;
        } while (*plVar1 != lVar9);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      plVar8 = (long *)(*(long *)(lVar12 + 0x1a0) + *(long *)(lVar12 + 0x1a8) * 0x30);
      if (plVar13 == plVar8) {
        plVar10 = (long *)0x0;
        if (plVar13 != plVar8) goto LAB_01441cb4;
LAB_01442210:
        bVar3 = 1;
      }
      else {
        plVar10 = plVar13 + 4;
        if (plVar13 == plVar8) goto LAB_01442210;
LAB_01441cb4:
        uVar6 = (ulong)*(uint *)(plVar10 + 1);
        if (((*(uint *)(*plVar10 + 0x278) <= *(uint *)(plVar10 + 1)) ||
            (lVar9 = *(long *)(*plVar10 + 600), *(char *)(lVar9 + uVar6 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar9 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_01442210;
        plVar13 = (long *)(lVar9 + uVar6 * 0x48 + 0x10);
        lVar7 = *plVar13;
        if ((lVar7 == 0) || (*(char *)(lVar9 + uVar6 * 0x48 + 9) != '\0')) {
          bVar3 = 0;
        }
        else {
          fVar15 = *(float *)(lVar7 + 0x20);
          uVar5 = FUN_00227728();
          uVar6 = FUN_00227744(*plVar13);
          bVar3 = 0;
          if (((float)uVar5 <= fVar15) && ((uVar6 & 1) == 0)) goto LAB_01442210;
        }
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (!(bool)(100.0 <= param_1 | bVar3)) {
        return 0;
      }
    }
    lVar9 = *(long *)(param_2 + 0x170);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    }
LAB_01442268:
    *(undefined4 *)(param_2 + 0x188) = 0;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  local_98 = (long *)0x8e04704bdf74d15e;
  pcStack_90 = "_wake_felt_a_sign";
  local_88 = 0x11;
  local_80 = (long *)0x0;
  if (**(char **)(param_2 + 0x150) != '\0') {
    FUN_014417ec(&local_78,param_2 + 0x148,&local_98);
    plVar4 = local_78;
    if (local_78 == (long *)0x0) {
      local_70 = *(long *)PTR_DAT_04379c88;
LAB_01442288:
      pcStack_68 = *(char **)PTR_PTR_04379d00;
      if (local_78 != (long *)0x0) goto LAB_01441d78;
LAB_01442298:
      local_60 = 0;
    }
    else {
      local_70 = local_78[0xb];
      if (local_78 == (long *)0x0) goto LAB_01442288;
      pcStack_68 = (char *)local_78[0xc];
      if (local_78 == (long *)0x0) goto LAB_01442298;
LAB_01441d78:
      local_60 = local_78[0xd];
    }
    local_58 = (long *)0x0;
    if (local_78 == (long *)0x0) {
      local_58 = local_78;
    }
    else {
      (**(code **)(*local_78 + 0x18))(local_78);
      local_58 = plVar4;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
    }
    FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_70);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  local_98 = (long *)0x841ff52e2403c1a5;
  pcStack_90 = "_felt_a_sign";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  if (**(char **)(param_2 + 0x150) == '\0') goto LAB_01441e68;
  FUN_014417ec(&local_78,param_2 + 0x148,&local_98);
  plVar4 = local_78;
  if (local_78 == (long *)0x0) {
    local_70 = *(long *)PTR_DAT_04379c88;
LAB_014422b0:
    pcStack_68 = *(char **)PTR_PTR_04379d00;
    if (local_78 != (long *)0x0) goto LAB_01441e20;
LAB_014422c0:
    local_60 = 0;
  }
  else {
    local_70 = local_78[0xb];
    if (local_78 == (long *)0x0) goto LAB_014422b0;
    pcStack_68 = (char *)local_78[0xc];
    if (local_78 == (long *)0x0) goto LAB_014422c0;
LAB_01441e20:
    local_60 = local_78[0xd];
  }
  local_58 = (long *)0x0;
  if (local_78 == (long *)0x0) {
    local_58 = local_78;
  }
  else {
    (**(code **)(*local_78 + 0x18))(local_78);
    local_58 = plVar4;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_70);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
LAB_01441e68:
  lVar9 = *(long *)(param_2 + 0x170);
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  }
  lVar9 = *(long *)(param_2 + 0x180);
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  FUN_01442340(param_2,&DAT_04210150);
  *(undefined4 *)(param_2 + 0x124) = 0;
  *(undefined4 *)(param_2 + 0x188) = 1;
  return 0;
}


