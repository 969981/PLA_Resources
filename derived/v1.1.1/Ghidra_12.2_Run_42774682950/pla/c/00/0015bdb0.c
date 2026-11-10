/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015bdb0; name: FUN_0015bdb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0015bdb0(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_60;
  undefined1 local_54 [4];
  
  puVar5 = &local_60;
  if (((*(int *)(param_3 + 3) == 0) && (lVar12 = *(long *)(param_1 + 0x68), lVar12 != param_2)) &&
     (lVar12 != 0)) {
    if (*(char *)(lVar12 + 8) == '\x04') {
      local_60 = (ulong)*(byte *)(lVar12 + 0xb) + 1;
      if (0xfe < local_60) goto LAB_0015be8c;
LAB_0015c634:
      uVar10 = local_60;
      local_54[0] = (undefined1)local_60;
      iVar2 = *(int *)((long)param_3 + 0x1c);
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
      }
    }
    else {
      local_60 = *(long *)(lVar12 + 0x10) + 1;
      if (local_60 < 0xff) goto LAB_0015c634;
LAB_0015be8c:
      local_54[0] = 0xff;
      iVar2 = *(int *)((long)param_3 + 0x1c);
      uVar10 = local_60;
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
        uVar10 = local_60;
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          uVar10 = local_60;
        }
      }
    }
    lVar6 = uVar10 - 1;
    if ((lVar6 == 0) || (iVar2 != 0)) goto LAB_0015be00;
    uVar4 = *param_3;
    pcVar9 = (code *)param_3[1];
    puVar5 = (undefined8 *)(lVar12 + 0x18);
    uVar8 = param_3[2];
  }
  else {
    local_60 = local_60 & 0xffffffffffffff00;
    iVar2 = *(int *)((long)param_3 + 0x1c);
    if (iVar2 != 0) goto LAB_0015be00;
    uVar4 = *param_3;
    pcVar9 = (code *)param_3[1];
    uVar8 = param_3[2];
    lVar6 = 1;
  }
  iVar2 = (*pcVar9)(uVar4,puVar5,lVar6,uVar8);
  *(int *)((long)param_3 + 0x1c) = iVar2;
