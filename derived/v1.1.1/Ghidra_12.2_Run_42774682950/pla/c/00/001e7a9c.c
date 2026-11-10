/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7a9c; name: FUN_001e7a9c
 */


void FUN_001e7a9c(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    auVar6 = FUN_001f8fb4();
    lVar2 = auVar6._0_8_;
    lVar3 = FUN_001f87a0(0,0,*(undefined8 *)(param_1 + 0xb0));
    *(long *)(param_1 + 0xb0) = lVar3;
    lVar4 = *(long *)(lVar3 + 0x20);
    uVar5 = 0;
    if (lVar2 <= lVar4) {
      if ((lVar2 < lVar4) || (auVar6._8_4_ < *(int *)(lVar3 + 0x28))) {
        uVar1 = FUN_001f8fe0(lVar4,*(undefined8 *)(lVar3 + 0x28),lVar2,auVar6._8_8_);
        if ((int)uVar1 < 2) {
          uVar1 = 1;
        }
        uVar5 = (ulong)uVar1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_2 = uVar5;
  return;
}


