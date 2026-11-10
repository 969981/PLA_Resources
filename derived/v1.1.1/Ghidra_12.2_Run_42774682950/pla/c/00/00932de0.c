/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932de0; name: FUN_00932de0
 */


int FUN_00932de0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar1 = FUN_00932cc0();
  uStack_58 = *param_5;
  local_60 = *param_4;
  puVar4 = param_6 + 4;
  uVar2 = (*(code *)*param_6)(puVar4,&uStack_58,&local_60);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uStack_58 = *param_4;
    local_60 = *param_3;
    uVar2 = (*(code *)*param_6)(puVar4,&uStack_58,&local_60);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uStack_58 = *param_3;
      local_60 = *param_2;
      uVar2 = (*(code *)*param_6)(puVar4,&uStack_58,&local_60);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uStack_58 = *param_2;
        local_60 = *param_1;
        uVar2 = (*(code *)*param_6)(puVar4,&uStack_58,&local_60);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}


