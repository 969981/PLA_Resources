/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf820; name: FUN_02bcf820
 */


bool FUN_02bcf820(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (DAT_04286908 == 1) {
    return true;
  }
  plVar2 = *(long **)(param_1 + 0x88);
  plVar1 = (long *)(param_1 + 0x80);
  if (plVar2 != plVar1) {
    uVar3 = 0;
    plVar7 = plVar2;
    do {
      uVar3 = uVar3 + 1;
      plVar6 = (long *)plVar7[2];
      if ((long *)plVar7[2] == (long *)0x0) {
        do {
          plVar6 = plVar7;
          plVar4 = (long *)*plVar6;
          plVar7 = plVar4;
        } while (plVar6 == (long *)plVar4[2]);
        plVar7 = plVar6;
        if ((long *)plVar6[2] != plVar4) {
          plVar7 = plVar4;
        }
      }
      else {
        do {
          plVar7 = plVar6;
          plVar6 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
    } while (plVar7 != plVar1);
    do {
      uVar5 = uVar3 >> 1;
      plVar7 = plVar2;
      if (uVar5 != 0) {
        plVar6 = plVar2;
        uVar8 = uVar5;
        plVar4 = (long *)plVar2[2];
        if ((long *)plVar2[2] != (long *)0x0) goto LAB_02bcf8e0;
        do {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while (plVar7 == (long *)plVar6[2]);
          if ((long *)plVar7[2] != plVar6) {
            plVar7 = plVar6;
          }
          while( true ) {
            uVar8 = uVar8 - 1;
            if ((long)uVar8 < 1) goto LAB_02bcf914;
            plVar6 = plVar7;
            plVar4 = (long *)plVar7[2];
            if ((long *)plVar7[2] == (long *)0x0) break;
LAB_02bcf8e0:
            do {
              plVar7 = plVar4;
              plVar4 = (long *)plVar7[1];
            } while ((long *)plVar7[1] != (long *)0x0);
          }
        } while( true );
      }
LAB_02bcf914:
      if ((ulong)(plVar7[5] + plVar7[4]) <= param_2) {
        plVar6 = (long *)plVar7[2];
        if ((long *)plVar7[2] == (long *)0x0) {
          do {
            plVar2 = plVar7;
            plVar7 = (long *)*plVar2;
          } while (plVar2 == (long *)plVar7[2]);
          if ((long *)plVar2[2] != plVar7) {
            plVar2 = plVar7;
          }
        }
        else {
          do {
            plVar2 = plVar6;
            plVar6 = (long *)plVar2[1];
          } while ((long *)plVar2[1] != (long *)0x0);
        }
        uVar5 = uVar3 + ~uVar5;
      }
      uVar3 = uVar5;
    } while (uVar3 != 0);
  }
  if ((plVar2 == plVar1) || (param_2 < (ulong)plVar2[4])) {
    return false;
  }
  return param_2 + param_3 <= (ulong)(plVar2[5] + plVar2[4]);
}


