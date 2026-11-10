/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349fd0; name: FUN_01349fd0
 */


void FUN_01349fd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x658);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    (*pcVar4)(param_1 + 0x670);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x670);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x660) = param_2[2];
    *(undefined8 *)(param_1 + 0x668) = uVar3;
    *(undefined8 *)(param_1 + 0x650) = uVar1;
    *(undefined8 *)(param_1 + 0x658) = uVar2;
  }
  return;
}


