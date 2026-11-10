/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b2e0c; name: FUN_007b2e0c
 */


undefined8 FUN_007b2e0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)0x0;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
                    /* try { // try from 007b2e24 to 007b2e2b has its CatchHandler @ 007b2ea8 */
  local_58 = param_1;
  uStack_50 = param_1;
  uVar2 = FUN_007b2f08(&local_58);
  puVar1 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    puVar3 = (ulong *)(local_28[1] & 0xfffffffffffffffe);
    if ((local_28[1] & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    if (puVar3 == (ulong *)0x0) {
      (**(code **)*local_28)(local_28);
      FUN_002e2ea0(PTR_LAB_04373088,puVar1);
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return uVar2;
}


