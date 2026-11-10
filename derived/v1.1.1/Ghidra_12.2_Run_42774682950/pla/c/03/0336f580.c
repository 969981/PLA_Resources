/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f580; name: FUN_0336f580
 */


void FUN_0336f580(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  FUN_0337494c(param_1,auStack_50,auStack_70,auStack_90,auStack_b0);
  uVar1 = thunk_FUN_03373b30(auStack_50,auStack_b0);
  uVar2 = thunk_FUN_03373b30(auStack_70,auStack_b0);
  uVar3 = thunk_FUN_03373b30(auStack_90,auStack_b0);
  param_2[1] = CONCAT44(uVar3,uVar3);
  *param_2 = CONCAT44(uVar2,uVar1);
  return;
}


