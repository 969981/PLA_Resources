/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287b9f8; name: FUN_0287b9f8
 */


void FUN_0287b9f8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long *plVar4;
  
  puVar3 = (ulong *)FUN_02bced0c();
  do {
    plVar4 = (long *)FUN_02bcbe10();
    uVar2 = FUN_02bce0b0(puVar3);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    if ((*(byte *)((long)puVar3 + 0xc) >> 2 & 1) != 0) {
      *(int *)*param_2 = *(int *)*param_2 + 1;
      return;
    }
    lVar1 = *puVar3 + 0x18;
    if (*puVar3 < 0x11) {
      lVar1 = 0x28;
    }
    puVar3 = (ulong *)((long)puVar3 + lVar1);
    *(int *)*param_2 = *(int *)*param_2 + 1;
  } while (lVar1 != 0);
  return;
}


