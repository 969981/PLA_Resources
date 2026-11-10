/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d21c0; name: FUN_029d21c0
 */


void FUN_029d21c0(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if (((char)param_3[1] != '\0') || (uVar2 = FUN_029d228c(param_1,*param_3), (uVar2 & 1) != 0)) {
    lVar3 = *param_3;
    if (*(int *)(lVar3 + 0x2b4) == 2) {
      bVar1 = FUN_029d2390(param_1,lVar3);
      *param_2 = bVar1 & 1;
    }
    else if (*(int *)(lVar3 + 0x2b4) == 1) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa5,
                   *(undefined1 *)(lVar3 + 0x7d));
      FUN_029d25b4(param_1,lVar3,1,1);
      FUN_029d25b4(param_1,lVar3,2,1);
      FUN_029d25b4(param_1,lVar3,5,1);
      return;
    }
  }
  return;
}


