/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eafd64; name: FUN_02eafd64
 */


void FUN_02eafd64(long param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x38))();
  if ((plVar2 != (long *)0x0) && (*(uint *)(plVar2 + 1) != 0)) {
    pbVar4 = (byte *)(*plVar2 + 2);
    lVar5 = (ulong)*(uint *)(plVar2 + 1) << 2;
    do {
      if ((uint)*(ushort *)(pbVar4 + -2) == (param_2 & 0xffff)) {
        bVar1 = *pbVar4;
        if (bVar1 == 3) {
          uVar3 = FUN_02eaffe8(*(long *)(param_1 + 0x10) + 0x18,param_1,param_2,param_3);
        }
        else {
          uVar3 = FUN_02eb0154();
        }
        if ((uVar3 & 1) == 0) {
          return;
        }
        *param_4 = (uint)bVar1;
        return;
      }
      pbVar4 = pbVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  return;
}


