/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001755e0; name: FUN_001755e0
 */


void FUN_001755e0(long param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = 2000;
  if (param_5 != (long *)0x0) goto LAB_0017562c;
  do {
    plVar5 = (long *)FUN_00173900(param_1,param_2,1);
    uVar1 = *(uint *)(plVar5 + 1);
    plVar3 = param_2;
    if (uVar1 == 0) {
      FUN_00159980(param_1,param_2,"index");
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0,0x1757c4);
      (*pcVar2)();
    }
    while( true ) {
      param_2 = plVar5;
      if ((uVar1 & 0xf) == 6) {
        FUN_00173a20(param_1,param_2,plVar3,param_3,param_4,0);
        return;
      }
      if (uVar1 == 0x45) {
        param_5 = (long *)FUN_00172500(*param_2,param_3);
        if ((int)param_5[1] != 0) {
          if ((((*(byte *)(param_4 + 1) >> 6 & 1) != 0) && ((*(byte *)(*param_2 + 9) >> 2 & 1) != 0)
              ) && ((*(byte *)(*param_4 + 9) & 3) != 0)) {
            FUN_0015cbe0(param_1);
          }
          lVar4 = param_4[1];
          *param_5 = *param_4;
          param_5[1] = lVar4;
          return;
        }
      }
      else {
        param_5 = (long *)0x0;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"\'__newindex\' chain too long; possible loop");
      }
      if (param_5 == (long *)0x0) break;
LAB_0017562c:
      lVar6 = *param_2;
      lVar4 = *(long *)(lVar6 + 0x28);
      if (((lVar4 == 0) || ((*(byte *)(lVar4 + 10) >> 1 & 1) != 0)) ||
         (plVar5 = (long *)FUN_001738a0(lVar4,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe8)),
         plVar5 == (long *)0x0)) {
        if (param_5 == &DAT_039c5c28) {
          param_5 = (long *)FUN_00171da0(param_1,lVar6,param_3);
        }
        lVar4 = param_4[1];
        *param_5 = *param_4;
        param_5[1] = lVar4;
        *(undefined1 *)(lVar6 + 10) = 0;
        if ((((*(byte *)(param_4 + 1) >> 6 & 1) == 0) || ((*(byte *)(lVar6 + 9) >> 2 & 1) == 0)) ||
           ((*(byte *)(*param_4 + 9) & 3) == 0)) {
          return;
        }
        FUN_0015cbe0(param_1,lVar6);
        return;
      }
      uVar1 = *(uint *)(plVar5 + 1);
      plVar3 = param_2;
    }
  } while( true );
}


