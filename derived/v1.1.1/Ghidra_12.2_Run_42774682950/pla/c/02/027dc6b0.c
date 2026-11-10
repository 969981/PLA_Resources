/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc6b0; name: FUN_027dc6b0
 */


void FUN_027dc6b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 2) {
    uVar1 = FUN_027dbeb0(*(undefined8 *)(param_1 + 0x130));
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) != 1) {
      return;
    }
    uVar1 = FUN_027dc9a4(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_027dbe98();
      uVar2 = 0x20000000f;
      goto LAB_027dc70c;
    }
  }
  uVar2 = 0x30000000e;
LAB_027dc70c:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


