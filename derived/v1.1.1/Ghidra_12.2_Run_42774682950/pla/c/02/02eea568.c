/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eea568; name: FUN_02eea568
 */


void FUN_02eea568(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = *(long *)(param_3 + 8);
  uVar4 = 1L << (param_4 & 0x3f);
  uVar1 = *(uint *)(lVar3 + 0x18);
  if ((*(ulong *)(lVar3 + 8) & uVar4) == 0) {
    if (uVar1 != 0) {
      lVar5 = (ulong)uVar1 << 4;
      plVar6 = (long *)(*(long *)(lVar3 + 0x10) + 8);
      do {
        if (((plVar6[-1] & uVar4) != 0) &&
           (uVar2 = (**(code **)*param_5)(param_5,*plVar6 + 0x10), (uVar2 & 1) == 0)) {
          (**(code **)(*(long *)*plVar6 + 0x10))
                    (param_1,param_2,(long *)*plVar6,param_4 & 0xffffffff);
        }
        lVar5 = lVar5 + -0x10;
        plVar6 = plVar6 + 2;
      } while (lVar5 != 0);
    }
  }
  else if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 4;
    plVar6 = (long *)(*(long *)(lVar3 + 0x10) + 8);
    do {
      uVar4 = (**(code **)*param_5)(param_5,*plVar6 + 0x10);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*(long *)*plVar6 + 0x10))(param_1,param_2,(long *)*plVar6,param_4 & 0xffffffff)
        ;
      }
      lVar5 = lVar5 + -0x10;
      plVar6 = plVar6 + 2;
    } while (lVar5 != 0);
  }
  return;
}


