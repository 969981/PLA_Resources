/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008345b0; name: FUN_008345b0
 */


void FUN_008345b0(undefined8 param_1)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_043773c0;
  lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar3 = *(long *)(lVar3 + 0x98);
  if (lVar3 == 0) {
    return;
  }
  FUN_00855004(*(undefined8 *)puVar1);
  sVar2 = FUN_0085158c();
  if (sVar2 != 1) {
    uVar5 = 0;
    do {
      lVar4 = FUN_00855004(*(undefined8 *)puVar1);
      lVar6 = *(long *)(lVar4 + 0x20);
      lVar4 = FUN_00855004(*(undefined8 *)puVar1);
      if ((lVar6 == lVar4 + 0x18) ||
         ((*(long *)(lVar6 + 0x10) == lVar3 && (lVar6 = *(long *)(lVar6 + 8), lVar6 == lVar4 + 0x18)
          ))) break;
      FUN_00835b90(param_1,*(undefined8 *)(lVar6 + 0x10));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ushort)(sVar2 - 1U));
  }
  FUN_00835b90(param_1,lVar3);
  return;
}


