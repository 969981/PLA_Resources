/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016ce40; name: FUN_0016ce40
 */


void FUN_0016ce40(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_0015c870(param_2,*(undefined8 *)(param_2 + 0x38));
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x20) = param_2 + 0x60;
    lVar2 = *(long *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        FUN_00161510(param_2,lVar2,0x48,0);
        *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + -1;
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_2 + 0x38);
    }
    FUN_00161510(param_2,lVar1,(long)*(int *)(param_2 + 0xb8) << 4,0);
  }
  FUN_00161510(param_1,param_2 + -8,0xd8,0);
  return;
}


