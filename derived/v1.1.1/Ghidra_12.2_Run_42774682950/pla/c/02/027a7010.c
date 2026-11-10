/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7010; name: FUN_027a7010
 */


void FUN_027a7010(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  FUN_02bcbe58(auStack_48,0);
  FUN_02cc30d0(param_2);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = FUN_02bcc75c(plVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar4);
  }
  else {
    FUN_02bcc824(plVar1,param_2,uVar2,uVar4);
  }
  FUN_02bcc1dc(auStack_48);
  return;
}


