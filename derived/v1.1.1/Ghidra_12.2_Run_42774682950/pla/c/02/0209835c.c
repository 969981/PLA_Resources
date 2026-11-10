/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0209835c; name: FUN_0209835c
 */


undefined8 FUN_0209835c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_02097d38();
  uVar2 = FUN_020982a0(param_2,uVar1);
  uVar1 = param_1;
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_017aa43c();
    uVar2 = FUN_020982a0(param_2,uVar1);
    uVar1 = 0;
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
    }
  }
  return uVar1;
}


