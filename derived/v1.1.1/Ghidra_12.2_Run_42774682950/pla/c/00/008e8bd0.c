/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e8bd0; name: FUN_008e8bd0
 */


void FUN_008e8bd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,code *param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  iVar2 = FUN_00150310();
  if (iVar2 == 4) {
    *param_5 = 1;
    param_5[1] = param_5[1] + 1;
    uVar3 = FUN_00150da0(param_2,param_3,&local_38);
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = local_38;
    param_1[1] = uVar3;
  }
  else {
    (*param_4)(param_2,param_3,4,iVar2,&DAT_03996322);
    iVar2 = FUN_00150310(param_2,param_3);
    *param_5 = (uint)(iVar2 != -1);
    uVar1 = param_5[1];
    if (iVar2 != -1) {
      uVar1 = uVar1 + 1;
    }
    param_5[1] = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


