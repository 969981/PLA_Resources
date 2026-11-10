/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad91c; name: FUN_00aad91c
 */


void FUN_00aad91c(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long *local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  undefined4 local_28;
  char *local_18;
  
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = (long)&DAT_cbf29ce484222645;
  param_1[2] = (long)&DAT_03996322;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = (**(code **)(*param_2 + 0x90))();
  switch(uVar2) {
  case 0x1b:
    local_18 = "bin/chara/data/item/item_109/item_109.trmdl";
    break;
  default:
    local_18 = "bin/chara/data/item/item_100/item_100.trmdl";
    break;
  case 0x1d:
    local_18 = "bin/chara/data/item/item_101/item_101.trmdl";
    break;
  case 0x1e:
    local_18 = "bin/chara/data/item/item_102/item_102.trmdl";
    break;
  case 0x1f:
    local_18 = "bin/chara/data/item/item_103/item_103.trmdl";
    break;
  case 0x20:
    local_18 = "bin/chara/data/item/item_104/item_104.trmdl";
    break;
  case 0x21:
    local_18 = "bin/chara/data/item/item_105/item_105.trmdl";
    break;
  case 0x22:
    local_18 = "bin/chara/data/item/item_106/item_106.trmdl";
    break;
  case 0x23:
    local_18 = "bin/chara/data/item/item_107/item_107.trmdl";
    break;
  case 0x24:
    local_18 = "bin/chara/data/item/item_108/item_108.trmdl";
    break;
  case 0x25:
    local_18 = "bin/chara/data/item/item_229/item_229.trmdl";
  }
  FUN_009f1b84(&local_50,&local_18);
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  plVar3 = local_50;
  local_50 = (long *)0x0;
  plVar4 = (long *)param_1[4];
  *param_1 = (long)plVar3;
  param_1[1] = lStack_48;
  param_1[4] = 0;
  param_1[2] = local_40;
  param_1[3] = lStack_38;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  lVar1 = local_30;
  local_30 = 0;
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 5) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


