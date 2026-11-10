/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fbb04; name: FUN_029fbb04
 */


ulong FUN_029fbb04(long param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0xce0);
  cVar4 = *(char *)(param_2 + 0x7d);
  uVar6 = FUN_0296eaa8(*(undefined8 *)(lVar11 + 0x38));
  if (cVar4 != '\x1f') {
    uVar6 = FUN_0296ed7c(*(undefined8 *)(lVar11 + 0x38),cVar4,uVar6);
  }
  uVar5 = FUN_0293ef80(param_2,uVar6);
  uVar8 = FUN_0298b2cc(*(undefined8 *)(param_1 + 0x38),param_2,uVar6,uVar5);
  iVar7 = (int)uVar8;
  if (iVar7 == 0) {
    return uVar8;
  }
  uVar1 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x10);
  if (iVar7 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar8 = FUN_029719b8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x17a0) + 0x38),param_2
                       ,uVar8 & 0xffffffff,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) goto LAB_029fbc7c;
  if ((uVar6 & 0xff) == 3) {
    uVar10 = 0x86;
LAB_029fbc58:
    local_78 = (ulong)(CONCAT14(bVar2,uVar10) | 0x820000);
  }
  else {
    if ((uVar6 & 0xff) == 4) {
      uVar10 = 0x85;
      goto LAB_029fbc58;
    }
    local_78 = 0;
  }
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),&local_78);
LAB_029fbc7c:
  local_78 = CONCAT62(local_78._2_6_,0xe);
  lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (bVar2 < 6) {
    uVar8 = 0;
  }
  else if (bVar2 < 0xc) {
    uVar8 = 2;
  }
  else if (bVar2 < 0x12) {
    uVar8 = 1;
  }
  else {
    uVar6 = 3;
    if (0x17 < bVar2) {
      uVar6 = (uint)(bVar2 < 0x1e) << 2;
    }
    uVar8 = (ulong)uVar6;
  }
  uVar6 = (uint)*(byte *)(lVar11 + uVar8 * 0x38 + 0x38);
  if (uVar6 != 0) {
    uVar9 = 0;
    do {
      if (*(byte *)(*(long *)(lVar11 + uVar8 * 0x38 + (ulong)(uVar9 & 0xff) * 8 + 8) + 0x7d) ==
          bVar2) {
        cVar4 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if (cVar4 != '\x06') goto LAB_029fbd2c;
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  cVar4 = '\x06';
LAB_029fbd2c:
  uVar3 = local_78;
  local_78._5_3_ = SUB83(uVar3,5);
  local_78._0_5_ = CONCAT23(6,CONCAT12(cVar4,(undefined2)local_78));
  local_70 = local_70 & 0xffffffff00000000;
  FUN_02a00c54(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x19e0),auStack_80,&local_78);
  local_70 = CONCAT35(CONCAT21(local_70._6_2_,uVar1),CONCAT14(1,iVar7));
  local_68 = 0;
  local_60 = CONCAT62(local_60._2_6_,0x101);
  local_78 = param_2;
  FUN_029f6330(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17c0),auStack_80,&local_78);
  return 1;
}


