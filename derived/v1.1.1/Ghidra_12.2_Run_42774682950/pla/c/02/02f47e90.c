/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f47e90; name: FUN_02f47e90
 */


void FUN_02f47e90(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x68) = param_2;
  uVar1 = *(uint *)(param_3 + 0x118);
  *(uint *)(param_3 + 0x118) = uVar1 + 1;
  uVar3 = *(uint *)(param_3 + 0x100);
  if (uVar1 == uVar3) {
    *(undefined8 *)(param_3 + 0x108) = 0;
    *(undefined8 *)(param_3 + 0x110) = 0;
    uVar3 = uVar1;
  }
  else {
    if (*(long *)(param_3 + (ulong)uVar1 * 8) == param_1) goto LAB_02f47ed8;
    uVar4 = uVar3 - 1;
    *(undefined8 *)(param_3 + 0x108) = 0;
    *(undefined8 *)(param_3 + 0x110) = 0;
    if ((int)uVar1 <= (int)uVar4) {
      if ((int)(uVar3 - 2) < (int)uVar1) {
        uVar3 = uVar4;
      }
      else {
        do {
          iVar2 = uVar4 - 2;
          uVar3 = uVar4 - 1;
          uVar4 = uVar4 - 1;
        } while ((int)uVar1 <= iVar2);
      }
      *(uint *)(param_3 + 0x100) = uVar3;
    }
  }
  *(long *)(param_3 + (ulong)uVar3 * 8) = param_1;
  *(int *)(param_3 + 0x100) = *(int *)(param_3 + 0x100) + 1;
LAB_02f47ed8:
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),param_3,0);
  *(int *)(param_3 + 0x118) = *(int *)(param_3 + 0x118) + -1;
  return;
}


