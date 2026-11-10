/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a03a74; name: FUN_02a03a74
 */


void FUN_02a03a74(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined2 uVar5;
  byte *pbVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 auStack_38 [8];
  
  cVar3 = FUN_02988940(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
  uVar2 = local_60;
  if (0xd < (param_3 & 0xff)) {
LAB_02a03ab0:
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    return;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x200) + 0x60);
  pbVar6 = *(byte **)(*(long *)(*(long *)(lVar4 + 0x240) + 0x10) + 0x28);
  if (((param_3 - 1 & 0xff) < 4) && ((*pbVar6 - 5 & 0xff) < 3)) {
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uVar1 = **(byte **)(*(long *)(param_1 + 0x10) + 0x28) - 5;
    uVar5 = (undefined2)(0x30a03080307 >> (((ulong)uVar1 & 3) << 4));
    if (2 < uVar1) {
      uVar5 = 0x237;
    }
    local_60._0_4_ = CONCAT22(1,uVar5);
    local_60 = (ulong)(uint)local_60;
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),&local_60);
  }
  else {
    if (((uint)*pbVar6 == (param_3 & 0xff)) &&
       (((char)(cVar3 + '\x05') != -1 ||
        (((param_3 & 0xff) != 0 &&
         ((*(int *)(pbVar6 + 4) == 0xff || (*(int *)(pbVar6 + 4) - *(int *)(pbVar6 + 0xc) == 0xff)))
         ))))) goto LAB_02a03ab0;
    local_60._0_4_ =
         CONCAT13(*(undefined1 *)(param_2 + 0x7d),
                  CONCAT12(cVar3,CONCAT11(cVar3 + '\x05',(char)param_3)));
    local_60._5_3_ = SUB83(uVar2,5);
    local_60._0_5_ = (uint5)(uint)local_60;
    FUN_029d32fc(*(undefined8 *)(lVar4 + 0x260),auStack_38,&local_60);
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(undefined1 *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x1c8) * 0x40 + 0x21) = 1;
  }
  return;
}


