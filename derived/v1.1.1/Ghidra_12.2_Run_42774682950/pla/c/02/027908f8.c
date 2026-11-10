/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027908f8; name: FUN_027908f8
 */


void FUN_027908f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char local_b0 [12];
  int local_a4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x222222222222222;
  param_1[5] = 0;
  uVar2 = (ulong)local_b0 | 4;
  uVar1 = FUN_02790540(local_b0,param_2,param_4,0);
  if ((local_b0[0] == '\0') || (local_a4 != 0)) {
    if (local_b0[0] != '\0') goto LAB_027909e4;
  }
  else {
    uVar1 = FUN_02790a28(param_1,uVar2);
LAB_027909e4:
    local_b0[0] = '\0';
  }
  uVar1 = FUN_02790540(local_b0,uVar1,param_4,1);
  if ((local_b0[0] == '\0') || (local_a4 != 0)) {
    if (local_b0[0] != '\0') goto LAB_027909f8;
  }
  else {
    uVar1 = FUN_02790a28(param_1,uVar2);
LAB_027909f8:
    local_b0[0] = '\0';
  }
  uVar1 = FUN_02790540(local_b0,uVar1,param_4,2);
  if ((local_b0[0] == '\0') || (local_a4 != 0)) {
    if (local_b0[0] == '\0') goto LAB_027909a0;
  }
  else {
    uVar1 = FUN_02790a28(param_1,uVar2);
  }
  local_b0[0] = '\0';
LAB_027909a0:
  FUN_02790540(local_b0,uVar1,param_4,3);
  if ((local_b0[0] != '\0') && (local_a4 == 0)) {
    FUN_02790a28(param_1,uVar2);
  }
  return;
}


