/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004234c0; name: FUN_004234c0
 */


undefined4 FUN_004234c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_8 [8];
  
  puVar2 = (undefined4 *)FUN_0043e620(auStack_8,param_1);
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}


