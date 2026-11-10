/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f1954; name: FUN_030f1954
 */


void FUN_030f1954(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined **local_720;
  byte local_718;
  undefined4 local_714;
  undefined8 local_710;
  undefined1 local_708;
  undefined1 *local_700;
  undefined4 local_6f8;
  uint local_6f4;
  undefined1 auStack_6e0 [1280];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1be;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  undefined **local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  long *local_70;
  undefined8 local_68;
  undefined1 local_60;
  
  uVar10 = (ulong)*(int *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      while( true ) {
        uVar10 = uVar10 - 1;
        iVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                          (*(long **)(param_1 + 0x48),
                           *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar10 * 0x40 + 0x28));
        if (iVar5 == 0) break;
LAB_030f19ac:
        if ((long)uVar10 < 1) goto LAB_030f19b4;
      }
      iVar5 = *(int *)(param_1 + 0x100);
      lVar7 = *(long *)(param_1 + 0x18);
      if (0 < iVar5) {
        lVar11 = (long)iVar5 + -1;
        lVar7 = lVar7 + uVar10 * 0x40;
        plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
        (**(code **)(*plVar6 + 0x30))(plVar6,param_1,lVar7);
        if (0 < lVar11) {
          lVar11 = (long)iVar5 + -2;
          do {
            plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + lVar11 * 8);
            (**(code **)(*plVar6 + 0x30))(plVar6,param_1,lVar7);
            bVar1 = 0 < lVar11;
            lVar11 = lVar11 + -1;
          } while (bVar1);
        }
        lVar7 = *(long *)(param_1 + 0x18);
      }
      uVar8 = (long)*(int *)(param_1 + 0x20) - 1;
      *(int *)(param_1 + 0x20) = (int)uVar8;
      if (uVar10 == (uVar8 & 0xffffffff)) goto LAB_030f19ac;
      puVar2 = (undefined8 *)(lVar7 + uVar10 * 0x40);
      puVar3 = (undefined8 *)(lVar7 + uVar8 * 0x40);
      uVar9 = puVar3[5];
      puVar2[3] = puVar3[3];
      puVar2[5] = uVar9;
      puVar2[1] = puVar3[1];
      uVar9 = *puVar3;
      puVar2[2] = puVar3[2];
      *puVar2 = uVar9;
      uVar9 = puVar3[4];
      puVar2[6] = puVar3[6];
      puVar2[4] = uVar9;
    } while (0 < (long)uVar10);
  }
LAB_030f19b4:
  local_68 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
  local_194 = 0;
  local_180 = auStack_170;
  local_178 = -0x7ffffffc00000000;
  local_190 = 0x5f7ffff05f7ffff0;
  local_188 = 0;
  local_1a0 = &PTR_LAB_042b5268;
  local_60 = 0;
  local_198 = (undefined1)param_2[1];
  local_70 = param_2;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_1b0 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144);
  local_1b8 = *(undefined8 *)(param_1 + 0x28);
  local_1d0 = 0xffff;
  local_1c0 = 1;
  local_1cc = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1be = 0xfb;
  local_1a8 = 0;
  local_1d8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  local_1e0 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  local_1cc = *(undefined4 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) == -1) {
    local_1a8 = 0;
  }
  else {
    local_1a8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
  }
  local_1c0 = CONCAT11(local_1c0._1_1_,*(undefined1 *)(param_1 + 0x11c));
  (**(code **)(**(long **)(param_1 + 0x48) + 0x1d0))
            (*(long **)(param_1 + 0x48),&local_1e0,param_1 + 0x60,&local_1a0);
  puVar4 = PTR_FUN_042afee8;
  local_700 = auStack_6e0;
  local_718 = 0;
  local_714 = 0;
  local_710 = 0x5f7ffff05f7ffff0;
  local_708 = 0;
  local_720 = &PTR_LAB_042afed0;
  local_6f8 = 0;
  local_6f4 = 0x8000000a;
  (*(code *)PTR_FUN_042afee8)(&local_720);
  local_718 = local_718 | 0x40;
  local_730 = 0;
  uStack_728 = 0;
  FUN_030f1cb0(param_1,param_2,&local_720,&local_730);
  local_720 = &PTR_LAB_042afed0;
  (*(code *)puVar4)(&local_720);
  puVar4 = PTR_PTR_0434a080;
  local_6f8 = 0;
  if ((-1 < (int)local_6f4) && (local_700 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_700,((ulong)local_6f4 & 0x3fffffff) << 7);
  }
  lVar7 = local_178;
  uVar10 = (ulong)local_178._4_4_;
  local_1a0 = &PTR_LAB_042b5268;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_180 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_180,(uVar10 & 0x3fffffff) << 6);
  }
  return;
}


