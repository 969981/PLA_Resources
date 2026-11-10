/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecdc84; name: FUN_02ecdc84
 */


void FUN_02ecdc84(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = (uint *)(param_1 + 0x2a3);
  if ((*puVar1 >> 0x1a & 1) != 0) {
    uVar8 = *puVar1 & 0xfbffffff;
    *puVar1 = uVar8;
    if (*(int *)(param_1 + 0x2f0) != 0) {
      plVar5 = *(long **)(param_1 + 0x2e8);
      do {
        plVar6 = plVar5 + 1;
        *(short *)(*plVar5 + 0x2a) = *(short *)(*plVar5 + 0x2a) + -1;
        plVar5 = plVar6;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8
                                 ));
      uVar8 = *puVar1;
    }
    if ((uVar8 >> 7 & 1) == 0) {
      uVar8 = uVar8 | 0x80;
      *puVar1 = uVar8;
      plVar6 = *(long **)(param_1 + 0x180);
      plVar5 = plVar6;
      if ((*(byte *)((long)plVar6 + 0xab) >> 4 & 1) == 0) {
        do {
          plVar7 = (long *)plVar5[0x10];
          if (plVar7 == (long *)0x0) break;
          plVar5 = plVar7;
        } while ((*(byte *)((long)plVar7 + 0xab) >> 4 & 1) == 0);
      }
      uVar2 = *(byte *)(plVar5 + 0x18) >> 3 & 7;
      uVar4 = *(byte *)((long)plVar5 + 0xc1) & 0xf;
      if (uVar4 == 3) {
        uVar3 = (**(code **)(*plVar6 + 0x230))(plVar6,*(undefined8 *)(param_1 + 0x228));
        uVar4 = 1;
        if ((uVar3 & 1) != 0) {
          uVar4 = 2;
        }
        uVar8 = *puVar1;
      }
      *puVar1 = uVar2 | uVar4 << 3 | uVar8 & 0xffffff80;
    }
    else {
      uVar2 = uVar8 & 7;
      uVar4 = uVar8 >> 3 & 0xf;
    }
    if ((uVar2 != 1) && (uVar4 == 2)) {
      FUN_02f105c8();
    }
    DAT_0440adb0 = DAT_0440adb0 + -1;
  }
  return;
}


