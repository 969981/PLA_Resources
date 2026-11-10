/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f3cbc; name: FUN_006f3cbc
 */


undefined8 * FUN_006f3cbc(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  ulong local_88;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_006f475c(&local_98,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_98;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_98) {
                    /* try { // try from 006f3dc0 to 006f3dc7 has its CatchHandler @ 006f3df0 */
        FUN_0071a75c(param_1 + 2,auStack_90);
      }
    }
    else {
                    /* try { // try from 006f3d68 to 006f3d6f has its CatchHandler @ 006f3df0 */
      FUN_0071a720(param_1 + 2,auStack_90);
    }
  }
  else {
    FUN_006f4628(&local_98,*param_1);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_98;
    puVar1 = (ulong *)(param_1[3] & 0xfffffffffffffffe);
    if ((param_1[3] & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    puVar2 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar1 == puVar2) {
      if (param_1 + 1 != &local_98) {
                    /* try { // try from 006f3d94 to 006f3d9b has its CatchHandler @ 006f3df4 */
        FUN_0071a75c(param_1 + 2,auStack_90);
      }
    }
    else {
                    /* try { // try from 006f3d18 to 006f3d1f has its CatchHandler @ 006f3df4 */
      FUN_0071a720(param_1 + 2,auStack_90);
    }
  }
  FUN_00718d5c(auStack_90);
  if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = 0;
  }
  return param_1;
}


