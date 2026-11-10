/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a05db4; name: FUN_02a05db4
 */


void FUN_02a05db4(long param_1,undefined1 *param_2,long *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  long local_60;
  uint local_58;
  undefined1 local_54;
  byte local_53;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  if ((*(byte *)(*param_3 + 0x1d0) & 7) == 0) {
    return;
  }
  if (*(char *)(param_3[1] + 10) != '\t') {
    return;
  }
  iVar4 = FUN_029506a8(*param_3,0xe);
  uVar3 = iVar4 * 0x19;
  uVar8 = uVar3 / 100;
  if (0x31 < uVar3 % 100) {
    uVar8 = uVar3 / 100 + 1;
  }
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
  puVar1 = (undefined4 *)param_3[1];
  cVar2 = *(char *)(*param_3 + 0x7d);
  if ((*pcVar9 == '\0') || (pcVar9[2] != cVar2)) {
    if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar2)) {
      if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar2)) {
        if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar2)) {
          if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar2)) {
            if ((pcVar9[0xf] == '\0') || (pcVar9[0x11] != cVar2)) goto LAB_02a05f00;
            uVar6 = 5;
          }
          else {
            uVar6 = 4;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x8a,uVar6,100);
  lVar7 = *(long *)(param_1 + 0x20);
LAB_02a05f00:
  FUN_02a3fa08(*(undefined8 *)(lVar7 + 0x18),0x9c,0x2f5,*puVar1,0xffff0000);
  uVar5 = FUN_029719b8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x17a0) + 0x38),
                       *param_3,uVar8,0);
  if ((uVar5 & 1) != 0) {
    local_60 = *param_3;
    local_54 = 0x2b;
    local_50 = 0;
    local_48 = 0x100;
    local_53 = *(byte *)(local_60 + 0x1d0) >> 3;
    local_58 = uVar8;
    FUN_029f6330(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17c0),auStack_38,&local_60);
    local_60 = *param_3;
    local_58 = CONCAT31(local_58._1_3_,1);
    local_50 = 0;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_38,&local_60);
  }
  *param_2 = 1;
  return;
}


