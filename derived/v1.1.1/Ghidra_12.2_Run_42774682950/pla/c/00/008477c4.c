/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008477c4; name: FUN_008477c4
 */


void FUN_008477c4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar5 = param_2 & 0xffffffff;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(uVar5,uVar1);
  if (((int)param_2 != 0) && (lVar2 != 0)) {
    param_2 = param_2 & 3;
    if (uVar5 - 1 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar2 + lVar3) = 0;
        lVar3 = lVar3 + 4;
      } while (uVar5 - param_2 != lVar3);
    }
    if (param_2 != 0) {
      puVar4 = (undefined1 *)(lVar2 + lVar3);
      do {
        param_2 = param_2 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (param_2 != 0);
    }
  }
  return;
}


