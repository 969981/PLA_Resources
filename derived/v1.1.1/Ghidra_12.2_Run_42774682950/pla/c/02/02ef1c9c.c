/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1c9c; name: FUN_02ef1c9c
 */


void FUN_02ef1c9c(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  FUN_02ef1d88(param_1,0);
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = 0xfffffffe / uVar1;
    }
    uVar6 = (ulong)(-(uVar3 * uVar1) - 2);
    plVar4 = *(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8);
    if (plVar4 != (long *)0x0) {
      if (plVar4[1] == -2) {
        puVar7 = (undefined8 *)plVar4[2];
        *(long *)(*(long *)(param_1 + 0x30) + uVar6 * 8) = *plVar4;
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
          if (plVar4 == (long *)0x0) goto LAB_02ef1d20;
        } while (plVar4[1] != -2);
        puVar7 = (undefined8 *)plVar4[2];
        *plVar5 = *plVar4;
      }
      (*DAT_0442d150)(0);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      iVar2 = *(int *)(puVar7 + 10);
      *(undefined1 *)((long)puVar7 + 0x54) = 0;
      *(int *)(puVar7 + 10) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar7)(puVar7);
        (*DAT_0442d150)(4,puVar7);
      }
    }
  }
LAB_02ef1d20:
  FUN_02ef21b0(param_1 + 0x28);
  FUN_02eefa1c(param_1);
  return;
}


