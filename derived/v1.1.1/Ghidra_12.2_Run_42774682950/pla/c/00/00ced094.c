/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ced094; name: FUN_00ced094
 */


undefined4 FUN_00ced094(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if ((puVar1 == (undefined1 *)0x556483e7a1ceb2) || (puVar1 == &DAT_cbf29ce484222645)) {
    return 0x3f800000;
  }
  uVar3 = 0x3fc00000;
  if (puVar1 != (undefined1 *)0x33bd61689d1968af) {
    uVar3 = 0;
  }
  uVar2 = 0x3f000000;
  if (puVar1 != (undefined1 *)0x55f2a039552f7f8) {
    uVar2 = uVar3;
  }
  return uVar2;
}


