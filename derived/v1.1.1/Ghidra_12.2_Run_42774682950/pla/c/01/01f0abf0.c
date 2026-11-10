/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0abf0; name: FUN_01f0abf0
 */


void FUN_01f0abf0(double param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (*(char *)(param_2 + 0x68) != '\0') {
    if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f0bbe0();
    }
    lVar3 = *(long *)(param_2 + (long)(int)param_3 * 8 + 0x70);
    if (param_1 == 0.0) {
      lVar2 = *(long *)(*(long *)(param_4 + 8) + 0x278) - *(long *)(*(long *)(param_4 + 8) + 0x270);
      if (lVar2 != 0) {
        uVar4 = 1;
        do {
          FUN_02b18f84(lVar3,param_4,uVar4 - 1);
          uVar1 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar1 < (ulong)((lVar2 >> 4) * -0x79435e50d79435e5));
      }
    }
    else {
      FUN_02b1ad08(lVar3 + 0xa0,param_4);
      FUN_02b196a4(lVar3,param_4);
      *(double *)(lVar3 + 0xd8) = param_1;
      *(undefined8 *)(lVar3 + 0xd0) = 0;
    }
  }
  return;
}


