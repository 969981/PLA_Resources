/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eceebc; name: FUN_02eceebc
 */


void FUN_02eceebc(long param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_20;
  undefined1 local_18;
  
  puVar1 = (uint *)(param_1 + 0x2a3);
  uVar6 = *puVar1;
  if ((uVar6 >> 7 & 1) == 0) {
    uVar6 = uVar6 | 0x80;
    *puVar1 = uVar6;
    plVar5 = *(long **)(param_1 + 0x180);
    plVar7 = plVar5;
    if ((*(byte *)((long)plVar5 + 0xab) >> 4 & 1) == 0) {
      do {
        plVar8 = (long *)plVar7[0x10];
        if (plVar8 == (long *)0x0) break;
        plVar7 = plVar8;
      } while ((*(byte *)((long)plVar8 + 0xab) >> 4 & 1) == 0);
    }
    bVar2 = *(byte *)(plVar7 + 0x18);
    uVar4 = *(byte *)((long)plVar7 + 0xc1) & 0xf;
    if (uVar4 == 3) {
      uVar3 = (**(code **)(*plVar5 + 0x230))(plVar5,*(undefined8 *)(param_1 + 0x228));
      uVar4 = 1;
      if ((uVar3 & 1) != 0) {
        uVar4 = 2;
      }
      uVar6 = *puVar1;
    }
    uVar6 = bVar2 >> 3 & 7 | uVar4 << 3 | uVar6 & 0xffffff80;
    *puVar1 = uVar6;
  }
  else {
    uVar4 = uVar6 >> 3 & 0xf;
  }
  if (uVar4 == 2) {
    *(ushort *)(param_1 + 0x198) = *(ushort *)(param_1 + 0x198) | 0x100;
  }
  else if (uVar4 == 1) {
    if ((uVar6 >> 0x10 & 1) == 0) {
      *puVar1 = uVar6 & 0xfff00000 | uVar6 & 0xffff | (param_2 & 7) << 0x11 | 0x10000;
    }
    local_20 = 0x400000000;
    local_18 = 0;
    FUN_02ecc3d4(param_1,&local_20,1);
  }
  return;
}


