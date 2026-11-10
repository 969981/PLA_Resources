/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e18e4; name: FUN_028e18e4
 */


void FUN_028e18e4(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_90 [96];
  
  puVar3 = *(undefined8 **)(*param_1 + 0x118);
  puVar1 = *(undefined8 **)(*param_1 + 0x120);
  if (puVar3 != puVar1) {
    do {
      (*(code *)puVar3[2])(puVar3 + 4,auStack_90);
      pcVar2 = (code *)puVar3[1];
      (*(code *)*puVar3)(auStack_90,param_2);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(auStack_90);
      }
      puVar3 = puVar3 + 0x10;
    } while (puVar1 != puVar3);
  }
  return;
}


