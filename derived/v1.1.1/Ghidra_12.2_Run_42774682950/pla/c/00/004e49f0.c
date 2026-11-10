/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e49f0; name: FUN_004e49f0
 */


undefined8
FUN_004e49f0(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x488) + 0x1f0);
  if (lVar2 != -0x1a) {
    uVar5 = 0;
    do {
      uVar1 = FUN_004e4880(param_1,uVar5 & 0xffffffff,param_2,param_3,param_4,param_5);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (lVar2 + 0x1aU != uVar5);
  }
  if (param_6 == 0) {
LAB_004e4ab0:
    uVar1 = 1;
  }
  else {
    lVar2 = 0x10;
    ppuVar4 = &PTR_FUN_04183108;
    pcVar3 = (code *)PTR_FUN_04183108;
    if (PTR_FUN_04183108 != (undefined *)0x0) goto LAB_004e4a8c;
    do {
      do {
        lVar2 = lVar2 + 0x28;
        ppuVar4 = ppuVar4 + 7;
        if (lVar2 == 0x420) goto LAB_004e4ab0;
        pcVar3 = (code *)*ppuVar4;
      } while (pcVar3 == (code *)0x0);
LAB_004e4a8c:
    } while (((*(uint *)((long)ppuVar4 + -0x2c) & param_2) == 0) ||
            (uVar1 = (*pcVar3)(param_1,param_2,*(undefined4 *)(param_3 + lVar2)), (int)uVar1 != 0));
  }
  return uVar1;
}


