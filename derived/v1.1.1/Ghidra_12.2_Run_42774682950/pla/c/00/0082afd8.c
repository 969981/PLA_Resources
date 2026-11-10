/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082afd8; name: FUN_0082afd8
 */


void FUN_0082afd8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    bVar4 = true;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    uVar2 = FUN_007e5f0c();
    bVar4 = (uVar2 & 1) == 0;
    if (!bVar4) {
      *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x90) = 1;
    }
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if ((lVar3 == 0) || (uVar2 = FUN_007e5f0c(), (uVar2 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else {
    bVar4 = false;
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x90) = 1;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if ((lVar3 != 0) && (uVar2 = FUN_007e5f0c(), (uVar2 & 1) != 0)) {
    bVar4 = false;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x90) = 1;
  }
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 400))(), (uVar2 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x188))();
    bVar4 = false;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    bVar1 = FUN_007e5f0c();
    bVar4 = (bool)(bVar4 & (bVar1 ^ 1));
  }
  if ((*(long *)(param_1 + 0x10) == 0) || (bVar4 == false)) {
    return;
  }
  FUN_00835db4();
  return;
}


