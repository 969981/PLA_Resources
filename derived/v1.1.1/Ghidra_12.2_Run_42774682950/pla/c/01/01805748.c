/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01805748; name: FUN_01805748
 */


void FUN_01805748(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1[0xb] != 0) {
    FUN_017fcee4(param_1,param_1[6]);
    uVar3 = param_1[1];
    param_1[6] = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar4 = lVar2 * 8;
          lVar2 = lVar2 + 4;
          *(undefined8 *)(*param_1 + lVar4) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while (uVar3 - uVar1 != lVar2);
      }
      if (uVar1 != 0) {
        lVar2 = lVar2 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar2) = 0;
          uVar1 = uVar1 - 1;
          lVar2 = lVar2 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


