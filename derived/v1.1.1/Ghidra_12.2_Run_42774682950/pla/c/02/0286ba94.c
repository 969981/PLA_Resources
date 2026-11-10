/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286ba94; name: FUN_0286ba94
 */


void FUN_0286ba94(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = *param_2;
  lVar1 = *(long *)(param_1 + 0x50);
  if (uVar2 < 2) {
    uVar3 = 0;
  }
  else {
    if (uVar2 != 4) {
      return;
    }
    uVar2 = 1;
    uVar3 = 1;
  }
  *(uint *)(lVar1 + 0x2de4) = uVar2;
  *(undefined1 *)(lVar1 + 0x2de8) = uVar3;
  return;
}


