/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00798770; name: FUN_00798770
 */


undefined8 * FUN_00798770(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  ulong local_50;
  
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_00798fdc(&local_60,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_60;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_50 & 0xfffffffffffffffe);
    if ((local_50 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_60) {
                    /* try { // try from 00798874 to 0079887b has its CatchHandler @ 007988a4 */
        FUN_007a907c(param_1 + 2,auStack_58);
      }
    }
    else {
                    /* try { // try from 0079881c to 00798823 has its CatchHandler @ 007988a4 */
      FUN_007a9040(param_1 + 2,auStack_58);
    }
  }
  else {
    FUN_00798ea8(&local_60,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_60;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_50 & 0xfffffffffffffffe);
    if ((local_50 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_60) {
                    /* try { // try from 00798848 to 0079884f has its CatchHandler @ 007988a8 */
        FUN_007a907c(param_1 + 2,auStack_58);
      }
    }
    else {
                    /* try { // try from 007987cc to 007987d3 has its CatchHandler @ 007988a8 */
      FUN_007a9040(param_1 + 2,auStack_58);
    }
  }
  FUN_007a81f0(auStack_58);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


