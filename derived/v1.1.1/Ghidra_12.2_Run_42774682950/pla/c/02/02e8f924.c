/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8f924; name: FUN_02e8f924
 */


int FUN_02e8f924(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if (param_2[0xc] == 0) {
LAB_02e8fa1c:
    iVar4 = FUN_02e94658(param_1);
    if ((iVar4 != 1) && (param_2[0xc] != 0)) {
      uVar7 = 0;
      do {
        FUN_02e946e4(param_1,*(undefined4 *)(*(long *)(param_2 + 0xe) + uVar7 * 4));
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2[0xc]);
    }
LAB_02e8fa9c:
    (*DAT_0442d150)(0,*(undefined8 *)(param_2 + 0xe));
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else {
    if (param_2[0xc] != 1) {
      uVar7 = 0;
      do {
        local_d0 = *(undefined8 *)param_2;
        local_c8 = *(undefined8 *)(param_2 + 2);
        uStack_c0 = *(undefined8 *)(param_2 + 4);
        local_b8 = *(undefined8 *)(param_2 + 6);
        uStack_b0 = *(undefined8 *)(param_2 + 8);
        local_a8 = *(undefined8 *)(param_2 + 10);
        uStack_a0 = *(undefined8 *)(param_2 + 0xc);
        local_98 = *(undefined8 *)(param_2 + 0xe);
        uStack_90 = *(undefined8 *)(param_2 + 0x10);
        iVar4 = FUN_02e94560(param_1,&local_d0,*(undefined4 *)(*(long *)(param_2 + 0xe) + uVar7 * 4)
                            );
        if (iVar4 != 1) {
          if ((int)uVar7 != 0) {
            lVar9 = 0;
            do {
              FUN_02e946e4(param_1,*(undefined4 *)
                                    (*(long *)(param_2 + 0xe) + (uVar7 - 1 & 0xffffffff) * 4 +
                                    lVar9 * 4));
              iVar8 = (int)lVar9;
              lVar9 = lVar9 + -1;
            } while ((int)uVar7 + iVar8 != 1);
          }
          goto LAB_02e8fa9c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2[0xc]);
      goto LAB_02e8fa1c;
    }
    local_88 = *(undefined8 *)param_2;
    local_80 = *(undefined8 *)(param_2 + 2);
    uStack_78 = *(undefined8 *)(param_2 + 4);
    local_70 = *(undefined8 *)(param_2 + 6);
    uStack_68 = *(undefined8 *)(param_2 + 8);
    local_60 = *(undefined8 *)(param_2 + 10);
    uStack_58 = *(undefined8 *)(param_2 + 0xc);
    local_50 = *(undefined8 *)(param_2 + 0xe);
    uStack_48 = *(undefined8 *)(param_2 + 0x10);
    iVar4 = FUN_02e94560(param_1,&local_88,param_2[0xe]);
    if ((iVar4 == 1) && (iVar4 = FUN_02e94658(param_1), iVar4 != 1)) {
      FUN_02e946e4(param_1,param_2[0xe]);
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  uVar3 = *param_2;
  if (1 < uVar3) {
    if (uVar3 - 2 < 2) {
      uVar5 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar5 = 0;
      }
      goto LAB_02e8facc;
    }
    uVar5 = 0;
    if (1 < uVar3 - 6) goto LAB_02e8facc;
  }
  uVar5 = param_2[1];
LAB_02e8facc:
  uVar3 = param_2[10];
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xf4) = iVar4;
  if (uVar3 != 2) {
    uVar6 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar5,uVar6,iVar4,uVar2);
  return iVar4;
}


