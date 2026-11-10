/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026077a0; name: FUN_026077a0
 */


void FUN_026077a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  lVar3 = *(long *)(param_1 + 0x108);
  uVar6 = *(ulong *)(lVar3 + 0xa8);
  lVar2 = *(long *)(lVar3 + 0x70);
  if (*(long *)(lVar3 + 0x78) != lVar2) {
    uVar1 = *(long *)(lVar3 + 0xb0) + uVar6;
    puVar4 = (undefined8 *)(*(long *)(lVar2 + (uVar6 / 0x38) * 8) + (uVar6 % 0x38) * 0x48);
    puVar7 = (undefined8 *)(*(long *)(lVar2 + (uVar1 / 0x38) * 8) + (uVar1 % 0x38) * 0x48);
    if (puVar7 != puVar4) {
      plVar8 = (long *)(lVar2 + (uVar6 / 0x38) * 8);
      do {
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 9;
        *puVar4 = 0;
        if ((long)puVar5 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          puVar5 = (undefined8 *)*plVar8;
        }
        puVar4 = puVar5;
      } while (puVar7 != puVar5);
    }
  }
  return;
}


