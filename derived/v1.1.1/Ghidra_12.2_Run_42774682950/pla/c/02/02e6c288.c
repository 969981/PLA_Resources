/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c288; name: FUN_02e6c288
 */


long FUN_02e6c288(long *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  bVar3 = *(byte *)(param_1 + 0x18);
  if ((uint)bVar3 < *(uint *)(param_1 + 0x15)) {
    plVar7 = (long *)param_1[0x17];
    uVar4 = (uint)bVar3;
    if (uVar4 != 0) {
      do {
        plVar7 = (long *)*plVar7;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) == param_1[0xf]) {
      *(byte *)(param_1 + 0x18) = bVar3 + 1;
      param_1[0xf] = *(long *)plVar7[1] + (ulong)*(uint *)((long *)plVar7[1] + 3);
      *param_2 = *(int *)(plVar7[1] + 0x18) - (int)plVar7[2];
      lVar6 = *(long *)plVar7[1];
      uVar4 = *(uint *)(param_1 + 0x12);
      uVar2 = *(uint *)((long *)plVar7[1] + 3);
      uVar1 = lVar6 + (ulong)*(uint *)(plVar7 + 2);
      if ((uVar1 < uVar4) && ((ulong)uVar4 < lVar6 + (ulong)uVar2)) {
        iVar5 = uVar4 - (int)uVar1;
      }
      else {
        iVar5 = uVar2 - *(uint *)(plVar7 + 2);
      }
      *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar5;
      FUN_02e6ba60();
      lVar6 = *(long *)(plVar7[1] + 8) + (ulong)*(uint *)(plVar7 + 2);
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1,0);
      FUN_02e6b230(param_1);
      lVar6 = 0;
      *param_2 = 0;
    }
  }
  else {
    lVar6 = 0;
    *param_2 = 0;
  }
  return lVar6;
}


