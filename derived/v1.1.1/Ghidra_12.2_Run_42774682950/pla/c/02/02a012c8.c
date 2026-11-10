/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a012c8; name: FUN_02a012c8
 */


void FUN_02a012c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  uint5 local_58;
  undefined3 uStack_53;
  undefined1 local_50;
  undefined4 local_4c;
  undefined3 uStack_48;
  undefined8 local_38;
  
  iVar3 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),param_3[2],*(undefined4 *)param_3[1]);
  if (*(char *)((long)param_3 + 0x24) == '\0') {
    if (iVar3 == 4) {
      uVar2 = param_3[2];
      lVar7 = param_3[3];
      iVar3 = FUN_029849ec(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)param_3[1],
                           ((undefined4 *)param_3[1])[8],uVar2,lVar7,&local_38);
      if ((iVar3 != 0) && (*(short *)(lVar7 + 0x74) != 0)) {
        local_60 = CONCAT44(local_60._4_4_,iVar3);
        local_50 = 0;
        local_4c = 0;
        uStack_48 = 0;
        _local_58 = local_38;
        local_70 = uVar2;
        local_68 = lVar7;
        FUN_02a0997c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x840),auStack_78,&local_70);
      }
    }
    else if ((iVar3 == 6) && (lVar7 = param_3[3], *(short *)(lVar7 + 0x74) != 0)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x6e0);
      puVar1 = (uint *)*param_3;
      uVar2 = param_3[1];
      uVar6 = param_3[2];
      uVar4 = FUN_02987c34(*(undefined8 *)(lVar5 + 0x38),uVar2,uVar6,lVar7);
      if ((uVar4 & 1) != 0) {
        local_58 = (uint5)*puVar1;
        local_70 = uVar2;
        local_68 = uVar6;
        local_60 = lVar7;
        FUN_02a08b94(*(undefined8 *)(*(long *)(lVar5 + 0x60) + 0x1c60),&local_38,&local_70);
      }
    }
  }
  return;
}


