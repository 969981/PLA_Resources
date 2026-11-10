/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f3530; name: FUN_032f3530
 */


ulong FUN_032f3530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  int local_34;
  
  if (param_5 != (ulong *)0x0) {
    local_50 = param_1;
    local_48 = param_2;
    do {
      while( true ) {
        uVar3 = FUN_032e239c(param_5[1]);
        iVar2 = FUN_032c4150(&local_50,uVar3);
        if (iVar2 == 0) break;
        if (iVar2 < 1) {
          param_5 = (ulong *)param_5[3];
        }
        else {
          param_5 = (ulong *)param_5[2];
        }
        if (param_5 == (ulong *)0x0) {
          return 0;
        }
      }
      *param_5 = *param_5 | 1;
      iVar2 = FUN_032f3610(param_5[1],param_3,param_4,&local_34,param_6,param_7);
      if (iVar2 < 0) {
        return 0;
      }
      if (local_34 == 0) {
        return param_5[1];
      }
      puVar1 = param_5 + 2;
      if (-1 < local_34) {
        puVar1 = param_5 + 3;
      }
      param_5 = (ulong *)*puVar1;
    } while (param_5 != (ulong *)0x0);
  }
  return 0;
}


