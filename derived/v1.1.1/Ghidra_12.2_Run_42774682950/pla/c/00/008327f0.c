/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008327f0; name: FUN_008327f0
 */


undefined8
FUN_008327f0(long param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 *param_6,ulong param_7,undefined4 param_8)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  
  local_60 = param_7;
  local_58 = param_8;
  memset(local_68,0,4);
  if ((*param_2 == *PTR_DAT_04377e08) && (param_2[1] == PTR_DAT_04377e08[1])) {
    memset(local_68,0xff,4);
    local_68[0] = local_68[0] & 0xffffff;
  }
  else if ((*(char *)(param_1 + 0x7e0) == *param_2) && (param_2[1] == -1)) {
    FUN_008311e8(auStack_88,*(undefined8 *)PTR_DAT_04377ce8);
    memcpy(local_68,auStack_88,4);
  }
  cVar2 = *(char *)(param_1 + 0x7e3);
  FUN_007f0ce0(auStack_88);
  bVar1 = local_68[0] == 0;
  if (bVar1) {
    uVar5 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    lVar3 = FUN_00827d64(uVar5,param_2);
    FUN_007f0f88(auStack_88,lVar3 + 8);
    local_68[0] = 1 << (ulong)(*(byte *)(lVar3 + 0x28) & 0x1f) | local_68[0];
  }
  else {
  }
  if ((local_60._4_1_ == '\0') &&
     (lVar3 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),0), lVar3 != 0)) {
    iVar7 = 0;
    do {
      lVar3 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar7);
      uVar4 = FUN_00846c54(param_1,lVar3,*param_6,param_5,local_60._6_1_,param_3);
      if ((((uVar4 & 1) != 0) && (*(uint *)(lVar3 + 0x5fc) == local_68[0])) &&
         (uVar4 = FUN_007f0f48(lVar3 + 0x600,auStack_88), (uVar4 & 1) != 0)) {
        if (lVar3 != 0) goto LAB_008329dc;
        break;
      }
      iVar7 = iVar7 + 1;
      lVar3 = FUN_00845d14(*(undefined8 *)(param_1 + 0x40),iVar7);
    } while (lVar3 != 0);
  }
  lVar3 = FUN_00833394(param_1,param_2,auStack_88,param_3,&local_60);
  uVar5 = 0;
  if (lVar3 != 0) {
LAB_008329dc:
    uVar5 = FUN_00846d14(param_1,lVar3,param_4);
    uVar6 = FUN_008336f4(param_1 + 0x7e2,param_2);
    local_60 = local_60 & 0xffffffffffffff;
    local_58 = CONCAT31(local_58._1_3_,!bVar1 && cVar2 != '\0');
    FUN_00849088(param_1 + 0x48,lVar3,uVar5,uVar6,&local_60);
    uVar5 = 1;
  }
  return uVar5;
}


