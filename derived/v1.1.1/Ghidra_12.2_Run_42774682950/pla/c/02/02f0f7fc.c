/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f7fc; name: FUN_02f0f7fc
 */


/* WARNING: Removing unreachable block (ram,0x02f0f9ac) */

void FUN_02f0f7fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (DAT_0440ad48 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)DAT_0440ad48[0x39];
  plVar6 = DAT_0440ad48;
  if (plVar4 != (long *)0x0) goto LAB_02f0f8b4;
LAB_02f0f8f8:
  DAT_0440ad40 = 0;
  DAT_0440ad48 = (long *)0x0;
  do {
    DAT_0440ad38 = DAT_0440ad38 + -1;
    (**(code **)*plVar6)(plVar6,0,1);
    puVar5 = DAT_0440a470;
    if (DAT_0440a470 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*DAT_0440a470;
      if ((long *)DAT_0440a470[1] == plVar6) {
        if (DAT_0440a478 == DAT_0440a470) {
          DAT_0440a478 = (undefined8 *)0x0;
        }
        if ((DAT_0440a470 < DAT_0440a488) ||
           (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= DAT_0440a470)) {
          DAT_0440a470 = puVar2;
          (*DAT_0442d150)(5);
        }
        else {
          puVar3 = puVar2;
          *DAT_0440a470 = DAT_0440a480;
          DAT_0440a470 = puVar3;
          DAT_0440a480 = puVar5;
        }
        DAT_0440a494 = DAT_0440a494 + -1;
        puVar5 = (undefined8 *)0x0;
      }
      while (puVar3 = puVar5, puVar5 = puVar2, puVar2 != (undefined8 *)0x0) {
        while (puVar2 = (undefined8 *)*puVar5, (long *)puVar5[1] == plVar6) {
          puVar1 = &DAT_0440a470;
          if (DAT_0440a470 != puVar5) {
            puVar1 = puVar3;
          }
          *puVar1 = puVar2;
          if (DAT_0440a478 == puVar5) {
            DAT_0440a478 = puVar3;
          }
          if ((puVar5 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar5)) {
            (*DAT_0442d150)(5);
          }
          else {
            *puVar5 = DAT_0440a480;
            DAT_0440a480 = puVar5;
          }
          DAT_0440a494 = DAT_0440a494 + -1;
          puVar5 = puVar2;
          if (puVar2 == (undefined8 *)0x0) goto LAB_02f0f870;
        }
      }
    }
LAB_02f0f870:
    (**(code **)(*plVar6 + 0x20))(plVar6,0);
    (**(code **)(*plVar6 + 8))(plVar6);
    (*DAT_0442d150)(0,plVar6);
    if (DAT_0440ad48 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)DAT_0440ad48[0x39];
    plVar6 = DAT_0440ad48;
    if (plVar4 == (long *)0x0) goto LAB_02f0f8f8;
LAB_02f0f8b4:
    plVar6 = DAT_0440ad48;
    DAT_0440ad48 = plVar4;
  } while( true );
}


