/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00704a8c; name: FUN_00704a8c
 */


void FUN_00704a8c(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 00704aa0 to 00704aab has its CatchHandler @ 00704bd0 */
  FUN_007145d4(param_1,0);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 00704acc to 00704ad7 has its CatchHandler @ 00704bbc */
  FUN_0070f920(&local_40,*(undefined8 *)PTR_PTR_04373338,param_2);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 00704aec to 00704af3 has its CatchHandler @ 00704b84 */
  FUN_00704bd4(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  FUN_002a85f0(&local_40);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 00704b38 to 00704b3f has its CatchHandler @ 00704b74 */
  FUN_00704d78(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


