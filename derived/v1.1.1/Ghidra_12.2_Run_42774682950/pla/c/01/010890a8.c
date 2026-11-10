/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010890a8; name: FUN_010890a8
 */


void FUN_010890a8(long *param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  long *local_58 [4];
  long *local_38;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_01089924(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    local_58[0] = (long *)0x0;
  }
  else {
    FUN_01089924(local_58);
    if (local_58[0] != (long *)0x0) {
      uVar3 = FUN_01088420();
      if ((uVar3 & 1) == 0) {
        lVar5 = FUN_0108838c(local_58[0]);
        bVar2 = lVar5 + -1 == param_1[4];
        if (local_58[0] != (long *)0x0) goto LAB_01089160;
LAB_0108916c:
        if (bVar2) goto LAB_01089104;
      }
      else {
        bVar2 = false;
        if (local_58[0] == (long *)0x0) goto LAB_0108916c;
LAB_01089160:
        plVar1 = local_58[0];
        uVar3 = FUN_02a43a5c(local_58[0][0xb]);
        if ((uVar3 & 1) == 0) goto LAB_0108916c;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        if (bVar2) goto LAB_01089104;
      }
      uVar6 = FUN_010884f4(local_38,param_1[4]);
      *(undefined4 *)((long)param_1 + 0x34) = uVar6;
      if (*param_1 == 0) {
        local_58[0] = (long *)0x0;
LAB_01089190:
        fVar7 = 0.0;
      }
      else {
        lVar5 = param_1[4];
        FUN_01089924(local_58);
        if (local_58[0] == (long *)0x0) goto LAB_01089190;
        uVar3 = FUN_01088420();
        if (((uVar3 & 1) == 0) && (lVar4 = FUN_0108838c(local_58[0]), lVar4 == lVar5)) {
          fVar7 = 0.0;
          plVar1 = local_58[0];
        }
        else {
          fVar7 = *(float *)(param_1 + 2);
          if (fVar7 <= 1.1920929e-07) {
            fVar7 = 1.1920929e-07;
          }
          fVar7 = *(float *)((long)param_1 + 0x34) / fVar7;
          if (fVar7 <= 1.1920929e-07) {
            fVar7 = 1.1920929e-07;
          }
          fVar7 = 1.0 / fVar7;
          plVar1 = local_58[0];
        }
        local_58[0] = plVar1;
        if ((plVar1 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar1[0xb]), (uVar3 & 1) != 0)) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
      }
      *(float *)((long)param_1 + 0x14) = fVar7;
      FUN_0108839c(local_58,local_38,param_1[4]);
      FUN_0108839c(auStack_78,local_38,param_1[4] + 1);
      uVar6 = FUN_0108c1a8(local_58);
      *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
      uVar6 = FUN_0108c1a8(auStack_78);
      *(undefined4 *)(param_1 + 6) = uVar6;
      uVar6 = FUN_0108c1b0(local_58);
      *(undefined4 *)(param_1 + 7) = uVar6;
      goto joined_r0x010891e4;
    }
  }
LAB_01089104:
  *(undefined4 *)((long)param_1 + 0x34) = 0x34000000;
  *(int *)((long)param_1 + 0x2c) = (int)param_1[6];
joined_r0x010891e4:
  if ((local_38 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_38[0xb]), (uVar3 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  return;
}


