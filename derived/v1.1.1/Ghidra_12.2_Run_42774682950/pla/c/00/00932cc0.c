/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932cc0; name: FUN_00932cc0
 */


int FUN_00932cc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 local_48;
  
  iVar1 = FUN_00932b70();
  local_48 = *param_4;
  local_58 = *param_3;
  puVar4 = param_5 + 4;
  uVar2 = (*(code *)*param_5)(puVar4,&local_48,&local_58);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    local_48 = *param_3;
    local_58 = *param_2;
    uVar2 = (*(code *)*param_5)(puVar4,&local_48,&local_58);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      local_48 = *param_2;
      local_58 = *param_1;
      uVar2 = (*(code *)*param_5)(puVar4,&local_48,&local_58);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}


