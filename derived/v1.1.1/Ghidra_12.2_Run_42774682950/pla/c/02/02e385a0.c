/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e385a0; name: FUN_02e385a0
 */


void FUN_02e385a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(undefined2 *)((long)param_3 + 0x12);
  uVar2 = (*(uint *)(param_3 + 1) & 0xff) - (*(uint *)(param_3 + 1) >> 0xf & 1);
  if ((float)param_2 == (float)param_1) {
    if (uVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_02e386a0(param_1,*param_3 + lVar3 * (ulong)*(ushort *)(param_3 + 2),uVar1);
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar2 * 4 != lVar3);
    }
  }
  else if (uVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_02e38770(param_1,param_2,*param_3 + lVar3 * (ulong)*(ushort *)(param_3 + 2),uVar1);
      lVar3 = lVar3 + 4;
    } while ((ulong)uVar2 * 4 != lVar3);
  }
  return;
}


