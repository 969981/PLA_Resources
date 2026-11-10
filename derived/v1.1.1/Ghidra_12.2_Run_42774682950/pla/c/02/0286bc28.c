/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286bc28; name: FUN_0286bc28
 */


void FUN_0286bc28(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x50);
  *(undefined4 *)(lVar2 + 0x2dd4) = 0;
  *(undefined2 *)(lVar2 + 0x2dd8) = 0;
  *(undefined8 *)(lVar2 + 0x2ddc) = 0;
  iVar1 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    if (iVar1 == 5) {
      uVar3 = 1;
    }
    else {
      if (iVar1 != 6) {
        return;
      }
      uVar3 = 2;
    }
  }
  *(undefined4 *)(lVar2 + 0x2dd4) = uVar3;
  return;
}


