/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605180; name: FUN_00605180
 */


ulong FUN_00605180(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  do {
    while( true ) {
      auVar4 = FUN_003cebb0(*(undefined8 *)(param_1 + 0x10),param_4,param_5,0);
      plVar3 = auVar4._8_8_;
      iVar1 = auVar4._0_4_;
      if (iVar1 != 2) break;
      *(bool *)param_3 = auVar4._0_8_ >> 0x20 != 0;
      *param_2 = plVar3;
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    if (iVar1 == 0) {
      return auVar4._0_8_;
    }
  } while (iVar1 != 1);
  return 2;
}


