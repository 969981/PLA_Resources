/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a08b94; name: FUN_02a08b94
 */


void FUN_02a08b94(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  undefined **local_70;
  undefined4 local_68;
  
  *param_2 = 0;
  lVar2 = param_3[1];
  uVar5 = *(undefined1 *)(lVar2 + 0x7d);
  lVar13 = param_3[2];
  uVar3 = *(undefined4 *)*param_3;
  uVar4 = ((undefined4 *)*param_3)[8];
  local_78 = '\0';
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar7 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),lVar2,lVar13,uVar3);
  local_70 = &PTR_LAB_04294ec8;
  local_68 = uVar3;
  iVar8 = FUN_02c8dfdc(&local_70,0);
  iVar9 = FUN_02c8dfdc(&local_70,1);
  uVar12 = 2;
  if (iVar8 == 0) {
    uVar12 = 1;
  }
  uVar1 = (uint)(iVar8 != 0);
  if (iVar9 != 0) {
    uVar1 = uVar12;
  }
  iVar8 = FUN_02c8dfdc(&local_70,2);
  if (iVar8 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != 0) {
    uVar12 = 0;
    do {
      FUN_029744f0(*(undefined8 *)(param_1 + 0x38),uVar3,uVar12,lVar2,lVar13,&local_70,&local_94);
      ppuVar6 = local_70;
      if ((int)local_70 == 0) {
        if (local_78 != '\0') {
          uVar11 = (ulong)uStack_80._4_4_;
          if (uStack_80._4_4_ < 5) {
            uStack_80 = CONCAT44(uStack_80._4_4_ + 1,(undefined4)uStack_80);
            *(undefined4 *)((long)&local_90 + uVar11 * 4) = 1;
          }
        }
      }
      else {
        uVar10 = FUN_0299881c(uVar3,uVar4,uVar12);
        uVar11 = FUN_02a08d4c(param_1,uVar5,(ulong)ppuVar6 & 0xffffffff,local_94,uVar10,uVar7 & 1,
                              *(undefined1 *)((long)param_3 + 0x1c),(int)param_3[3],lVar13,&local_90
                             );
        if ((uVar11 & 1) != 0) {
          FUN_02974a70(*(undefined8 *)(param_1 + 0x38),lVar13,uVar3,(ulong)ppuVar6 & 0xffffffff,
                       local_94);
          *param_2 = 1;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar12);
  }
  return;
}


