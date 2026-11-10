/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033951d8; name: FUN_033951d8
 */


void FUN_033951d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [56];
  
  FUN_03375698();
  *param_1 = &PTR_LAB_0436f038;
  uVar1 = FUN_032cf5b0(0x10);
  FUN_03375b20(auStack_68);
  FUN_03375b6c(uVar1,auStack_68);
  uVar2 = FUN_032cf5b0(0x378);
  FUN_0338ef88(uVar2,uVar1);
  param_1[3] = uVar2;
  return;
}


