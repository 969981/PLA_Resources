/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12cd8; name: FUN_02f12cd8
 */


void FUN_02f12cd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint param_5
                 ,void *param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  local_60 = (undefined8 *)(auStack_70 + (ulong)(param_5 << 1) * -0x18 + -0x20);
  local_58 = (ulong)(param_5 << 1);
  local_50 = param_1;
  uStack_4c = param_2;
  local_48 = param_3;
  FUN_02f12298(auStack_70,&local_68,&local_50);
  FUN_02f121c0(local_68,uStack_64,param_4,&local_50,&local_60);
  if (param_5 != 0) {
    memset(param_6,0,(ulong)param_5 << 2);
  }
  puVar3 = local_60;
  uVar4 = local_58._4_4_;
  if (local_58._4_4_ != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 & 0xffff;
      piVar5 = (int *)(puVar3 + uVar6 * 3);
      iVar2 = *param_4 + -1;
      if (((*piVar5 == iVar2) || (*(int *)((long)puVar3 + uVar6 * 0x18 + 4) == iVar2)) ||
         (*(int *)(puVar3 + uVar6 * 3 + 1) == iVar2)) {
        local_80 = CONCAT44(uStack_4c,local_50);
        local_78 = local_48;
        FUN_02f12a88(param_4,piVar5,&local_80,param_6);
      }
      else {
        local_90 = CONCAT44(uStack_4c,local_50);
        local_88 = local_48;
        FUN_02f12ba4(param_4,piVar5,&local_90,param_6);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while ((uVar1 & 0xffff) < uVar4);
  }
  return;
}


