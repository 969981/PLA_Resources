/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e263b0; name: FUN_02e263b0
 */


void FUN_02e263b0(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_3 + 1) & 0xff;
  uVar2 = *(undefined2 *)((long)param_3 + 0x12);
  if ((param_4 & 1) == 0) {
    uVar1 = uVar1 - (*(uint *)(param_3 + 1) >> 0xf & 1);
  }
  if ((float)param_2 == (float)param_1) {
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        FUN_02e27770(param_1,*param_3 + lVar3 * (ulong)*(ushort *)(param_3 + 2),uVar2);
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar1 * 4 != lVar3);
    }
  }
  else if (uVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_02e27840(param_1,param_2,*param_3 + lVar3 * (ulong)*(ushort *)(param_3 + 2),uVar2);
      lVar3 = lVar3 + 4;
    } while ((ulong)uVar1 * 4 != lVar3);
  }
  return;
}


