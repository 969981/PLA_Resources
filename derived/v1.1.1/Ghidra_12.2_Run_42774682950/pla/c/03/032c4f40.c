/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4f40; name: FUN_032c4f40
 */


void FUN_032c4f40(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
    uVar2 = (*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 2;
    if (uVar2 < 0x3fffffff) {
      if (uVar2 < 2) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0x3fffffff;
    }
    uVar1 = FUN_032bd1d4(PTR_PTR_0434a090,uVar2,1,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = uVar1;
  }
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}


