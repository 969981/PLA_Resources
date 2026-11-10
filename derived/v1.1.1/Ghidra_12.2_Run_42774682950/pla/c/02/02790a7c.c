/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02790a7c; name: FUN_02790a7c
 */


void FUN_02790a7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  char local_c0 [12];
  int local_b4;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x222222222222222;
  param_1[5] = 0;
  do {
    uVar1 = (&DAT_03a7e064)[lVar3];
    uVar2 = FUN_02790540(local_c0,param_2,uVar1,0);
    if ((local_c0[0] == '\0') || (local_b4 != 0)) {
      if (local_c0[0] != '\0') goto LAB_02790b84;
    }
    else {
      uVar2 = FUN_02790a28(param_1,(ulong)local_c0 | 4);
LAB_02790b84:
      local_c0[0] = '\0';
    }
    uVar2 = FUN_02790540(local_c0,uVar2,uVar1,1);
    if ((local_c0[0] == '\0') || (local_b4 != 0)) {
      if (local_c0[0] != '\0') goto LAB_02790b98;
    }
    else {
      uVar2 = FUN_02790a28(param_1,(ulong)local_c0 | 4);
LAB_02790b98:
      local_c0[0] = '\0';
    }
    uVar2 = FUN_02790540(local_c0,uVar2,uVar1,2);
    if ((local_c0[0] == '\0') || (local_b4 != 0)) {
      if (local_c0[0] != '\0') goto LAB_02790bac;
    }
    else {
      uVar2 = FUN_02790a28(param_1,(ulong)local_c0 | 4);
LAB_02790bac:
      local_c0[0] = '\0';
    }
    param_2 = FUN_02790540(local_c0,uVar2,uVar1,3);
    if ((local_c0[0] == '\0') || (local_b4 != 0)) {
      if (local_c0[0] != '\0') goto LAB_02790bc0;
    }
    else {
      param_2 = FUN_02790a28(param_1,(ulong)local_c0 | 4);
LAB_02790bc0:
      local_c0[0] = '\0';
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 5) {
      return;
    }
  } while( true );
}


