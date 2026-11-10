/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f204; name: FUN_0021f204
 */


void FUN_0021f204(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN_00876bf0(*(undefined8 *)(param_1 + 8));
  if (*(long *)(lVar2 + 0x48) == 0) {
    if (param_3 == 0) {
      local_70 = 0;
      uStack_68 = 0;
      local_80 = CONCAT44(local_80._4_4_,0x21);
      lVar3 = *(long *)(lVar2 + 0x30);
      iVar1 = nn::util::BinaryBlockHeader::GetBlockSize();
      local_80 = CONCAT44(iVar1 + -0x10,(undefined4)local_80);
      local_78 = lVar3 + 0x10;
      FUN_00878498(*(undefined8 *)(lVar2 + 0x40),param_2,&local_80);
      iVar1 = 0;
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x40);
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x30) + (param_4 - (int)lVar2) + 0x10;
      *(long *)(lVar2 + 0x48) = param_3;
    }
    *(int *)(lVar2 + 0x50) = iVar1;
    lVar3 = **(long **)(lVar2 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3;
    lVar2 = *(long *)(lVar3 + 0x68);
    FUN_0087ea9c(*(undefined8 *)(lVar3 + 0x80),param_2,lVar3 + 0x10,*(undefined8 *)(lVar2 + 0x28),
                 ((ulong)*(uint *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x10)) +
                 **(long **)(lVar3 + 0x70) + -0x10,*(undefined4 *)(lVar3 + 0x50));
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_00876dc8(&local_80);
    local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(lVar3 + 0x5c));
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar3 + 0x58));
    local_80 = CONCAT44(*(undefined4 *)(lVar3 + 0x1c),(undefined4)local_80);
    local_50 = *(undefined8 *)(lVar3 + 0x80);
    local_60 = CONCAT44(*(undefined4 *)(lVar3 + 0x30),(undefined4)local_60);
    local_70._0_4_ = CONCAT22(*(undefined2 *)(lVar3 + 0x16),(undefined2)local_70);
    FUN_0087ebc0(*(undefined8 *)(lVar3 + 0x88),param_2,&local_80);
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(lVar2 + 0x28);
  }
  return;
}


