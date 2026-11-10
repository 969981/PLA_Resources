/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850544; name: FUN_00850544
 */


int FUN_00850544(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 < *(byte *)(param_1 + 0x5a)) {
    uVar7 = (ulong)param_2;
    lVar6 = *(long *)(param_1 + 0x60);
    uVar1 = *(uint *)(lVar6 + uVar7 * 0x34);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar8 = lVar6 + uVar7 * 0x34;
      uVar5 = (ulong)*(uint *)(lVar8 + 4);
      iVar3 = *(int *)(lVar8 + ((uVar5 + (uVar1 - 1)) % 9) * 4 + 8);
      if (uVar1 != 1) {
        iVar2 = iVar3;
        do {
          iVar3 = (int)uVar4;
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(lVar6 + uVar7 * 0x34 + (((iVar3 - 2) + uVar5) % 9) * 4 + 8);
          if (iVar3 <= iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = iVar3;
        } while (uVar4 != 1);
      }
      return iVar3;
    }
  }
  return -1;
}


