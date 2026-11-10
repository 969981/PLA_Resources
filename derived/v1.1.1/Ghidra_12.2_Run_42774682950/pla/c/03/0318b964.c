/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318b964; name: FUN_0318b964
 */


void FUN_0318b964(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + lVar4);
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        if ((char)plVar1[2] != '\x01') {
          lVar2 = FUN_03165a00(plVar1);
        }
        FUN_0315e9c8(lVar2,*param_2 + lVar5);
      }
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + 0x18;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_2 + 0xc)) && (*param_2 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,*param_2,8,*(uint *)((long)param_2 + 0xc) & 0x3fffffff);
  }
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x80000000;
  return;
}