LAB_0015be00:
  if (iVar2 == 0) {
    local_60._0_4_ = *(undefined4 *)(param_1 + 0x28);
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0x2c));
  }
  else {
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0x2c));
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_60._0_1_ = *(undefined1 *)(param_1 + 10);
  }
  else {
    local_60._1_7_ = (uint7)(local_60 >> 8);
    local_60._0_1_ = *(undefined1 *)(param_1 + 10);
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_60._0_1_ = *(undefined1 *)(param_1 + 0xb);
  }
  else {
    local_60._0_1_ = *(undefined1 *)(param_1 + 0xb);
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_1 + 0xc));
  }
  else {
    local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_1 + 0xc));
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_60._0_4_ = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    local_60._4_4_ = (uint)(local_60 >> 0x20);
    local_60._0_4_ = *(undefined4 *)(param_1 + 0x18);
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x18) != 0)) {
      iVar2 = (*(code *)param_3[1])
                        (*param_3,*(undefined8 *)(param_1 + 0x38),
                         (long)*(int *)(param_1 + 0x18) << 2,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
    uVar11 = *(uint *)(param_1 + 0x14);
    local_60 = CONCAT44(local_60._4_4_,uVar11);
    if (iVar2 == 0) {
      iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x14);
    local_60 = CONCAT44(local_60._4_4_,uVar11);
  }
  if (0 < (int)uVar11) {
    lVar12 = 0;
    uVar10 = (ulong)uVar11;
    do {
      lVar6 = *(long *)(param_1 + 0x30);
      local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(lVar6 + lVar12 + 8)) & 0xffffffffffffff3f;
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
      }
      switch(*(uint *)(lVar6 + lVar12 + 8) & 0x3f) {
      case 1:
        local_60 = CONCAT71(local_60._1_7_,(char)*(undefined4 *)(lVar6 + lVar12));
joined_r0x0015c134:
        if (iVar2 == 0) {
          uVar4 = *param_3;
          pcVar9 = (code *)param_3[1];
          uVar8 = param_3[2];
          lVar7 = 1;
          puVar5 = &local_60;
LAB_0015c028:
          iVar2 = (*pcVar9)(uVar4,puVar5,lVar7,uVar8);
          *(int *)((long)param_3 + 0x1c) = iVar2;
        }
        break;
      case 3:
      case 0x13:
        local_60 = *(ulong *)(lVar6 + lVar12);
        if (iVar2 == 0) {
          uVar4 = *param_3;
          pcVar9 = (code *)param_3[1];
          uVar8 = param_3[2];
          lVar7 = 8;
          puVar5 = &local_60;
          goto LAB_0015c028;
        }
        break;
      case 4:
      case 0x14:
        lVar6 = *(long *)(lVar6 + lVar12);
        if (lVar6 == 0) {
          local_60 = (ulong)local_60._1_7_ << 8;
          goto joined_r0x0015c134;
        }
        if (*(char *)(lVar6 + 8) == '\x04') {
          local_60 = (ulong)*(byte *)(lVar6 + 0xb) + 1;
          if (0xfe < local_60) goto LAB_0015c0b8;
LAB_0015c150:
          uVar1 = local_60;
          local_54[0] = (undefined1)local_60;
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
            *(int *)((long)param_3 + 0x1c) = iVar2;
          }
        }
        else {
          local_60 = *(long *)(lVar6 + 0x10) + 1;
          if (local_60 < 0xff) goto LAB_0015c150;
LAB_0015c0b8:
          local_54[0] = 0xff;
          uVar1 = local_60;
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
            *(int *)((long)param_3 + 0x1c) = iVar2;
            uVar1 = local_60;
            if (iVar2 == 0) {
              iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
              *(int *)((long)param_3 + 0x1c) = iVar2;
              uVar1 = local_60;
            }
          }
        }
        if ((iVar2 == 0) && (lVar7 = uVar1 - 1, lVar7 != 0)) {
          uVar4 = *param_3;
          pcVar9 = (code *)param_3[1];
          uVar8 = param_3[2];
          puVar5 = (undefined8 *)(lVar6 + 0x18);
          goto LAB_0015c028;
        }
      }
      uVar10 = uVar10 - 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 != 0);
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  uVar10 = (ulong)uVar11;
  local_60 = CONCAT44(local_60._4_4_,uVar11);
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if (0 < (int)uVar11) {
    lVar12 = 0;
    do {
      if (iVar2 == 0) {
        local_60._0_1_ = *(undefined1 *)(*(long *)(param_1 + 0x58) + lVar12 + 8);
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
        local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(*(long *)(param_1 + 0x58) + lVar12 + 9));
      }
      else {
        local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(*(long *)(param_1 + 0x58) + lVar12 + 9));
      }
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
      }
      uVar10 = uVar10 - 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 != 0);
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  local_60 = CONCAT44(local_60._4_4_,uVar11);
  if (iVar2 == 0) {
    uVar3 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
  }
  if (0 < (int)uVar11) {
    uVar10 = 0;
    do {
      FUN_0015bdb0(*(undefined8 *)(*(long *)(param_1 + 0x40) + uVar10 * 8),
                   *(undefined8 *)(param_1 + 0x68),param_3);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if (*(int *)(param_3 + 3) == 0) {
    local_60._0_4_ = *(uint *)(param_1 + 0x1c);
    uVar10 = (ulong)(uint)local_60;
    iVar2 = *(int *)((long)param_3 + 0x1c);
  }
  else {
    uVar10 = 0;
    local_60._0_4_ = 0;
    iVar2 = *(int *)((long)param_3 + 0x1c);
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (((int)uVar10 != 0) && (iVar2 == 0)) {
      iVar2 = (*(code *)param_3[1])
                        (*param_3,*(undefined8 *)(param_1 + 0x48),
                         -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
  }
  if (*(int *)(param_3 + 3) == 0) {
    uVar11 = *(uint *)(param_1 + 0x24);
    local_60 = CONCAT44(local_60._4_4_,uVar11);
  }
  else {
    uVar11 = 0;
    local_60 = (ulong)local_60._4_4_ << 0x20;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if (0 < (int)uVar11) {
    lVar12 = 0;
    uVar10 = (ulong)uVar11;
    lVar6 = **(long **)(param_1 + 0x50);
    if (lVar6 != 0) goto LAB_0015c358;
LAB_0015c3c0:
    local_60 = local_60 & 0xffffffffffffff00;
    if (iVar2 != 0) goto LAB_0015c430;
    uVar4 = *param_3;
    pcVar9 = (code *)param_3[1];
    uVar8 = param_3[2];
    lVar7 = 1;
    puVar5 = &local_60;
    do {
      iVar2 = (*pcVar9)(uVar4,puVar5,lVar7,uVar8);
      *(int *)((long)param_3 + 0x1c) = iVar2;
LAB_0015c430:
      do {
        if (iVar2 == 0) {
          local_60._0_4_ = *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar12 + 8);
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          local_60 = CONCAT44(local_60._4_4_,
                              *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar12 + 0xc));
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,
                              *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar12 + 0xc));
        }
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
        }
        uVar10 = uVar10 - 1;
        lVar12 = lVar12 + 0x10;
        if (uVar10 == 0) goto LAB_0015c4a0;
        lVar6 = *(long *)(*(long *)(param_1 + 0x50) + lVar12);
        if (lVar6 == 0) goto LAB_0015c3c0;
LAB_0015c358:
        if (*(char *)(lVar6 + 8) == '\x04') {
          local_60 = (ulong)*(byte *)(lVar6 + 0xb) + 1;
          if (0xfe < local_60) goto LAB_0015c378;
LAB_0015c3f0:
          uVar1 = local_60;
          local_54[0] = (undefined1)local_60;
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
            *(int *)((long)param_3 + 0x1c) = iVar2;
          }
        }
        else {
          local_60 = *(long *)(lVar6 + 0x10) + 1;
          if (local_60 < 0xff) goto LAB_0015c3f0;
LAB_0015c378:
          local_54[0] = 0xff;
          uVar1 = local_60;
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
            *(int *)((long)param_3 + 0x1c) = iVar2;
            uVar1 = local_60;
            if (iVar2 == 0) {
              iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
              *(int *)((long)param_3 + 0x1c) = iVar2;
              uVar1 = local_60;
            }
          }
        }
      } while ((iVar2 != 0) || (lVar7 = uVar1 - 1, lVar7 == 0));
      uVar4 = *param_3;
      pcVar9 = (code *)param_3[1];
      puVar5 = (undefined8 *)(lVar6 + 0x18);
      uVar8 = param_3[2];
    } while( true );
  }
