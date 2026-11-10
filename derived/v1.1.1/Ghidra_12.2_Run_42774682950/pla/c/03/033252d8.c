/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033252d8; name: FUN_033252d8
 */


void FUN_033252d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  iVar3 = (int)plVar5[1];
  uVar4 = *(uint *)((long)plVar5 + 0xc);
  if ((int)(uVar4 & 0x3fffffff) <= iVar3) {
    lVar2 = *plVar5;
    if (0x3ffffffe < iVar3) {
      FUN_032bd0a8(iVar3 + 1);
      uVar4 = *(uint *)((long)plVar5 + 0xc);
    }
    uVar4 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    if ((int)uVar4 < iVar3 + 1) {
      uVar4 = iVar3 + 1;
    }
    lVar2 = FUN_032bd1d4(uVar1,uVar4,1,lVar2);
    *plVar5 = lVar2;
    plVar5 = *(long **)(param_1 + 0x18);
    iVar3 = (int)plVar5[1];
  }
  *(undefined1 *)(*plVar5 + (long)iVar3) = 0;
  return;
}


