/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e2d4; name: FUN_0083e2d4
 */


void FUN_0083e2d4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = FUN_008473ec();
  if (lVar1 != 0) {
    lVar1 = FUN_008473ec(param_1);
    lVar2 = FUN_00847388(param_1);
    if (lVar1 == lVar2) {
      lVar1 = param_1 + 0xa8;
      if (*(long *)(param_1 + 0xb0) != lVar1) {
        uVar5 = *(undefined8 *)PTR_DAT_04377ce8;
        lVar2 = *(long *)(param_1 + 0xb0);
        do {
          lVar7 = *(long *)(lVar2 + 8);
          uVar3 = FUN_008310b0(uVar5,*(undefined8 *)(lVar2 + 0x10));
          if ((uVar3 & 1) == 0) {
            uVar6 = *(undefined8 *)(lVar2 + 0x10);
            FUN_007e8fec(lVar1,lVar2);
            FUN_007e8fc4(param_1 + 0xc0,param_1 + 0xc0,lVar2 + *(int *)(param_1 + 0xd4));
            plVar4 = *(long **)(param_1 + 0xf0);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
            }
          }
          lVar2 = lVar7;
        } while (lVar7 != lVar1);
      }
    }
  }
  return;
}


