/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03025798; name: FUN_03025798
 */


/* WARNING: Removing unreachable block (ram,0x030257c8) */

void FUN_03025798(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  
  uVar1 = (uint)*(byte *)(param_3 + 4);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (uVar1 != 0) {
    param_3 = param_3 + 0x40;
    fVar4 = (float)*(undefined8 *)(param_1 + 0xd0);
    if (uVar1 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      pfVar3 = (float *)(param_2 + 4);
      do {
        *(float *)(param_3 + 0x1c) = -(fVar4 * pfVar3[-1]);
        lVar2 = lVar2 + 2;
        *(float *)(param_3 + 0x3c) = -(fVar4 * *pfVar3);
        param_3 = param_3 + 0x40;
        pfVar3 = pfVar3 + 2;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar2);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    *(float *)(param_3 + 0x1c) = -(fVar4 * *(float *)(param_2 + lVar2 * 4));
  }
  return;
}


