/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301d840; name: FUN_0301d840
 */


void FUN_0301d840(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *local_410 [64];
  long *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 + -1);
  lVar2 = 0;
  local_210[0] = param_1;
LAB_0301d86c:
  lVar2 = (long)(int)lVar2;
LAB_0301d880:
  do {
    plVar5 = local_410[0];
    do {
      local_410[0] = plVar5;
      lVar6 = param_1[(long)local_410[0] - (long)param_1 >> 4];
      plVar3 = param_1;
      plVar5 = local_410[0];
      do {
        while( true ) {
          do {
            plVar4 = plVar3;
            plVar3 = plVar4 + 1;
          } while (*(ulong *)(*plVar4 + 8) < *(ulong *)(lVar6 + 8));
          plVar7 = plVar5 + 1;
          do {
            plVar5 = plVar7;
            plVar7 = plVar5 + -1;
            lVar1 = *plVar7;
          } while (*(ulong *)(lVar6 + 8) < *(ulong *)(lVar1 + 8));
          if (plVar4 <= plVar7) break;
          plVar3 = plVar4;
          plVar5 = plVar7;
LAB_0301d8a4:
          if (plVar5 < plVar3) goto LAB_0301d900;
        }
        plVar5 = plVar5 + -2;
        if (plVar4 == plVar7) goto LAB_0301d8a4;
        *plVar7 = *plVar4;
        *plVar4 = lVar1;
      } while (plVar3 <= plVar5);
LAB_0301d900:
      if (plVar5 <= param_1) {
        param_1 = plVar3;
        if (plVar3 < local_410[0]) goto LAB_0301d880;
        if ((int)lVar2 < 1) {
          return;
        }
        lVar2 = (long)(int)lVar2 + -1;
        param_1 = local_210[lVar2];
        local_410[0] = local_410[lVar2];
        goto LAB_0301d86c;
      }
    } while (local_410[0] <= plVar3);
    plVar4 = plVar5;
    plVar7 = param_1;
    if ((long)local_410[0] - (long)plVar3 <= (long)plVar5 - (long)param_1) {
      plVar4 = local_410[0];
      plVar7 = plVar3;
      local_410[0] = plVar5;
      plVar3 = param_1;
    }
    local_210[lVar2] = plVar3;
    local_410[lVar2] = local_410[0];
    param_1 = plVar7;
    local_410[0] = plVar4;
    lVar2 = lVar2 + 1;
  } while( true );
}


