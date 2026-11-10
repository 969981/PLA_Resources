/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dd2b0; name: FUN_004dd2b0
 */


undefined8 FUN_004dd2b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar1 = FUN_00423a50(param_2);
  if (iVar1 == 0x198) {
    uVar2 = FUN_004238d0(param_2);
    uVar3 = FUN_0042d4f0();
    iVar1 = FUN_0042d5a0(uVar2);
    if (iVar1 == 4) {
      cVar4 = '\0';
      lVar6 = *(long *)(param_1 + 0x508);
      lVar5 = *(long *)(lVar6 + 0x238);
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
        return 1;
      }
      FUN_0042e180(uVar3);
      iVar1 = FUN_0042e190();
      if (iVar1 == 0x196) {
        cVar4 = '\x01';
        lVar6 = *(long *)(param_1 + 0x508);
        lVar5 = *(long *)(lVar6 + 0x238);
      }
      else {
        if (iVar1 != 0x197) {
          return 0;
        }
        cVar4 = '\x02';
        lVar6 = *(long *)(param_1 + 0x508);
        lVar5 = *(long *)(lVar6 + 0x238);
      }
    }
    if (lVar5 != 0) {
      if (*(ulong *)(lVar6 + 0x230) != 0) {
        uVar7 = 0;
        do {
          if (*(char *)(lVar5 + uVar7) == cVar4) {
            return 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulong *)(lVar6 + 0x230));
      }
      return 0;
    }
  }
  return 1;
}


