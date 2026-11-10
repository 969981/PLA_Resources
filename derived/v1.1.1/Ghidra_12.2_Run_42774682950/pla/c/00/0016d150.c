/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d150; name: FUN_0016d150
 */


void FUN_0016d150(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  FUN_0015c870(param_1,*(undefined8 *)(param_1 + 0x38));
  FUN_0015cdc0(param_1);
  FUN_00161510(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
               (long)*(int *)(*(long *)(param_1 + 0x18) + 0x3c) << 3,0);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = param_1 + 0x60;
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        FUN_00161510(param_1,lVar2,0x48,0);
        *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    FUN_00161510(param_1,lVar1,(long)*(int *)(param_1 + 0xb8) << 4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0016d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(puVar3[1],param_1 + -8,0x610,0);
  return;
}


