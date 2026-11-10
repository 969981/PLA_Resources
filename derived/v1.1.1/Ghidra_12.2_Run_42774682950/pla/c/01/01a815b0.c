/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a815b0; name: FUN_01a815b0
 */


void FUN_01a815b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x48);
  uVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
    if ((*(long *)(param_1 + 0x5e0) == 0) || (*(int *)(*(long *)(param_1 + 0x5e0) + 0xc) == 0)) {
      lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      (**(code **)(*plVar3 + 0x278))((float)((double)*(long *)(lVar2 + 8) / 1000000000.0),plVar3);
    }
    if (*(char *)(*(long *)(param_1 + 0x578) + 0xa8) != '\0') {
      FUN_01a81438(plVar3);
      return;
    }
  }
  return;
}


