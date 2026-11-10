/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e1300; name: FUN_031e1300
 */


void FUN_031e1300(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *param_2;
  do {
    lVar5 = *(long *)(param_1 + 0x20);
    if ((int)uVar1 < *(int *)(lVar5 + 0x30)) {
      lVar3 = *(long *)(lVar5 + 0x28);
      uVar4 = uVar1;
      if (*(int *)(lVar5 + 0x78) != 0) {
        uVar4 = *(uint *)(*(long *)(lVar5 + 0x70) + (long)(int)uVar1 * 4);
      }
      if (uVar4 != 0xffffffff) {
        plVar2 = (long *)(lVar5 + 0xc0);
        uVar1 = uVar4;
        goto LAB_031e1344;
      }
    }
    else {
      plVar2 = (long *)(lVar5 + 0xe0);
      uVar1 = uVar1 - *(int *)(lVar5 + 0x30);
LAB_031e1344:
      lVar3 = *plVar2;
    }
    if (-1 < *(char *)(lVar3 + (long)(int)uVar1 * 0x14 + 0x10)) {
      return;
    }
    uVar1 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x14 + 8) & 0x3fffff;
    *param_2 = uVar1;
  } while( true );
}


