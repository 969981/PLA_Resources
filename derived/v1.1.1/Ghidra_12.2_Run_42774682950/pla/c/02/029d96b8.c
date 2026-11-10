/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d96b8; name: FUN_029d96b8
 */


void FUN_029d96b8(long param_1,ushort *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ushort local_84 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  *param_2 = 0;
  lVar11 = *param_3;
  local_80 = CONCAT44(local_80._4_4_,0x28);
  local_70 = 0;
  local_78 = FUN_029506a8(lVar11,8);
  uVar7 = FUN_029506a8(lVar11,0xf);
  local_80 = CONCAT44(uVar7,(undefined4)local_80);
  local_74 = FUN_029506a8(lVar11,9);
  uVar8 = FUN_029ce294(*(undefined8 *)(param_1 + 8),&local_80);
  lVar11 = DAT_043ecde0;
  uVar1 = *(ulong *)(DAT_043ecde0 + 8);
  uVar2 = *(ulong *)(DAT_043ecde0 + 0x10);
  uVar10 = uVar2 ^ uVar1;
  *(ulong *)(DAT_043ecde0 + 8) = uVar10 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar10 << 0x10;
  *(ulong *)(lVar11 + 0x10) = uVar10 >> 0x1b | uVar10 << 0x25;
  uVar8 = (100 - ((int)uVar2 + (int)uVar1 & 0xfU)) * (uVar8 & 0xffff);
  uVar9 = (undefined2)(uVar8 / 100);
  if (((ulong)uVar8 / 100 & 0xffff) == 0) {
    uVar9 = 1;
  }
  local_80 = CONCAT62(local_80._2_6_,uVar9);
  FUN_0298ce60(*(undefined8 *)(param_1 + 0x38),*param_3,&local_80);
  local_84[0] = (ushort)local_80;
  cVar6 = FUN_02981a0c(*(undefined8 *)(param_1 + 0x38),*param_3,*param_3,0,local_84);
  uVar5 = local_84[0];
  lVar12 = *param_3;
  lVar11 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(lVar12 + 0x7d);
  bVar4 = *(byte *)(lVar12 + 0xd0);
  FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x74,uVar3);
  FUN_02a3b7b0(lVar11,lVar12,-(uint)uVar5,2,bVar4 >> 3,1,0);
  FUN_02a3fa08(*(undefined8 *)(lVar11 + 0x18),0x9c,0x240,uVar3,0xffff0000);
  if (cVar6 != '\0') {
    local_80 = *param_3;
    local_78 = CONCAT31(local_78._1_3_,cVar6);
    FUN_029ea874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1380),auStack_68,&local_80);
  }
  FUN_0298d300(*(undefined8 *)(param_1 + 0x38),*param_3,*param_3);
  *param_2 = uVar5;
  return;
}


