/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a033ac; name: FUN_02a033ac
 */


void FUN_02a033ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_3 + 3) != '\0') {
    local_60 = *param_3;
    local_50 = param_3[1];
    local_58 = param_3[2];
    uStack_48 = param_3[4];
    local_40 = param_3[5];
    local_38 = 0;
    FUN_029df664(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8e0),auStack_28,&local_60);
    return;
  }
  switch(*(undefined4 *)((long)param_3 + 0x1c)) {
  case 1:
    local_58 = *param_3;
    local_60 = param_3[2];
    local_50 = param_3[5];
    FUN_02a044fc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x7c0),auStack_28,&local_60);
    break;
  case 2:
    local_50 = *param_3;
    local_60 = param_3[1];
    local_58 = param_3[2];
    uStack_48 = param_3[5];
    FUN_02a03fbc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x780),auStack_28,&local_60);
    break;
  case 3:
    local_58 = *param_3;
    local_60 = param_3[2];
    local_50 = param_3[5];
    FUN_02a04228(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x7a0),auStack_28,&local_60);
    break;
  case 5:
    local_50 = *param_3;
    local_60 = param_3[1];
    local_58 = param_3[2];
    uStack_48 = param_3[5];
    FUN_02a03754(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x700),auStack_28,&local_60);
    break;
  case 10:
    iVar1 = *(int *)param_3[2];
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x720);
    if (iVar1 < 0xf1) {
      if (iVar1 == 0xc9) {
        uVar3 = 4;
      }
      else {
        if (iVar1 != 0xf0) {
LAB_02a03588:
          uVar2 = FUN_02989478(*(undefined8 *)(lVar4 + 0x38),*param_3);
          if ((uVar2 & 1) == 0) {
            FUN_02a3fa08(*(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
          }
          else {
            lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 8);
            *(undefined1 *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x1c8) * 0x40 + 0x21) = 1;
          }
          break;
        }
        uVar3 = 2;
      }
    }
    else if (iVar1 == 0x102) {
      uVar3 = 3;
    }
    else {
      if (iVar1 != 0xf1) goto LAB_02a03588;
      uVar3 = 1;
    }
    FUN_02a03a74(lVar4,*param_3,uVar3);
    break;
  case 0xb:
  case 0xd:
    local_58 = *param_3;
    local_60 = param_3[2];
    local_50 = param_3[5];
    FUN_02a0483c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x7e0),auStack_28,&local_60);
    break;
  case 0xc:
    local_58 = *param_3;
    local_50 = param_3[5];
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)param_3[2]);
    FUN_02a03d50(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x740),auStack_28,&local_60);
  }
  FUN_029768d0(*(undefined8 *)(param_1 + 0x38),param_3[2],*param_3);
  return;
}


