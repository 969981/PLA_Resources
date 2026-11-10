/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825564; name: FUN_00825564
 */


void FUN_00825564(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  
  plVar2 = param_1 + 8;
  *param_1 = (long)(PTR_DAT_04377ca8 + 0x10);
  FUN_0082481c(plVar2);
  plVar3 = param_1 + 5;
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x38))((long *)plVar5[2],0);
  }
  do {
    if ((long *)param_1[6] == plVar3) {
      nn::os::YieldThread();
      break;
    }
    bVar4 = true;
    plVar5 = (long *)param_1[6];
    do {
      plVar1 = plVar5 + 1;
      bVar4 = (bool)(bVar4 & *(int *)(plVar5[2] + 0xcc) - 3U < 2);
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != plVar3);
    nn::os::YieldThread();
  } while (!bVar4);
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x40))();
  }
  *(undefined8 *)PTR_DAT_043773f8 = 0;
  FUN_00824824(plVar2);
  nn::os::FreeTlsSlot((int)param_1[0x11]);
  FUN_008247c4(plVar2);
  return;
}


