/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065ef88; name: FUN_0065ef88
 */


undefined8 * FUN_0065ef88(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  ulong local_38;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_006656d4(&local_48,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_48;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_38 & 0xfffffffffffffffe);
    if ((local_38 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_48) {
                    /* try { // try from 0065f08c to 0065f093 has its CatchHandler @ 0065f0bc */
        FUN_0068a7a4(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 0065f034 to 0065f03b has its CatchHandler @ 0065f0bc */
      FUN_0068a740(param_1 + 2,auStack_40);
    }
  }
  else {
    FUN_006655a0(&local_48,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_48;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_38 & 0xfffffffffffffffe);
    if ((local_38 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_48) {
                    /* try { // try from 0065f060 to 0065f067 has its CatchHandler @ 0065f0c0 */
        FUN_0068a7a4(param_1 + 2,auStack_40);
      }
    }
    else {
                    /* try { // try from 0065efe4 to 0065efeb has its CatchHandler @ 0065f0c0 */
      FUN_0068a740(param_1 + 2,auStack_40);
    }
  }
  FUN_00689be4(auStack_40);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


