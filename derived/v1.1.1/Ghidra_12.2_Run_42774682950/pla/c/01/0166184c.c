/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166184c; name: FUN_0166184c
 */


/* WARNING: Removing unreachable block (ram,0x016618c0) */

void FUN_0166184c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_3 < 10) {
    local_28 = param_2;
    FUN_00befc74(&local_30,param_4);
    lVar1 = FUN_016618dc(param_1 + 0xf0,&local_28);
    lVar3 = (ulong)param_3 * 8;
    plVar2 = *(long **)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(lVar1 + (ulong)param_3 * 8) = local_30;
  }
  return;
}


