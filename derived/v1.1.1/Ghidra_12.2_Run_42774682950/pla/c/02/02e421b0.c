/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e421b0; name: FUN_02e421b0
 */


void FUN_02e421b0(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar4 = (uint)*param_1;
    if (uVar1 != 0) {
      uVar3 = uVar4 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar4 - uVar3 * uVar1) * 8);
        plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == *param_1) {
        *(int *)(plVar5[2] + 0x50) = *(int *)(plVar5[2] + 0x50) + 1;
        puVar6 = (undefined8 *)plVar5[2];
        if (puVar6 != (undefined8 *)0x0) {
          if ((7 < *(uint *)(puVar6 + 8)) && (*(long *)(puVar6[7] + 0x38) != 0)) {
            FUN_02eb1f30();
          }
          iVar2 = *(int *)(puVar6 + 10);
          *(int *)(puVar6 + 10) = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            (**(code **)*puVar6)(puVar6);
            (*DAT_0442d150)(4,puVar6);
          }
        }
        break;
      }
    }
  }
  if (*(long *)(DAT_04409a48 + 0xe0) == *param_1) {
    FUN_02e433e4(DAT_04409a48,0xffffffffffffffff);
    return;
  }
  return;
}