LAB_0015c4a0:
  if (*(int *)(param_3 + 3) == 0) {
    uVar11 = *(uint *)(param_1 + 0x10);
    local_60 = CONCAT44(local_60._4_4_,uVar11);
  }
  else {
    uVar11 = 0;
    local_60 = (ulong)local_60._4_4_ << 0x20;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if ((int)uVar11 < 1) {
    return;
  }
  lVar12 = 0;
  uVar10 = (ulong)uVar11;
  lVar6 = **(long **)(param_1 + 0x58);
  if (lVar6 != 0) goto LAB_0015c51c;
LAB_0015c584:
  local_60 = local_60 & 0xffffffffffffff00;
  if (iVar2 != 0) goto LAB_0015c504;
  uVar4 = *param_3;
  pcVar9 = (code *)param_3[1];
  uVar8 = param_3[2];
  lVar7 = 1;
  puVar5 = &local_60;
  do {
    iVar2 = (*pcVar9)(uVar4,puVar5,lVar7,uVar8);
    *(int *)((long)param_3 + 0x1c) = iVar2;
LAB_0015c504:
    do {
      uVar10 = uVar10 - 1;
      lVar12 = lVar12 + 0x10;
      if (uVar10 == 0) {
        return;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + lVar12);
      if (lVar6 == 0) goto LAB_0015c584;
LAB_0015c51c:
      if (*(char *)(lVar6 + 8) == '\x04') {
        local_60 = (ulong)*(byte *)(lVar6 + 0xb) + 1;
        if (0xfe < local_60) goto LAB_0015c53c;
LAB_0015c5b4:
        uVar1 = local_60;
        local_54[0] = (undefined1)local_60;
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
        }
      }
      else {
        local_60 = *(long *)(lVar6 + 0x10) + 1;
        if (local_60 < 0xff) goto LAB_0015c5b4;
LAB_0015c53c:
        local_54[0] = 0xff;
        uVar1 = local_60;
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,local_54,1,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          uVar1 = local_60;
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
            *(int *)((long)param_3 + 0x1c) = iVar2;
            uVar1 = local_60;
          }
        }
      }
    } while ((iVar2 != 0) || (lVar7 = uVar1 - 1, lVar7 == 0));
    uVar4 = *param_3;
    pcVar9 = (code *)param_3[1];
    puVar5 = (undefined8 *)(lVar6 + 0x18);
    uVar8 = param_3[2];
  } while( true );
}


