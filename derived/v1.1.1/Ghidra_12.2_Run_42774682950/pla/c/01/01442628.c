/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01442628; name: FUN_01442628
 */


void FUN_01442628(float param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  char *pcStack_78;
  long local_70;
  long *local_68;
  long *local_58;
  
  if (**(char **)(param_2 + 0x130) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x188) != 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x120);
  if (iVar2 != 0) {
    if (iVar2 != 3) {
      if (iVar2 == 2) {
        local_80 = 0x57072166549e8dfe;
        pcStack_78 = "_noticed";
        local_70 = 8;
        local_68 = (long *)0x0;
        uVar14 = NEON_ucvtf(*(undefined4 *)(param_2 + 0x124));
        uVar9 = FUN_01442514(uVar14,param_2,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if ((uVar9 & 1) == 0) {
          *(int *)(param_2 + 0x124) = *(int *)(param_2 + 0x124) + 1;
          return;
        }
        local_a0 = (long *)0x2b53829f154010a9;
        pcStack_98 = "_close_noticed";
        local_90 = 0xe;
        local_88 = (long *)0x0;
        if (**(char **)(param_2 + 0x150) == '\0') goto LAB_01442dcc;
        FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
        plVar5 = local_58;
        if (local_58 == (long *)0x0) {
          local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443508:
          pcStack_78 = *(char **)PTR_PTR_04379d00;
          if (local_58 != (long *)0x0) goto LAB_01442d84;
LAB_01443518:
          local_70 = 0;
        }
        else {
          local_80 = local_58[0xb];
          if (local_58 == (long *)0x0) goto LAB_01443508;
          pcStack_78 = (char *)local_58[0xc];
          if (local_58 == (long *)0x0) goto LAB_01443518;
LAB_01442d84:
          local_70 = local_58[0xd];
        }
        local_68 = (long *)0x0;
        if (local_58 == (long *)0x0) {
          local_68 = local_58;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          local_68 = plVar5;
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
        }
        FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
LAB_01442dcc:
        lVar10 = *(long *)(param_2 + 0x180);
        if (lVar10 != 0) {
          *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
        }
        *(undefined8 *)(param_2 + 0x120) = 3;
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      iVar2 = *(int *)(param_2 + 0x18c);
      if (iVar2 == 1) {
        local_80 = -0x7be00ad1dbfc3e5b;
        pcStack_78 = "_felt_a_sign";
        local_70 = 0xc;
        local_68 = (long *)0x0;
        uVar14 = NEON_ucvtf(*(undefined4 *)(param_2 + 0x124));
        uVar9 = FUN_01442514(uVar14,param_2,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if ((uVar9 & 1) == 0) {
          *(int *)(param_2 + 0x124) = *(int *)(param_2 + 0x124) + 1;
          if (param_1 <= 0.0) {
            local_a0 = (long *)0xeff12139e5a64892;
            pcStack_98 = "_close_felt_a_sign";
            local_90 = 0x12;
            local_88 = (long *)0x0;
            if (**(char **)(param_2 + 0x150) != '\0') {
              FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
              plVar5 = local_58;
              if (local_58 == (long *)0x0) {
                local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443690:
                pcStack_78 = *(char **)PTR_PTR_04379d00;
                if (local_58 != (long *)0x0) goto LAB_01443200;
LAB_014436a0:
                local_70 = 0;
              }
              else {
                local_80 = local_58[0xb];
                if (local_58 == (long *)0x0) goto LAB_01443690;
                pcStack_78 = (char *)local_58[0xc];
                if (local_58 == (long *)0x0) goto LAB_014436a0;
LAB_01443200:
                local_70 = local_58[0xd];
              }
              local_68 = (long *)0x0;
              if (local_58 == (long *)0x0) {
                local_68 = local_58;
              }
              else {
                (**(code **)(*local_58 + 0x18))(local_58);
                local_68 = plVar5;
                if (local_58 != (long *)0x0) {
                  (**(code **)(*local_58 + 0x20))();
                }
              }
              FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x20))(plVar5);
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
            }
            *(undefined4 *)(param_2 + 0x124) = 0;
            *(undefined4 *)(param_2 + 0x18c) = 2;
          }
        }
        else {
          local_a0 = (long *)0x841ff52e2403c1a5;
          pcStack_98 = "_felt_a_sign";
          local_90 = 0xc;
          local_88 = (long *)0x0;
          if (**(char **)(param_2 + 0x150) != '\0') {
            FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
            plVar5 = local_58;
            if (local_58 == (long *)0x0) {
              local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443668:
              pcStack_78 = *(char **)PTR_PTR_04379d00;
              if (local_58 != (long *)0x0) goto LAB_0144313c;
LAB_01443678:
              local_70 = 0;
            }
            else {
              local_80 = local_58[0xb];
              if (local_58 == (long *)0x0) goto LAB_01443668;
              pcStack_78 = (char *)local_58[0xc];
              if (local_58 == (long *)0x0) goto LAB_01443678;
LAB_0144313c:
              local_70 = local_58[0xd];
            }
            local_68 = (long *)0x0;
            if (local_58 == (long *)0x0) {
              local_68 = local_58;
            }
            else {
              (**(code **)(*local_58 + 0x18))(local_58);
              local_68 = plVar5;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
            }
            FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
          }
          *(undefined4 *)(param_2 + 0x124) = 0;
        }
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 != 0) goto LAB_0144290c;
          local_a0 = (long *)0x8e04704bdf74d15e;
          pcStack_98 = "_wake_felt_a_sign";
          local_90 = 0x11;
          local_88 = (long *)0x0;
          if (**(char **)(param_2 + 0x150) != '\0') {
            FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
            plVar5 = local_58;
            if (local_58 == (long *)0x0) {
              local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443618:
              pcStack_78 = *(char **)PTR_PTR_04379d00;
              if (local_58 != (long *)0x0) goto LAB_01442fbc;
LAB_01443628:
              local_70 = 0;
            }
            else {
              local_80 = local_58[0xb];
              if (local_58 == (long *)0x0) goto LAB_01443618;
              pcStack_78 = (char *)local_58[0xc];
              if (local_58 == (long *)0x0) goto LAB_01443628;
LAB_01442fbc:
              local_70 = local_58[0xd];
            }
            local_68 = (long *)0x0;
            if (local_58 == (long *)0x0) {
              local_68 = local_58;
            }
            else {
              (**(code **)(*local_58 + 0x18))(local_58);
              local_68 = plVar5;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
            }
            FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
          }
          local_a0 = (long *)0x841ff52e2403c1a5;
          pcStack_98 = "_felt_a_sign";
          local_90 = 0xc;
          local_88 = (long *)0x0;
          if (**(char **)(param_2 + 0x150) != '\0') {
            FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
            plVar5 = local_58;
            if (local_58 == (long *)0x0) {
              local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443640:
              pcStack_78 = *(char **)PTR_PTR_04379d00;
              if (local_58 != (long *)0x0) goto LAB_01443064;
LAB_01443650:
              local_70 = 0;
            }
            else {
              local_80 = local_58[0xb];
              if (local_58 == (long *)0x0) goto LAB_01443640;
              pcStack_78 = (char *)local_58[0xc];
              if (local_58 == (long *)0x0) goto LAB_01443650;
LAB_01443064:
              local_70 = local_58[0xd];
            }
            local_68 = (long *)0x0;
            if (local_58 == (long *)0x0) {
              local_68 = local_58;
            }
            else {
              (**(code **)(*local_58 + 0x18))(local_58);
              local_68 = plVar5;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
            }
            FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
          }
          lVar10 = *(long *)(param_2 + 0x170);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
          }
          lVar10 = *(long *)(param_2 + 0x180);
          if (lVar10 != 0) {
            *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
          }
          *(undefined4 *)(param_2 + 0x124) = 0;
          *(undefined4 *)(param_2 + 0x18c) = 1;
          FUN_01442340(param_2,&DAT_04210150);
          goto LAB_0144290c;
        }
        local_80 = -0x100edec61a59b76e;
        pcStack_78 = "_close_felt_a_sign";
        local_70 = 0x12;
        local_68 = (long *)0x0;
        if (**(char **)(param_2 + 0x150) != '\0') {
          FUN_014417ec(&local_a0,param_2 + 0x148,&local_80);
          plVar5 = local_a0;
          if (local_a0 == (long *)0x0) {
            lVar10 = *(long *)PTR_DAT_04379c88;
          }
          else {
            lVar10 = local_a0[0xb];
            if ((local_a0 != (long *)0x0) &&
               ((**(code **)(*local_a0 + 0x18))(local_a0), local_a0 != (long *)0x0)) {
              (**(code **)(*local_a0 + 0x20))();
            }
          }
          lVar13 = *(long *)(param_2 + 0x58);
          plVar8 = *(long **)(lVar13 + 0x1a0);
          lVar7 = *(long *)(lVar13 + 0x1a8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          plVar4 = plVar8;
          if ((lVar7 != 0) && (*plVar8 != lVar10)) {
            lVar11 = lVar7 * 0x30;
            plVar12 = plVar8 + lVar7 * 6;
            do {
              lVar11 = lVar11 + -0x30;
              plVar4 = plVar12;
              if (lVar11 == 0) break;
              plVar1 = plVar8 + 6;
              plVar8 = plVar8 + 6;
              plVar4 = plVar8;
            } while (*plVar1 != lVar10);
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          plVar8 = (long *)(*(long *)(lVar13 + 0x1a0) + *(long *)(lVar13 + 0x1a8) * 0x30);
          if (plVar4 == plVar8) {
            plVar12 = (long *)0x0;
            if (plVar4 != plVar8) goto LAB_01442ef4;
LAB_0144359c:
            bVar3 = true;
          }
          else {
            plVar12 = plVar4 + 4;
            if (plVar4 == plVar8) goto LAB_0144359c;
LAB_01442ef4:
            uVar9 = (ulong)*(uint *)(plVar12 + 1);
            if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
                (lVar10 = *(long *)(*plVar12 + 600), *(char *)(lVar10 + uVar9 * 0x48 + 8) == '\0'))
               || (*(char *)(lVar10 + uVar9 * 0x48 + 0xb) == '\0')) goto LAB_0144359c;
            plVar8 = (long *)(lVar10 + uVar9 * 0x48 + 0x10);
            lVar7 = *plVar8;
            if ((lVar7 == 0) || (*(char *)(lVar10 + uVar9 * 0x48 + 9) != '\0')) {
              bVar3 = false;
            }
            else {
              fVar15 = *(float *)(lVar7 + 0x20);
              uVar6 = FUN_00227728();
              uVar9 = FUN_00227744(*plVar8);
              bVar3 = false;
              if (((float)uVar6 <= fVar15) && ((uVar9 & 1) == 0)) goto LAB_0144359c;
            }
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (!bVar3) goto LAB_0144290c;
        }
        lVar10 = *(long *)(param_2 + 0x170);
        if (lVar10 != 0) {
          *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
        }
        lVar10 = *(long *)(param_2 + 0x180);
        if (lVar10 != 0) {
          *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
        }
        *(undefined4 *)(param_2 + 0x18c) = 0;
        *(undefined8 *)(param_2 + 0x120) = 0;
      }
LAB_0144290c:
      if (param_1 < 100.0) {
        return;
      }
      local_a0 = (long *)0xeff12139e5a64892;
      pcStack_98 = "_close_felt_a_sign";
      local_90 = 0x12;
      local_88 = (long *)0x0;
      if (**(char **)(param_2 + 0x150) != '\0') {
        FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
        plVar5 = local_58;
        if (local_58 == (long *)0x0) {
          local_80 = *(long *)PTR_DAT_04379c88;
LAB_014436b8:
          pcStack_78 = *(char **)PTR_PTR_04379d00;
          if (local_58 != (long *)0x0) goto LAB_0144297c;
LAB_014436c8:
          local_70 = 0;
        }
        else {
          local_80 = local_58[0xb];
          if (local_58 == (long *)0x0) goto LAB_014436b8;
          pcStack_78 = (char *)local_58[0xc];
          if (local_58 == (long *)0x0) goto LAB_014436c8;
LAB_0144297c:
          local_70 = local_58[0xd];
        }
        local_68 = (long *)0x0;
        if (local_58 == (long *)0x0) {
          local_68 = local_58;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          local_68 = plVar5;
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
        }
        FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
      local_a0 = (long *)0xb7342aaee94913dd;
      pcStack_98 = "_wake_noticed";
      local_90 = 0xd;
      local_88 = (long *)0x0;
      if (**(char **)(param_2 + 0x150) != '\0') {
        FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
        plVar5 = local_58;
        if (local_58 == (long *)0x0) {
          local_80 = *(long *)PTR_DAT_04379c88;
LAB_014436e0:
          pcStack_78 = *(char **)PTR_PTR_04379d00;
          if (local_58 != (long *)0x0) goto LAB_01442a24;
LAB_014436f0:
          local_70 = 0;
        }
        else {
          local_80 = local_58[0xb];
          if (local_58 == (long *)0x0) goto LAB_014436e0;
          pcStack_78 = (char *)local_58[0xc];
          if (local_58 == (long *)0x0) goto LAB_014436f0;
LAB_01442a24:
          local_70 = local_58[0xd];
        }
        local_68 = (long *)0x0;
        if (local_58 == (long *)0x0) {
          local_68 = local_58;
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58);
          local_68 = plVar5;
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
        }
        FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
      local_a0 = (long *)0x57072166549e8dfe;
      pcStack_98 = "_noticed";
      local_90 = 8;
      local_88 = (long *)0x0;
      if (**(char **)(param_2 + 0x150) == '\0') goto LAB_01442b14;
      FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
      plVar5 = local_58;
      if (local_58 == (long *)0x0) {
        local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443708:
        pcStack_78 = *(char **)PTR_PTR_04379d00;
        if (local_58 != (long *)0x0) goto LAB_01442acc;
LAB_01443718:
        local_70 = 0;
      }
      else {
        local_80 = local_58[0xb];
        if (local_58 == (long *)0x0) goto LAB_01443708;
        pcStack_78 = (char *)local_58[0xc];
        if (local_58 == (long *)0x0) goto LAB_01443718;
LAB_01442acc:
        local_70 = local_58[0xd];
      }
      local_68 = (long *)0x0;
      if (local_58 == (long *)0x0) {
        local_68 = local_58;
      }
      else {
        (**(code **)(*local_58 + 0x18))(local_58);
        local_68 = plVar5;
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
      }
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
LAB_01442b14:
      lVar10 = *(long *)(param_2 + 0x170);
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
      }
      lVar10 = *(long *)(param_2 + 0x180);
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
      }
      FUN_01442340(param_2,&DAT_04210168);
      *(undefined4 *)(param_2 + 0x18c) = 0;
      *(undefined8 *)(param_2 + 0x120) = 2;
      return;
    }
    local_80 = 0x2b53829f154010a9;
    pcStack_78 = "_close_noticed";
    local_70 = 0xe;
    local_68 = (long *)0x0;
    if (**(char **)(param_2 + 0x150) == '\0') goto LAB_014434c0;
    FUN_014417ec(&local_a0,param_2 + 0x148,&local_80);
    plVar5 = local_a0;
    if (local_a0 == (long *)0x0) {
      lVar10 = *(long *)PTR_DAT_04379c88;
    }
    else {
      lVar10 = local_a0[0xb];
      if ((local_a0 != (long *)0x0) &&
         ((**(code **)(*local_a0 + 0x18))(local_a0), local_a0 != (long *)0x0)) {
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    lVar13 = *(long *)(param_2 + 0x58);
    plVar8 = *(long **)(lVar13 + 0x1a0);
    lVar7 = *(long *)(lVar13 + 0x1a8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = plVar8;
    if ((lVar7 != 0) && (*plVar8 != lVar10)) {
      lVar11 = lVar7 * 0x30;
      plVar12 = plVar8 + lVar7 * 6;
      do {
        lVar11 = lVar11 + -0x30;
        plVar4 = plVar12;
        if (lVar11 == 0) break;
        plVar1 = plVar8 + 6;
        plVar8 = plVar8 + 6;
        plVar4 = plVar8;
      } while (*plVar1 != lVar10);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    plVar8 = (long *)(*(long *)(lVar13 + 0x1a0) + *(long *)(lVar13 + 0x1a8) * 0x30);
    if (plVar4 == plVar8) {
      plVar12 = (long *)0x0;
      if (plVar4 != plVar8) goto LAB_01442794;
LAB_01443490:
      bVar3 = true;
    }
    else {
      plVar12 = plVar4 + 4;
      if (plVar4 == plVar8) goto LAB_01443490;
LAB_01442794:
      uVar9 = (ulong)*(uint *)(plVar12 + 1);
      if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
          (lVar10 = *(long *)(*plVar12 + 600), *(char *)(lVar10 + uVar9 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar10 + uVar9 * 0x48 + 0xb) == '\0')) goto LAB_01443490;
      plVar8 = (long *)(lVar10 + uVar9 * 0x48 + 0x10);
      lVar7 = *plVar8;
      if ((lVar7 == 0) || (*(char *)(lVar10 + uVar9 * 0x48 + 9) != '\0')) {
        bVar3 = false;
      }
      else {
        fVar15 = *(float *)(lVar7 + 0x20);
        uVar6 = FUN_00227728();
        uVar9 = FUN_00227744(*plVar8);
        bVar3 = false;
        if (((float)uVar6 <= fVar15) && ((uVar9 & 1) == 0)) goto LAB_01443490;
      }
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (!bVar3) {
      return;
    }
LAB_014434c0:
    if (param_1 <= 0.0) {
      *(undefined4 *)(param_2 + 0x120) = 0;
      return;
    }
    if (100.0 <= param_1) {
      return;
    }
    *(undefined4 *)(param_2 + 0x120) = 1;
    *(undefined4 *)(param_2 + 0x18c) = 0;
    return;
  }
  if (param_1 <= 0.0) {
    return;
  }
  if (param_1 < 100.0) {
    *(undefined4 *)(param_2 + 0x120) = 1;
    *(undefined4 *)(param_2 + 0x18c) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0;
    return;
  }
  local_a0 = (long *)0xb7342aaee94913dd;
  pcStack_98 = "_wake_noticed";
  local_90 = 0xd;
  local_88 = (long *)0x0;
  if (**(char **)(param_2 + 0x150) != '\0') {
    FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
    plVar5 = local_58;
    if (local_58 == (long *)0x0) {
      local_80 = *(long *)PTR_DAT_04379c88;
LAB_0144353c:
      pcStack_78 = *(char **)PTR_PTR_04379d00;
      if (local_58 != (long *)0x0) goto LAB_01442bec;
LAB_0144354c:
      local_70 = 0;
    }
    else {
      local_80 = local_58[0xb];
      if (local_58 == (long *)0x0) goto LAB_0144353c;
      pcStack_78 = (char *)local_58[0xc];
      if (local_58 == (long *)0x0) goto LAB_0144354c;
LAB_01442bec:
      local_70 = local_58[0xd];
    }
    local_68 = (long *)0x0;
    if (local_58 == (long *)0x0) {
      local_68 = local_58;
    }
    else {
      (**(code **)(*local_58 + 0x18))(local_58);
      local_68 = plVar5;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
    FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_a0 = (long *)0x57072166549e8dfe;
  pcStack_98 = "_noticed";
  local_90 = 8;
  local_88 = (long *)0x0;
  if (**(char **)(param_2 + 0x150) == '\0') goto LAB_01442cdc;
  FUN_014417ec(&local_58,param_2 + 0x148,&local_a0);
  plVar5 = local_58;
  if (local_58 == (long *)0x0) {
    local_80 = *(long *)PTR_DAT_04379c88;
LAB_01443564:
    pcStack_78 = *(char **)PTR_PTR_04379d00;
    if (local_58 != (long *)0x0) goto LAB_01442c94;
LAB_01443574:
    local_70 = 0;
  }
  else {
    local_80 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01443564;
    pcStack_78 = (char *)local_58[0xc];
    if (local_58 == (long *)0x0) goto LAB_01443574;
LAB_01442c94:
    local_70 = local_58[0xd];
  }
  local_68 = (long *)0x0;
  if (local_58 == (long *)0x0) {
    local_68 = local_58;
  }
  else {
    (**(code **)(*local_58 + 0x18))(local_58);
    local_68 = plVar5;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  FUN_0283b1e8(*(undefined8 *)(param_2 + 0x58),&local_80);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
LAB_01442cdc:
  lVar10 = *(long *)(param_2 + 0x170);
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  lVar10 = *(long *)(param_2 + 0x180);
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  FUN_01442340(param_2,&DAT_04210168);
  *(undefined4 *)(param_2 + 0x120) = 2;
  *(undefined4 *)(param_2 + 0x124) = 0;
  return;
}


