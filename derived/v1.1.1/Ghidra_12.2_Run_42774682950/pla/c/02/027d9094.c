/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9094; name: FUN_027d9094
 */


void FUN_027d9094(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_027dc670();
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 - 3U < 2) {
    if ((((*(char *)(param_1 + 0xc0) != '\0') &&
         (FUN_0120bd20(param_1 + 200), 1.5 <= (double)*(long *)(param_1 + 0xd0) / 1000000000.0)) &&
        ((*(uint *)(param_1 + 0xbc) & 0xfffffffe) == 4)) &&
       ((uVar2 = FUN_027d9254(param_1), (uVar2 & 1) != 0 &&
        (*(undefined4 *)(param_1 + 0xb8) = 5, *(char *)(param_1 + 0xc0) != '\0')))) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
  }
  else if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x78) != '\0') {
      *(undefined8 *)(param_1 + 0xb8) = 0x200000002;
    }
  }
  else if (((iVar1 == 0) && (*(long *)(param_1 + 0x90) != 0)) &&
          (uVar2 = FUN_027d9170(param_1), (uVar2 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  return;
}


