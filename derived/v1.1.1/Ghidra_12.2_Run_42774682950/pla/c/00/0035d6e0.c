/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035d6e0; name: FUN_0035d6e0
 */


void FUN_0035d6e0(long *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar2 = FUN_003ba054();
    *(undefined8 *)(param_2 + 0x58) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = FUN_0034ed20(param_1,uVar2,*(undefined8 *)(param_2 + 8),0,
                       *(char *)(*param_1 + 0x29) == '\0');
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x2a) != '\0') {
      iVar1 = FUN_0034f378(*param_1,uVar2,0);
      goto joined_r0x0035d7f0;
    }
LAB_0035d800:
    if (*(char *)(*param_1 + 0x29) == '\0') {
      FUN_0034dd44(param_1,*(undefined8 *)(param_2 + 8),param_3,5,*(undefined8 *)(param_3 + 0x20));
    }
    else {
      FUN_0035d9ec(param_2 + 0x18,*(undefined8 *)(param_3 + 0x20),param_1[10]);
    }
  }
  else {
joined_r0x0035d7f0:
    if (iVar1 == 1) {
      FUN_0035dc7c(param_2 + 0x18);
    }
    else {
      if (iVar1 == 0) goto LAB_0035d800;
      uVar2 = *(undefined8 *)(param_2 + 8);
      FUN_0034b2f0(local_68,&DAT_039042e1,*(undefined8 *)(param_3 + 0x20));
                    /* try { // try from 0035d75c to 0035d76f has its CatchHandler @ 0035d9c0 */
      puVar3 = (ulong *)FUN_002e4094(local_68,"\" is not a message type.",0x18);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
                    /* try { // try from 0035d788 to 0035d79f has its CatchHandler @ 0035d998 */
      FUN_0034db00(param_1,uVar2,param_3,5,&local_50);
      if ((local_50 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_40);
      }
      if ((local_68[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_58);
      }
    }
  }
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  iVar1 = FUN_0034ed20(param_1,uVar2,*(undefined8 *)(param_2 + 8),0,
                       *(char *)(*param_1 + 0x29) == '\0');
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x2a) == '\0') goto LAB_0035d92c;
    iVar1 = FUN_0034f378(*param_1,uVar2,0);
  }
  if (iVar1 == 1) {
    FUN_0035dc7c(param_2 + 0x38);
    return;
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    FUN_0034b2f0(local_68,&DAT_039042e1,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 0035d888 to 0035d89b has its CatchHandler @ 0035d988 */
    puVar3 = (ulong *)FUN_002e4094(local_68,"\" is not a message type.",0x18);
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    local_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 0035d8b4 to 0035d8cb has its CatchHandler @ 0035d978 */
    FUN_0034db00(param_1,uVar2,param_3,6,&local_50);
    if ((local_50 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
    if ((local_68[0] & 1) == 0) {
      return;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
    return;
  }
LAB_0035d92c:
  if (*(char *)(*param_1 + 0x29) == '\0') {
    FUN_0034dd44(param_1,*(undefined8 *)(param_2 + 8),param_3,6,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    FUN_0035d9ec(param_2 + 0x38,*(undefined8 *)(param_3 + 0x28),param_1[10]);
  }
  return;
}


