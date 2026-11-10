/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b928; name: FUN_0020b928
 */


undefined8 FUN_0020b928(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00205cf4();
  if (lVar2 == 0) {
    uVar3 = 0xfffffe0b;
    if (((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) {
      lVar2 = *(long *)(param_1 + 0x138);
      if ((lVar2 != 0) &&
         ((iVar1 = *(int *)(lVar2 + 8), iVar1 <= (int)param_2 &&
          (param_2 < *(uint *)(param_1 + 0x930))))) {
        while (iVar1 < (int)param_2) {
          lVar2 = *(long *)(lVar2 + 0x88);
          if (lVar2 == 0) {
            return 0xfffffe0b;
          }
          iVar1 = *(int *)(lVar2 + 8);
        }
        if (iVar1 <= (int)param_2) {
          *(undefined8 *)(lVar2 + 0x70) = param_3;
          return 0;
        }
      }
      uVar3 = 0xfffffe0b;
    }
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(lVar2 + 0xa0) = param_3;
  }
  return uVar3;
}


