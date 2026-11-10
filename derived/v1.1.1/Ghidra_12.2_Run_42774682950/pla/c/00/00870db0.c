/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870db0; name: FUN_00870db0
 */


void FUN_00870db0(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_38 [2];
  
  local_48 = 0;
  FUN_007ecf14(&local_48);
  if (param_1[0x108] != 0) {
    if ((int)param_1[0xf7] == 4) {
      lVar8 = 0;
      lVar7 = param_1[0x10c];
      plVar5 = param_1;
      uVar2 = local_58;
      while( true ) {
        if (lVar7 != 0) {
          local_58._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
          uVar1 = *(uint *)(plVar5 + 0x10b);
          if (uVar1 == 3) {
            lVar9 = local_48 - param_1[0x108];
            local_58 = uVar2;
            plVar3 = (long *)FUN_007ecfa4();
            lVar7 = 0;
            if (*plVar3 != 0) {
              lVar7 = lVar9 / *plVar3;
            }
            uVar2 = local_58;
            if ((int)param_1[0xe] < lVar7) {
              FUN_007ecf14(plVar5 + 0x11e);
              *(undefined4 *)(plVar5 + 0x10b) = 4;
              *(undefined4 *)(plVar5 + 0x120) = 2;
              uVar2 = local_58;
            }
          }
          else {
            if (uVar1 < 2) {
              lVar7 = local_48 - param_1[0x108];
              plVar5 = (long *)FUN_007ecfa4();
              lVar8 = 0;
              if (*plVar5 != 0) {
                lVar8 = lVar7 / *plVar5;
              }
              if (lVar8 <= (int)param_1[0xd]) {
                return;
              }
              param_1[0x108] = 0;
              uVar6 = 0x648d;
              goto LAB_00870ee4;
            }
            if (uVar1 == 2) {
              lVar8 = local_48 - param_1[0x108];
              goto LAB_00870e94;
            }
          }
        }
        lVar8 = lVar8 + 0xb0;
        if (lVar8 == 0xfd0) break;
        plVar5 = (long *)((long)param_1 + lVar8);
        lVar7 = plVar5[0x10c];
      }
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((uVar4 & 1) == 0) {
        return;
      }
      param_1[0x108] = 0;
    }
    else {
      lVar8 = local_48 - param_1[0x108];
LAB_00870e94:
      plVar5 = (long *)FUN_007ecfa4();
      lVar7 = 0;
      if (*plVar5 != 0) {
        lVar7 = lVar8 / *plVar5;
      }
      if (lVar7 <= *(int *)((long)param_1 + 0x6c)) {
        return;
      }
      uVar6 = 0x648e;
      param_1[0x108] = 0;
LAB_00870ee4:
      local_58 = CONCAT44(local_58._4_4_,uVar6);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_007ee660(param_1 + 0xe5,&local_58);
      *(undefined4 *)(param_1 + 0xf7) = 5;
    }
    local_50 = 0;
    local_58 = 0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_58);
  }
  return;
}


