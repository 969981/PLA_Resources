/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f2930; name: FUN_032f2930
 */


void FUN_032f2930(long param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = DAT_0444a260;
  do {
    if ((uVar1 & 1) != 0) {
      uVar3 = 0;
      do {
        if (uVar3 != 0x1f) {
          uVar4 = -1 << (ulong)(uVar3 & 0x1f);
          DataMemoryBarrier(2,2);
          Yield();
          if ((int)uVar4 < -1) {
            uVar4 = ~uVar4;
            do {
              uVar4 = uVar4 - 1;
              DataMemoryBarrier(2,2);
              Yield();
            } while (0 < (int)uVar4);
          }
        }
        if (uVar3 < 8) {
          uVar3 = uVar3 + 1;
        }
      } while ((uVar1 & 1) != 0);
    }
    DAT_0444a260 = uVar1;
    FUN_032f3d50(*(undefined8 *)(param_1 + 0x18),param_2);
    DataMemoryBarrier(2,1);
    bVar2 = uVar1 != DAT_0444a260;
    uVar1 = DAT_0444a260;
  } while (bVar2);
  return;
}


