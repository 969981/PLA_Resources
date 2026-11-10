/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf2b8; name: FUN_02ecf2b8
 */


bool FUN_02ecf2b8(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  
  puVar1 = (uint *)(param_1 + 0x2a3);
  uVar6 = *puVar1;
  if ((uVar6 >> 7 & 1) == 0) {
    uVar6 = uVar6 | 0x80;
    *puVar1 = uVar6;
    plVar5 = *(long **)(param_1 + 0x180);
    plVar8 = plVar5;
    if ((*(byte *)((long)plVar5 + 0xab) >> 4 & 1) == 0) {
      do {
        plVar7 = (long *)plVar8[0x10];
        if (plVar7 == (long *)0x0) break;
        plVar8 = plVar7;
      } while ((*(byte *)((long)plVar7 + 0xab) >> 4 & 1) == 0);
    }
    bVar2 = *(byte *)(plVar8 + 0x18);
    uVar4 = *(byte *)((long)plVar8 + 0xc1) & 0xf;
    if (uVar4 == 3) {
      uVar3 = (**(code **)(*plVar5 + 0x230))(plVar5,*(undefined8 *)(param_1 + 0x228));
      uVar4 = 1;
      if ((uVar3 & 1) != 0) {
        uVar4 = 2;
      }
      uVar6 = *puVar1;
    }
    *puVar1 = bVar2 >> 3 & 7 | uVar4 << 3 | uVar6 & 0xffffff80;
  }
  else {
    uVar4 = uVar6 >> 3 & 0xf;
  }
  return uVar4 == 0;
}


