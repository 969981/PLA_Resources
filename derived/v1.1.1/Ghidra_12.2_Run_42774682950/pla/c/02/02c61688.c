/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c61688; name: FUN_02c61688
 */


void FUN_02c61688(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  if (iVar1 == 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (3 < (uVar2 & 0xff)) goto LAB_02c616dc;
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),uVar2);
    } while (iVar1 == 0);
    FUN_02c614dc(param_1,0,uVar2);
  }
LAB_02c616dc:
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
  if (iVar1 == 0) {
    uVar2 = 1;
    do {
      uVar2 = uVar2 + 1;
      if (3 < (uVar2 & 0xff)) goto LAB_02c61720;
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),uVar2);
    } while (iVar1 == 0);
    FUN_02c614dc(param_1,1,uVar2);
  }
LAB_02c61720:
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
  if (iVar1 == 0) {
    uVar2 = 2;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (3 < (uVar2 & 0xff)) break;
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),uVar2);
      if (iVar1 != 0) {
        FUN_02c614dc(param_1,2,uVar2);
        return;
      }
    }
  }
  return;
}


