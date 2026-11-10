/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4f7e4; name: FUN_02e4f7e4
 */


void FUN_02e4f7e4(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  while( true ) {
    uVar4 = uVar9 << 1 | 1;
    uVar2 = uVar9 * 2 + 2;
    uVar8 = uVar9;
    if ((uVar4 < *(uint *)(param_1 + 1)) &&
       (uVar8 = uVar4,
       *(float *)(*param_1 + (ulong)uVar9 * 0x10) <= *(float *)(*param_1 + (ulong)uVar4 * 0x10))) {
      uVar8 = uVar9;
    }
    uVar4 = uVar8;
    if ((uVar2 < *(uint *)(param_1 + 1)) &&
       (uVar4 = uVar2,
       *(float *)(*param_1 + (ulong)uVar8 * 0x10) <= *(float *)(*param_1 + (ulong)uVar2 * 0x10))) {
      uVar4 = uVar8;
    }
    if (uVar4 == uVar9) break;
    puVar1 = (undefined8 *)(*param_1 + (ulong)uVar9 * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    puVar3 = (undefined8 *)(*param_1 + (ulong)uVar4 * 0x10);
    uVar7 = puVar3[1];
    *puVar1 = *puVar3;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(*param_1 + (ulong)uVar4 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    uVar9 = uVar4;
  }
  return;
}


