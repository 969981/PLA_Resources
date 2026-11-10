/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18864; name: FUN_02f18864
 */


void FUN_02f18864(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if ((puVar7 != (undefined8 *)0x0) &&
     (iVar2 = *(int *)(puVar7 + 10), *(int *)(puVar7 + 10) = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)*puVar7)(puVar7);
    (*DAT_0442d150)(4,puVar7);
  }
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar4 != -1) {
    uVar1 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uint)lVar4 / uVar1;
      }
      for (plVar6 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                              (ulong)((uint)lVar4 - uVar3 * uVar1) * 8); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6[1] == lVar4) {
          *(int *)(plVar6[2] + 0x50) = *(int *)(plVar6[2] + 0x50) + 1;
          uVar5 = plVar6[2];
          goto LAB_02f188dc;
        }
      }
    }
    uVar5 = 0;
LAB_02f188dc:
    *(undefined8 *)(param_1 + 0x10) = uVar5;
  }
  return;
}


