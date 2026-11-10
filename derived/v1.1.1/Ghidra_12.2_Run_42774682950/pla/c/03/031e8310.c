/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e8310; name: FUN_031e8310
 */


void FUN_031e8310(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0xa0) + (long)*param_2 * 0x60);
  lVar3 = *(long *)(param_1 + 0x90) + (long)param_2[1] * 0xd0;
  (**(code **)(*plVar2 + 0x48))
            (*(undefined4 *)(*(long *)(lVar3 + 8) + 0xb0),plVar2,param_3,param_1 + 0x150,&local_50);
  uVar1 = *(undefined4 *)(param_1 + (long)*(int *)(lVar3 + 0xa0) * 4 + 200);
  local_58 = CONCAT44(uVar1,uVar1);
  local_60 = 0;
  FUN_031f1660(&local_50,param_1 + 0x150,&local_58,&local_60,1);
  param_4[1] = uStack_48;
  *param_4 = local_50;
  param_4[3] = uStack_38;
  param_4[2] = local_40;
  return;
}


