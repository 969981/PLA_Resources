/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d4028; name: FUN_032d4028
 */


void FUN_032d4028(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d8);
  lVar2 = param_1 + 0x498;
  lVar3 = 0x40;
  while( true ) {
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x30))
                (*(long **)(param_1 + 8),lVar2,iVar1,*(undefined4 *)(&DAT_03aae858 + lVar3));
      *(undefined4 *)(lVar2 + 0x40) = 0;
    }
    if (lVar3 == 0) break;
    iVar1 = *(int *)(lVar2 + -8);
    lVar2 = lVar2 + -0x48;
    lVar3 = lVar3 + -4;
  }
  return;
}


