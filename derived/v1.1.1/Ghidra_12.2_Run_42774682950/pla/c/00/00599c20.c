/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00599c20; name: FUN_00599c20
 */


void FUN_00599c20(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x48) == 0) && (uVar1 = FUN_005ac230(), (uVar1 & 1) != 0)) {
    FUN_00598b70(param_2,"chttp2_writing:become");
    return;
  }
  return;
}


