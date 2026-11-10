/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001754a0; name: FUN_001754a0
 */


void FUN_001754a0(long param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  iVar12 = 2000;
  plVar10 = param_4;
  if (param_5 != 0) goto LAB_001754e4;
  do {
    plVar7 = (long *)0x0;
    plVar5 = (long *)FUN_00173900(param_1,param_2,0);
    uVar1 = *(uint *)(plVar5 + 1);
    plVar4 = param_2;
    if (uVar1 == 0) {
      pcVar9 = "index";
      auVar13 = FUN_00159980(param_1,param_2,"index");
      plVar4 = auVar13._8_8_;
      lVar3 = auVar13._0_8_;
      iVar12 = 2000;
      if (plVar7 != (long *)0x0) goto LAB_0017562c;
      do {
        plVar8 = (long *)FUN_00173900(lVar3,plVar4,1);
        uVar1 = *(uint *)(plVar8 + 1);
        plVar5 = plVar4;
        if (uVar1 == 0) {
          FUN_00159980(lVar3,plVar4,"index");
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x1757c4);
          (*pcVar2)();
        }
        while( true ) {
          plVar4 = plVar8;
          if ((uVar1 & 0xf) == 6) {
            FUN_00173a20(lVar3,plVar4,plVar5,pcVar9,plVar10,0);
            return;
          }
          if (uVar1 == 0x45) {
            plVar7 = (long *)FUN_00172500(*plVar4,pcVar9);
            if ((int)plVar7[1] != 0) {
              if ((((*(byte *)(plVar10 + 1) >> 6 & 1) != 0) &&
                  ((*(byte *)(*plVar4 + 9) >> 2 & 1) != 0)) && ((*(byte *)(*plVar10 + 9) & 3) != 0))
              {
                FUN_0015cbe0(lVar3);
              }
              lVar3 = plVar10[1];
              *plVar7 = *plVar10;
              plVar7[1] = lVar3;
              return;
            }
          }
          else {
            plVar7 = (long *)0x0;
          }
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_001599d0(lVar3,"\'__newindex\' chain too long; possible loop");
          }
          if (plVar7 == (long *)0x0) break;
LAB_0017562c:
          lVar11 = *plVar4;
          lVar6 = *(long *)(lVar11 + 0x28);
          if (((lVar6 == 0) || ((*(byte *)(lVar6 + 10) >> 1 & 1) != 0)) ||
             (plVar8 = (long *)FUN_001738a0(lVar6,1,*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0xe8))
             , plVar8 == (long *)0x0)) {
            if (plVar7 == &DAT_039c5c28) {
              plVar7 = (long *)FUN_00171da0(lVar3,lVar11,pcVar9);
            }
            lVar6 = plVar10[1];
            *plVar7 = *plVar10;
            plVar7[1] = lVar6;
            *(undefined1 *)(lVar11 + 10) = 0;
            if ((((*(byte *)(plVar10 + 1) >> 6 & 1) == 0) || ((*(byte *)(lVar11 + 9) >> 2 & 1) == 0)
                ) || ((*(byte *)(*plVar10 + 9) & 3) == 0)) {
              return;
            }
            FUN_0015cbe0(lVar3,lVar11);
            return;
          }
          uVar1 = *(uint *)(plVar8 + 1);
          plVar5 = plVar4;
        }
      } while( true );
    }
    while( true ) {
      param_2 = plVar5;
      if ((uVar1 & 0xf) == 6) {
        FUN_00173a20(param_1,param_2,plVar4,param_3,param_4,1);
        return;
      }
      if (uVar1 == 0x45) {
        plVar4 = (long *)FUN_00172500(*param_2,param_3);
        if ((int)plVar4[1] != 0) {
          lVar3 = plVar4[1];
          *param_4 = *plVar4;
          param_4[1] = lVar3;
          return;
        }
      }
      else {
        plVar4 = (long *)0x0;
      }
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"\'__index\' chain too long; possible loop");
      }
      if (plVar4 == (long *)0x0) break;
LAB_001754e4:
      lVar3 = *(long *)(*param_2 + 0x28);
      if (((lVar3 == 0) || ((*(byte *)(lVar3 + 10) & 1) != 0)) ||
         (plVar5 = (long *)FUN_001738a0(lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0)),
         plVar5 == (long *)0x0)) {
        *(undefined4 *)(param_4 + 1) = 0;
        return;
      }
      uVar1 = *(uint *)(plVar5 + 1);
      plVar4 = param_2;
    }
  } while( true );
}


