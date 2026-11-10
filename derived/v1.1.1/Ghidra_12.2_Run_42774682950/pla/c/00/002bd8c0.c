/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bd8c0; name: FUN_002bd8c0
 */


void FUN_002bd8c0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48[0] = *param_2;
  uStack_38 = *(undefined8 *)(param_2 + 4);
  local_40 = *(ulong *)(param_2 + 2);
  local_30 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  uStack_20 = *(undefined8 *)(param_2 + 10);
  local_28 = *(ulong *)(param_2 + 8);
  local_18 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_002ba2a0();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002bd910 with catch @ 002bd96c
                        */
    if ((local_28 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_18);
    }
    if ((local_40 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_30);
    }
    __cxa_begin_catch(uVar2);
    __cxa_end_catch();
    return;
  }
                    /* try { // try from 002bd910 to 002bd96b has its CatchHandler @ 002bd96c */
  (**(code **)(*plVar1 + 0x30))(plVar1,local_48);
  if ((local_28 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_18);
  }
  if ((local_40 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_30);
  return;
}


