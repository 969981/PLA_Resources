/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01157520; name: FUN_01157520
 */


ulong FUN_01157520(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_011573b0();
  lVar3 = *param_5;
  lVar4 = *param_4;
  if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
      (ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58))) {
    *param_4 = lVar3;
    *param_5 = lVar4;
    lVar3 = *param_4;
    lVar4 = *param_3;
    iVar1 = (int)uVar2;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
        (ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58))) {
      *param_3 = lVar3;
      *param_4 = lVar4;
      lVar3 = *param_3;
      lVar4 = *param_2;
      if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
          (ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58))) {
        *param_2 = lVar3;
        *param_3 = lVar4;
        lVar4 = *param_2;
        lVar3 = *param_1;
        if ((ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58)) <
            (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
          uVar2 = (ulong)(iVar1 + 4);
          *param_1 = lVar4;
          *param_2 = lVar3;
        }
        else {
          uVar2 = (ulong)(iVar1 + 3);
        }
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}


