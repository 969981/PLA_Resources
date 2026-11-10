/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69064; name: FUN_02e69064
 */


bool FUN_02e69064(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)*param_1;
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    plVar6 = (long *)0x0;
    plVar4 = plVar3;
    if ((char)plVar3[0xd] != '\0') goto LAB_02e690bc;
LAB_02e69094:
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar4 = plVar3;
    plVar3 = (long *)plVar3[2];
    while (plVar6 = plVar4, plVar3 != (long *)0x0) {
      while( true ) {
        plVar4 = plVar3;
        if ((char)plVar3[0xd] == '\0') goto LAB_02e69094;
LAB_02e690bc:
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar3 = (long *)plVar4[2];
        if ((uVar2 & 1) == 0) break;
        plVar1 = param_1;
        if ((long *)*param_1 != plVar4) {
          plVar1 = plVar6 + 2;
        }
        *plVar1 = (long)plVar3;
        (**(code **)*plVar4)(plVar4);
        (*DAT_0442d150)(7,plVar4);
        if (plVar3 == (long *)0x0) goto LAB_02e69110;
      }
    }
LAB_02e69110:
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  return lVar5 == 0;
}


