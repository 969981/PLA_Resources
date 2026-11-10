/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3dbc0; name: FUN_02f3dbc0
 */


void FUN_02f3dbc0(long param_1,int param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1b0 [8];
  undefined8 local_1a8;
  long local_1a0;
  ulong local_198;
  undefined1 auStack_190 [256];
  undefined4 local_90;
  long local_88;
  long *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_58;
  int local_54;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if ((*(byte *)((long)plVar4 + 0x5a) & 0xe) == 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar9 = plVar4[0xd];
    local_90 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_68 = 1;
    (**(code **)(*plVar4 + 0xb8))(plVar4,auStack_190,0);
    local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
    if (local_88 != 0) {
      if ((param_3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_190,0);
        if (local_88 == 0) {
          return;
        }
        bVar1 = true;
      }
      iVar3 = 2;
      do {
        if (*(long *)(local_88 + 0x18) == 0) {
          lVar5 = (**(code **)(*local_80 + 0xd0))();
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*(long *)local_80[2] + 0xd0))();
          }
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*(long *)(local_88 + 0x18) + 0x78);
          lVar5 = *(long *)(lVar7 + 0x80);
        }
        if (lVar7 != 0) {
          lVar5 = lVar7;
        }
        local_1a0 = 0;
        local_198 = 0;
        FUN_02f3acf0(lVar5,&local_1a0);
        lVar5 = local_1a0;
        if ((int)local_198 == 0) {
          lVar5 = 0;
        }
        else {
          lVar7 = 0;
          do {
            if (*(int *)(local_1a0 + lVar7) == param_2) {
              uVar6 = FUN_02f3debc(param_1,param_2);
              if ((uVar6 & 1) == 0) {
                if (lVar5 == 0) {
                  return;
                }
                goto LAB_02f3dea4;
              }
              lVar5 = lVar5 + lVar7;
              lVar7 = FUN_02f3df0c(param_1,*(undefined4 *)(lVar5 + 4),&local_54);
              if ((lVar7 == 0) && (*(int *)(lVar5 + 4) != 0)) {
LAB_02f3de90:
                if (local_1a0 == 0) {
                  return;
                }
                lVar5 = local_1a0;
LAB_02f3dea4:
                local_198 = local_198 & 0xffffffff00000000;
                (*DAT_0442d150)(2,lVar5);
                return;
              }
              local_58 = *(undefined4 *)(lVar5 + 0xc);
              iVar2 = FUN_02f4f0f4(auStack_190,(lVar8 - lVar9) + (long)local_54,
                                   *(undefined4 *)(lVar5 + 8),&local_58,0,0,&local_1a8);
              if (iVar2 == 1) {
                iVar3 = FUN_02f3dff8(param_1,auStack_190,lVar7,lVar5,local_1a8,local_54,!bVar1);
                if (iVar3 != 1) goto LAB_02f3de90;
                if (lVar7 != 0) {
                  FUN_02f3c6c0(lVar7,auStack_1b0);
                }
              }
              else {
                if (lVar7 != 0) {
                  FUN_02f3c1ec(lVar7);
                }
                if ((char)local_68 == '\0') {
                  iVar3 = 1;
                  if ((!bVar1) && (*(int *)(lVar5 + 0x14) == 1)) {
                    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))
                              (*(long **)(param_1 + 0x10),auStack_190,0);
                    bVar1 = true;
                    iVar3 = iVar2;
                  }
                  goto joined_r0x02f3de30;
                }
              }
              iVar3 = 1;
              goto joined_r0x02f3de30;
            }
            lVar7 = lVar7 + 0x18;
          } while ((local_198 & 0xffffffff) * 0x18 != lVar7);
          lVar5 = 0;
        }
joined_r0x02f3de30:
        if (local_1a0 != 0) {
          local_198 = local_198 & 0xffffffff00000000;
          (*DAT_0442d150)(2);
          local_1a0 = 0;
          local_198 = local_198 & 0xffffffff;
        }
      } while (((lVar5 != 0) && (iVar3 != 1)) && (local_88 != 0));
    }
  }
  return;
}


