/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728588; name: FUN_02728588
 */


void FUN_02728588(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [24];
  
  puVar6 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    uVar3 = puVar6[2];
    uVar2 = puVar6[3];
    uVar4 = puVar6[4];
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar6)(puVar6);
    uVar5 = FUN_02bcc75c(plVar1);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,uVar2,uVar4);
    }
    else {
      FUN_02bcc824(plVar1,uVar3,uVar2,uVar4);
    }
    FUN_02bcc1dc(auStack_58);
  }
  return;
}


