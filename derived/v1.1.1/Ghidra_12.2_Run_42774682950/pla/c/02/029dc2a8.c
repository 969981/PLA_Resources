/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dc2a8; name: FUN_029dc2a8
 */


void FUN_029dc2a8(long param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined7 local_54;
  undefined1 uStack_4d;
  undefined7 uStack_4c;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  uVar2 = FUN_029dc458(param_1,*param_3,*(undefined8 *)(param_3 + 2));
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  iVar4 = *param_3;
  FUN_02a39100(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18),iVar4);
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x66,iVar4);
  iVar4 = *param_3;
  uVar3 = 0x267;
  switch(iVar4) {
  case 1:
    break;
  case 2:
    uVar3 = 0x269;
    break;
  default:
    goto switchD_029dc330_caseD_3;
  case 4:
    uVar3 = 0x2aa;
    break;
  case 5:
    uVar3 = 0x2ac;
    break;
  case 8:
    uVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x11) - 1;
    if (uVar1 < 4) {
      uVar3 = *(undefined4 *)(&DAT_03889260 + (long)(char)uVar1 * 4);
      break;
    }
    goto LAB_029dc3e8;
  case 9:
    uVar3 = 0x37a;
  }
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,uVar3,0xffff0000);
  iVar4 = *param_3;
switchD_029dc330_caseD_3:
  if (iVar4 == 5) {
    FUN_029dc564(param_1);
    iVar4 = *param_3;
  }
  if (iVar4 == 8) {
LAB_029dc3e8:
    local_88[0] = 0x1f;
    local_70 = 0xa7;
    local_7f = 0;
    local_6c = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    local_84 = 8;
    local_80 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xf);
    local_78 = 0xf9;
    FUN_029dba1c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc40),auStack_38,local_88);
    iVar4 = *param_3;
  }
  if (iVar4 == 9) {
    FUN_029dc674(param_1);
  }
  *param_2 = 1;
  return;
}


