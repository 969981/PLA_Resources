/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a09008; name: FUN_02a09008
 */


/* WARNING: Removing unreachable block (ram,0x02a0919c) */
/* WARNING: Removing unreachable block (ram,0x02a0920c) */

void FUN_02a09008(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 local_94;
  int local_90 [4];
  undefined8 uStack_80;
  char local_78;
  undefined **local_70;
  undefined4 local_68;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar11 = param_3[2];
  lVar10 = param_3[1];
  uVar7 = *(undefined4 *)*param_3;
  uVar2 = *(undefined1 *)(lVar10 + 0x7d);
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  uStack_80 = 0;
  local_78 = '\x01';
  uVar3 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),lVar10,uVar11,uVar7);
  local_70 = &PTR_LAB_04294ec8;
  local_68 = uVar7;
  iVar4 = FUN_02c8dfdc(&local_70,0);
  iVar5 = FUN_02c8dfdc(&local_70,1);
  uVar8 = 2;
  if (iVar4 == 0) {
    uVar8 = 1;
  }
  uVar1 = (uint)(iVar4 != 0);
  if (iVar5 != 0) {
    uVar1 = uVar8;
  }
  iVar4 = FUN_02c8dfdc(&local_70,2);
  if (iVar4 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == 0) {
LAB_02a0917c:
    uVar6 = (ulong)uStack_80._4_4_;
    if (uStack_80._4_4_ != 0) {
      if (uStack_80._4_4_ == 1) {
        lVar9 = 0;
        iVar4 = 0;
LAB_02a091d8:
        if (local_90[lVar9] == 1) {
          iVar4 = iVar4 + 1;
        }
      }
      else {
        iVar4 = 0;
        lVar10 = 0;
        do {
          lVar9 = lVar10 + 2;
          if (local_90[lVar10] == 1) {
            iVar4 = iVar4 + 1;
          }
          if (local_90[lVar10 + 1] == 1) {
            iVar4 = iVar4 + 1;
          }
          lVar10 = lVar9;
        } while (uVar6 - (uVar6 & 1) != lVar9);
        if ((uStack_80 & 0x100000000) != 0) goto LAB_02a091d8;
      }
      if (iVar4 != 0) {
        uVar7 = 0;
        goto LAB_02a09268;
      }
      if (uStack_80._4_4_ == 1) {
        lVar9 = 0;
        iVar4 = 0;
LAB_02a09248:
        if (local_90[lVar9] == 3) {
          iVar4 = iVar4 + 1;
        }
      }
      else {
        iVar4 = 0;
        lVar10 = 0;
        do {
          lVar9 = lVar10 + 2;
          if (local_90[lVar10] == 3) {
            iVar4 = iVar4 + 1;
          }
          if (local_90[lVar10 + 1] == 3) {
            iVar4 = iVar4 + 1;
          }
          lVar10 = lVar9;
        } while (uVar6 - (uVar6 & 1) != lVar9);
        if ((uStack_80 & 0x100000000) != 0) goto LAB_02a09248;
      }
      if (iVar4 != 0) {
        uVar7 = 1;
        goto LAB_02a09268;
      }
    }
  }
  else {
    uVar8 = 0;
    do {
      FUN_029744f0(*(undefined8 *)(param_1 + 0x38),uVar7,uVar8,lVar10,uVar11,&local_70,&local_94);
      if ((int)local_70 == 0) {
        if (local_78 != '\0') {
          uVar6 = (ulong)uStack_80._4_4_;
          if (uStack_80._4_4_ < 5) {
            uStack_80 = CONCAT44(uStack_80._4_4_ + 1,(undefined4)uStack_80);
            local_90[uVar6] = 1;
          }
        }
      }
      else {
        uVar6 = FUN_02a09290(param_1,uVar2,(ulong)local_70 & 0xffffffff,local_94,uVar3 & 1,0,
                             *(undefined4 *)(param_3 + 3),uVar11,local_90);
        if ((uVar6 & 1) != 0) {
          *param_2 = 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
    if (local_78 != '\0') goto LAB_02a0917c;
  }
  uVar7 = 2;
LAB_02a09268:
  *(undefined4 *)(param_2 + 4) = uVar7;
  return;
}


