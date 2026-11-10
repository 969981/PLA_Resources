/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932b70; name: FUN_00932b70
 */


undefined8
FUN_00932b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = *param_2;
  local_50 = *param_1;
  puVar4 = param_4 + 4;
  uVar1 = (*(code *)*param_4)(puVar4,&uStack_48,&local_50);
  uStack_48 = *param_3;
  local_50 = *param_2;
  uVar2 = (*(code *)*param_4)(puVar4,&uStack_48,&local_50);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uStack_48 = *param_2;
    local_50 = *param_1;
    uVar1 = (*(code *)*param_4)(puVar4,&uStack_48,&local_50);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
  }
  else {
    local_50 = *param_1;
    if ((uVar2 & 1) != 0) {
      *param_1 = *param_3;
      *param_3 = local_50;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = local_50;
    uStack_48 = *param_3;
    uVar1 = (*(code *)*param_4)(puVar4,&uStack_48,&local_50);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
  }
  return 2;
}


