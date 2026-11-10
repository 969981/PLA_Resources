/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5c40; name: FUN_007e5c40
 */


void FUN_007e5c40(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_007ee578(auStack_40);
  FUN_007ee660(param_1 + 1,auStack_40);
  *param_1 = 2;
  FUN_007ee578(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_007ee578(auStack_30,auStack_50);
    (*pcVar1)(auStack_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}


