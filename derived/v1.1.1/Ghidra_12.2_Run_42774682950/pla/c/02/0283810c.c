/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283810c; name: FUN_0283810c
 */


void FUN_0283810c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_40;
  long local_38;
  char *local_28;
  
  lVar3 = param_1[0x19];
  lVar4 = *(long *)(lVar3 + 0x88);
  if (*(code **)(lVar3 + 0x560) == (code *)0x0) {
    plVar2 = *(long **)(lVar4 + 0x18);
    lVar3 = (**(code **)(*plVar2 + 0x78))(plVar2,"L_cursor_00",1);
  }
  else {
    local_28 = "L_cursor_00";
    local_38 = lVar3;
    (**(code **)(lVar3 + 0x560))(&local_40,lVar3 + 0x580,&local_28,&local_38);
    plVar1 = *(long **)(lVar4 + 0x18);
    plVar2 = (long *)PTR_PTR_04379d00;
    if (local_40 != (long *)0x0) {
      plVar2 = local_40 + 0xc;
    }
    lVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,*plVar2,1);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (lVar3 != 0) {
    if ((param_2 & 1) == 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    }
    else if ((*(byte *)(lVar3 + 0x58) & 1) == 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
                    /* WARNING: Could not recover jumptable at 0x02838220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))(param_1);
      return;
    }
  }
  return;
}


