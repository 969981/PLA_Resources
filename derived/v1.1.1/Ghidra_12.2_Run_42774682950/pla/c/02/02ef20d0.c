/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef20d0; name: FUN_02ef20d0
 */


void FUN_02ef20d0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uint)param_2 / uVar1;
    }
    uVar6 = (ulong)((uint)param_2 - uVar3 * uVar1);
    plVar4 = *(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8);
    if (plVar4 != (long *)0x0) {
      if (plVar4[1] == param_2) {
        puVar7 = (undefined8 *)plVar4[2];
        *(long *)(*(long *)(param_1 + 0x30) + uVar6 * 8) = *plVar4;
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
          if (plVar4 == (long *)0x0) {
            return;
          }
        } while (plVar4[1] != param_2);
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
                    /* WARNING: Could not recover jumptable at 0x02ef21ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0442d150)(4,puVar7);
        return;
      }
    }
  }
  return;
}


